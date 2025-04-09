#include "FreeLancer-PCH.h"


#define public_4f8cae _public_4f8cae
#define public_4f8cc7 _public_4f8cc7
#define public_4f8cd5 _public_4f8cd5

PROC_DECLARE(0x4f8c80, internal_4f8c80, public_4f8c80);
extern "C" NAKED register_t __cdecl internal_4f8c80()
{
    __asm
    {
        mov ecx, dword ptr ds : [ecx+0x6C]
        test ecx, ecx
        je public_4f8cd5
        fld dword ptr ss : [esp+4]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 5
        jp public_4f8cae
        mov eax, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+4], 0
        mov edx, dword ptr ss : [esp+4]
        push edx
        push ecx
        call dword ptr ds : [eax+0x38]
        ret 4
        public_4f8cae : nop
        fld dword ptr ss : [esp+4]
        fcomp dword ptr ds : [public_5c75dc]
        fnstsw ax
        test ah, 0x41
        jne public_4f8cc7
        mov dword ptr ss : [esp+4], 0x3F800000
        public_4f8cc7 : nop
        mov edx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [ecx]
        push edx
        push ecx
        call dword ptr ds : [eax+0x38]
        ret 4
/*FIXUP public_4f8cd5 : nop
        push offset public_5d9d48 @0x4f8cd5*/
  FIXUP public_4f8cd5 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d9d48
        push 0x511
/*FIXUP push offset public_5d9b48 @0x4f8cdf*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d9b48
        mov eax, 0x100002
/*FIXUP push offset public_5c8bd4 @0x4f8ce9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c8bd4
        push eax
        mov eax, dword ptr ds : [public_5c6d18]
        call dword ptr ds : [eax]
        add esp, 0x14
        ret 4
        UNREACHABLE_TRAP(0x4f8c80)
    }
}

#undef public_4f8cae
#undef public_4f8cc7
#undef public_4f8cd5
