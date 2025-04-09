#include "FreeLancer-PCH.h"


#define public_42a3d4 _public_42a3d4

PROC_DECLARE(0x42a3a0, internal_42a3a0, public_42a3a0);
extern "C" NAKED register_t __cdecl internal_42a3a0()
{
    __asm
    {
        cmp ecx, dword ptr ds : [public_667cb0]
        je public_42a3d4
        mov eax, dword ptr ds : [public_5c6d48]
        cmp dword ptr ds : [eax], 0
        je public_42a3d4
        mov eax, dword ptr ds : [ecx+0x30]
        test eax, eax
        je public_42a3d4
        cmp eax, 0xFFFFFFFF
        je public_42a3d4
        mov dword ptr ds : [ecx+8], 1
        mov ecx, dword ptr ds : [public_5c6d48]
        mov ecx, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [ecx]
        push eax
        push ecx
        call dword ptr ds : [edx+0x18]
        public_42a3d4 : nop
        ret 
        UNREACHABLE_TRAP(0x42a3a0)
    }
}

#undef public_42a3d4
