#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_661f8b0);

#define public_6621550 _public_6621550

PROC_DECLARE(0x6621530, internal_6621530, public_6621530);
extern "C" NAKED register_t __cdecl internal_6621530()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        push eax
        mov ecx, edi
        call public_661f8b0
        mov esi, eax
        cmp esi, 0xFFFFFFFF
        je public_6621550
        mov ecx, dword ptr ds : [edi]
        push esi
        push edi
        call dword ptr ds : [ecx+0x38]
        public_6621550 : nop
        mov eax, esi
        pop edi
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x6621530)
    }
}

#undef public_6621550
