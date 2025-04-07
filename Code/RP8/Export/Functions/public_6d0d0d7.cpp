#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d2cb6f);

#define public_6d0d139 _public_6d0d139
#define public_6d0d151 _public_6d0d151

PROC_DECLARE(0x6d0d0d7, internal_6d0d0d7, public_6d0d0d7);
extern "C" NAKED register_t __cdecl internal_6d0d0d7()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ecx
        mov eax, dword ptr ss : [ebp+8]
        cmp dword ptr ds : [eax+0x130], 0
        jne public_6d0d139
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
/*FIXUP push offset public_6d67068 @0x6d0d112*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d67068
        push 0xBB8
/*FIXUP push offset public_6d670a0 @0x6d0d11c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d670a0
/*FIXUP push offset public_6d670ec @0x6d0d121*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d670ec
        mov edx, dword ptr ss : [ebp-4]
        push edx
        mov eax, dword ptr ds : [public_6d5e018]
        call dword ptr ds : [eax]
        add esp, 0x14
        or eax, 0xFFFFFFFF
        jmp public_6d0d151
        public_6d0d139 : nop
        mov ecx, dword ptr ss : [ebp+0x10]
        push ecx
        mov edx, dword ptr ss : [ebp+0xC]
        push edx
        mov ecx, dword ptr ss : [ebp+8]
        add ecx, 0x21F4
        call public_6d2cb6f
        xor eax, eax
        public_6d0d151 : nop
        mov esp, ebp
        pop ebp
        ret 0xC
        UNREACHABLE_TRAP(0x6d0d0d7)
    }
}

#undef public_6d0d139
#undef public_6d0d151
