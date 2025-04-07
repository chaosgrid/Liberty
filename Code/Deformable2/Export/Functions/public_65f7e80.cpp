#include "Deformable2-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65f1000);
CLANG_FORWARD_PROC_SYMBOL(public_65f3e80);
CLANG_FORWARD_PROC_SYMBOL(public_65f7ca0);
CLANG_FORWARD_PROC_SYMBOL(public_65f7d10);
CLANG_FORWARD_PROC_SYMBOL(public_65f7e80);
CLANG_FORWARD_PROC_SYMBOL(public_65f8360);
CLANG_FORWARD_PROC_SYMBOL(public_65f8390);
CLANG_FORWARD_PROC_SYMBOL(public_65f8470);
CLANG_FORWARD_PROC_SYMBOL(public_65f9170);
CLANG_FORWARD_PROC_SYMBOL(public_6600bb0);
CLANG_FORWARD_PROC_SYMBOL(public_6600bb6);

#define public_65f7ea7 _public_65f7ea7
#define public_65f7f1a _public_65f7f1a
#define public_65f7f27 _public_65f7f27
#define public_65f7f31 _public_65f7f31
#define public_65f7fbb _public_65f7fbb
#define public_65f804b _public_65f804b
#define public_65f8083 _public_65f8083
#define public_65f809c _public_65f809c
#define public_65f809e _public_65f809e
#define public_65f80be _public_65f80be
#define public_65f80c2 _public_65f80c2
#define public_65f8108 _public_65f8108
#define public_65f818c _public_65f818c
#define public_65f8199 _public_65f8199
#define public_65f81a0 _public_65f81a0
#define public_65f81ff _public_65f81ff
#define public_65f8201 _public_65f8201
#define public_65f8225 _public_65f8225
#define public_65f822e _public_65f822e
#define public_65f8239 _public_65f8239
#define public_65f82cf _public_65f82cf
#define public_65f82d3 _public_65f82d3
#define public_65f82f2 _public_65f82f2
#define public_65f8310 _public_65f8310
#define public_65f832c _public_65f832c

