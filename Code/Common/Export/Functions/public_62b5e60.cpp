#include "Common-PCH.h"


#define public_62b5e77 _public_62b5e77

PROC_DECLARE(0x62b5e60, internal_62b5e60, public_62b5e60);
extern "C" NAKED register_t __cdecl internal_62b5e60()
{
    __asm
    {
        push esi
        mov esi, ecx
        cmp dword ptr ds : [esi+0xDC], 0xBF800000
        jne public_62b5e77
        mov eax, dword ptr ds : [esi]
        call dword ptr ds : [eax+0x84]
        public_62b5e77 : nop
        mov edx, dword ptr ss : [esp+8]
        lea ecx, ds:[esi+0xD0]
        mov eax, dword ptr ds : [ecx]
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], eax
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [edx+8], ecx
        fld dword ptr ds : [esi+0xDC]
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x62b5e60)
    }
}

#undef public_62b5e77
