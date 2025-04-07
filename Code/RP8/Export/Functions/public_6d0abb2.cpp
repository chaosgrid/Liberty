#include "RP8-PCH.h"


#define public_6d0ac19 _public_6d0ac19
#define public_6d0ac63 _public_6d0ac63
#define public_6d0ac9e _public_6d0ac9e
#define public_6d0aca0 _public_6d0aca0

PROC_DECLARE(0x6d0abb2, internal_6d0abb2, public_6d0abb2);
extern "C" NAKED register_t __cdecl internal_6d0abb2()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x10
        mov eax, dword ptr ss : [ebp+8]
        cmp dword ptr ds : [eax+0x130], 0
        jne public_6d0ac19
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
/*FIXUP push offset public_6d66288 @0x6d0abef*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d66288
        push 0xA3E
/*FIXUP push offset public_6d662c0 @0x6d0abf9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d662c0
/*FIXUP push offset public_6d6630c @0x6d0abfe*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6630c
        mov edx, dword ptr ss : [ebp-4]
        push edx
        mov eax, dword ptr ds : [public_6d5e018]
        call dword ptr ds : [eax]
        add esp, 0x14
        or eax, 0xFFFFFFFF
        jmp public_6d0aca0
        public_6d0ac19 : nop
        mov ecx, dword ptr ss : [ebp+8]
        mov edx, dword ptr ds : [ecx+0x130]
        mov dword ptr ss : [ebp-0x10], edx
        mov eax, dword ptr ss : [ebp+8]
        add eax, 0x22C8
        mov dword ptr ss : [ebp-0xC], eax
        mov ecx, dword ptr ss : [ebp-0xC]
        movzx edx, byte ptr ds : [ecx+0x18]
        test edx, edx
        je public_6d0ac63
        xor eax, eax
        test eax, eax
        jne public_6d0ac63
        mov ecx, dword ptr ss : [ebp-0xC]
        fld dword ptr ss : [ebp+0xC]
        fcomp dword ptr ds : [ecx+0x10]
        fnstsw ax
        test ah, 0x44
        jp public_6d0ac63
        mov edx, dword ptr ss : [ebp-0xC]
        fld dword ptr ss : [ebp+0x10]
        fcomp dword ptr ds : [edx+0x14]
        fnstsw ax
        test ah, 0x44
        jp public_6d0ac63
        jmp public_6d0ac9e
        public_6d0ac63 : nop
        mov eax, dword ptr ss : [ebp-0xC]
        mov ecx, dword ptr ss : [ebp+0xC]
        mov dword ptr ds : [eax+0x10], ecx
        mov edx, dword ptr ss : [ebp-0xC]
        mov eax, dword ptr ss : [ebp+0x10]
        mov dword ptr ds : [edx+0x14], eax
        mov ecx, dword ptr ss : [ebp-0xC]
        push ecx
        mov edx, dword ptr ss : [ebp-0x10]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ss : [ebp-0x10]
        push ecx
        call dword ptr ds : [eax+0xA0]
        mov dword ptr ss : [ebp-8], eax
        cmp dword ptr ss : [ebp-8], 0
        jl public_6d0ac9e
        xor edx, edx
        neg edx
        sbb edx, edx
        inc edx
        mov eax, dword ptr ss : [ebp-0xC]
        mov byte ptr ds : [eax+0x18], dl
        public_6d0ac9e : nop
        xor eax, eax
        public_6d0aca0 : nop
        mov esp, ebp
        pop ebp
        ret 0xC
        UNREACHABLE_TRAP(0x6d0abb2)
    }
}

#undef public_6d0ac19
#undef public_6d0ac63
#undef public_6d0ac9e
#undef public_6d0aca0
