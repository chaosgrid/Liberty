#include "FreeLancer-PCH.h"


#define public_4f8c4e _public_4f8c4e
#define public_4f8c67 _public_4f8c67
#define public_4f8c72 _public_4f8c72

PROC_DECLARE(0x4f8c20, internal_4f8c20, public_4f8c20);
extern "C" NAKED register_t __cdecl internal_4f8c20()
{
    __asm
    {
        mov ecx, dword ptr ds : [ecx+0x6C]
        test ecx, ecx
        je public_4f8c72
        fld dword ptr ss : [esp+4]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 5
        jp public_4f8c4e
        mov eax, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+4], 0
        mov edx, dword ptr ss : [esp+4]
        push edx
        push ecx
        call dword ptr ds : [eax+0x18]
        ret 4
        public_4f8c4e : nop
        fld dword ptr ss : [esp+4]
        fcomp dword ptr ds : [public_5c75dc]
        fnstsw ax
        test ah, 0x41
        jne public_4f8c67
        mov dword ptr ss : [esp+4], 0x3F800000
        public_4f8c67 : nop
        mov edx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [ecx]
        push edx
        push ecx
        call dword ptr ds : [eax+0x18]
        public_4f8c72 : nop
        ret 4
        UNREACHABLE_TRAP(0x4f8c20)
    }
}

#undef public_4f8c4e
#undef public_4f8c67
#undef public_4f8c72
