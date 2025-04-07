#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6be38f0);
CLANG_FORWARD_PROC_SYMBOL(public_6bebe40);
CLANG_FORWARD_PROC_SYMBOL(public_6c09aaa);

#define public_6be390c _public_6be390c

PROC_DECLARE(0x6be38f0, internal_6be38f0, public_6be38f0);
extern "C" NAKED register_t __cdecl internal_6be38f0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x220]
        test eax, eax
        mov dword ptr ds : [esi], offset public_6c0bda4
        je public_6be390c
        push eax
        call public_6c09aaa
        add esp, 4
        public_6be390c : nop
        mov ecx, esi
        pop esi
        jmp public_6bebe40
        UNREACHABLE_TRAP(0x6be38f0)
    }
}

#undef public_6be390c
