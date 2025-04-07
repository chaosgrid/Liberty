#include "RP8-PCH.h"


#define public_6d0fe43 _public_6d0fe43
#define public_6d0ff75 _public_6d0ff75
#define public_6d0ff77 _public_6d0ff77

PROC_DECLARE(0x6d0fdd2, internal_6d0fdd2, public_6d0fdd2);
extern "C" NAKED register_t __cdecl internal_6d0fdd2()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x10
        mov eax, dword ptr ss : [ebp+8]
        mov cl, byte ptr ds : [eax+0x184]
        and cl, 1
        xor edx, edx
        mov dl, cl
        test edx, edx
        jne public_6d0fe43
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
/*FIXUP push offset public_6d688f8 @0x6d0fe18*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d688f8
        push 0xE53
/*FIXUP push offset public_6d68948 @0x6d0fe22*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d68948
/*FIXUP push offset public_6d68994 @0x6d0fe27*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d68994
        mov ecx, dword ptr ss : [ebp-4]
        push ecx
        mov edx, dword ptr ds : [public_6d5e018]
        call dword ptr ds : [edx]
        add esp, 0x14
        or eax, 0xFFFFFFFF
        jmp public_6d0ff77
        public_6d0fe43 : nop
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ds : [eax+0x130]
        mov dword ptr ss : [ebp-0x10], ecx
        mov edx, dword ptr ss : [ebp+0xC]
        imul edx, 0x44
        mov eax, dword ptr ss : [ebp+8]
        lea ecx, ds:[eax+edx+0x1FD4]
        mov dword ptr ss : [ebp-0xC], ecx
        mov edx, dword ptr ss : [ebp-0xC]
        mov eax, dword ptr ss : [ebp+0x10]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [edx], ecx
        mov edx, dword ptr ss : [ebp-0xC]
        mov eax, dword ptr ss : [ebp+0x10]
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx+0x10], ecx
        mov edx, dword ptr ss : [ebp-0xC]
        mov eax, dword ptr ss : [ebp+0x10]
        mov ecx, dword ptr ds : [eax+8]
        mov dword ptr ds : [edx+0x20], ecx
        mov edx, dword ptr ss : [ebp-0xC]
        mov eax, dword ptr ss : [ebp+0x10]
        mov ecx, dword ptr ds : [eax+0xC]
        mov dword ptr ds : [edx+0x30], ecx
        mov edx, dword ptr ss : [ebp-0xC]
        mov eax, dword ptr ss : [ebp+0x10]
        mov ecx, dword ptr ds : [eax+0x10]
        mov dword ptr ds : [edx+4], ecx
        mov edx, dword ptr ss : [ebp-0xC]
        mov eax, dword ptr ss : [ebp+0x10]
        mov ecx, dword ptr ds : [eax+0x14]
        mov dword ptr ds : [edx+0x14], ecx
        mov edx, dword ptr ss : [ebp-0xC]
        mov eax, dword ptr ss : [ebp+0x10]
        mov ecx, dword ptr ds : [eax+0x18]
        mov dword ptr ds : [edx+0x24], ecx
        mov edx, dword ptr ss : [ebp-0xC]
        mov eax, dword ptr ss : [ebp+0x10]
        mov ecx, dword ptr ds : [eax+0x1C]
        mov dword ptr ds : [edx+0x34], ecx
        mov edx, dword ptr ss : [ebp-0xC]
        mov eax, dword ptr ss : [ebp+0x10]
        mov ecx, dword ptr ds : [eax+0x20]
        mov dword ptr ds : [edx+8], ecx
        mov edx, dword ptr ss : [ebp-0xC]
        mov eax, dword ptr ss : [ebp+0x10]
        mov ecx, dword ptr ds : [eax+0x24]
        mov dword ptr ds : [edx+0x18], ecx
        mov edx, dword ptr ss : [ebp-0xC]
        mov eax, dword ptr ss : [ebp+0x10]
        mov ecx, dword ptr ds : [eax+0x28]
        mov dword ptr ds : [edx+0x28], ecx
        mov edx, dword ptr ss : [ebp-0xC]
        mov eax, dword ptr ss : [ebp+0x10]
        mov ecx, dword ptr ds : [eax+0x2C]
        mov dword ptr ds : [edx+0x38], ecx
        mov edx, dword ptr ss : [ebp-0xC]
        mov eax, dword ptr ss : [ebp+0x10]
        mov ecx, dword ptr ds : [eax+0x30]
        mov dword ptr ds : [edx+0xC], ecx
        mov edx, dword ptr ss : [ebp-0xC]
        mov eax, dword ptr ss : [ebp+0x10]
        mov ecx, dword ptr ds : [eax+0x34]
        mov dword ptr ds : [edx+0x1C], ecx
        mov edx, dword ptr ss : [ebp-0xC]
        mov eax, dword ptr ss : [ebp+0x10]
        mov ecx, dword ptr ds : [eax+0x38]
        mov dword ptr ds : [edx+0x2C], ecx
        mov edx, dword ptr ss : [ebp-0xC]
        mov eax, dword ptr ss : [ebp+0x10]
        mov ecx, dword ptr ds : [eax+0x3C]
        mov dword ptr ds : [edx+0x3C], ecx
        mov edx, dword ptr ss : [ebp-0xC]
        mov byte ptr ds : [edx+0x40], 0
        mov eax, 1
        test eax, eax
        je public_6d0ff75
        mov ecx, dword ptr ss : [ebp-0xC]
        movzx edx, byte ptr ds : [ecx+0x40]
        test edx, edx
        jne public_6d0ff75
        mov eax, dword ptr ss : [ebp-0xC]
        mov byte ptr ds : [eax+0x41], 0
        mov ecx, dword ptr ss : [ebp-0xC]
        mov byte ptr ds : [ecx+0x40], 1
        mov edx, dword ptr ss : [ebp-0xC]
        push edx
        mov eax, dword ptr ss : [ebp+0xC]
        add eax, 0x10
        push eax
        mov ecx, dword ptr ss : [ebp-0x10]
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call dword ptr ds : [edx+0x94]
        mov dword ptr ss : [ebp-8], eax
        xor ecx, ecx
        cmp dword ptr ss : [ebp-8], 0
        setge cl
        mov edx, dword ptr ss : [ebp-0xC]
        mov byte ptr ds : [edx+0x40], cl
        public_6d0ff75 : nop
        xor eax, eax
        public_6d0ff77 : nop
        mov esp, ebp
        pop ebp
        ret 0xC
        UNREACHABLE_TRAP(0x6d0fdd2)
    }
}

#undef public_6d0fe43
#undef public_6d0ff75
#undef public_6d0ff77
