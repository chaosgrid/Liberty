#include "RP8-PCH.h"


#define public_6d0fc40 _public_6d0fc40
#define public_6d0fc8d _public_6d0fc8d
#define public_6d0fccd _public_6d0fccd
#define public_6d0fccf _public_6d0fccf

PROC_DECLARE(0x6d0fbcf, internal_6d0fbcf, public_6d0fbcf);
extern "C" NAKED register_t __cdecl internal_6d0fbcf()
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
        jne public_6d0fc40
        mov eax, 2
        and eax, 0xF
        mov ecx, dword ptr ss : [ebp-8]
        and ecx, 0xFFFFFFF0
        or ecx, eax
        mov dword ptr ss : [ebp-8], ecx
        mov edx, 0x10000
        and edx, 0xFFFFFFF
        shl edx, 4
        mov eax, dword ptr ss : [ebp-8]
        and eax, 0xF
        or eax, edx
        mov dword ptr ss : [ebp-8], eax
/*FIXUP push offset public_6d68788 @0x6d0fc15*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d68788
        push 0xE38
/*FIXUP push offset public_6d687d8 @0x6d0fc1f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d687d8
/*FIXUP push offset public_6d68824 @0x6d0fc24*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d68824
        mov ecx, dword ptr ss : [ebp-8]
        push ecx
        mov edx, dword ptr ds : [public_6d5e018]
        call dword ptr ds : [edx]
        add esp, 0x14
        or eax, 0xFFFFFFFF
        jmp public_6d0fccf
        public_6d0fc40 : nop
        mov byte ptr ss : [ebp-1], 1
        mov byte ptr ss : [ebp-2], 0
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ds : [eax+0x130]
        mov dword ptr ss : [ebp-0x14], ecx
        mov edx, dword ptr ss : [ebp+0xC]
        imul edx, 0xE8
        mov eax, dword ptr ss : [ebp+8]
        lea ecx, ds:[eax+edx+0x1854]
        mov edx, dword ptr ss : [ebp+0x10]
        lea eax, ds:[ecx+edx*8]
        mov dword ptr ss : [ebp-0x10], eax
        mov ecx, dword ptr ss : [ebp-0x10]
        movzx edx, byte ptr ds : [ecx+4]
        test edx, edx
        je public_6d0fc8d
        xor eax, eax
        test eax, eax
        jne public_6d0fc8d
        mov ecx, dword ptr ss : [ebp-0x10]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ss : [ebp+0x14]
        jne public_6d0fc8d
        jmp public_6d0fccd
        public_6d0fc8d : nop
        mov eax, dword ptr ss : [ebp+0x14]
        push eax
        mov ecx, dword ptr ss : [ebp+0x10]
        push ecx
        mov edx, dword ptr ss : [ebp+0xC]
        push edx
        mov eax, dword ptr ss : [ebp-0x14]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ss : [ebp-0x14]
        push edx
        call dword ptr ds : [ecx+0xFC]
        mov dword ptr ss : [ebp-0xC], eax
        xor eax, eax
        cmp dword ptr ss : [ebp-0xC], 0
        setge al
        mov ecx, dword ptr ss : [ebp-0x10]
        mov byte ptr ds : [ecx+4], al
        mov edx, dword ptr ss : [ebp-0x10]
        movzx eax, byte ptr ds : [edx+4]
        test eax, eax
        je public_6d0fccd
        mov ecx, dword ptr ss : [ebp-0x10]
        mov edx, dword ptr ss : [ebp+0x14]
        mov dword ptr ds : [ecx], edx
        public_6d0fccd : nop
        xor eax, eax
        public_6d0fccf : nop
        mov esp, ebp
        pop ebp
        ret 0x10
        UNREACHABLE_TRAP(0x6d0fbcf)
    }
}

#undef public_6d0fc40
#undef public_6d0fc8d
#undef public_6d0fccd
#undef public_6d0fccf
