#include "FreeLancer-PCH.h"


#define public_55eb23 _public_55eb23

PROC_DECLARE(0x55eaf0, internal_55eaf0, public_55eaf0);
extern "C" NAKED register_t __cdecl internal_55eaf0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        je public_55eb23
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+8]
        test eax, eax
        je public_55eb23
        mov eax, dword ptr ss : [esp+8]
        add esi, 0x31C
        mov edx, dword ptr ds : [esi]
        mov ecx, eax
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+8], edx
        pop esi
        ret 4
        public_55eb23 : nop
        mov eax, dword ptr ss : [esp+8]
        mov dword ptr ds : [eax], 0
        mov dword ptr ds : [eax+4], 0
        mov dword ptr ds : [eax+8], 0
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x55eaf0)
    }
}

#undef public_55eb23
