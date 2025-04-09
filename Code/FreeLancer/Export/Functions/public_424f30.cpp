#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4249c0);
CLANG_FORWARD_PROC_SYMBOL(public_424f30);
CLANG_FORWARD_PROC_SYMBOL(public_5b27c0);

#define public_424f58 _public_424f58
#define public_424f76 _public_424f76
#define public_424f87 _public_424f87
#define public_424f8b _public_424f8b
#define public_424f94 _public_424f94
#define public_424fb6 _public_424fb6
#define public_425027 _public_425027
#define public_42502c _public_42502c
#define public_425030 _public_425030
#define public_425049 _public_425049
#define public_42504b _public_42504b
#define public_42507f _public_42507f

PROC_DECLARE(0x424f30, internal_424f30, public_424f30);
extern "C" NAKED register_t __cdecl internal_424f30()
{
    __asm
    {
        mov cl, byte ptr ds : [public_610865]
        xor al, al
        test cl, cl
        mov byte ptr ds : [public_6679f8], al
        je public_42507f
        mov al, byte ptr ds : [public_67ecbc]
        test al, al
        je public_424f58
        push 0
        call public_5b27c0
        add esp, 4
        public_424f58 : nop
        mov eax, dword ptr ds : [public_61084c]
        cmp eax, dword ptr ds : [public_610848]
        je public_424f94
        cmp eax, 0x18
        jne public_424f76
        push 0x30000
        push 0x20000
        jmp public_424f8b
        public_424f76 : nop
        cmp eax, 0x35
        jne public_424f87
        push 0x30000
        push 0x10000
        jmp public_424f8b
        public_424f87 : nop
        push 0
        push 0
        public_424f8b : nop
        call dword ptr ds : [public_5c70cc]
        add esp, 8
        public_424f94 : nop
        mov al, byte ptr ds : [public_610864]
        test al, al
        je public_424fb6
        mov eax, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0xE4]
        test eax, eax
        setge byte ptr ds : [public_6679f8]
        public_424fb6 : nop
        mov al, byte ptr ds : [public_6679f8]
        test al, al
        jne public_425030
        push 0x3E8
        call dword ptr ds : [public_5c6ed8]
        mov edx, dword ptr ds : [public_6679f4]
/*FIXUP push offset public_679bc0 @0x424fd0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_679bc0
/*FIXUP push offset public_679bc0 @0x424fd5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_679bc0
        push edx
        call public_4249c0
        add esp, 0xC
        test al, al
        je public_425027
        mov eax, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push 0
        push 3
        push eax
        call dword ptr ds : [ecx+0x3C]
        mov edx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x40]
        test eax, eax
        jl public_425027
        mov edx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0xE4]
        test eax, eax
        setge al
        mov byte ptr ds : [public_6679f8], al
        jmp public_42502c
        public_425027 : nop
        mov al, byte ptr ds : [public_6679f8]
        public_42502c : nop
        test al, al
        je public_42507f
        public_425030 : nop
        cmp dword ptr ds : [public_679bd0], 0x10
        jne public_425049
        mov eax, dword ptr ds : [public_61085c]
        test eax, eax
        je public_425049
        mov ecx, 1
        jmp public_42504b
        public_425049 : nop
        xor ecx, ecx
        public_42504b : nop
        mov edx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [edx]
        mov edx, dword ptr ds : [eax]
        push ecx
        push 0x1A
        push eax
        call dword ptr ds : [edx+0xF0]
        mov edx, dword ptr ds : [public_610860]
        mov eax, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push edx
        push 0x12
        push 0
        push eax
        call dword ptr ds : [ecx+0xF8]
        mov al, byte ptr ds : [public_6679f8]
        public_42507f : nop
        ret 
        UNREACHABLE_TRAP(0x424f30)
    }
}

#undef public_424f58
#undef public_424f76
#undef public_424f87
#undef public_424f8b
#undef public_424f94
#undef public_424fb6
#undef public_425027
#undef public_42502c
#undef public_425030
#undef public_425049
#undef public_42504b
#undef public_42507f
