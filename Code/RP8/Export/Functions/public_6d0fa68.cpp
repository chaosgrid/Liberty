#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d2ba9a);

#define public_6d0fad6 _public_6d0fad6
#define public_6d0fb3c _public_6d0fb3c
#define public_6d0fb3e _public_6d0fb3e

PROC_DECLARE(0x6d0fa68, internal_6d0fa68, public_6d0fa68);
extern "C" NAKED register_t __cdecl internal_6d0fa68()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0xC
        mov eax, dword ptr ss : [ebp+8]
        mov cl, byte ptr ds : [eax+0x184]
        and cl, 1
        xor edx, edx
        mov dl, cl
        test edx, edx
        jne public_6d0fad6
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
/*FIXUP push offset public_6d68628 @0x6d0faae*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d68628
        push 0xE02
/*FIXUP push offset public_6d68670 @0x6d0fab8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d68670
/*FIXUP push offset public_6d686bc @0x6d0fabd*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d686bc
        mov ecx, dword ptr ss : [ebp-8]
        push ecx
        mov edx, dword ptr ds : [public_6d5e018]
        call dword ptr ds : [edx]
        add esp, 0x14
        or eax, 0xFFFFFFFF
        jmp public_6d0fb3e
        public_6d0fad6 : nop
        mov eax, dword ptr ss : [ebp+0x10]
        push eax
        mov ecx, dword ptr ss : [ebp+0xC]
        push ecx
        mov ecx, dword ptr ss : [ebp+8]
        add ecx, 0x44C
        call public_6d2ba9a
        mov byte ptr ss : [ebp-1], al
        movzx edx, byte ptr ss : [ebp-1]
        test edx, edx
        je public_6d0fb3c
        cmp dword ptr ss : [ebp+0xC], 0x99
        jne public_6d0fb3c
        mov eax, dword ptr ss : [ebp+8]
        add eax, 0x138
        mov dword ptr ss : [ebp-0xC], eax
        mov ecx, dword ptr ss : [ebp-0xC]
        mov dword ptr ds : [ecx], 0
        mov edx, dword ptr ss : [ebp-0xC]
        mov dword ptr ds : [edx+4], 0
        mov eax, dword ptr ss : [ebp-0xC]
        mov dword ptr ds : [eax+8], 0
        mov ecx, dword ptr ss : [ebp-0xC]
        mov dword ptr ds : [ecx+0xC], 0xFFFFFFFF
        mov edx, dword ptr ss : [ebp-0xC]
        mov dword ptr ds : [edx+0x10], 0
        public_6d0fb3c : nop
        xor eax, eax
        public_6d0fb3e : nop
        mov esp, ebp
        pop ebp
        ret 0xC
        UNREACHABLE_TRAP(0x6d0fa68)
    }
}

#undef public_6d0fad6
#undef public_6d0fb3c
#undef public_6d0fb3e
