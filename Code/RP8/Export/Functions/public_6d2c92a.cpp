#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d2c92a);
CLANG_FORWARD_PROC_SYMBOL(public_6d2e9f0);

#define public_6d2c989 _public_6d2c989
#define public_6d2c99d _public_6d2c99d
#define public_6d2c9d5 _public_6d2c9d5
#define public_6d2c9de _public_6d2c9de
#define public_6d2ca37 _public_6d2ca37
#define public_6d2ca3d _public_6d2ca3d

PROC_DECLARE(0x6d2c92a, internal_6d2c92a, public_6d2c92a);
extern "C" NAKED register_t __cdecl internal_6d2c92a()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x3C
        mov dword ptr ss : [ebp-0x38], ecx
        mov eax, dword ptr ss : [ebp+8]
        mov dword ptr ss : [ebp-0x34], eax
        lea ecx, ss:[ebp-0x34]
        push ecx
        lea edx, ss:[ebp-0x14]
        push edx
        mov ecx, offset public_6d728cc
        call public_6d2e9f0
        mov eax, dword ptr ds : [public_6d728d0]
        mov dword ptr ss : [ebp-0x24], eax
        mov ecx, dword ptr ss : [ebp-0x24]
        mov dword ptr ss : [ebp-0x1C], ecx
        mov edx, dword ptr ss : [ebp-0x14]
        sub edx, dword ptr ss : [ebp-0x1C]
        neg edx
        sbb edx, edx
        inc edx
        xor eax, eax
        mov al, dl
        test eax, eax
        jne public_6d2c989
        mov ecx, dword ptr ss : [ebp-0x14]
        mov edx, dword ptr ss : [ebp-0x34]
        cmp edx, dword ptr ds : [ecx+0xC]
        sbb eax, eax
        neg eax
        xor ecx, ecx
        mov cl, al
        test ecx, ecx
        jne public_6d2c989
        lea edx, ss:[ebp-0x14]
        mov dword ptr ss : [ebp-0x3C], edx
        jmp public_6d2c99d
        public_6d2c989 : nop
        mov eax, dword ptr ds : [public_6d728d0]
        mov dword ptr ss : [ebp-0x2C], eax
        mov ecx, dword ptr ss : [ebp-0x2C]
        mov dword ptr ss : [ebp-0x20], ecx
        lea edx, ss:[ebp-0x20]
        mov dword ptr ss : [ebp-0x3C], edx
        public_6d2c99d : nop
        mov eax, dword ptr ss : [ebp-0x3C]
        mov dword ptr ss : [ebp-0x18], eax
        mov ecx, dword ptr ss : [ebp-0x18]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ss : [ebp-0xC], edx
        mov eax, dword ptr ds : [public_6d728d0]
        mov dword ptr ss : [ebp-0x30], eax
        mov ecx, dword ptr ss : [ebp-0x30]
        mov dword ptr ss : [ebp-0x10], ecx
        mov edx, dword ptr ss : [ebp-0xC]
        sub edx, dword ptr ss : [ebp-0x10]
        neg edx
        sbb edx, edx
        inc edx
        xor eax, eax
        mov al, dl
        test eax, eax
        je public_6d2c9d5
        mov dword ptr ss : [ebp-4], 0
        jmp public_6d2c9de
        public_6d2c9d5 : nop
        mov ecx, dword ptr ss : [ebp-0xC]
        add ecx, 0x10
        mov dword ptr ss : [ebp-4], ecx
        public_6d2c9de : nop
        cmp dword ptr ss : [ebp-4], 0
        jne public_6d2ca37
        mov edx, 3
        and edx, 0xF
        mov eax, dword ptr ss : [ebp-8]
        and eax, 0xFFFFFFF0
        or eax, edx
        mov dword ptr ss : [ebp-8], eax
        mov ecx, 0x10000
        and ecx, 0xFFFFFFF
        shl ecx, 4
        mov edx, dword ptr ss : [ebp-8]
        and edx, 0xF
        or edx, ecx
        mov dword ptr ss : [ebp-8], edx
/*FIXUP push offset public_6d6c240 @0x6d2ca10*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6c240
        push 0x14B
/*FIXUP push offset public_6d6c250 @0x6d2ca1a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6c250
/*FIXUP push offset public_6d6c29c @0x6d2ca1f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6c29c
        mov eax, dword ptr ss : [ebp-8]
        push eax
        mov ecx, dword ptr ds : [public_6d5e018]
        call dword ptr ds : [ecx]
        add esp, 0x14
        xor al, al
        jmp public_6d2ca3d
        public_6d2ca37 : nop
        mov edx, dword ptr ss : [ebp-4]
        mov al, byte ptr ds : [edx+1]
        public_6d2ca3d : nop
        mov esp, ebp
        pop ebp
        ret 4
        UNREACHABLE_TRAP(0x6d2c92a)
    }
}

#undef public_6d2c989
#undef public_6d2c99d
#undef public_6d2c9d5
#undef public_6d2c9de
#undef public_6d2ca37
#undef public_6d2ca3d
