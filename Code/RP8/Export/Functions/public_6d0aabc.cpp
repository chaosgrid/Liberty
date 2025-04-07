#include "RP8-PCH.h"


#define public_6d0ab24 _public_6d0ab24
#define public_6d0ab72 _public_6d0ab72
#define public_6d0ab7e _public_6d0ab7e
#define public_6d0abab _public_6d0abab

PROC_DECLARE(0x6d0aabc, internal_6d0aabc, public_6d0aabc);
extern "C" NAKED register_t __cdecl internal_6d0aabc()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x10
        push edi
        mov eax, dword ptr ss : [ebp+8]
        cmp dword ptr ds : [eax+0x130], 0
        jne public_6d0ab24
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
/*FIXUP push offset public_6d661e8 @0x6d0aafa*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d661e8
        push 0xA35
/*FIXUP push offset public_6d66220 @0x6d0ab04*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d66220
/*FIXUP push offset public_6d6626c @0x6d0ab09*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6626c
        mov edx, dword ptr ss : [ebp-4]
        push edx
        mov eax, dword ptr ds : [public_6d5e018]
        call dword ptr ds : [eax]
        add esp, 0x14
        or eax, 0xFFFFFFFF
        jmp public_6d0abab
        public_6d0ab24 : nop
        mov ecx, dword ptr ss : [ebp+8]
        mov edx, dword ptr ds : [ecx+0x130]
        mov dword ptr ss : [ebp-0x10], edx
        mov eax, dword ptr ss : [ebp+8]
        add eax, 0x22C8
        mov dword ptr ss : [ebp-0xC], eax
        mov ecx, dword ptr ss : [ebp-0xC]
        movzx edx, byte ptr ds : [ecx+0x19]
        test edx, edx
        jne public_6d0ab7e
        mov eax, dword ptr ss : [ebp-0xC]
        push eax
        mov ecx, dword ptr ss : [ebp-0x10]
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call dword ptr ds : [edx+0xA4]
        mov dword ptr ss : [ebp-8], eax
        cmp dword ptr ss : [ebp-8], 0
        jl public_6d0ab72
        mov ecx, dword ptr ss : [ebp-0xC]
        mov byte ptr ds : [ecx+0x18], 1
        mov edx, dword ptr ss : [ebp-0xC]
        mov byte ptr ds : [edx+0x19], 1
        jmp public_6d0ab7e
        public_6d0ab72 : nop
        mov ecx, 6
        xor eax, eax
        mov edi, dword ptr ss : [ebp-0xC]
        rep stosd
        public_6d0ab7e : nop
        mov eax, dword ptr ss : [ebp+0xC]
        mov ecx, dword ptr ss : [ebp-0xC]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax], edx
        mov eax, dword ptr ss : [ebp+0x10]
        mov ecx, dword ptr ss : [ebp-0xC]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax], edx
        mov eax, dword ptr ss : [ebp+0x14]
        mov ecx, dword ptr ss : [ebp-0xC]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax], edx
        mov eax, dword ptr ss : [ebp+0x18]
        mov ecx, dword ptr ss : [ebp-0xC]
        mov edx, dword ptr ds : [ecx+0xC]
        mov dword ptr ds : [eax], edx
        xor eax, eax
        public_6d0abab : nop
        pop edi
        mov esp, ebp
        pop ebp
        ret 0x14
        UNREACHABLE_TRAP(0x6d0aabc)
    }
}

#undef public_6d0ab24
#undef public_6d0ab72
#undef public_6d0ab7e
#undef public_6d0abab
