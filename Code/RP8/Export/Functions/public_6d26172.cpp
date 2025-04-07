#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d16e50);
CLANG_FORWARD_PROC_SYMBOL(public_6d26172);
CLANG_FORWARD_PROC_SYMBOL(public_6d280f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d282b0);
CLANG_FORWARD_PROC_SYMBOL(public_6d28420);
CLANG_FORWARD_PROC_SYMBOL(public_6d2f0d0);
CLANG_FORWARD_PROC_SYMBOL(public_6d2f249);

#define public_6d261c5 _public_6d261c5
#define public_6d261d0 _public_6d261d0
#define public_6d261da _public_6d261da
#define public_6d26218 _public_6d26218
#define public_6d262c0 _public_6d262c0
#define public_6d262cb _public_6d262cb
#define public_6d262d5 _public_6d262d5
#define public_6d262e2 _public_6d262e2
#define public_6d26409 _public_6d26409
#define public_6d2640b _public_6d2640b
#define public_6d2642a _public_6d2642a
#define public_6d26450 _public_6d26450
#define public_6d26471 _public_6d26471
#define public_6d264b3 _public_6d264b3
#define public_6d264b5 _public_6d264b5
#define public_6d264db _public_6d264db
#define public_6d26507 _public_6d26507
#define public_6d2652c _public_6d2652c
#define public_6d26577 _public_6d26577
#define public_6d2657c _public_6d2657c
#define public_6d265a2 _public_6d265a2
#define public_6d265d7 _public_6d265d7
#define public_6d265fc _public_6d265fc

