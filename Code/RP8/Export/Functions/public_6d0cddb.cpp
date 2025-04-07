#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d2ca43);

#define public_6d0ce3d _public_6d0ce3d
#define public_6d0ce51 _public_6d0ce51

PROC_DECLARE(0x6d0cddb, internal_6d0cddb, public_6d0cddb);
extern "C" NAKED register_t __cdecl internal_6d0cddb()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ecx
        mov eax, dword ptr ss : [ebp+8]
        cmp dword ptr ds : [eax+0x130], 0
        jne public_6d0ce3d
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
/*FIXUP push offset public_6d66d80 @0x6d0ce16*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d66d80
        push 0xB7B
/*FIXUP push offset public_6d66db8 @0x6d0ce20*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d66db8
/*FIXUP push offset public_6d66e04 @0x6d0ce25*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d66e04
        mov edx, dword ptr ss : [ebp-4]
        push edx
        mov eax, dword ptr ds : [public_6d5e018]
        call dword ptr ds : [eax]
        add esp, 0x14
        or eax, 0xFFFFFFFF
        jmp public_6d0ce51
        public_6d0ce3d : nop
        mov ecx, dword ptr ss : [ebp+0xC]
        push ecx
        mov ecx, dword ptr ss : [ebp+8]
        add ecx, 0x21F4
        call public_6d2ca43
        xor eax, eax
        public_6d0ce51 : nop
        mov esp, ebp
        pop ebp
        ret 8
        UNREACHABLE_TRAP(0x6d0cddb)
    }
}

#undef public_6d0ce3d
#undef public_6d0ce51
