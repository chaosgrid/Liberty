#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_416440);
CLANG_FORWARD_PROC_SYMBOL(public_416f90);

#define public_41646f _public_41646f
#define public_416477 _public_416477
#define public_416483 _public_416483

PROC_DECLARE(0x416440, internal_416440, public_416440);
extern "C" NAKED register_t __cdecl internal_416440()
{
    __asm
    {
        sub esp, 8
        lea eax, ss:[esp+0xC]
        push eax
        mov ecx, offset public_429da4
        call public_416f90
        mov ecx, dword ptr ds : [public_429da8]
        cmp eax, ecx
        mov dword ptr ss : [esp], eax
        je public_41646f
        mov edx, dword ptr ss : [esp+0xC]
        cmp edx, dword ptr ds : [eax+0xC]
        jl public_41646f
        lea eax, ss:[esp]
        jmp public_416477
        public_41646f : nop
        mov dword ptr ss : [esp+4], ecx
        lea eax, ss:[esp+4]
        public_416477 : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        jne public_416483
        xor eax, eax
        add esp, 8
        ret 
        public_416483 : nop
        mov eax, dword ptr ds : [eax+0x10]
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x416440)
    }
}

#undef public_41646f
#undef public_416477
#undef public_416483
