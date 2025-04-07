#include "Common-PCH.h"


#define public_63621d5 _public_63621d5
#define public_63621e0 _public_63621e0

PROC_DECLARE(0x63621a0, internal_63621a0, public_63621a0);
extern "C" NAKED register_t __cdecl internal_63621a0()
{
    __asm
    {
        mov eax, ecx
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax+0x1C], ecx
        mov edx, dword ptr ds : [public_63ee640]
        mov ecx, dword ptr ss : [esp+8]
        inc edx
        test ecx, ecx
        mov dword ptr ds : [public_63ee640], edx
        je public_63621e0
        mov ecx, dword ptr ds : [eax+0x14]
        test ecx, ecx
        je public_63621e0
        test eax, eax
        je public_63621d5
        mov edx, dword ptr ds : [ecx]
        add eax, 0x20
        push eax
        call dword ptr ds : [edx+0x18]
        ret 8
        public_63621d5 : nop
        mov edx, dword ptr ds : [ecx]
        xor eax, eax
        push eax
        call dword ptr ds : [edx+0x18]
        ret 8
        public_63621e0 : nop
        lea ecx, ds:[eax+0x20]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax]
        ret 8
        UNREACHABLE_TRAP(0x63621a0)
    }
}

#undef public_63621d5
#undef public_63621e0
