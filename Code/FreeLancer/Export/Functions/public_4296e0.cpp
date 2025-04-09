#include "FreeLancer-PCH.h"


#define public_429709 _public_429709
#define public_429721 _public_429721

PROC_DECLARE(0x4296e0, internal_4296e0, public_4296e0);
extern "C" NAKED register_t __cdecl internal_4296e0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5c6d44]
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [eax]
        test ecx, ecx
        je public_429721
        test byte ptr ds : [esi+0xC], 0x10
        je public_429709
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0xB0]
        mov edx, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [esi+0x14]
        sub eax, edx
        add ecx, eax
        mov dword ptr ds : [esi+0x14], ecx
        public_429709 : nop
        mov eax, dword ptr ds : [public_5c6d44]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push esi
        push eax
        call dword ptr ds : [ecx+0xC0]
        mov dword ptr ds : [esi+8], 0
        public_429721 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x4296e0)
    }
}

#undef public_429709
#undef public_429721
