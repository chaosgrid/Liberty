#include "FreeLancer-PCH.h"


#define public_52e3cf _public_52e3cf
#define public_52e3dc _public_52e3dc

PROC_DECLARE(0x52e3c0, internal_52e3c0, public_52e3c0);
extern "C" NAKED register_t __cdecl internal_52e3c0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0x10]
        test ecx, ecx
        je public_52e3cf
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x10]
        public_52e3cf : nop
        mov ecx, dword ptr ds : [esi+0x14]
        test ecx, ecx
        pop esi
        je public_52e3dc
        mov edx, dword ptr ds : [ecx]
        jmp dword ptr ds : [edx+0x10]
        public_52e3dc : nop
        ret 
        UNREACHABLE_TRAP(0x52e3c0)
    }
}

#undef public_52e3cf
#undef public_52e3dc
