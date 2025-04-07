#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d04138);

#define public_6d10393 _public_6d10393
#define public_6d103ba _public_6d103ba
#define public_6d103c5 _public_6d103c5
#define public_6d103ed _public_6d103ed
#define public_6d1040d _public_6d1040d
#define public_6d1044e _public_6d1044e
#define public_6d104cf _public_6d104cf
#define public_6d104e5 _public_6d104e5
#define public_6d1055a _public_6d1055a
#define public_6d10570 _public_6d10570
#define public_6d1058f _public_6d1058f
#define public_6d10598 _public_6d10598
#define public_6d10619 _public_6d10619
#define public_6d10629 _public_6d10629
#define public_6d10634 _public_6d10634
#define public_6d10639 _public_6d10639
#define public_6d10679 _public_6d10679

PROC_DECLARE(0x6d10322, internal_6d10322, public_6d10322);
extern "C" NAKED register_t __cdecl internal_6d10322()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x68
        mov eax, dword ptr ss : [ebp+8]
        mov cl, byte ptr ds : [eax+0x184]
        and cl, 1
        xor edx, edx
        mov dl, cl
        test edx, edx
        jne public_6d10393
        mov eax, 2
        and eax, 0xF
        mov ecx, dword ptr ss : [ebp-0x20]
        and ecx, 0xFFFFFFF0
        or ecx, eax
        mov dword ptr ss : [ebp-0x20], ecx
        mov edx, 0x10000
        and edx, 0xFFFFFFF
        shl edx, 4
        mov eax, dword ptr ss : [ebp-0x20]
        and eax, 0xF
        or eax, edx
        mov dword ptr ss : [ebp-0x20], eax
