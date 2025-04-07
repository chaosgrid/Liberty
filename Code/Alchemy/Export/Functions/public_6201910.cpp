#include "Alchemy-PCH.h"


#define public_6201943 _public_6201943
#define public_620195d _public_620195d
#define public_6201969 _public_6201969
#define public_6201983 _public_6201983
#define public_620198b _public_620198b
#define public_620199f _public_620199f
#define public_62019a8 _public_62019a8
#define public_62019c0 _public_62019c0
#define public_62019ca _public_62019ca

PROC_DECLARE(0x6201910, internal_6201910, public_6201910);
extern "C" NAKED register_t __cdecl internal_6201910()
{
    __asm
    {
        mov al, byte ptr ds : [public_6257918]
        test al, al
        jne public_6201943
/*FIXUP push offset public_62552a8 @0x6201919*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_62552a8
        push 0x12C
        mov eax, 0x100002
/*FIXUP push offset public_6255088 @0x6201928*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6255088
/*FIXUP push offset public_625528c @0x620192d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_625528c
        push eax
        mov eax, dword ptr ds : [public_624b004]
        call dword ptr ds : [eax]
        add esp, 0x14
        or eax, 0xFFFFFFFF
        ret 0xC
        public_6201943 : nop
        mov ecx, dword ptr ss : [esp+8]
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        push esi
        test ebx, ebx
        mov dword ptr ds : [public_6257908], ecx
        jne public_620195d
        mov ebx, dword ptr ds : [public_62578b0]
        public_620195d : nop
        test ebx, ebx
        setne al
        test al, al
        mov esi, ebx
        je public_62019ca
        push edi
        public_6201969 : nop
        mov edx, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [edx+0x18]
        mov eax, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [eax+0x2C]
        test eax, eax
        je public_6201983
        mov ecx, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [ecx+0x2C]
        mov esi, eax
        jmp public_62019c0
        public_6201983 : nop
        cmp esi, ebx
        jne public_620198b
        xor esi, esi
        jmp public_62019c0
        public_620198b : nop
        mov edx, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [edx+0x34]
        test eax, eax
        push esi
        je public_620199f
        mov eax, dword ptr ds : [esi]
        call dword ptr ds : [eax+0x34]
        mov esi, eax
        jmp public_62019c0
        public_620199f : nop
        mov ecx, dword ptr ds : [esi]
        call dword ptr ds : [ecx+0x28]
        mov edi, eax
        xor esi, esi
        public_62019a8 : nop
        cmp edi, ebx
        je public_62019c0
        mov edx, dword ptr ds : [edi]
        push edi
        call dword ptr ds : [edx+0x34]
        mov esi, eax
        mov eax, dword ptr ds : [edi]
        push edi
        call dword ptr ds : [eax+0x28]
        test esi, esi
        mov edi, eax
        je public_62019a8
        public_62019c0 : nop
        test esi, esi
        setne al
        test al, al
        jne public_6201969
        pop edi
        public_62019ca : nop
        pop esi
        xor eax, eax
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6201910)
    }
}

#undef public_6201943
#undef public_620195d
#undef public_6201969
#undef public_6201983
#undef public_620198b
#undef public_620199f
#undef public_62019a8
#undef public_62019c0
#undef public_62019ca
