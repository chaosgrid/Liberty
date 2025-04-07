#include "RP8-PCH.h"


#define public_6d0ae8a _public_6d0ae8a
#define public_6d0aecf _public_6d0aecf
#define public_6d0af27 _public_6d0af27
#define public_6d0af4f _public_6d0af4f

PROC_DECLARE(0x6d0ae23, internal_6d0ae23, public_6d0ae23);
extern "C" NAKED register_t __cdecl internal_6d0ae23()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x20
        mov eax, dword ptr ss : [ebp+8]
        cmp dword ptr ds : [eax+0x130], 0
        jne public_6d0ae8a
        mov ecx, 2
        and ecx, 0xF
        mov edx, dword ptr ss : [ebp-0x14]
        and edx, 0xFFFFFFF0
        or edx, ecx
        mov dword ptr ss : [ebp-0x14], edx
        mov eax, 0x10000
        and eax, 0xFFFFFFF
        shl eax, 4
        mov ecx, dword ptr ss : [ebp-0x14]
        and ecx, 0xF
        or ecx, eax
        mov dword ptr ss : [ebp-0x14], ecx
/*FIXUP push offset public_6d66460 @0x6d0ae60*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d66460
        push 0xA62
/*FIXUP push offset public_6d66490 @0x6d0ae6a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d66490
/*FIXUP push offset public_6d664dc @0x6d0ae6f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d664dc
        mov edx, dword ptr ss : [ebp-0x14]
        push edx
        mov eax, dword ptr ds : [public_6d5e018]
        call dword ptr ds : [eax]
        add esp, 0x14
        or eax, 0xFFFFFFFF
        jmp public_6d0af4f
        public_6d0ae8a : nop
        mov dword ptr ss : [ebp-0x18], 0
        mov ecx, dword ptr ss : [ebp+8]
        cmp dword ptr ds : [ecx+0x274], 0
        jne public_6d0aecf
        mov edx, dword ptr ss : [ebp+0xC]
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ds : [eax+0x260]
        mov dword ptr ds : [edx], ecx
        mov edx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ds : [edx+0x244]
        push eax
        mov ecx, dword ptr ss : [ebp+8]
        mov edx, dword ptr ds : [ecx+0x240]
        push edx
        push 0
        push 0
        lea eax, ss:[ebp-0x10]
        push eax
        call dword ptr ds : [public_6d5e164]
        jmp public_6d0af27
        public_6d0aecf : nop
        mov ecx, dword ptr ss : [ebp+0xC]
        mov edx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ds : [edx+0x274]
        mov dword ptr ds : [ecx], eax
        lea ecx, ss:[ebp-0x10]
        mov dword ptr ss : [ebp-0x18], ecx
        mov edx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ds : [edx+0x264]
        mov dword ptr ss : [ebp-0x1C], eax
        mov ecx, dword ptr ss : [ebp+8]
        mov edx, dword ptr ds : [ecx+0x268]
        mov dword ptr ss : [ebp-0x20], edx
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ss : [ebp-0x20]
        add ecx, dword ptr ds : [eax+0x270]
        push ecx
        mov edx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ss : [ebp-0x1C]
        add eax, dword ptr ds : [edx+0x26C]
        push eax
        mov ecx, dword ptr ss : [ebp-0x20]
        push ecx
        mov edx, dword ptr ss : [ebp-0x1C]
        push edx
        mov eax, dword ptr ss : [ebp-0x18]
        push eax
        call dword ptr ds : [public_6d5e164]
        public_6d0af27 : nop
        mov ecx, dword ptr ss : [ebp+0x10]
        mov edx, dword ptr ss : [ebp-0x10]
        mov dword ptr ds : [ecx], edx
        mov eax, dword ptr ss : [ebp+0x14]
        mov ecx, dword ptr ss : [ebp-8]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ss : [ebp-8]
        sub edx, dword ptr ss : [ebp-0x10]
        mov eax, dword ptr ss : [ebp+0x18]
        mov dword ptr ds : [eax], edx
        mov ecx, dword ptr ss : [ebp-4]
        sub ecx, dword ptr ss : [ebp-0xC]
        mov edx, dword ptr ss : [ebp+0x1C]
        mov dword ptr ds : [edx], ecx
        xor eax, eax
        public_6d0af4f : nop
        mov esp, ebp
        pop ebp
        ret 0x18
        UNREACHABLE_TRAP(0x6d0ae23)
    }
}

#undef public_6d0ae8a
#undef public_6d0aecf
#undef public_6d0af27
#undef public_6d0af4f
