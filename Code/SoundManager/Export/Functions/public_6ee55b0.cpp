#include "SoundManager-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ee31d0);

#define public_6ee55e2 _public_6ee55e2

PROC_DECLARE(0x6ee55b0, internal_6ee55b0, public_6ee55b0);
extern "C" NAKED register_t __cdecl internal_6ee55b0()
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
        je public_6ee55e2
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ds : [esi]
        push edi
        push esi
        call dword ptr ds : [edx+0x14]
        mov edi, eax
        mov eax, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [eax+8]
        mov eax, edi
        pop edi
        pop esi
        ret 8
        public_6ee55e2 : nop
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x6ee55b0)
    }
}

#undef public_6ee55e2
