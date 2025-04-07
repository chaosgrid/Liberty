#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6244510);

#define public_6244549 _public_6244549

PROC_DECLARE(0x6244510, internal_6244510, public_6244510);
extern "C" NAKED register_t __cdecl internal_6244510()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        test esi, esi
        jl public_6244549
        mov edx, dword ptr ds : [ecx+0x9C]
        test edx, edx
        je public_6244549
        mov eax, dword ptr ds : [ecx+0xA0]
        sub eax, edx
        sar eax, 2
        cmp esi, eax
        jae public_6244549
        mov ecx, dword ptr ss : [esp+0xC]
        mov eax, edx
        mov eax, dword ptr ds : [eax+esi*4]
        mov dword ptr ds : [ecx], eax
        push eax
        mov edx, dword ptr ds : [eax]
        call dword ptr ds : [edx+4]
        xor eax, eax
        pop esi
        ret 8
/*FIXUP public_6244549 : nop
        push offset public_6257668 @0x6244549*/
  FIXUP public_6244549 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6257668
        push 0x5C
        mov eax, 0x100001
/*FIXUP push offset public_6257620 @0x6244555*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6257620
/*FIXUP push offset public_625506c @0x624455a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_625506c
        push eax
        mov eax, dword ptr ds : [public_624b004]
        call dword ptr ds : [eax]
        add esp, 0x14
        or eax, 0xFFFFFFFF
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x6244510)
    }
}

#undef public_6244549
