#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5a13c0);
CLANG_FORWARD_PROC_SYMBOL(public_5a3b00);

#define public_5a3b1e _public_5a3b1e
#define public_5a3b3d _public_5a3b3d
#define public_5a3b60 _public_5a3b60
#define public_5a3b7f _public_5a3b7f
#define public_5a3ba3 _public_5a3ba3
#define public_5a3baf _public_5a3baf
#define public_5a3bb6 _public_5a3bb6
#define public_5a3bbb _public_5a3bbb

PROC_DECLARE(0x5a3b00, internal_5a3b00, public_5a3b00);
extern "C" NAKED register_t __cdecl internal_5a3b00()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov edx, dword ptr ss : [esp+4]
        lea eax, ds:[edx-0xC]
        cmp eax, 0x45
        ja public_5a3bbb
/*FIXUP movzx eax, byte ptr ds : [eax+public_5a3be0] @0x5a3b10*/
/*FIXUP jmp dword ptr ds : [eax*4+public_5a3bc4] @0x5a3b17*/
  JMPTB cmp eax, 0
  JMPTB jne public_4c0000000000d5b6
  JMPTB mov eax, 0
  JMPTB public_4c0000000000d5b6 : nop
        je public_5a3b7f
  JMPTB cmp eax, 1
  JMPTB jne public_4c0000000000d5b2
  JMPTB mov eax, 6
  JMPTB public_4c0000000000d5b2 : nop
        je public_5a3bbb
  JMPTB cmp eax, 2
  JMPTB jne public_4c0000000000d5ae
  JMPTB mov eax, 6
  JMPTB public_4c0000000000d5ae : nop
        je public_5a3bbb
  JMPTB cmp eax, 3
  JMPTB jne public_4c0000000000d5aa
  JMPTB mov eax, 6
  JMPTB public_4c0000000000d5aa : nop
        je public_5a3bbb
  JMPTB cmp eax, 4
  JMPTB jne public_4c0000000000d5a6
  JMPTB mov eax, 6
  JMPTB public_4c0000000000d5a6 : nop
        je public_5a3bbb
  JMPTB cmp eax, 5
  JMPTB jne public_4c0000000000d5a2
  JMPTB mov eax, 6
  JMPTB public_4c0000000000d5a2 : nop
        je public_5a3bbb
  JMPTB cmp eax, 6
  JMPTB jne public_4c0000000000d59e
  JMPTB mov eax, 6
  JMPTB public_4c0000000000d59e : nop
        je public_5a3bbb
  JMPTB cmp eax, 7
  JMPTB jne public_4c0000000000d59a
  JMPTB mov eax, 6
  JMPTB public_4c0000000000d59a : nop
        je public_5a3bbb
  JMPTB cmp eax, 8
  JMPTB jne public_4c0000000000d596
  JMPTB mov eax, 6
  JMPTB public_4c0000000000d596 : nop
        je public_5a3bbb
  JMPTB cmp eax, 9
  JMPTB jne public_4c0000000000d592
  JMPTB mov eax, 6
  JMPTB public_4c0000000000d592 : nop
        je public_5a3bbb
  JMPTB cmp eax, 0xA
  JMPTB jne public_4c0000000000d58e
  JMPTB mov eax, 6
  JMPTB public_4c0000000000d58e : nop
        je public_5a3bbb
  JMPTB cmp eax, 0xB
  JMPTB jne public_4c0000000000d58a
  JMPTB mov eax, 6
  JMPTB public_4c0000000000d58a : nop
        je public_5a3bbb
  JMPTB cmp eax, 0xC
  JMPTB jne public_4c0000000000d586
  JMPTB mov eax, 6
  JMPTB public_4c0000000000d586 : nop
        je public_5a3bbb
  JMPTB cmp eax, 0xD
  JMPTB jne public_4c0000000000d582
  JMPTB mov eax, 6
  JMPTB public_4c0000000000d582 : nop
        je public_5a3bbb
  JMPTB cmp eax, 0xE
  JMPTB jne public_4c0000000000d57e
  JMPTB mov eax, 6
  JMPTB public_4c0000000000d57e : nop
        je public_5a3bbb
  JMPTB cmp eax, 0xF
  JMPTB jne public_4c0000000000d57a
  JMPTB mov eax, 6
  JMPTB public_4c0000000000d57a : nop
        je public_5a3bbb
  JMPTB cmp eax, 0x10
  JMPTB jne public_4c0000000000d576
  JMPTB mov eax, 6
  JMPTB public_4c0000000000d576 : nop
        je public_5a3bbb
  JMPTB cmp eax, 0x11
  JMPTB jne public_4c0000000000d572
  JMPTB mov eax, 6
  JMPTB public_4c0000000000d572 : nop
        je public_5a3bbb
  JMPTB cmp eax, 0x12
  JMPTB jne public_4c0000000000d56e
  JMPTB mov eax, 6
  JMPTB public_4c0000000000d56e : nop
        je public_5a3bbb
  JMPTB cmp eax, 0x13
  JMPTB jne public_4c0000000000d56a
  JMPTB mov eax, 6
  JMPTB public_4c0000000000d56a : nop
        je public_5a3bbb
  JMPTB cmp eax, 0x14
  JMPTB jne public_4c0000000000d566
  JMPTB mov eax, 6
  JMPTB public_4c0000000000d566 : nop
        je public_5a3bbb
  JMPTB cmp eax, 0x15
  JMPTB jne public_4c0000000000d562
  JMPTB mov eax, 6
  JMPTB public_4c0000000000d562 : nop
        je public_5a3bbb
  JMPTB cmp eax, 0x16
  JMPTB jne public_4c0000000000d55e
  JMPTB mov eax, 6
  JMPTB public_4c0000000000d55e : nop
        je public_5a3bbb
  JMPTB cmp eax, 0x17
  JMPTB jne public_4c0000000000d55a
  JMPTB mov eax, 6
  JMPTB public_4c0000000000d55a : nop
        je public_5a3bbb
  JMPTB cmp eax, 0x18
  JMPTB jne public_4c0000000000d556
  JMPTB mov eax, 6
  JMPTB public_4c0000000000d556 : nop
        je public_5a3bbb
  JMPTB cmp eax, 0x19
  JMPTB jne public_4c0000000000d552
  JMPTB mov eax, 6
  JMPTB public_4c0000000000d552 : nop
        je public_5a3bbb
  JMPTB cmp eax, 0x1A
  JMPTB jne public_4c0000000000d54e
  JMPTB mov eax, 6
  JMPTB public_4c0000000000d54e : nop
        je public_5a3bbb
  JMPTB cmp eax, 0x1B
  JMPTB jne public_4c0000000000d54a
  JMPTB mov eax, 6
  JMPTB public_4c0000000000d54a : nop
        je public_5a3bbb
  JMPTB cmp eax, 0x1C
  JMPTB jne public_4c0000000000d546
  JMPTB mov eax, 6
  JMPTB public_4c0000000000d546 : nop
        je public_5a3bbb
  JMPTB cmp eax, 0x1D
  JMPTB jne public_4c0000000000d542
  JMPTB mov eax, 6
  JMPTB public_4c0000000000d542 : nop
        je public_5a3bbb
  JMPTB cmp eax, 0x1E
  JMPTB jne public_4c0000000000d53e
  JMPTB mov eax, 6
  JMPTB public_4c0000000000d53e : nop
        je public_5a3bbb
  JMPTB cmp eax, 0x1F
  JMPTB jne public_4c0000000000d53a
  JMPTB mov eax, 6
  JMPTB public_4c0000000000d53a : nop
        je public_5a3bbb
  JMPTB cmp eax, 0x20
  JMPTB jne public_4c0000000000d536
  JMPTB mov eax, 1
  JMPTB public_4c0000000000d536 : nop
        je public_5a3ba3
  JMPTB cmp eax, 0x21
  JMPTB jne public_4c0000000000d532
  JMPTB mov eax, 2
  JMPTB public_4c0000000000d532 : nop
        je public_5a3baf
  JMPTB cmp eax, 0x22
  JMPTB jne public_4c0000000000d52e
  JMPTB mov eax, 6
  JMPTB public_4c0000000000d52e : nop
        je public_5a3bbb
  JMPTB cmp eax, 0x23
  JMPTB jne public_4c0000000000d52a
  JMPTB mov eax, 6
  JMPTB public_4c0000000000d52a : nop
        je public_5a3bbb
  JMPTB cmp eax, 0x24
  JMPTB jne public_4c0000000000d526
  JMPTB mov eax, 6
  JMPTB public_4c0000000000d526 : nop
        je public_5a3bbb
  JMPTB cmp eax, 0x25
  JMPTB jne public_4c0000000000d522
  JMPTB mov eax, 6
  JMPTB public_4c0000000000d522 : nop
        je public_5a3bbb
  JMPTB cmp eax, 0x26
  JMPTB jne public_4c0000000000d51e
  JMPTB mov eax, 6
  JMPTB public_4c0000000000d51e : nop
        je public_5a3bbb
  JMPTB cmp eax, 0x27
  JMPTB jne public_4c0000000000d51a
  JMPTB mov eax, 3
  JMPTB public_4c0000000000d51a : nop
        je public_5a3b60
  JMPTB cmp eax, 0x28
  JMPTB jne public_4c0000000000d516
  JMPTB mov eax, 4
  JMPTB public_4c0000000000d516 : nop
        je public_5a3b3d
  JMPTB cmp eax, 0x29
  JMPTB jne public_4c0000000000d512
  JMPTB mov eax, 6
  JMPTB public_4c0000000000d512 : nop
        je public_5a3bbb
  JMPTB cmp eax, 0x2A
  JMPTB jne public_4c0000000000d50e
  JMPTB mov eax, 6
  JMPTB public_4c0000000000d50e : nop
        je public_5a3bbb
  JMPTB cmp eax, 0x2B
  JMPTB jne public_4c0000000000d50a
  JMPTB mov eax, 6
  JMPTB public_4c0000000000d50a : nop
        je public_5a3bbb
  JMPTB cmp eax, 0x2C
  JMPTB jne public_4c0000000000d506
  JMPTB mov eax, 6
  JMPTB public_4c0000000000d506 : nop
        je public_5a3bbb
  JMPTB cmp eax, 0x2D
  JMPTB jne public_4c0000000000d502
  JMPTB mov eax, 6
  JMPTB public_4c0000000000d502 : nop
        je public_5a3bbb
  JMPTB cmp eax, 0x2E
  JMPTB jne public_4c0000000000d4fe
  JMPTB mov eax, 6
  JMPTB public_4c0000000000d4fe : nop
        je public_5a3bbb
  JMPTB cmp eax, 0x2F
  JMPTB jne public_4c0000000000d4fa
  JMPTB mov eax, 6
  JMPTB public_4c0000000000d4fa : nop
        je public_5a3bbb
  JMPTB cmp eax, 0x30
  JMPTB jne public_4c0000000000d4f6
  JMPTB mov eax, 6
  JMPTB public_4c0000000000d4f6 : nop
        je public_5a3bbb
  JMPTB cmp eax, 0x31
  JMPTB jne public_4c0000000000d4f2
  JMPTB mov eax, 6
  JMPTB public_4c0000000000d4f2 : nop
        je public_5a3bbb
  JMPTB cmp eax, 0x32
  JMPTB jne public_4c0000000000d4ee
  JMPTB mov eax, 6
  JMPTB public_4c0000000000d4ee : nop
        je public_5a3bbb
  JMPTB cmp eax, 0x33
  JMPTB jne public_4c0000000000d4ea
  JMPTB mov eax, 6
  JMPTB public_4c0000000000d4ea : nop
        je public_5a3bbb
  JMPTB cmp eax, 0x34
  JMPTB jne public_4c0000000000d4e6
  JMPTB mov eax, 6
  JMPTB public_4c0000000000d4e6 : nop
        je public_5a3bbb
  JMPTB cmp eax, 0x35
  JMPTB jne public_4c0000000000d4e2
  JMPTB mov eax, 6
  JMPTB public_4c0000000000d4e2 : nop
        je public_5a3bbb
  JMPTB cmp eax, 0x36
  JMPTB jne public_4c0000000000d4de
  JMPTB mov eax, 6
  JMPTB public_4c0000000000d4de : nop
        je public_5a3bbb
  JMPTB cmp eax, 0x37
  JMPTB jne public_4c0000000000d4da
  JMPTB mov eax, 6
  JMPTB public_4c0000000000d4da : nop
        je public_5a3bbb
  JMPTB cmp eax, 0x38
  JMPTB jne public_4c0000000000d4d6
  JMPTB mov eax, 6
  JMPTB public_4c0000000000d4d6 : nop
        je public_5a3bbb
  JMPTB cmp eax, 0x39
  JMPTB jne public_4c0000000000d4d2
  JMPTB mov eax, 6
  JMPTB public_4c0000000000d4d2 : nop
        je public_5a3bbb
  JMPTB cmp eax, 0x3A
  JMPTB jne public_4c0000000000d4ce
  JMPTB mov eax, 6
  JMPTB public_4c0000000000d4ce : nop
        je public_5a3bbb
  JMPTB cmp eax, 0x3B
  JMPTB jne public_4c0000000000d4ca
  JMPTB mov eax, 6
  JMPTB public_4c0000000000d4ca : nop
        je public_5a3bbb
  JMPTB cmp eax, 0x3C
  JMPTB jne public_4c0000000000d4c6
  JMPTB mov eax, 6
  JMPTB public_4c0000000000d4c6 : nop
        je public_5a3bbb
  JMPTB cmp eax, 0x3D
  JMPTB jne public_4c0000000000d4c2
  JMPTB mov eax, 6
  JMPTB public_4c0000000000d4c2 : nop
        je public_5a3bbb
  JMPTB cmp eax, 0x3E
  JMPTB jne public_4c0000000000d4be
  JMPTB mov eax, 6
  JMPTB public_4c0000000000d4be : nop
        je public_5a3bbb
  JMPTB cmp eax, 0x3F
  JMPTB jne public_4c0000000000d4ba
  JMPTB mov eax, 6
  JMPTB public_4c0000000000d4ba : nop
        je public_5a3bbb
  JMPTB cmp eax, 0x40
  JMPTB jne public_4c0000000000d4b6
  JMPTB mov eax, 6
  JMPTB public_4c0000000000d4b6 : nop
        je public_5a3bbb
  JMPTB cmp eax, 0x41
  JMPTB jne public_4c0000000000d4b2
  JMPTB mov eax, 6
  JMPTB public_4c0000000000d4b2 : nop
        je public_5a3bbb
  JMPTB cmp eax, 0x42
  JMPTB jne public_4c0000000000d4ae
  JMPTB mov eax, 6
  JMPTB public_4c0000000000d4ae : nop
        je public_5a3bbb
  JMPTB cmp eax, 0x43
  JMPTB jne public_4c0000000000d4aa
  JMPTB mov eax, 6
  JMPTB public_4c0000000000d4aa : nop
        je public_5a3bbb
  JMPTB cmp eax, 0x44
  JMPTB jne public_4c0000000000d4a6
  JMPTB mov eax, 6
  JMPTB public_4c0000000000d4a6 : nop
        je public_5a3bbb
  JMPTB cmp eax, 0x45
  JMPTB jne public_4c0000000000d4a2
  JMPTB mov eax, 5
  JMPTB public_4c0000000000d4a2 : nop
        je public_5a3b1e
  JMPTB int 3
        public_5a3b1e : nop
        mov eax, dword ptr ss : [esp+8]
        test eax, eax
        mov byte ptr ds : [ecx+0x35E], 0
        je public_5a3bb6
        mov byte ptr ds : [ecx+0x35E], 1
        xor eax, eax
        ret 0xC
        public_5a3b3d : nop
        mov al, byte ptr ds : [ecx+0x35C]
        mov edx, dword ptr ss : [esp+8]
        and al, 0x7F
        test edx, edx
        mov byte ptr ds : [ecx+0x35C], al
        je public_5a3bb6
        or al, 0x80
        mov byte ptr ds : [ecx+0x35C], al
        xor eax, eax
        ret 0xC
        public_5a3b60 : nop
        mov edx, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+0x378], eax
        cmp dword ptr ss : [esp+0xC], 1
        sete dl
        mov byte ptr ds : [ecx+0x37C], dl
        xor eax, eax
        ret 0xC
        public_5a3b7f : nop
        mov edx, dword ptr ss : [esp+8]
        mov al, byte ptr ds : [ecx+0x35C]
        test edx, edx
        setne dl
        shl dl, 4
        xor dl, al
        and dl, 0x10
        xor dl, al
        mov byte ptr ds : [ecx+0x35C], dl
        xor eax, eax
        ret 0xC
        public_5a3ba3 : nop
        or byte ptr ds : [ecx+0x35C], 2
        xor eax, eax
        ret 0xC
        public_5a3baf : nop
        and byte ptr ds : [ecx+0x35C], 0xFD
        public_5a3bb6 : nop
        xor eax, eax
        ret 0xC
        public_5a3bbb : nop
        mov dword ptr ss : [esp+4], edx
        jmp public_5a13c0
        UNREACHABLE_TRAP(0x5a3b00)
        ASM_EXPORT_ENTRY_SINGLE(0x5a3bbb, public_5a3bbb)
    }
}

#undef public_5a3b1e
#undef public_5a3b3d
#undef public_5a3b60
#undef public_5a3b7f
#undef public_5a3ba3
#undef public_5a3baf
#undef public_5a3bb6
#undef public_5a3bbb

#pragma init_seg(compiler)
extern "C" void const* const public_5a3bbb = __AsmFindLabelExport(&internal_5a3b00, 0x5a3bbb);
