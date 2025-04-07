#include "Common-PCH.h"


#define public_62cd614 _public_62cd614

PROC_DECLARE(0x62cd600, internal_62cd600, public_62cd600);
extern "C" NAKED register_t __cdecl internal_62cd600()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x14]
        test eax, eax
        jne public_62cd614
        mov eax, 3
        mov dword ptr ds : [esi+0x10], eax
        pop esi
        ret 
        public_62cd614 : nop
        mov edx, dword ptr ds : [esi+0x1C]
        mov eax, dword ptr ds : [esi+0x2C]
        lea ecx, ds:[esi+0x2C]
        push edx
        call dword ptr ds : [eax+4]
        mov eax, 1
        mov dword ptr ds : [esi+0x10], eax
        pop esi
        ret 
        UNREACHABLE_TRAP(0x62cd600)
    }
}

#undef public_62cd614