PROC_DECLARE(0x65f7e80, internal_65f7e80, public_65f7e80);
extern "C" NAKED register_t __cdecl internal_65f7e80()
{
    __asm
    {
        sub esp, 0x7C
        push esi
        mov esi, dword ptr ss : [esp+0x84]
        mov eax, dword ptr ds : [esi]
        push edi
/*FIXUP push offset public_66028f8 @0x65f7e8e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66028f8
        push esi
        mov edi, ecx
        call dword ptr ds : [eax+0x60]
        test eax, eax
        jne public_65f7ea7
        pop edi
        xor al, al
        pop esi
        add esp, 0x7C
        ret 4
        public_65f7ea7 : nop
        push ebx
        push ebp
/*FIXUP push offset public_6602040 @0x65f7ea9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6602040
/*FIXUP push offset public_66028e8 @0x65f7eae*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66028e8
        lea ecx, ss:[esp+0x60]
        call public_65f3e80
        mov ecx, dword ptr ds : [esi]
        lea edx, ss:[esp+0x58]
        push edx
        push esi
        call dword ptr ds : [ecx+0x7C]
        mov ebp, eax
        or ebx, 0xFFFFFFFF
        cmp ebp, ebx
        je public_65f7f31
        mov eax, dword ptr ds : [esi]
        push 0
        push ebp
        push esi
        call dword ptr ds : [eax+0x28]
        mov ebx, eax
        shr ebx, 2
        lea ecx, ds:[ebx*4]
        push ecx
        mov dword ptr ss : [esp+0x18], eax
        call public_6600bb6
        mov edx, dword ptr ds : [esi]
        add esp, 4
        push 0
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, dword ptr ss : [esp+0x1C]
        push ecx
        push eax
        push ebp
        push esi
        mov dword ptr ss : [esp+0x28], eax
        call dword ptr ds : [edx+0x14]
        test eax, eax
        je public_65f7f1a
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [edi+0x10], ebx
        mov dword ptr ds : [edi+0x14], edx
        jmp public_65f7f27
        public_65f7f1a : nop
        mov eax, dword ptr ss : [esp+0x10]
        push eax
        call public_6600bb0
        add esp, 4
        public_65f7f27 : nop
        mov ecx, dword ptr ds : [esi]
        push ebp
        push esi
        call dword ptr ds : [ecx+0x10]
        or ebx, 0xFFFFFFFF
        public_65f7f31 : nop
        mov dword ptr ss : [esp+0x2C], esi
        mov edx, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [edx+4]
/*FIXUP push offset public_6602040 @0x65f7f3b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6602040
        xor ebp, ebp
/*FIXUP push offset public_66028e0 @0x65f7f42*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66028e0
        lea ecx, ss:[esp+0x60]
        mov dword ptr ss : [esp+0x24], ebx
        mov dword ptr ss : [esp+0x28], ebp
        mov dword ptr ss : [esp+0x30], ebp
        call public_65f3e80
        mov eax, dword ptr ss : [esp+0x2C]
        lea edx, ss:[esp+0x58]
        push edx
        mov dword ptr ss : [esp+0x8C], ebx
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x7C]
        cmp eax, ebx
        mov dword ptr ss : [esp+0x1C], eax
        je public_65f7fbb
        mov ecx, dword ptr ss : [esp+0x2C]
        mov edx, dword ptr ds : [ecx]
        push ebp
        push eax
        push ecx
        call dword ptr ds : [edx+0x28]
        mov edx, dword ptr ss : [esp+0x1C]
        push ebp
        push ebp
        push ebp
        push 2
        push ebp
        mov dword ptr ss : [esp+0x34], eax
        mov eax, dword ptr ss : [esp+0x40]
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0x3C]
        cmp eax, ebx
        mov dword ptr ss : [esp+0x24], eax
        je public_65f7fbb
        mov ecx, dword ptr ss : [esp+0x2C]
        mov edx, dword ptr ds : [ecx]
        push ebp
        push ebp
        push ebp
        push 4
        push eax
        push ecx
        call dword ptr ds : [edx+0x40]
        mov dword ptr ss : [esp+0x28], eax
        public_65f7fbb : nop
        mov eax, dword ptr ss : [esp+0x28]
        mov dword ptr ss : [esp+0x40], esi
        mov ecx, dword ptr ds : [esi]
        push esi
        mov dword ptr ss : [esp+0x1C], eax
        call dword ptr ds : [ecx+4]
/*FIXUP push offset public_6602040 @0x65f7fcd*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6602040
/*FIXUP push offset public_66028d0 @0x65f7fd2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66028d0
        lea ecx, ss:[esp+0x60]
        mov dword ptr ss : [esp+0x38], ebx
        mov dword ptr ss : [esp+0x3C], ebp
        mov dword ptr ss : [esp+0x44], ebp
        call public_65f3e80
        mov eax, dword ptr ss : [esp+0x40]
        lea ecx, ss:[esp+0x58]
        push ecx
        mov dword ptr ss : [esp+0x8C], ebx
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+0x7C]
        cmp eax, ebx
        mov dword ptr ss : [esp+0x30], eax
        je public_65f804b
        mov ecx, dword ptr ss : [esp+0x40]
        mov edx, dword ptr ds : [ecx]
        push ebp
        push eax
        push ecx
        call dword ptr ds : [edx+0x28]
        mov edx, dword ptr ss : [esp+0x30]
        push ebp
        push ebp
        push ebp
        push 2
        push ebp
        mov dword ptr ss : [esp+0x48], eax
        mov eax, dword ptr ss : [esp+0x54]
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0x3C]
        cmp eax, ebx
        mov dword ptr ss : [esp+0x38], eax
        je public_65f804b
        mov ecx, dword ptr ss : [esp+0x40]
        mov edx, dword ptr ds : [ecx]
        push ebp
        push ebp
        push ebp
        push 4
        push eax
        push ecx
        call dword ptr ds : [edx+0x40]
        mov dword ptr ss : [esp+0x3C], eax
        public_65f804b : nop
        mov eax, dword ptr ss : [esp+0x3C]
        mov dword ptr ss : [esp+0x14], eax
        mov eax, 0xAAAAAAAB
        mul dword ptr ss : [esp+0x20]
        mov ebx, edx
        shr ebx, 3
        lea ecx, ds:[ebx+ebx*2]
        shl ecx, 3
        push ecx
        mov dword ptr ds : [edi+0x24], ebx
        call public_6600bb6
        mov ebp, eax
        add esp, 4
        test ebp, ebp
        je public_65f809c
        dec ebx
        test ebx, ebx
        mov dword ptr ss : [esp+0x10], ebp
        jl public_65f809e
        inc ebx
        public_65f8083 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        call public_65f8470
        mov ecx, dword ptr ss : [esp+0x10]
        add ecx, 0x18
        dec ebx
        mov dword ptr ss : [esp+0x10], ecx
        jne public_65f8083
        jmp public_65f809e
        public_65f809c : nop
        xor ebp, ebp
        public_65f809e : nop
        mov eax, dword ptr ds : [edi+0x24]
        xor ecx, ecx
        cmp eax, ecx
        mov dword ptr ds : [edi+0x28], ebp
        mov dword ptr ss : [esp+0x10], ecx
        jbe public_65f8108
        mov edx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ss : [esp+0x14]
        sub edx, eax
        mov dword ptr ss : [esp+0x18], edx
        jmp public_65f80c2
        public_65f80be : nop
        mov edx, dword ptr ss : [esp+0x18]
        public_65f80c2 : nop
        mov ebx, dword ptr ds : [edi+0x28]
        add edx, eax
        mov ebp, dword ptr ds : [edx]
        add ebx, ecx
        mov dword ptr ds : [ebx], ebp
        mov ebp, dword ptr ds : [edx+4]
        mov dword ptr ds : [ebx+4], ebp
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ds : [ebx+8], edx
        mov edx, dword ptr ds : [edi+0x28]
        lea edx, ds:[edx+ecx+0xC]
        mov ebx, eax
        mov ebp, dword ptr ds : [ebx]
        mov dword ptr ds : [edx], ebp
        mov ebp, dword ptr ds : [ebx+4]
        mov dword ptr ds : [edx+4], ebp
        mov ebx, dword ptr ds : [ebx+8]
        mov dword ptr ds : [edx+8], ebx
        mov edx, dword ptr ss : [esp+0x10]
        mov ebx, dword ptr ds : [edi+0x24]
        inc edx
        add eax, 0xC
        add ecx, 0x18
        cmp edx, ebx
        mov dword ptr ss : [esp+0x10], edx
        jb public_65f80be
        public_65f8108 : nop
        lea ecx, ss:[esp+0x30]
        call public_65f7d10
        lea ecx, ss:[esp+0x40]
        call public_65f9170
        lea ecx, ss:[esp+0x1C]
        call public_65f7d10
        lea ecx, ss:[esp+0x2C]
        call public_65f9170
/*FIXUP push offset public_6602040 @0x65f812c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6602040
/*FIXUP push offset public_66028c4 @0x65f8131*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66028c4
        lea ecx, ss:[esp+0x60]
        call public_65f3e80
        mov eax, dword ptr ds : [esi]
        lea ecx, ss:[esp+0x58]
        push ecx
        push esi
        call dword ptr ds : [eax+0x7C]
        mov ebx, eax
        cmp ebx, 0xFFFFFFFF
        je public_65f81a0
        mov edx, dword ptr ds : [esi]
        push 0
        push ebx
        push esi
        call dword ptr ds : [edx+0x28]
        mov ebp, eax
        shr eax, 2
        shl eax, 2
        push eax
        call public_6600bb6
        mov ecx, dword ptr ds : [esi]
        add esp, 4
        push 0
        lea edx, ss:[esp+0x1C]
        push edx
        push ebp
        push eax
        push ebx
        push esi
        mov dword ptr ss : [esp+0x28], eax
        call dword ptr ds : [ecx+0x14]
        test eax, eax
        je public_65f818c
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [edi+0x54], eax
        jmp public_65f8199
        public_65f818c : nop
        mov ecx, dword ptr ss : [esp+0x10]
        push ecx
        call public_6600bb0
        add esp, 4
        public_65f8199 : nop
        mov edx, dword ptr ds : [esi]
        push ebx
        push esi
        call dword ptr ds : [edx+0x10]
/*FIXUP public_65f81a0 : nop
        push offset public_6602040 @0x65f81a0*/
  FIXUP public_65f81a0 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6602040
/*FIXUP push offset public_66028c0 @0x65f81a5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66028c0
        lea ecx, ss:[esp+0x60]
        call public_65f3e80
        mov eax, dword ptr ds : [esi]
        lea ecx, ss:[esp+0x58]
        push ecx
        push esi
        call dword ptr ds : [eax+0x7C]
        cmp eax, 0xFFFFFFFF
        mov dword ptr ss : [esp+0x10], eax
        je public_65f8239
        mov edx, dword ptr ds : [esi]
        push 0
        push eax
        push esi
        call dword ptr ds : [edx+0x28]
        mov ebx, eax
        mov dword ptr ss : [esp+0x18], eax
        shr ebx, 3
        lea eax, ds:[ebx*8]
        push eax
        call public_6600bb6
        mov ebp, eax
        add esp, 4
        test ebp, ebp
        je public_65f81ff
/*FIXUP push offset _public_65f8470 @0x65f81ef*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_65f8470
        push ebx
        push 8
        push ebp
        call public_65f1000
        jmp public_65f8201
        public_65f81ff : nop
        xor ebp, ebp
        public_65f8201 : nop
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [esi]
        push 0
        lea edx, ss:[esp+0x18]
        push edx
        mov edx, dword ptr ss : [esp+0x18]
        push eax
        push ebp
        push edx
        push esi
        call dword ptr ds : [ecx+0x14]
        test eax, eax
        je public_65f8225
        mov dword ptr ds : [edi+0x4C], ebx
        mov dword ptr ds : [edi+0x50], ebp
        jmp public_65f822e
        public_65f8225 : nop
        push ebp
        call public_6600bb0
        add esp, 4
        public_65f822e : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [esi]
        push ecx
        push esi
        call dword ptr ds : [eax+0x10]
        public_65f8239 : nop
        push esi
        lea ecx, ss:[esp+0x48]
        call public_65f8360
        push 0xFFFFFFFF
/*FIXUP push offset public_66028ac @0x65f8245*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66028ac
        lea ecx, ss:[esp+0x4C]
        call public_65f8390
        mov ebp, dword ptr ss : [esp+0x50]
        push esi
        lea ecx, ss:[esp+0x34]
        mov dword ptr ss : [esp+0x14], ebp
        call public_65f8360
        push 0xFFFFFFFF
/*FIXUP push offset public_660289c @0x65f8267*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_660289c
        lea ecx, ss:[esp+0x38]
        call public_65f8390
        mov edx, dword ptr ss : [esp+0x3C]
        push esi
        lea ecx, ss:[esp+0x20]
        mov dword ptr ss : [esp+0x18], edx
        call public_65f8360
        push 0xFFFFFFFF
/*FIXUP push offset public_6602888 @0x65f8289*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6602888
        lea ecx, ss:[esp+0x24]
        call public_65f8390
        mov ebx, dword ptr ss : [esp+0x34]
        mov eax, dword ptr ss : [esp+0x28]
        shr ebx, 2
        lea ecx, ds:[ebx*8]
        push ecx
        mov dword ptr ss : [esp+0x1C], eax
        call public_6600bb6
        mov dword ptr ds : [edi+0x2C], eax
        add esp, 4
        xor eax, eax
        test ebx, ebx
        jbe public_65f82f2
        mov ecx, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ss : [esp+0x14]
        sub edx, ecx
        mov dword ptr ss : [esp+0x18], edx
        jmp public_65f82d3
        public_65f82cf : nop
        mov edx, dword ptr ss : [esp+0x18]
        public_65f82d3 : nop
        mov edx, dword ptr ds : [edx+ecx]
        mov ebp, dword ptr ds : [edi+0x2C]
        mov dword ptr ss : [ebp+eax*8], edx
        mov ebp, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [edi+0x2C]
        mov dword ptr ds : [edx+eax*8+4], ebp
        inc eax
        add ecx, 4
        cmp eax, ebx
        jb public_65f82cf
        mov ebp, dword ptr ss : [esp+0x10]
        public_65f82f2 : nop
        mov eax, dword ptr ds : [edi+0x24]
        mov ebx, dword ptr ds : [edi+0x2C]
        shl eax, 3
        push eax
        call public_6600bb6
        mov ecx, dword ptr ds : [edi+0x24]
        mov dword ptr ds : [edi+0x30], eax
        add esp, 4
        xor eax, eax
        test ecx, ecx
        jbe public_65f832c
        public_65f8310 : nop
        mov ecx, dword ptr ss : [ebp+eax*4]
        mov edx, dword ptr ds : [edi+0x30]
        mov dword ptr ds : [edx+eax*8], ecx
        mov edx, dword ptr ds : [edi+0x30]
        mov dword ptr ds : [edx+eax*8+4], ebx
        lea ebx, ds:[ebx+ecx*8]
        mov ecx, dword ptr ds : [edi+0x24]
        inc eax
        cmp eax, ecx
        jb public_65f8310
        public_65f832c : nop
        lea ecx, ss:[esp+0x1C]
        call public_65f7ca0
        lea ecx, ss:[esp+0x30]
        call public_65f7ca0
        lea ecx, ss:[esp+0x44]
        call public_65f7ca0
        mov eax, dword ptr ds : [esi]
/*FIXUP push offset public_6602020 @0x65f8349*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6602020
        push esi
        call dword ptr ds : [eax+0x60]
        pop ebp
        pop ebx
        pop edi
        mov al, 1
        pop esi
        add esp, 0x7C
        ret 4
        UNREACHABLE_TRAP(0x65f7e80)
    }
}

#undef public_65f7ea7
#undef public_65f7f1a
#undef public_65f7f27
#undef public_65f7f31
#undef public_65f7fbb
#undef public_65f804b
#undef public_65f8083
#undef public_65f809c
#undef public_65f809e
#undef public_65f80be
#undef public_65f80c2
#undef public_65f8108
#undef public_65f818c
#undef public_65f8199
#undef public_65f81a0
#undef public_65f81ff
#undef public_65f8201
#undef public_65f8225
#undef public_65f822e
#undef public_65f8239
#undef public_65f82cf
#undef public_65f82d3
#undef public_65f82f2
#undef public_65f8310
#undef public_65f832c