/*FIXUP push offset public_6d68bd8 @0x6d10368*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d68bd8
        push 0xE85
/*FIXUP push offset public_6d68c18 @0x6d10372*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d68c18
/*FIXUP push offset public_6d68c64 @0x6d10377*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d68c64
        mov ecx, dword ptr ss : [ebp-0x20]
        push ecx
        mov edx, dword ptr ds : [public_6d5e018]
        call dword ptr ds : [edx]
        add esp, 0x14
        or eax, 0xFFFFFFFF
        jmp public_6d10679
        public_6d10393 : nop
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ds : [eax+0x39C]
        mov dword ptr ss : [ebp-4], ecx
        mov dword ptr ss : [ebp-0xC], 0x52
        cmp dword ptr ss : [ebp-4], 1
        jne public_6d103ba
        mov edx, dword ptr ss : [ebp-0xC]
        or edx, 0x100
        mov dword ptr ss : [ebp-0xC], edx
        jmp public_6d103c5
        public_6d103ba : nop
        mov eax, dword ptr ss : [ebp-0xC]
        or eax, 0x200
        mov dword ptr ss : [ebp-0xC], eax
        public_6d103c5 : nop
        mov dword ptr ss : [ebp-0x28], 0
        mov ecx, dword ptr ss : [ebp+8]
        add ecx, 0x138
        mov dword ptr ss : [ebp-0x24], ecx
        mov edx, dword ptr ss : [ebp-0x24]
        mov eax, dword ptr ss : [ebp-0x28]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6d103ed
        mov ecx, dword ptr ss : [ebp-0x24]
        mov edx, dword ptr ss : [ebp-0xC]
        cmp edx, dword ptr ds : [ecx]
        je public_6d1040d
        public_6d103ed : nop
        mov eax, dword ptr ss : [ebp-0x24]
        mov cl, byte ptr ds : [eax+0x10]
        or cl, 1
        mov edx, dword ptr ss : [ebp-0x24]
        mov byte ptr ds : [edx+0x10], cl
        mov eax, dword ptr ss : [ebp-0x24]
        mov ecx, dword ptr ss : [ebp-0x28]
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ss : [ebp-0x24]
        mov eax, dword ptr ss : [ebp-0xC]
        mov dword ptr ds : [edx], eax
        public_6d1040d : nop
        mov ecx, dword ptr ss : [ebp+8]
        call public_6d04138
        lea ecx, ss:[ebp-0x10]
        push ecx
        mov edx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ds : [edx+0x130]
        mov ecx, dword ptr ss : [ebp+8]
        mov edx, dword ptr ds : [ecx+0x130]
        mov eax, dword ptr ds : [eax]
        push edx
        call dword ptr ds : [eax+0x100]
        mov dword ptr ss : [ebp-8], eax
        cmp dword ptr ss : [ebp-8], 0
        jl public_6d10639
        cmp dword ptr ss : [ebp-0x10], 0
        jne public_6d1044e
        mov dword ptr ss : [ebp-8], 0x80004005
        public_6d1044e : nop
        mov ecx, dword ptr ss : [ebp+8]
        mov edx, dword ptr ds : [ecx+0x39C]
        mov dword ptr ss : [ebp-0x14], edx
        mov dword ptr ss : [ebp-0x38], 1
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ds : [eax+0x130]
        mov dword ptr ss : [ebp-0x34], ecx
        mov edx, dword ptr ss : [ebp-0x14]
        imul edx, 0xE8
        mov eax, dword ptr ss : [ebp+8]
        lea ecx, ds:[eax+edx+0x185C]
        mov dword ptr ss : [ebp-0x30], ecx
        mov edx, dword ptr ss : [ebp-0x30]
        movzx eax, byte ptr ds : [edx+4]
        test eax, eax
        jne public_6d104cf
        mov ecx, dword ptr ss : [ebp-0x30]
        push ecx
        mov edx, dword ptr ss : [ebp-0x38]
        push edx
        mov eax, dword ptr ss : [ebp-0x14]
        push eax
        mov ecx, dword ptr ss : [ebp-0x34]
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ss : [ebp-0x34]
        push eax
        call dword ptr ds : [edx+0xF8]
        mov dword ptr ss : [ebp-0x2C], eax
        xor ecx, ecx
        cmp dword ptr ss : [ebp-0x2C], 0
        setge cl
        mov edx, dword ptr ss : [ebp-0x30]
        mov byte ptr ds : [edx+4], cl
        mov eax, dword ptr ss : [ebp-0x30]
        movzx ecx, byte ptr ds : [eax+4]
        test ecx, ecx
        jne public_6d104cf
        mov edx, dword ptr ss : [ebp-0x30]
        mov dword ptr ds : [edx], 0
        public_6d104cf : nop
        mov eax, dword ptr ss : [ebp-0x30]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [ebp-0x3C], ecx
        cmp dword ptr ss : [ebp-0x3C], 1
        je public_6d104e5
        or eax, 0xFFFFFFFF
        jmp public_6d10679
        public_6d104e5 : nop
        mov dword ptr ss : [ebp-0x4C], 4
        mov edx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ds : [edx+0x130]
        mov dword ptr ss : [ebp-0x48], eax
        mov ecx, dword ptr ss : [ebp-0x14]
        imul ecx, 0xE8
        mov edx, dword ptr ss : [ebp+8]
        lea eax, ds:[edx+ecx+0x1874]
        mov dword ptr ss : [ebp-0x44], eax
        mov ecx, dword ptr ss : [ebp-0x44]
        movzx edx, byte ptr ds : [ecx+4]
        test edx, edx
        jne public_6d1055a
        mov eax, dword ptr ss : [ebp-0x44]
        push eax
        mov ecx, dword ptr ss : [ebp-0x4C]
        push ecx
        mov edx, dword ptr ss : [ebp-0x14]
        push edx
        mov eax, dword ptr ss : [ebp-0x48]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ss : [ebp-0x48]
        push edx
        call dword ptr ds : [ecx+0xF8]
        mov dword ptr ss : [ebp-0x40], eax
        xor eax, eax
        cmp dword ptr ss : [ebp-0x40], 0
        setge al
        mov ecx, dword ptr ss : [ebp-0x44]
        mov byte ptr ds : [ecx+4], al
        mov edx, dword ptr ss : [ebp-0x44]
        movzx eax, byte ptr ds : [edx+4]
        test eax, eax
        jne public_6d1055a
        mov ecx, dword ptr ss : [ebp-0x44]
        mov dword ptr ds : [ecx], 0
        public_6d1055a : nop
        mov edx, dword ptr ss : [ebp-0x44]
        mov eax, dword ptr ds : [edx]
        mov dword ptr ss : [ebp-0x50], eax
        cmp dword ptr ss : [ebp-0x50], 1
        je public_6d10570
        or eax, 0xFFFFFFFF
        jmp public_6d10679
        public_6d10570 : nop
        mov ecx, dword ptr ss : [ebp+8]
        mov edx, dword ptr ds : [ecx+0x3E4]
        mov dword ptr ss : [ebp-0x54], edx
        cmp dword ptr ss : [ebp-0x54], 0
        je public_6d10639
        mov dword ptr ss : [ebp-0x18], 0
        jmp public_6d10598
        public_6d1058f : nop
        mov eax, dword ptr ss : [ebp-0x18]
        add eax, 1
        mov dword ptr ss : [ebp-0x18], eax
        public_6d10598 : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        cmp ecx, dword ptr ss : [ebp-0x14]
        ja public_6d10639
        mov dword ptr ss : [ebp-0x64], 1
        mov edx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ds : [edx+0x130]
        mov dword ptr ss : [ebp-0x60], eax
        mov ecx, dword ptr ss : [ebp-0x18]
        imul ecx, 0xE8
        mov edx, dword ptr ss : [ebp+8]
        lea eax, ds:[edx+ecx+0x185C]
        mov dword ptr ss : [ebp-0x5C], eax
        mov ecx, dword ptr ss : [ebp-0x5C]
        movzx edx, byte ptr ds : [ecx+4]
        test edx, edx
        jne public_6d10619
        mov eax, dword ptr ss : [ebp-0x5C]
        push eax
        mov ecx, dword ptr ss : [ebp-0x64]
        push ecx
        mov edx, dword ptr ss : [ebp-0x18]
        push edx
        mov eax, dword ptr ss : [ebp-0x60]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ss : [ebp-0x60]
        push edx
        call dword ptr ds : [ecx+0xF8]
        mov dword ptr ss : [ebp-0x58], eax
        xor eax, eax
        cmp dword ptr ss : [ebp-0x58], 0
        setge al
        mov ecx, dword ptr ss : [ebp-0x5C]
        mov byte ptr ds : [ecx+4], al
        mov edx, dword ptr ss : [ebp-0x5C]
        movzx eax, byte ptr ds : [edx+4]
        test eax, eax
        jne public_6d10619
        mov ecx, dword ptr ss : [ebp-0x5C]
        mov dword ptr ds : [ecx], 0
        public_6d10619 : nop
        mov edx, dword ptr ss : [ebp-0x5C]
        mov eax, dword ptr ds : [edx]
        mov dword ptr ss : [ebp-0x1C], eax
        cmp dword ptr ss : [ebp-0x1C], 1
        jne public_6d10629
        jmp public_6d10639
        public_6d10629 : nop
        cmp dword ptr ss : [ebp-0x1C], 5
        jne public_6d10634
        or eax, 0xFFFFFFFF
        jmp public_6d10679
        public_6d10634 : nop
        jmp public_6d1058f
        public_6d10639 : nop
        mov ecx, dword ptr ss : [ebp+8]
        add ecx, 0x138
        mov dword ptr ss : [ebp-0x68], ecx
        mov edx, dword ptr ss : [ebp-0x68]
        mov dword ptr ds : [edx], 0
        mov eax, dword ptr ss : [ebp-0x68]
        mov dword ptr ds : [eax+4], 0
        mov ecx, dword ptr ss : [ebp-0x68]
        mov dword ptr ds : [ecx+8], 0
        mov edx, dword ptr ss : [ebp-0x68]
        mov dword ptr ds : [edx+0xC], 0xFFFFFFFF
        mov eax, dword ptr ss : [ebp-0x68]
        mov dword ptr ds : [eax+0x10], 0
        mov eax, dword ptr ss : [ebp-8]
        public_6d10679 : nop
        mov esp, ebp
        pop ebp
        ret 4
        UNREACHABLE_TRAP(0x6d10322)
    }
}

#undef public_6d10393
#undef public_6d103ba
#undef public_6d103c5
#undef public_6d103ed
#undef public_6d1040d
#undef public_6d1044e
#undef public_6d104cf
#undef public_6d104e5
#undef public_6d1055a
#undef public_6d10570
#undef public_6d1058f
#undef public_6d10598
#undef public_6d10619
#undef public_6d10629
#undef public_6d10634
#undef public_6d10639
#undef public_6d10679
