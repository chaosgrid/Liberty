#include "RP8-PCH.h"


#define public_6d0a732 _public_6d0a732
#define public_6d0a799 _public_6d0a799
#define public_6d0a7e4 _public_6d0a7e4
#define public_6d0a7e6 _public_6d0a7e6

PROC_DECLARE(0x6d0a6c1, internal_6d0a6c1, public_6d0a6c1);
extern "C" NAKED register_t __cdecl internal_6d0a6c1()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x14
        mov eax, dword ptr ss : [ebp+8]
        mov cl, byte ptr ds : [eax+0x184]
        and cl, 1
        xor edx, edx
        mov dl, cl
        test edx, edx
        jne public_6d0a732
        mov eax, 2
        and eax, 0xF
        mov ecx, dword ptr ss : [ebp-4]
        and ecx, 0xFFFFFFF0
        or ecx, eax
        mov dword ptr ss : [ebp-4], ecx
        mov edx, 0x10000
        and edx, 0xFFFFFFF
        shl edx, 4
        mov eax, dword ptr ss : [ebp-4]
        and eax, 0xF
        or eax, edx
        mov dword ptr ss : [ebp-4], eax
/*FIXUP push offset public_6d65e38 @0x6d0a707*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d65e38
        push 0x9ED
/*FIXUP push offset public_6d65e80 @0x6d0a711*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d65e80
/*FIXUP push offset public_6d65ecc @0x6d0a716*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d65ecc
        mov ecx, dword ptr ss : [ebp-4]
        push ecx
        mov edx, dword ptr ds : [public_6d5e018]
        call dword ptr ds : [edx]
        add esp, 0x14
        or eax, 0xFFFFFFFF
        jmp public_6d0a7e6
        public_6d0a732 : nop
        mov eax, dword ptr ss : [ebp+8]
        xor ecx, ecx
        cmp dword ptr ds : [eax+0x134], 0
        sete cl
        test ecx, ecx
        je public_6d0a799
        mov edx, 2
        and edx, 0xF
        mov eax, dword ptr ss : [ebp-8]
        and eax, 0xFFFFFFF0
        or eax, edx
        mov dword ptr ss : [ebp-8], eax
        mov ecx, 0x10000
        and ecx, 0xFFFFFFF
        shl ecx, 4
        mov edx, dword ptr ss : [ebp-8]
        and edx, 0xF
        or edx, ecx
        mov dword ptr ss : [ebp-8], edx
/*FIXUP push offset public_6d65ee8 @0x6d0a771*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d65ee8
        push 0x9F1
/*FIXUP push offset public_6d65f10 @0x6d0a77b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d65f10
/*FIXUP push offset public_6d65f5c @0x6d0a780*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d65f5c
        mov eax, dword ptr ss : [ebp-8]
        push eax
        mov ecx, dword ptr ds : [public_6d5e018]
        call dword ptr ds : [ecx]
        add esp, 0x14
        or eax, 0xFFFFFFFF
        jmp public_6d0a7e6
        public_6d0a799 : nop
        mov edx, dword ptr ss : [ebp-0xC]
        mov dword ptr ss : [ebp-0x14], edx
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ds : [eax+0x134]
        mov dword ptr ss : [ebp-0x14], ecx
        mov edx, dword ptr ss : [ebp-0x14]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ss : [ebp-0x14]
        push ecx
        call dword ptr ds : [eax+0x28]
        mov edx, dword ptr ss : [ebp+8]
        add edx, 0x134
        mov dword ptr ss : [ebp-0x10], edx
        mov eax, dword ptr ss : [ebp-0x10]
        cmp dword ptr ds : [eax], 0
        je public_6d0a7e4
        mov ecx, dword ptr ss : [ebp-0x10]
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ss : [ebp-0x10]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [edx]
        push ecx
        call dword ptr ds : [edx+8]
        mov eax, dword ptr ss : [ebp-0x10]
        mov dword ptr ds : [eax], 0
        public_6d0a7e4 : nop
        xor eax, eax
        public_6d0a7e6 : nop
        mov esp, ebp
        pop ebp
        ret 4
        UNREACHABLE_TRAP(0x6d0a6c1)
    }
}

#undef public_6d0a732
#undef public_6d0a799
#undef public_6d0a7e4
#undef public_6d0a7e6
