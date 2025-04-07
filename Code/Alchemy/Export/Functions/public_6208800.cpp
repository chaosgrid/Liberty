#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6208800);

#define public_6208817 _public_6208817

PROC_DECLARE(0x6208800, internal_6208800, public_6208800);
extern "C" NAKED register_t __cdecl internal_6208800()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        je public_6208817
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+4], 0
        public_6208817 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6208800)
    }
}

#undef public_6208817
