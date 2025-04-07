#include "SoundManager-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ee31d0);

#define public_6ee56d2 _public_6ee56d2

PROC_DECLARE(0x6ee56a0, internal_6ee56a0, public_6ee56a0);
extern "C" NAKED register_t __cdecl internal_6ee56a0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+8]
        lea eax, ss:[esp+8]
        push eax
        push ecx
        mov ecx, dword ptr ss : [esp+0xC]
        call public_6ee31d0
        test al, al
        je public_6ee56d2
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [edx+0x2C]
        mov bl, al
        mov eax, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [eax+8]
        pop esi
        mov al, bl
        pop ebx
        ret 8
        public_6ee56d2 : nop
        xor al, al
        ret 8
        UNREACHABLE_TRAP(0x6ee56a0)
    }
}

#undef public_6ee56d2
