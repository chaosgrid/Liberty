#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d168f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d2b964);
CLANG_FORWARD_PROC_SYMBOL(public_6d2f270);

#define public_6d0f7fe _public_6d0f7fe
#define public_6d0f8ac _public_6d0f8ac
#define public_6d0f8af _public_6d0f8af

PROC_DECLARE(0x6d0f786, internal_6d0f786, public_6d0f786);
extern "C" NAKED register_t __cdecl internal_6d0f786()
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
        jne public_6d0f7fe
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
/*FIXUP push offset public_6d68328 @0x6d0f7d3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d68328
        push 0xDC4
/*FIXUP push offset public_6d68368 @0x6d0f7dd*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d68368
/*FIXUP push offset public_6d683b4 @0x6d0f7e2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d683b4
        mov ecx, dword ptr ss : [ebp-8]
        push ecx
        mov edx, dword ptr ds : [public_6d5e018]
        call dword ptr ds : [edx]
        add esp, 0x14
        or eax, 0xFFFFFFFF
        jmp public_6d0f8af
        public_6d0f7fe : nop
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ds : [eax+0x130]
        mov edx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ds : [edx+0x130]
        mov ecx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [ecx+0x88]
        mov dword ptr ss : [ebp-4], eax
        cmp dword ptr ss : [ebp-4], 0
        jge public_6d0f8ac
        mov edx, dword ptr ss : [ebp-4]
        push edx
        call public_6d2b964
        add esp, 4
        push eax
/*FIXUP push offset public_6d683d0 @0x6d0f833*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d683d0
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
        push 0xDD8
/*FIXUP push offset public_6d683e0 @0x6d0f890*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d683e0
/*FIXUP push offset public_6d6842c @0x6d0f895*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6842c
        mov eax, dword ptr ss : [ebp-0x200C]
        push eax
        mov ecx, dword ptr ds : [public_6d5e018]
        call dword ptr ds : [ecx]
        add esp, 0x14
        public_6d0f8ac : nop
        mov eax, dword ptr ss : [ebp-4]
        public_6d0f8af : nop
        mov esp, ebp
        pop ebp
        ret 4
        UNREACHABLE_TRAP(0x6d0f786)
    }
}

#undef public_6d0f7fe
#undef public_6d0f8ac
#undef public_6d0f8af
