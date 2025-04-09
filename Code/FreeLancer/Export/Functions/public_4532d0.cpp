#include "FreeLancer-PCH.h"


#define public_4532fb _public_4532fb

PROC_DECLARE(0x4532d0, internal_4532d0, public_4532d0);
extern "C" NAKED register_t __cdecl internal_4532d0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [ecx+0x6C]
        mov eax, dword ptr ds : [eax]
        test eax, eax
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        je public_4532fb
        add eax, 0x98
        mov esi, dword ptr ds : [eax]
        lea edx, ds:[edi+0x24]
        mov dword ptr ds : [edx], esi
        mov esi, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx+4], esi
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [edx+8], eax
        public_4532fb : nop
        lea esi, ds:[ecx+0x74]
        mov ecx, 9
        rep movsd
        pop edi
        xor eax, eax
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x4532d0)
    }
}

#undef public_4532fb
