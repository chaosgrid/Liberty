#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d168f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d2b964);
CLANG_FORWARD_PROC_SYMBOL(public_6d2f270);

#define public_6d0f92d _public_6d0f92d
#define public_6d0f9db _public_6d0f9db
#define public_6d0f9de _public_6d0f9de

PROC_DECLARE(0x6d0f8b5, internal_6d0f8b5, public_6d0f8b5);
extern "C" NAKED register_t __cdecl internal_6d0f8b5()
{
    __asm
    {
        push ebp
        mov ebp, esp
        mov eax, 0x2010
        call public_6d2f270
        mov eax, dword ptr ss : [ebp+8]
        mov cl, byte ptr ds : [eax+0x184]
        and cl, 1
        xor edx, edx
        mov dl, cl
        test edx, edx
        jne public_6d0f92d
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
/*FIXUP push offset public_6d68448 @0x6d0f902*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d68448
        push 0xDE4
/*FIXUP push offset public_6d68488 @0x6d0f90c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d68488
/*FIXUP push offset public_6d684d4 @0x6d0f911*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d684d4
        mov ecx, dword ptr ss : [ebp-8]
        push ecx
        mov edx, dword ptr ds : [public_6d5e018]
        call dword ptr ds : [edx]
        add esp, 0x14
        or eax, 0xFFFFFFFF
        jmp public_6d0f9de
        public_6d0f92d : nop
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ds : [eax+0x130]
        mov edx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ds : [edx+0x130]
        mov ecx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [ecx+0x8C]
        mov dword ptr ss : [ebp-4], eax
        cmp dword ptr ss : [ebp-4], 0
        jge public_6d0f9db
        mov edx, dword ptr ss : [ebp-4]
        push edx
        call public_6d2b964
        add esp, 4
        push eax
/*FIXUP push offset public_6d684f0 @0x6d0f962*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d684f0
        lea eax, ss:[ebp-0x2008]
        push eax
        call public_6d168f0
        add esp, 0xC
        mov dword ptr ss : [ebp-0x2010], eax
        mov ecx, 2
        and ecx, 0xF
        mov edx, dword ptr ss : [ebp-0x200C]
        and edx, 0xFFFFFFF0
        or edx, ecx
        mov dword ptr ss : [ebp-0x200C], edx
        mov eax, 0x10000
        and eax, 0xFFFFFFF
        shl eax, 4
        mov ecx, dword ptr ss : [ebp-0x200C]
        and ecx, 0xF
        or ecx, eax
        mov dword ptr ss : [ebp-0x200C], ecx
        mov edx, dword ptr ss : [ebp-0x2010]
        push edx
        push 0xDE8
/*FIXUP push offset public_6d68500 @0x6d0f9bf*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d68500
/*FIXUP push offset public_6d6854c @0x6d0f9c4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6854c
        mov eax, dword ptr ss : [ebp-0x200C]
        push eax
        mov ecx, dword ptr ds : [public_6d5e018]
        call dword ptr ds : [ecx]
        add esp, 0x14
        public_6d0f9db : nop
        mov eax, dword ptr ss : [ebp-4]
        public_6d0f9de : nop
        mov esp, ebp
        pop ebp
        ret 4
        UNREACHABLE_TRAP(0x6d0f8b5)
    }
}

#undef public_6d0f92d
#undef public_6d0f9db
#undef public_6d0f9de
