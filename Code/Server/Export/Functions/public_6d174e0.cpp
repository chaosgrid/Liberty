#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d4f100);

#define public_6d17506 _public_6d17506
#define public_6d17528 _public_6d17528

PROC_DECLARE(0x6d174e0, internal_6d174e0, public_6d174e0);
extern "C" NAKED register_t __cdecl internal_6d174e0()
{
    __asm
    {
        call dword ptr ds : [public_6d641c0]
        mov ecx, dword ptr ds : [public_6d90260]
        test al, al
        mov eax, dword ptr ss : [esp+0xC]
        jne public_6d17506
        mov edx, eax
        imul edx, 0x418
        push esi
        mov esi, dword ptr ds : [edx+ecx-0x24]
        test esi, esi
        pop esi
        je public_6d17528
        public_6d17506 : nop
        mov edx, dword ptr ss : [esp+4]
        imul eax, 0x418
        mov dword ptr ss : [esp+0xC], 0
        mov dword ptr ss : [esp+4], edx
        lea ecx, ds:[eax+ecx-0x418]
        jmp public_6d4f100
        public_6d17528 : nop
        ret 0xC
        UNREACHABLE_TRAP(0x6d174e0)
    }
}

#undef public_6d17506
#undef public_6d17528
