#include "RP8-PCH.h"


#define public_6d0c49f _public_6d0c49f
#define public_6d0c576 _public_6d0c576

PROC_DECLARE(0x6d0c438, internal_6d0c438, public_6d0c438);
extern "C" NAKED register_t __cdecl internal_6d0c438()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0xC
        mov eax, dword ptr ss : [ebp+8]
        cmp dword ptr ds : [eax+0x130], 0
        jne public_6d0c49f
        mov ecx, 2
        and ecx, 0xF
        mov edx, dword ptr ss : [ebp-4]
        and edx, 0xFFFFFFF0
        or edx, ecx
        mov dword ptr ss : [ebp-4], edx
        mov eax, 0x10000
        and eax, 0xFFFFFFF
        shl eax, 4
        mov ecx, dword ptr ss : [ebp-4]
        and ecx, 0xF
        or ecx, eax
        mov dword ptr ss : [ebp-4], ecx
/*FIXUP push offset public_6d669d8 @0x6d0c475*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d669d8
        push 0xAED
/*FIXUP push offset public_6d66a10 @0x6d0c47f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d66a10
/*FIXUP push offset public_6d66a5c @0x6d0c484*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d66a5c
        mov edx, dword ptr ss : [ebp-4]
        push edx
        mov eax, dword ptr ds : [public_6d5e018]
        call dword ptr ds : [eax]
        add esp, 0x14
        or eax, 0xFFFFFFFF
        jmp public_6d0c576
        public_6d0c49f : nop
        mov ecx, dword ptr ss : [ebp+8]
        mov edx, dword ptr ds : [ecx+0x130]
        mov dword ptr ss : [ebp-0xC], edx
        mov eax, dword ptr ss : [ebp+8]
        add eax, 0x2284
        mov dword ptr ss : [ebp-8], eax
        mov ecx, dword ptr ss : [ebp+0xC]
        mov edx, dword ptr ss : [ebp-8]
        mov eax, dword ptr ds : [edx]
        mov dword ptr ds : [ecx], eax
        mov ecx, dword ptr ss : [ebp+0xC]
        mov edx, dword ptr ss : [ebp-8]
        mov eax, dword ptr ds : [edx+0x10]
        mov dword ptr ds : [ecx+4], eax
        mov ecx, dword ptr ss : [ebp+0xC]
        mov edx, dword ptr ss : [ebp-8]
        mov eax, dword ptr ds : [edx+0x20]
        mov dword ptr ds : [ecx+8], eax
        mov ecx, dword ptr ss : [ebp+0xC]
        mov edx, dword ptr ss : [ebp-8]
        mov eax, dword ptr ds : [edx+0x30]
        mov dword ptr ds : [ecx+0xC], eax
        mov ecx, dword ptr ss : [ebp+0xC]
        mov edx, dword ptr ss : [ebp-8]
        mov eax, dword ptr ds : [edx+4]
        mov dword ptr ds : [ecx+0x10], eax
        mov ecx, dword ptr ss : [ebp+0xC]
        mov edx, dword ptr ss : [ebp-8]
        mov eax, dword ptr ds : [edx+0x14]
        mov dword ptr ds : [ecx+0x14], eax
        mov ecx, dword ptr ss : [ebp+0xC]
        mov edx, dword ptr ss : [ebp-8]
        mov eax, dword ptr ds : [edx+0x24]
        mov dword ptr ds : [ecx+0x18], eax
        mov ecx, dword ptr ss : [ebp+0xC]
        mov edx, dword ptr ss : [ebp-8]
        mov eax, dword ptr ds : [edx+0x34]
        mov dword ptr ds : [ecx+0x1C], eax
        mov ecx, dword ptr ss : [ebp+0xC]
        mov edx, dword ptr ss : [ebp-8]
        mov eax, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx+0x20], eax
        mov ecx, dword ptr ss : [ebp+0xC]
        mov edx, dword ptr ss : [ebp-8]
        mov eax, dword ptr ds : [edx+0x18]
        mov dword ptr ds : [ecx+0x24], eax
        mov ecx, dword ptr ss : [ebp+0xC]
        mov edx, dword ptr ss : [ebp-8]
        mov eax, dword ptr ds : [edx+0x28]
        mov dword ptr ds : [ecx+0x28], eax
        mov ecx, dword ptr ss : [ebp+0xC]
        mov edx, dword ptr ss : [ebp-8]
        mov eax, dword ptr ds : [edx+0x38]
        mov dword ptr ds : [ecx+0x2C], eax
        mov ecx, dword ptr ss : [ebp+0xC]
        mov edx, dword ptr ss : [ebp-8]
        mov eax, dword ptr ds : [edx+0xC]
        mov dword ptr ds : [ecx+0x30], eax
        mov ecx, dword ptr ss : [ebp+0xC]
        mov edx, dword ptr ss : [ebp-8]
        mov eax, dword ptr ds : [edx+0x1C]
        mov dword ptr ds : [ecx+0x34], eax
        mov ecx, dword ptr ss : [ebp+0xC]
        mov edx, dword ptr ss : [ebp-8]
        mov eax, dword ptr ds : [edx+0x2C]
        mov dword ptr ds : [ecx+0x38], eax
        mov ecx, dword ptr ss : [ebp+0xC]
        mov edx, dword ptr ss : [ebp-8]
        mov eax, dword ptr ds : [edx+0x3C]
        mov dword ptr ds : [ecx+0x3C], eax
        xor eax, eax
        public_6d0c576 : nop
        mov esp, ebp
        pop ebp
        ret 8
        UNREACHABLE_TRAP(0x6d0c438)
    }
}

#undef public_6d0c49f
#undef public_6d0c576