PROC_DECLARE(0x6d26172, internal_6d26172, public_6d26172);
extern "C" NAKED register_t __cdecl internal_6d26172()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0xA8
        mov dword ptr ss : [ebp-0x94], ecx
        mov eax, dword ptr ss : [ebp-0x94]
        mov dword ptr ds : [eax], offset public_6d5eaf4
        mov ecx, dword ptr ss : [ebp-0x94]
        mov edx, dword ptr ds : [ecx+0x18]
        mov dword ptr ss : [ebp-0x10], edx
        mov eax, dword ptr ss : [ebp-0x10]
        mov dword ptr ss : [ebp-0xC], eax
        cmp dword ptr ss : [ebp-0xC], 0
        je public_6d261d0
        mov ecx, dword ptr ss : [ebp-0xC]
        call public_6d280f0
        mov ecx, 1
        and ecx, 1
        test ecx, ecx
        je public_6d261c5
        mov edx, dword ptr ss : [ebp-0xC]
        push edx
        call public_6d2f249
        add esp, 4
        public_6d261c5 : nop
        mov eax, dword ptr ss : [ebp-0xC]
        mov dword ptr ss : [ebp-0x98], eax
        jmp public_6d261da
        public_6d261d0 : nop
        mov dword ptr ss : [ebp-0x98], 0
        public_6d261da : nop
        mov ecx, dword ptr ss : [ebp-0x94]
        mov edx, dword ptr ds : [ecx+0x560]
        mov dword ptr ss : [ebp-0x24], edx
        mov eax, dword ptr ss : [ebp-0x24]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [ebp-0x28], ecx
        mov edx, dword ptr ss : [ebp-0x28]
        mov dword ptr ss : [ebp-0x14], edx
        mov eax, dword ptr ss : [ebp-0x14]
        mov dword ptr ss : [ebp-8], eax
        mov ecx, dword ptr ss : [ebp-0x94]
        mov edx, dword ptr ds : [ecx+0x560]
        mov dword ptr ss : [ebp-0x2C], edx
        mov eax, dword ptr ss : [ebp-0x2C]
        mov dword ptr ss : [ebp-0x18], eax
        mov ecx, dword ptr ss : [ebp-0x18]
        mov dword ptr ss : [ebp-4], ecx
        public_6d26218 : nop
        mov edx, dword ptr ss : [ebp-8]
        sub edx, dword ptr ss : [ebp-4]
        neg edx
        sbb edx, edx
        inc edx
        xor eax, eax
        mov al, dl
        neg eax
        sbb eax, eax
        inc eax
        xor ecx, ecx
        mov cl, al
        test ecx, ecx
        je public_6d262e2
        mov edx, dword ptr ss : [ebp-8]
        mov eax, dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [ebp-0x20], eax
        mov ecx, dword ptr ss : [ebp-0x20]
        mov dword ptr ss : [ebp-0x1C], ecx
        cmp dword ptr ss : [ebp-0x1C], 0
        je public_6d262cb
        mov edx, dword ptr ss : [ebp-0x1C]
        mov eax, dword ptr ds : [edx+8]
        push eax
        mov ecx, dword ptr ss : [ebp-0x1C]
        mov edx, dword ptr ds : [ecx+4]
        push edx
        mov ecx, dword ptr ss : [ebp-0x1C]
        call public_6d282b0
        mov eax, dword ptr ss : [ebp-0x1C]
        mov ecx, dword ptr ss : [ebp-0x1C]
        mov edx, dword ptr ds : [eax+0xC]
        sub edx, dword ptr ds : [ecx+4]
        sar edx, 5
        mov dword ptr ss : [ebp-0x34], edx
        mov eax, dword ptr ss : [ebp-0x1C]
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ss : [ebp-0x30], ecx
        mov edx, dword ptr ss : [ebp-0x30]
        push edx
        call public_6d2f249
        add esp, 4
        mov eax, dword ptr ss : [ebp-0x1C]
        mov dword ptr ds : [eax+4], 0
        mov ecx, dword ptr ss : [ebp-0x1C]
        mov dword ptr ds : [ecx+8], 0
        mov edx, dword ptr ss : [ebp-0x1C]
        mov dword ptr ds : [edx+0xC], 0
        mov eax, 1
        and eax, 1
        test eax, eax
        je public_6d262c0
        mov ecx, dword ptr ss : [ebp-0x1C]
        push ecx
        call public_6d2f249
        add esp, 4
        public_6d262c0 : nop
        mov edx, dword ptr ss : [ebp-0x1C]
        mov dword ptr ss : [ebp-0x9C], edx
        jmp public_6d262d5
        public_6d262cb : nop
        mov dword ptr ss : [ebp-0x9C], 0
        public_6d262d5 : nop
        lea ecx, ss:[ebp-8]
        call public_6d2f0d0
        jmp public_6d26218
        public_6d262e2 : nop
        mov eax, dword ptr ss : [ebp-0x94]
        add eax, 0x570
        mov dword ptr ss : [ebp-0x50], eax
        mov ecx, dword ptr ss : [ebp-0x50]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ss : [ebp-0x44], edx
        mov eax, dword ptr ss : [ebp-0x44]
        mov dword ptr ss : [ebp-0x38], eax
        mov ecx, dword ptr ss : [ebp-0x38]
        push ecx
        lea edx, ss:[ebp-0x3C]
        push edx
        mov ecx, dword ptr ss : [ebp-0x50]
        call public_6d16e50
        mov eax, dword ptr ds : [eax]
        push eax
        lea ecx, ss:[ebp-0x40]
        push ecx
        mov ecx, dword ptr ss : [ebp-0x50]
        call public_6d28420
        mov edx, dword ptr ss : [ebp-0x50]
        mov eax, dword ptr ds : [edx+4]
        mov dword ptr ss : [ebp-0x48], eax
        mov ecx, dword ptr ss : [ebp-0x48]
        push ecx
        call public_6d2f249
        add esp, 4
        mov edx, dword ptr ss : [ebp-0x50]
        mov dword ptr ds : [edx+4], 0
        mov eax, dword ptr ss : [ebp-0x50]
        mov dword ptr ds : [eax+0x10], 0
        mov ecx, dword ptr ss : [ebp-0x50]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ss : [ebp-0x4C], edx
        mov eax, dword ptr ss : [ebp-0x4C]
        push eax
        call public_6d2f249
        add esp, 4
        mov ecx, dword ptr ss : [ebp-0x50]
        mov dword ptr ds : [ecx+8], 0
        mov edx, dword ptr ss : [ebp-0x94]
        add edx, 0x55C
        mov dword ptr ss : [ebp-0x6C], edx
        mov eax, dword ptr ss : [ebp-0x6C]
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ss : [ebp-0x60], ecx
        mov edx, dword ptr ss : [ebp-0x60]
        mov dword ptr ss : [ebp-0x54], edx
        mov eax, dword ptr ss : [ebp-0x54]
        push eax
        lea ecx, ss:[ebp-0x58]
        push ecx
        mov ecx, dword ptr ss : [ebp-0x6C]
        call public_6d16e50
        mov edx, dword ptr ds : [eax]
        push edx
        lea eax, ss:[ebp-0x5C]
        push eax
        mov ecx, dword ptr ss : [ebp-0x6C]
        call public_6d28420
        mov ecx, dword ptr ss : [ebp-0x6C]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ss : [ebp-0x64], edx
        mov eax, dword ptr ss : [ebp-0x64]
        push eax
        call public_6d2f249
        add esp, 4
        mov ecx, dword ptr ss : [ebp-0x6C]
        mov dword ptr ds : [ecx+4], 0
        mov edx, dword ptr ss : [ebp-0x6C]
        mov dword ptr ds : [edx+0x10], 0
        mov eax, dword ptr ss : [ebp-0x6C]
        mov ecx, dword ptr ds : [eax+8]
        mov dword ptr ss : [ebp-0x68], ecx
        mov edx, dword ptr ss : [ebp-0x68]
        push edx
        call public_6d2f249
        add esp, 4
        mov eax, dword ptr ss : [ebp-0x6C]
        mov dword ptr ds : [eax+8], 0
        mov ecx, dword ptr ss : [ebp-0x94]
        add ecx, 0x40
        mov dword ptr ss : [ebp-0x78], ecx
        mov edx, 1
        test edx, edx
        je public_6d26409
        mov eax, dword ptr ss : [ebp-0x78]
        cmp dword ptr ds : [eax+4], 0
        jne public_6d2640b
        public_6d26409 : nop
        jmp public_6d26471
        public_6d2640b : nop
        mov ecx, dword ptr ss : [ebp-0x78]
        mov edx, dword ptr ds : [ecx+4]
        movzx eax, byte ptr ds : [edx-1]
        test eax, eax
        je public_6d2642a
        mov ecx, dword ptr ss : [ebp-0x78]
        mov edx, dword ptr ds : [ecx+4]
        movzx eax, byte ptr ds : [edx-1]
        cmp eax, 0xFF
        jne public_6d26450
        public_6d2642a : nop
        mov ecx, dword ptr ss : [ebp-0x78]
        mov edx, dword ptr ds : [ecx+0xC]
        add edx, 2
        mov dword ptr ss : [ebp-0x74], edx
        mov eax, dword ptr ss : [ebp-0x78]
        mov ecx, dword ptr ds : [eax+4]
        sub ecx, 1
        mov dword ptr ss : [ebp-0x70], ecx
        mov edx, dword ptr ss : [ebp-0x70]
        push edx
        call public_6d2f249
        add esp, 4
        jmp public_6d26471
        public_6d26450 : nop
        mov eax, dword ptr ss : [ebp-0x78]
        mov ecx, dword ptr ds : [eax+4]
        sub ecx, 1
        mov dword ptr ss : [ebp-0xA0], ecx
        mov edx, dword ptr ss : [ebp-0xA0]
        mov al, byte ptr ds : [edx]
        sub al, 1
        mov ecx, dword ptr ss : [ebp-0xA0]
        mov byte ptr ds : [ecx], al
        public_6d26471 : nop
        mov edx, dword ptr ss : [ebp-0x78]
        mov dword ptr ds : [edx+4], 0
        mov eax, dword ptr ss : [ebp-0x78]
        mov dword ptr ds : [eax+8], 0
        mov ecx, dword ptr ss : [ebp-0x78]
        mov dword ptr ds : [ecx+0xC], 0
        mov edx, dword ptr ss : [ebp-0x94]
        add edx, 0x30
        mov dword ptr ss : [ebp-0x84], edx
        mov eax, 1
        test eax, eax
        je public_6d264b3
        mov ecx, dword ptr ss : [ebp-0x84]
        cmp dword ptr ds : [ecx+4], 0
        jne public_6d264b5
        public_6d264b3 : nop
        jmp public_6d2652c
        public_6d264b5 : nop
        mov edx, dword ptr ss : [ebp-0x84]
        mov eax, dword ptr ds : [edx+4]
        movzx ecx, byte ptr ds : [eax-1]
        test ecx, ecx
        je public_6d264db
        mov edx, dword ptr ss : [ebp-0x84]
        mov eax, dword ptr ds : [edx+4]
        movzx ecx, byte ptr ds : [eax-1]
        cmp ecx, 0xFF
        jne public_6d26507
        public_6d264db : nop
        mov edx, dword ptr ss : [ebp-0x84]
        mov eax, dword ptr ds : [edx+0xC]
        add eax, 2
        mov dword ptr ss : [ebp-0x80], eax
        mov ecx, dword ptr ss : [ebp-0x84]
        mov edx, dword ptr ds : [ecx+4]
        sub edx, 1
        mov dword ptr ss : [ebp-0x7C], edx
        mov eax, dword ptr ss : [ebp-0x7C]
        push eax
        call public_6d2f249
        add esp, 4
        jmp public_6d2652c
        public_6d26507 : nop
        mov ecx, dword ptr ss : [ebp-0x84]
        mov edx, dword ptr ds : [ecx+4]
        sub edx, 1
        mov dword ptr ss : [ebp-0xA4], edx
        mov eax, dword ptr ss : [ebp-0xA4]
        mov cl, byte ptr ds : [eax]
        sub cl, 1
        mov edx, dword ptr ss : [ebp-0xA4]
        mov byte ptr ds : [edx], cl
        public_6d2652c : nop
        mov eax, dword ptr ss : [ebp-0x84]
        mov dword ptr ds : [eax+4], 0
        mov ecx, dword ptr ss : [ebp-0x84]
        mov dword ptr ds : [ecx+8], 0
        mov edx, dword ptr ss : [ebp-0x84]
        mov dword ptr ds : [edx+0xC], 0
        mov eax, dword ptr ss : [ebp-0x94]
        add eax, 0x20
        mov dword ptr ss : [ebp-0x90], eax
        mov ecx, 1
        test ecx, ecx
        je public_6d26577
        mov edx, dword ptr ss : [ebp-0x90]
        cmp dword ptr ds : [edx+4], 0
        jne public_6d2657c
        public_6d26577 : nop
        jmp public_6d265fc
        public_6d2657c : nop
        mov eax, dword ptr ss : [ebp-0x90]
        mov ecx, dword ptr ds : [eax+4]
        movzx edx, byte ptr ds : [ecx-1]
        test edx, edx
        je public_6d265a2
        mov eax, dword ptr ss : [ebp-0x90]
        mov ecx, dword ptr ds : [eax+4]
        movzx edx, byte ptr ds : [ecx-1]
        cmp edx, 0xFF
        jne public_6d265d7
        public_6d265a2 : nop
        mov eax, dword ptr ss : [ebp-0x90]
        mov ecx, dword ptr ds : [eax+0xC]
        add ecx, 2
        mov dword ptr ss : [ebp-0x8C], ecx
        mov edx, dword ptr ss : [ebp-0x90]
        mov eax, dword ptr ds : [edx+4]
        sub eax, 1
        mov dword ptr ss : [ebp-0x88], eax
        mov ecx, dword ptr ss : [ebp-0x88]
        push ecx
        call public_6d2f249
        add esp, 4
        jmp public_6d265fc
        public_6d265d7 : nop
        mov edx, dword ptr ss : [ebp-0x90]
        mov eax, dword ptr ds : [edx+4]
        sub eax, 1
        mov dword ptr ss : [ebp-0xA8], eax
        mov ecx, dword ptr ss : [ebp-0xA8]
        mov dl, byte ptr ds : [ecx]
        sub dl, 1
        mov eax, dword ptr ss : [ebp-0xA8]
        mov byte ptr ds : [eax], dl
        public_6d265fc : nop
        mov ecx, dword ptr ss : [ebp-0x90]
        mov dword ptr ds : [ecx+4], 0
        mov edx, dword ptr ss : [ebp-0x90]
        mov dword ptr ds : [edx+8], 0
        mov eax, dword ptr ss : [ebp-0x90]
        mov dword ptr ds : [eax+0xC], 0
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6d26172)
    }
}

#undef public_6d261c5
#undef public_6d261d0
#undef public_6d261da
#undef public_6d26218
#undef public_6d262c0
#undef public_6d262cb
#undef public_6d262d5
#undef public_6d262e2
#undef public_6d26409
#undef public_6d2640b
#undef public_6d2642a
#undef public_6d26450
#undef public_6d26471
#undef public_6d264b3
#undef public_6d264b5
#undef public_6d264db
#undef public_6d26507
#undef public_6d2652c
#undef public_6d26577
#undef public_6d2657c
#undef public_6d265a2
#undef public_6d265d7
#undef public_6d265fc
