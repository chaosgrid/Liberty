#include "Deformable2-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65f28b0);
CLANG_FORWARD_PROC_SYMBOL(public_65fb030);
CLANG_FORWARD_PROC_SYMBOL(public_6600c00);

#define public_65fb081 _public_65fb081

PROC_DECLARE(0x65fb030, internal_65fb030, public_65fb030);
extern "C" NAKED register_t __cdecl internal_65fb030()
{
    __asm
    {
        mov eax, 0x2000
        call public_6600c00
        mov eax, dword ptr ss : [esp+0x2004]
        cmp eax, 4
        jbe public_65fb081
        push 4
        push eax
        lea eax, ss:[esp+8]
/*FIXUP push offset public_6602a30 @0x65fb04d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6602a30
        push eax
        call public_65f28b0
        push eax
        push 0x15
/*FIXUP push offset public_66029e8 @0x65fb05b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66029e8
        mov ecx, 0x100002
/*FIXUP push offset public_66024c8 @0x65fb065*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66024c8
        push ecx
        mov ecx, dword ptr ds : [public_6601008]
        call dword ptr ds : [ecx]
        add esp, 0x24
        xor al, al
        add esp, 0x2000
        ret 4
        public_65fb081 : nop
        mov dword ptr ds : [ecx+0x40], eax
        mov al, 1
        add esp, 0x2000
        ret 4
        UNREACHABLE_TRAP(0x65fb030)
    }
}

#undef public_65fb081
