#include "Alchemy-PCH.h"


#define public_620135d _public_620135d
#define public_62013b0 _public_62013b0
#define public_62013ba _public_62013ba

PROC_DECLARE(0x6201330, internal_6201330, public_6201330);
extern "C" NAKED register_t __cdecl internal_6201330()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6257bc4]
        test eax, eax
        je public_62013b0
        mov ecx, dword ptr ds : [public_625791c]
        test ecx, ecx
        je public_620135d
        mov ecx, dword ptr ds : [eax]
/*FIXUP push offset public_625791c @0x6201345*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_625791c
        push eax
        call dword ptr ds : [ecx+0x10]
        mov eax, dword ptr ds : [public_6257bc4]
        mov dword ptr ds : [public_625791c], 0
        public_620135d : nop
        mov ecx, dword ptr ds : [public_6255064]
        mov edx, dword ptr ds : [eax]
        push 1
/*FIXUP push offset public_625791c @0x6201367*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_625791c
        push ecx
        push 0x142
        push eax
        call dword ptr ds : [edx+0xC]
        test eax, eax
        jge public_62013ba
        mov edx, dword ptr ds : [public_624b004]
/*FIXUP push offset public_62550cc @0x6201380*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_62550cc
        push 0x43
        mov eax, 0x100001
/*FIXUP push offset public_6255088 @0x620138c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6255088
/*FIXUP push offset public_625506c @0x6201391*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_625506c
        push eax
        call dword ptr ds : [edx]
        mov eax, dword ptr ds : [public_6257bc4]
        add esp, 0x14
        test eax, eax
        je public_62013b0
        mov ecx, dword ptr ds : [eax]
/*FIXUP push offset public_625791c @0x62013a7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_625791c
        push eax
        call dword ptr ds : [ecx+0x10]
        public_62013b0 : nop
        mov dword ptr ds : [public_625791c], 0
        public_62013ba : nop
        xor eax, eax
        ret 4
        UNREACHABLE_TRAP(0x6201330)
    }
}

#undef public_620135d
#undef public_62013b0
#undef public_62013ba
