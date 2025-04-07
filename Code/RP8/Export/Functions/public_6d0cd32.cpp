#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d2c7cf);
CLANG_FORWARD_PROC_SYMBOL(public_6d2d032);

#define public_6d0cd94 _public_6d0cd94
#define public_6d0cdd5 _public_6d0cdd5

PROC_DECLARE(0x6d0cd32, internal_6d0cd32, public_6d0cd32);
extern "C" NAKED register_t __cdecl internal_6d0cd32()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ecx
        mov eax, dword ptr ss : [ebp+8]
        cmp dword ptr ds : [eax+0x130], 0
        jne public_6d0cd94
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
/*FIXUP push offset public_6d66ce0 @0x6d0cd6d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d66ce0
        push 0xB6C
/*FIXUP push offset public_6d66d18 @0x6d0cd77*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d66d18
/*FIXUP push offset public_6d66d64 @0x6d0cd7c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d66d64
        mov edx, dword ptr ss : [ebp-4]
        push edx
        mov eax, dword ptr ds : [public_6d5e018]
        call dword ptr ds : [eax]
        add esp, 0x14
        or eax, 0xFFFFFFFF
        jmp public_6d0cdd5
        public_6d0cd94 : nop
        push 0
        mov ecx, dword ptr ss : [ebp+0xC]
        push ecx
        mov edx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ss : [ebp+8]
        push ecx
        call dword ptr ds : [eax+0xA4]
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
        public_6d0cdd5 : nop
        mov esp, ebp
        pop ebp
        ret 8
        UNREACHABLE_TRAP(0x6d0cd32)
    }
}

#undef public_6d0cd94
#undef public_6d0cdd5
