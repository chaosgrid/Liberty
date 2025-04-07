#include "Alchemy-PCH.h"


#define public_6201447 _public_6201447
#define public_6201476 _public_6201476
#define public_62014a5 _public_62014a5
#define public_62014d4 _public_62014d4
#define public_6201501 _public_6201501
#define public_6201525 _public_6201525
#define public_6201546 _public_6201546
#define public_62015a7 _public_62015a7
#define public_62015c9 _public_62015c9
#define public_62015db _public_62015db
#define public_62015ed _public_62015ed

PROC_DECLARE(0x62013f0, internal_62013f0, public_62013f0);
extern "C" NAKED register_t __cdecl internal_62013f0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        sub esp, 8
        mov eax, dword ptr ds : [eax+8]
        push esi
        mov esi, ecx
        mov dword ptr ds : [public_625790c], eax
        mov dword ptr ds : [public_6257bb8], esi
        mov ecx, dword ptr ds : [eax]
/*FIXUP push offset public_6257bc0 @0x620140a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6257bc0
/*FIXUP push offset public_6255274 @0x620140f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6255274
        push eax
        call dword ptr ds : [ecx]
        test eax, eax
        jge public_6201447
        mov edx, dword ptr ds : [public_624b004]
/*FIXUP push offset public_625523c @0x6201421*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_625523c
        push 0x75
        mov eax, 0x100001
/*FIXUP push offset public_6255088 @0x620142d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6255088
/*FIXUP push offset public_625506c @0x6201432*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_625506c
        push eax
        call dword ptr ds : [edx]
        add esp, 0x14
        or eax, 0xFFFFFFFF
        pop esi
        add esp, 8
        ret 4
        public_6201447 : nop
        mov eax, dword ptr ds : [public_6257bc0]
        push eax
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+8]
        mov eax, dword ptr ds : [public_625790c]
/*FIXUP push offset public_6257bbc @0x6201457*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6257bbc
/*FIXUP push offset public_6255224 @0x620145c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6255224
        push eax
        mov edx, dword ptr ds : [eax]
        call dword ptr ds : [edx]
        test eax, eax
        jge public_6201476
/*FIXUP push offset public_62551ec @0x620146a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_62551ec
        push 0x7C
        jmp public_6201501
        public_6201476 : nop
        mov eax, dword ptr ds : [public_6257bbc]
        push eax
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+8]
        mov eax, dword ptr ds : [public_625790c]
/*FIXUP push offset public_6257bc4 @0x6201486*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6257bc4
/*FIXUP push offset public_62551d4 @0x620148b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_62551d4
        push eax
        mov edx, dword ptr ds : [eax]
        call dword ptr ds : [edx]
        test eax, eax
        jge public_62014a5
/*FIXUP push offset public_625519c @0x6201499*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_625519c
        push 0x8D
        jmp public_6201501
        public_62014a5 : nop
        mov eax, dword ptr ds : [public_6257bc4]
        push eax
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+8]
        mov eax, dword ptr ds : [public_625790c]
/*FIXUP push offset public_6257bc8 @0x62014b5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6257bc8
/*FIXUP push offset public_6255188 @0x62014ba*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6255188
        push eax
        mov edx, dword ptr ds : [eax]
        call dword ptr ds : [edx]
        test eax, eax
        jge public_62014d4
/*FIXUP push offset public_6255154 @0x62014c8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6255154
        push 0x94
        jmp public_6201501
        public_62014d4 : nop
        mov eax, dword ptr ds : [public_6257bc8]
        push eax
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+8]
        mov eax, dword ptr ds : [public_625790c]
/*FIXUP push offset public_6257bcc @0x62014e4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6257bcc
/*FIXUP push offset public_6255144 @0x62014e9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6255144
        push eax
        mov edx, dword ptr ds : [eax]
        call dword ptr ds : [edx]
        test eax, eax
        jge public_6201525
/*FIXUP push offset public_6255114 @0x62014f7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6255114
        push 0x9B
        public_6201501 : nop
        mov eax, 0x100001
/*FIXUP push offset public_6255088 @0x6201506*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6255088
/*FIXUP push offset public_625506c @0x620150b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_625506c
        push eax
        mov eax, dword ptr ds : [public_624b004]
        call dword ptr ds : [eax]
        add esp, 0x14
        or eax, 0xFFFFFFFF
        pop esi
        add esp, 8
        ret 4
        public_6201525 : nop
        mov eax, dword ptr ds : [public_6257bcc]
        push eax
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+8]
        mov eax, dword ptr ds : [esi+0x28]
        add esi, 0x28
        test eax, eax
        je public_6201546
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [esi], 0
        public_6201546 : nop
        push edi
        mov dword ptr ss : [esp+8], 8
        mov dword ptr ss : [esp+0xC], offset public_625510c
        call dword ptr ds : [public_624b008]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+8]
        push esi
        push edx
        push eax
        call dword ptr ds : [ecx+0xC]
        mov eax, dword ptr ds : [esi]
        push 0x7F7FFFFF
        push eax
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+0x6C]
        mov edi, dword ptr ds : [public_62578b0]
        mov esi, dword ptr ds : [esi]
        test edi, edi
        jne public_62015a7
        mov dword ptr ds : [public_62578b0], esi
        mov edx, dword ptr ds : [esi]
        push edi
        push esi
        call dword ptr ds : [edx+0x48]
        mov eax, dword ptr ds : [esi]
        push edi
        push esi
        call dword ptr ds : [eax+0x50]
        mov ecx, dword ptr ds : [esi]
        push edi
        push esi
        call dword ptr ds : [ecx+0x54]
        pop edi
        xor eax, eax
        pop esi
        add esp, 8
        ret 4
        public_62015a7 : nop
        mov edx, dword ptr ds : [esi]
        push edi
        push esi
        call dword ptr ds : [edx+0x48]
        mov eax, dword ptr ds : [edi]
        push edi
        call dword ptr ds : [eax+0x2C]
        test eax, eax
        jne public_62015c9
        mov ecx, dword ptr ds : [edi]
        push esi
        push edi
        call dword ptr ds : [ecx+0x4C]
        pop edi
        xor eax, eax
        pop esi
        add esp, 8
        ret 4
        public_62015c9 : nop
        mov edx, dword ptr ds : [edi]
        push edi
        call dword ptr ds : [edx+0x2C]
        mov edi, eax
        push edi
        mov eax, dword ptr ds : [edi]
        call dword ptr ds : [eax+0x34]
        test eax, eax
        je public_62015ed
        public_62015db : nop
        mov ecx, dword ptr ds : [edi]
        push edi
        call dword ptr ds : [ecx+0x34]
        mov edi, eax
        push edi
        mov edx, dword ptr ds : [edi]
        call dword ptr ds : [edx+0x34]
        test eax, eax
        jne public_62015db
        public_62015ed : nop
        mov eax, dword ptr ds : [edi]
        push esi
        push edi
        call dword ptr ds : [eax+0x54]
        mov ecx, dword ptr ds : [esi]
        push edi
        push esi
        call dword ptr ds : [ecx+0x50]
        mov edx, dword ptr ds : [esi]
        push 0
        push esi
        call dword ptr ds : [edx+0x54]
        pop edi
        xor eax, eax
        pop esi
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x62013f0)
    }
}

#undef public_6201447
#undef public_6201476
#undef public_62014a5
#undef public_62014d4
#undef public_6201501
#undef public_6201525
#undef public_6201546
#undef public_62015a7
#undef public_62015c9
#undef public_62015db
#undef public_62015ed
