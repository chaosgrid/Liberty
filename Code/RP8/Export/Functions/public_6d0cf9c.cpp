#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d2c7cf);
CLANG_FORWARD_PROC_SYMBOL(public_6d2cb6f);
CLANG_FORWARD_PROC_SYMBOL(public_6d2d032);

#define public_6d0cffe _public_6d0cffe
#define public_6d0d03e _public_6d0d03e

PROC_DECLARE(0x6d0cf9c, internal_6d0cf9c, public_6d0cf9c);
extern "C" NAKED register_t __cdecl internal_6d0cf9c()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ecx
        mov eax, dword ptr ss : [ebp+8]
        cmp dword ptr ds : [eax+0x130], 0
        jne public_6d0cffe
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
/*FIXUP push offset public_6d66f30 @0x6d0cfd7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d66f30
        push 0xB9E
/*FIXUP push offset public_6d66f68 @0x6d0cfe1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d66f68
/*FIXUP push offset public_6d66fb4 @0x6d0cfe6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d66fb4
        mov edx, dword ptr ss : [ebp-4]
        push edx
        mov eax, dword ptr ds : [public_6d5e018]
        call dword ptr ds : [eax]
        add esp, 0x14
        or eax, 0xFFFFFFFF
        jmp public_6d0d03e
        public_6d0cffe : nop
        push 0
        mov ecx, dword ptr ss : [ebp+0xC]
        push ecx
        mov ecx, dword ptr ss : [ebp+8]
        add ecx, 0x21F4
        call public_6d2cb6f
        mov edx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ds : [edx+0x130]
        push eax
        mov ecx, dword ptr ss : [ebp+8]
        add ecx, 0x21F4
        call public_6d2d032
        mov ecx, dword ptr ss : [ebp+0xC]
        push ecx
        mov ecx, dword ptr ss : [ebp+8]
        add ecx, 0x21F4
        call public_6d2c7cf
        xor eax, eax
        public_6d0d03e : nop
        mov esp, ebp
        pop ebp
        ret 8
        UNREACHABLE_TRAP(0x6d0cf9c)
    }
}

#undef public_6d0cffe
#undef public_6d0d03e
