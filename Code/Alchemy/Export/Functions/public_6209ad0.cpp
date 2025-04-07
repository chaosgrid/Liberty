#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6209ad0);
CLANG_FORWARD_PROC_SYMBOL(public_624612c);

#define public_6209afa _public_6209afa

PROC_DECLARE(0x6209ad0, internal_6209ad0, public_6209ad0);
extern "C" NAKED register_t __cdecl internal_6209ad0()
{
    __asm
    {
        push esi
        push 0x10
        call public_624612c
        xor esi, esi
        add esp, 4
        cmp eax, esi
        je public_6209afa
        mov dword ptr ds : [eax+8], esi
        mov dword ptr ds : [eax+4], 0x3F800000
        mov dword ptr ds : [eax], offset public_624bca0
        mov dword ptr ds : [eax+0xC], 1
        mov esi, eax
        public_6209afa : nop
        mov ecx, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [esi]
        push ecx
        push esi
        call dword ptr ds : [eax+0x18]
        mov edx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [edx], esi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6209ad0)
    }
}

#undef public_6209afa
