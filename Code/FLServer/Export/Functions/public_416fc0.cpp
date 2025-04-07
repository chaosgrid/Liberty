#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_416fc0);

#define public_416fd0 _public_416fd0
#define public_416fdb _public_416fdb

PROC_DECLARE(0x416fc0, internal_416fc0, public_416fc0);
extern "C" NAKED register_t __cdecl internal_416fc0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax]
        mov dl, byte ptr ds : [ecx+0x15]
        test dl, dl
        jne public_416fdb
        lea ecx, ds:[ecx]
        public_416fd0 : nop
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov dl, byte ptr ds : [ecx+0x15]
        test dl, dl
        je public_416fd0
        public_416fdb : nop
        ret 
        UNREACHABLE_TRAP(0x416fc0)
    }
}

#undef public_416fd0
#undef public_416fdb
