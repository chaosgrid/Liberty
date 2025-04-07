#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d2ba2f);

#define public_6d0fbb0 _public_6d0fbb0
#define public_6d0fbc9 _public_6d0fbc9

PROC_DECLARE(0x6d0fb44, internal_6d0fb44, public_6d0fb44);
extern "C" NAKED register_t __cdecl internal_6d0fb44()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ecx
        mov eax, dword ptr ss : [ebp+8]
        mov cl, byte ptr ds : [eax+0x184]
        and cl, 1
        xor edx, edx
        mov dl, cl
        test edx, edx
        jne public_6d0fbb0
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
/*FIXUP push offset public_6d686d8 @0x6d0fb88*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d686d8
        push 0xE2C
/*FIXUP push offset public_6d68720 @0x6d0fb92*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d68720
/*FIXUP push offset public_6d6876c @0x6d0fb97*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6876c
        mov ecx, dword ptr ss : [ebp-4]
        push ecx
        mov edx, dword ptr ds : [public_6d5e018]
        call dword ptr ds : [edx]
        add esp, 0x14
        or eax, 0xFFFFFFFF
        jmp public_6d0fbc9
        public_6d0fbb0 : nop
        mov eax, dword ptr ss : [ebp+0xC]
        push eax
        mov ecx, dword ptr ss : [ebp+8]
        add ecx, 0x44C
        call public_6d2ba2f
        mov ecx, dword ptr ss : [ebp+0x10]
        mov dword ptr ds : [ecx], eax
        xor eax, eax
        public_6d0fbc9 : nop
        mov esp, ebp
        pop ebp
        ret 0xC
        UNREACHABLE_TRAP(0x6d0fb44)
    }
}

#undef public_6d0fbb0
#undef public_6d0fbc9
