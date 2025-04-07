#include "RP8-PCH.h"


#define public_6d0ea6d _public_6d0ea6d
#define public_6d0ea72 _public_6d0ea72

PROC_DECLARE(0x6d0ea0b, internal_6d0ea0b, public_6d0ea0b);
extern "C" NAKED register_t __cdecl internal_6d0ea0b()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ecx
        mov eax, dword ptr ss : [ebp+8]
        cmp dword ptr ds : [eax+0x130], 0
        jne public_6d0ea6d
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
/*FIXUP push offset public_6d67c50 @0x6d0ea46*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d67c50
        push 0xD15
/*FIXUP push offset public_6d67c90 @0x6d0ea50*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d67c90
/*FIXUP push offset public_6d67cdc @0x6d0ea55*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d67cdc
        mov edx, dword ptr ss : [ebp-4]
        push edx
        mov eax, dword ptr ds : [public_6d5e018]
        call dword ptr ds : [eax]
        add esp, 0x14
        or eax, 0xFFFFFFFF
        jmp public_6d0ea72
        public_6d0ea6d : nop
        mov eax, 0xFFFFFFF9
        public_6d0ea72 : nop
        mov esp, ebp
        pop ebp
        ret 0x10
        UNREACHABLE_TRAP(0x6d0ea0b)
    }
}

#undef public_6d0ea6d
#undef public_6d0ea72
