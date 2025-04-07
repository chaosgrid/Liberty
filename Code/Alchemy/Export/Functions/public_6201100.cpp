#include "Alchemy-PCH.h"


#define public_620112d _public_620112d
#define public_6201180 _public_6201180
#define public_620118d _public_620118d

PROC_DECLARE(0x6201100, internal_6201100, public_6201100);
extern "C" NAKED register_t __cdecl internal_6201100()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6257bc4]
        test eax, eax
        je public_6201180
        mov ecx, dword ptr ds : [public_625791c]
        test ecx, ecx
        je public_620112d
        mov ecx, dword ptr ds : [eax]
/*FIXUP push offset public_625791c @0x6201115*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_625791c
        push eax
        call dword ptr ds : [ecx+0x10]
        mov eax, dword ptr ds : [public_6257bc4]
        mov dword ptr ds : [public_625791c], 0
        public_620112d : nop
        mov ecx, dword ptr ds : [public_6255064]
        mov edx, dword ptr ds : [eax]
        push 1
/*FIXUP push offset public_625791c @0x6201137*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_625791c
        push ecx
        push 0x142
        push eax
        call dword ptr ds : [edx+0xC]
        test eax, eax
        jge public_620118d
        mov edx, dword ptr ds : [public_624b004]
/*FIXUP push offset public_62550cc @0x6201150*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_62550cc
        push 0x43
        mov eax, 0x100001
/*FIXUP push offset public_6255088 @0x620115c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6255088
/*FIXUP push offset public_625506c @0x6201161*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_625506c
        push eax
        call dword ptr ds : [edx]
        mov eax, dword ptr ds : [public_6257bc4]
        add esp, 0x14
        test eax, eax
        je public_6201180
        mov ecx, dword ptr ds : [eax]
/*FIXUP push offset public_625791c @0x6201177*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_625791c
        push eax
        call dword ptr ds : [ecx+0x10]
        public_6201180 : nop
        mov dword ptr ds : [public_625791c], 0
        xor al, al
        ret 
        public_620118d : nop
        mov al, 1
        ret 
        UNREACHABLE_TRAP(0x6201100)
    }
}

#undef public_620112d
#undef public_6201180
#undef public_620118d
