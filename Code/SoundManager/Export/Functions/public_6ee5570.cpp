#include "SoundManager-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ee31d0);

#define public_6ee55a7 _public_6ee55a7

PROC_DECLARE(0x6ee5570, internal_6ee5570, public_6ee5570);
extern "C" NAKED register_t __cdecl internal_6ee5570()
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
        je public_6ee55a7
        mov eax, dword ptr ss : [esp+0xC]
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ds : [esi]
        push edi
        push eax
        push esi
        call dword ptr ds : [edx+0x10]
        mov ecx, dword ptr ds : [esi]
        push esi
        mov edi, eax
        call dword ptr ds : [ecx+8]
        mov eax, edi
        pop edi
        pop esi
        ret 0xC
        public_6ee55a7 : nop
        xor eax, eax
        ret 0xC
        UNREACHABLE_TRAP(0x6ee5570)
    }
}

#undef public_6ee55a7
