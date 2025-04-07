#include "Common-PCH.h"


#define public_6362245 _public_6362245
#define public_6362250 _public_6362250

PROC_DECLARE(0x6362210, internal_6362210, public_6362210);
extern "C" NAKED register_t __cdecl internal_6362210()
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
        je public_6362250
        mov ecx, dword ptr ds : [eax+0x14]
        test ecx, ecx
        je public_6362250
        test eax, eax
        je public_6362245
        mov edx, dword ptr ds : [ecx]
        add eax, 0x20
        push eax
        call dword ptr ds : [edx+0x1C]
        ret 8
        public_6362245 : nop
        mov edx, dword ptr ds : [ecx]
        xor eax, eax
        push eax
        call dword ptr ds : [edx+0x1C]
        ret 8
        public_6362250 : nop
        lea ecx, ds:[eax+0x20]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax]
        ret 8
        UNREACHABLE_TRAP(0x6362210)
    }
}

#undef public_6362245
#undef public_6362250
