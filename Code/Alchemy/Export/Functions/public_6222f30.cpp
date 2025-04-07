#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6222f30);

#define public_6222f65 _public_6222f65

PROC_DECLARE(0x6222f30, internal_6222f30, public_6222f30);
extern "C" NAKED register_t __cdecl internal_6222f30()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ds : [ecx]
        mov ecx, dword ptr ds : [ecx+4]
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        lea esi, ss:[esp+8]
        push 0
        push esi
        mov esi, dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0x10], 0xFFFFFFFF
        mov edx, dword ptr ds : [eax]
        push esi
        push edi
        push ecx
        push eax
        call dword ptr ds : [edx+0x14]
        test eax, eax
        jne public_6222f65
        pop edi
        or eax, 0xFFFFFFFF
        pop esi
        pop ecx
        ret 8
        public_6222f65 : nop
        mov eax, dword ptr ss : [esp+8]
        pop edi
        sub eax, esi
        pop esi
        neg eax
        sbb eax, eax
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6222f30)
    }
}

#undef public_6222f65
