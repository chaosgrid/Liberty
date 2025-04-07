#include "RP8-PCH.h"


#define public_6d08434 _public_6d08434
#define public_6d08440 _public_6d08440
#define public_6d08447 _public_6d08447
#define public_6d0845b _public_6d0845b

PROC_DECLARE(0x6d083d2, internal_6d083d2, public_6d083d2);
extern "C" NAKED register_t __cdecl internal_6d083d2()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ecx
        mov eax, dword ptr ss : [ebp+8]
        cmp dword ptr ds : [eax+0x1A8], 0xFFFFFFFF
        jne public_6d08434
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
/*FIXUP push offset public_6d64f60 @0x6d0840d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d64f60
        push 0x6FC
/*FIXUP push offset public_6d64fa0 @0x6d08417*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d64fa0
/*FIXUP push offset public_6d64fec @0x6d0841c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d64fec
        mov edx, dword ptr ss : [ebp-4]
        push edx
        mov eax, dword ptr ds : [public_6d5e018]
        call dword ptr ds : [eax]
        add esp, 0x14
        or eax, 0xFFFFFFFF
        jmp public_6d0845b
        public_6d08434 : nop
        cmp dword ptr ss : [ebp+0xC], 0x14
        ja public_6d08440
        cmp dword ptr ss : [ebp+0x10], 0
        jne public_6d08447
        public_6d08440 : nop
        mov eax, 0xFFFFFFFE
        jmp public_6d0845b
        public_6d08447 : nop
        mov ecx, dword ptr ss : [ebp+0x10]
        mov edx, dword ptr ss : [ebp+0xC]
        mov eax, dword ptr ss : [ebp+8]
        mov edx, dword ptr ds : [eax+edx*4+0x3FC]
        mov dword ptr ds : [ecx], edx
        xor eax, eax
        public_6d0845b : nop
        mov esp, ebp
        pop ebp
        ret 0xC
        UNREACHABLE_TRAP(0x6d083d2)
    }
}

#undef public_6d08434
#undef public_6d08440
#undef public_6d08447
#undef public_6d0845b
