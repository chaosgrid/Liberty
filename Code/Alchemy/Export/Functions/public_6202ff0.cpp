#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6202ff0);

#define public_6203007 _public_6203007

PROC_DECLARE(0x6202ff0, internal_6202ff0, public_6202ff0);
extern "C" NAKED register_t __cdecl internal_6202ff0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        je public_6203007
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+4], 0
        public_6203007 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6202ff0)
    }
}

#undef public_6203007
