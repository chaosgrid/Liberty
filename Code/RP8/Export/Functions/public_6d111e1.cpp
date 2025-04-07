#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d010cf);
CLANG_FORWARD_PROC_SYMBOL(public_6d04138);
CLANG_FORWARD_PROC_SYMBOL(public_6d168f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d2b964);
CLANG_FORWARD_PROC_SYMBOL(public_6d2f270);

#define public_6d11259 _public_6d11259
#define public_6d1134b _public_6d1134b
#define public_6d1134e _public_6d1134e

PROC_DECLARE(0x6d111e1, internal_6d111e1, public_6d111e1);
extern "C" NAKED register_t __cdecl internal_6d111e1()
{
    __asm
    {
        push ebp
        mov ebp, esp
        mov eax, 0x2014
        call public_6d2f270
        mov eax, dword ptr ss : [ebp+8]
        mov cl, byte ptr ds : [eax+0x17C]
        and cl, 1
        xor edx, edx
        mov dl, cl
        test edx, edx
        jne public_6d11259
        mov eax, 2
        and eax, 0xF
        mov ecx, dword ptr ss : [ebp-0xC]
        and ecx, 0xFFFFFFF0
        or ecx, eax
        mov dword ptr ss : [ebp-0xC], ecx
        mov edx, 0x10000
        and edx, 0xFFFFFFF
        shl edx, 4
        mov eax, dword ptr ss : [ebp-0xC]
        and eax, 0xF
        or eax, edx
        mov dword ptr ss : [ebp-0xC], eax
/*FIXUP push offset public_6d691e0 @0x6d1122e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d691e0
        push 0xF69
/*FIXUP push offset public_6d69230 @0x6d11238*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d69230
/*FIXUP push offset public_6d6927c @0x6d1123d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6927c
        mov ecx, dword ptr ss : [ebp-0xC]
        push ecx
        mov edx, dword ptr ds : [public_6d5e018]
        call dword ptr ds : [edx]
        add esp, 0x14
        or eax, 0xFFFFFFFF
        jmp public_6d1134e
        public_6d11259 : nop
        mov dword ptr ss : [ebp-8], 0x80004005
        mov eax, dword ptr ss : [ebp+0x1C]
        push eax
        mov ecx, dword ptr ss : [ebp+0xC]
        push ecx
        call public_6d010cf
        add esp, 8
        mov dword ptr ss : [ebp-4], eax
        cmp dword ptr ss : [ebp-4], 0
        jle public_6d1134b
        mov ecx, dword ptr ss : [ebp+8]
        sub ecx, 8
        call public_6d04138
        mov edx, dword ptr ss : [ebp-4]
        push edx
        mov eax, dword ptr ss : [ebp+0x18]
        push eax
        mov ecx, dword ptr ss : [ebp+0x14]
        push ecx
        mov edx, dword ptr ss : [ebp+0x10]
        push edx
        mov eax, dword ptr ss : [ebp+0xC]
        push eax
        mov ecx, dword ptr ss : [ebp+8]
        mov edx, dword ptr ds : [ecx+0x128]
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ds : [eax+0x128]
        mov edx, dword ptr ds : [edx]
        push ecx
        call dword ptr ds : [edx+0x11C]
        mov dword ptr ss : [ebp-8], eax
        cmp dword ptr ss : [ebp-8], 0
        jge public_6d1134b
        mov eax, dword ptr ss : [ebp-8]
        push eax
        call public_6d2b964
        add esp, 4
        push eax
/*FIXUP push offset public_6d69298 @0x6d112d1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d69298
        lea ecx, ss:[ebp-0x200C]
        push ecx
        call public_6d168f0
        add esp, 0xC
        mov dword ptr ss : [ebp-0x2014], eax
        mov edx, 2
        and edx, 0xF
        mov eax, dword ptr ss : [ebp-0x2010]
        and eax, 0xFFFFFFF0
        or eax, edx
        mov dword ptr ss : [ebp-0x2010], eax
        mov ecx, 0x10000
        and ecx, 0xFFFFFFF
        shl ecx, 4
        mov edx, dword ptr ss : [ebp-0x2010]
        and edx, 0xF
        or edx, ecx
        mov dword ptr ss : [ebp-0x2010], edx
        mov eax, dword ptr ss : [ebp-0x2014]
        push eax
        push 0xF79
/*FIXUP push offset public_6d692b8 @0x6d1132f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d692b8
/*FIXUP push offset public_6d69304 @0x6d11334*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d69304
        mov ecx, dword ptr ss : [ebp-0x2010]
        push ecx
        mov edx, dword ptr ds : [public_6d5e018]
        call dword ptr ds : [edx]
        add esp, 0x14
        public_6d1134b : nop
        mov eax, dword ptr ss : [ebp-8]
        public_6d1134e : nop
        mov esp, ebp
        pop ebp
        ret 0x18
        UNREACHABLE_TRAP(0x6d111e1)
    }
}

#undef public_6d11259
#undef public_6d1134b
#undef public_6d1134e
