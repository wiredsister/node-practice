#include <node.h>

namespace demoForEdgar {
        using v8::FunctionCallbackInfo;
        using v8::Isolate;
        using v8::Local;
        using v8::Object;
        using v8::String;
        using v8::Value;

        void GivesFourtyTwo(const FunctionCallbackInfo<Value>& args) {
                Isolate* isolate = args.GetIsolate();
                args.GetReturnValue().Set(String::NewFromUtf8(isolate, "The meaning of life is 42 of course!"));
        }

        void init(Local<Object> exports) {
                NODE_SET_METHOD(exports, "WhatIsTheMeaningOfLife", GivesFourtyTwo);
        }

        NODE_MODULE(fourtytwo, init)
}
