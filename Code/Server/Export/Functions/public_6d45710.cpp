#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d43650);

#define public_6d4575a _public_6d4575a

PROC_DECLARE(0x6d45710, internal_6d45710, public_6d45710);
extern "C" NAKED register_t __cdecl internal_6d45710()
{
    __asm
    {
        mov ecx, dword ptr ds : [public_6d90260]
        sub esp, 8
        push esi
        mov esi, dword ptr ss : [esp+0x14]
        mov eax, esi
        imul eax, 0x418
        mov eax, dword ptr ds : [eax+ecx-0x2C]
        test eax, 0x3FFFFFFF
        je public_6d4575a
        push eax
        call dword ptr ds : [public_6d643dc]
        add esp, 4
        test eax, eax
        je public_6d4575a
        mov edx, dword ptr ss : [esp+0x10]
        lea eax, ss:[esp+4]
        push eax
        push 0x1B
        mov dword ptr ss : [esp+0x10], esi
        mov dword ptr ss : [esp+0xC], edx
        call public_6d43650
        add esp, 8
        public_6d4575a : nop
        pop esi
        add esp, 8
        ret 8
        UNREACHABLE_TRAP(0x6d45710)
    }
}

#undef public_6d4575a
