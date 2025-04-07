#include "Common-PCH.h"


#define public_62aee40 _public_62aee40

PROC_DECLARE(0x62aee20, internal_62aee20, public_62aee20);
extern "C" NAKED register_t __cdecl internal_62aee20()
{
    __asm
    {
        mov ecx, dword ptr ds : [public_63fc430]
        test ecx, ecx
        je public_62aee40
        mov eax, dword ptr ds : [public_63fc328]
        cmp eax, dword ptr ds : [ecx+4]
        je public_62aee40
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [public_63fc328], ecx
        mov eax, dword ptr ds : [eax+8]
        ret 
        public_62aee40 : nop
        xor eax, eax
        ret 
        UNREACHABLE_TRAP(0x62aee20)
    }
}

#undef public_62aee40
