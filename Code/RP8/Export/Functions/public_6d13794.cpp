#include "RP8-PCH.h"


#define public_6d137f8 _public_6d137f8
#define public_6d13819 _public_6d13819
#define public_6d1381f _public_6d1381f
#define public_6d1383e _public_6d1383e
#define public_6d13841 _public_6d13841

PROC_DECLARE(0x6d13794, internal_6d13794, public_6d13794);
extern "C" NAKED register_t __cdecl internal_6d13794()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0xC
        mov eax, dword ptr ss : [ebp+8]
        cmp dword ptr ds : [eax+0x124], 0
        jne public_6d137f8
        mov ecx, 2
        and ecx, 0xF
        mov edx, dword ptr ss : [ebp-0xC]
        and edx, 0xFFFFFFF0
        or edx, ecx
        mov dword ptr ss : [ebp-0xC], edx
        mov eax, 0x10000
        and eax, 0xFFFFFFF
        shl eax, 4
        mov ecx, dword ptr ss : [ebp-0xC]
        and ecx, 0xF
        or ecx, eax
        mov dword ptr ss : [ebp-0xC], ecx
/*FIXUP push offset public_6d69c38 @0x6d137d1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d69c38
        push 0x1162
/*FIXUP push offset public_6d69c68 @0x6d137db*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d69c68
/*FIXUP push offset public_6d69cb4 @0x6d137e0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d69cb4
        mov edx, dword ptr ss : [ebp-0xC]
        push edx
        mov eax, dword ptr ds : [public_6d5e018]
        call dword ptr ds : [eax]
        add esp, 0x14
        or eax, 0xFFFFFFFF
        jmp public_6d13841
        public_6d137f8 : nop
        mov dword ptr ss : [ebp-4], 0x80004005
        cmp dword ptr ss : [ebp+0xC], 0
        je public_6d1383e
        cmp dword ptr ss : [ebp+0xC], 0xFFFFFFFF
        jne public_6d13819
        mov ecx, dword ptr ss : [ebp+8]
        add ecx, 0x140
        mov dword ptr ss : [ebp-8], ecx
        jmp public_6d1381f
        public_6d13819 : nop
        mov edx, dword ptr ss : [ebp+0xC]
        mov dword ptr ss : [ebp-8], edx
        public_6d1381f : nop
        mov eax, dword ptr ss : [ebp-8]
        mov dword ptr ds : [eax+8], 0
        mov ecx, dword ptr ss : [ebp-8]
        mov edx, dword ptr ds : [ecx+4]
        push edx
        mov eax, dword ptr ss : [ebp-8]
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x30]
        mov dword ptr ss : [ebp-4], eax
        public_6d1383e : nop
        mov eax, dword ptr ss : [ebp-4]
        public_6d13841 : nop
        mov esp, ebp
        pop ebp
        ret 8
        UNREACHABLE_TRAP(0x6d13794)
    }
}

#undef public_6d137f8
#undef public_6d13819
#undef public_6d1381f
#undef public_6d1383e
#undef public_6d13841
