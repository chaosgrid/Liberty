#include "RP8-PCH.h"


#define public_6d12aef _public_6d12aef
#define public_6d12b27 _public_6d12b27
#define public_6d12b2a _public_6d12b2a

PROC_DECLARE(0x6d12a8b, internal_6d12a8b, public_6d12a8b);
extern "C" NAKED register_t __cdecl internal_6d12a8b()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0xC
        mov eax, dword ptr ss : [ebp+8]
        cmp dword ptr ds : [eax+0x120], 0
        jne public_6d12aef
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
/*FIXUP push offset public_6d69790 @0x6d12ac8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d69790
        push 0x107E
/*FIXUP push offset public_6d697c0 @0x6d12ad2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d697c0
/*FIXUP push offset public_6d6980c @0x6d12ad7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6980c
        mov edx, dword ptr ss : [ebp-0xC]
        push edx
        mov eax, dword ptr ds : [public_6d5e018]
        call dword ptr ds : [eax]
        add esp, 0x14
        or eax, 0xFFFFFFFF
        jmp public_6d12b2a
        public_6d12aef : nop
        mov dword ptr ss : [ebp-4], 0x80004005
        cmp dword ptr ss : [ebp+0xC], 0
        je public_6d12b27
        cmp dword ptr ss : [ebp+0xC], 0xFFFFFFFF
        je public_6d12b27
        mov ecx, dword ptr ss : [ebp+0xC]
        mov dword ptr ss : [ebp-8], ecx
        mov edx, dword ptr ss : [ebp-8]
        mov dword ptr ds : [edx+0x10], 0
        mov eax, dword ptr ss : [ebp-8]
        mov ecx, dword ptr ds : [eax+0x20]
        push ecx
        mov edx, dword ptr ss : [ebp-8]
        mov eax, dword ptr ds : [edx+0x20]
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+0x30]
        mov dword ptr ss : [ebp-4], eax
        public_6d12b27 : nop
        mov eax, dword ptr ss : [ebp-4]
        public_6d12b2a : nop
        mov esp, ebp
        pop ebp
        ret 8
        UNREACHABLE_TRAP(0x6d12a8b)
    }
}

#undef public_6d12aef
#undef public_6d12b27
#undef public_6d12b2a
