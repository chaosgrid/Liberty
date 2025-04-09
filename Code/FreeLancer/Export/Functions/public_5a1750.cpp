#include "FreeLancer-PCH.h"


#define public_5a178d _public_5a178d

PROC_DECLARE(0x5a1750, internal_5a1750, public_5a1750);
extern "C" NAKED register_t __cdecl internal_5a1750()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        je public_5a178d
        mov al, byte ptr ds : [esi+0x328]
        test al, al
        je public_5a178d
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+8]
        test eax, eax
        je public_5a178d
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
        public_5a178d : nop
        mov eax, dword ptr ss : [esp+8]
        mov dword ptr ds : [eax], 0
        mov dword ptr ds : [eax+4], 0
        mov dword ptr ds : [eax+8], 0
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x5a1750)
    }
}

#undef public_5a178d
