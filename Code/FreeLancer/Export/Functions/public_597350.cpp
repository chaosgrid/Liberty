#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_422b80);
CLANG_FORWARD_PROC_SYMBOL(public_595840);
CLANG_FORWARD_PROC_SYMBOL(public_595ca0);
CLANG_FORWARD_PROC_SYMBOL(public_5a0880);
CLANG_FORWARD_PROC_SYMBOL(public_5a13c0);
CLANG_FORWARD_PROC_SYMBOL(public_5b73e0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec0);

#define public_597374 _public_597374
#define public_59741d _public_59741d
#define public_59744f _public_59744f
#define public_597486 _public_597486
#define public_59749e _public_59749e
#define public_5974b4 _public_5974b4
#define public_5974be _public_5974be
#define public_5974d6 _public_5974d6
#define public_5974e8 _public_5974e8

PROC_DECLARE(0x597350, internal_597350, public_597350);
extern "C" NAKED register_t __cdecl internal_597350()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        sub esp, 0x4C
        push esi
        mov esi, ecx
        mov ecx, dword ptr ss : [esp+0x54]
        lea eax, ds:[ecx-6]
        cmp eax, 0x35
        ja public_5974e8
/*FIXUP movzx eax, byte ptr ds : [eax+public_597518] @0x597366*/
/*FIXUP jmp dword ptr ds : [eax*4+public_597504] @0x59736d*/
  JMPTB cmp eax, 0
  JMPTB jne public_4c0000000000d44c
  JMPTB mov eax, 0
  JMPTB public_4c0000000000d44c : nop
        je public_597374
  JMPTB cmp eax, 1
  JMPTB jne public_4c0000000000d448
  JMPTB mov eax, 4
  JMPTB public_4c0000000000d448 : nop
        je public_5974e8
  JMPTB cmp eax, 2
  JMPTB jne public_4c0000000000d444
  JMPTB mov eax, 4
  JMPTB public_4c0000000000d444 : nop
        je public_5974e8
  JMPTB cmp eax, 3
  JMPTB jne public_4c0000000000d440
  JMPTB mov eax, 4
  JMPTB public_4c0000000000d440 : nop
        je public_5974e8
  JMPTB cmp eax, 4
  JMPTB jne public_4c0000000000d43c
  JMPTB mov eax, 4
  JMPTB public_4c0000000000d43c : nop
        je public_5974e8
  JMPTB cmp eax, 5
  JMPTB jne public_4c0000000000d438
  JMPTB mov eax, 4
  JMPTB public_4c0000000000d438 : nop
        je public_5974e8
  JMPTB cmp eax, 6
  JMPTB jne public_4c0000000000d434
  JMPTB mov eax, 4
  JMPTB public_4c0000000000d434 : nop
        je public_5974e8
  JMPTB cmp eax, 7
  JMPTB jne public_4c0000000000d430
  JMPTB mov eax, 4
  JMPTB public_4c0000000000d430 : nop
        je public_5974e8
  JMPTB cmp eax, 8
  JMPTB jne public_4c0000000000d42c
  JMPTB mov eax, 4
  JMPTB public_4c0000000000d42c : nop
        je public_5974e8
  JMPTB cmp eax, 9
  JMPTB jne public_4c0000000000d428
  JMPTB mov eax, 4
  JMPTB public_4c0000000000d428 : nop
        je public_5974e8
  JMPTB cmp eax, 0xA
  JMPTB jne public_4c0000000000d424
  JMPTB mov eax, 4
  JMPTB public_4c0000000000d424 : nop
        je public_5974e8
  JMPTB cmp eax, 0xB
  JMPTB jne public_4c0000000000d420
  JMPTB mov eax, 4
  JMPTB public_4c0000000000d420 : nop
        je public_5974e8
  JMPTB cmp eax, 0xC
  JMPTB jne public_4c0000000000d41c
  JMPTB mov eax, 4
  JMPTB public_4c0000000000d41c : nop
        je public_5974e8
  JMPTB cmp eax, 0xD
  JMPTB jne public_4c0000000000d418
  JMPTB mov eax, 4
  JMPTB public_4c0000000000d418 : nop
        je public_5974e8
  JMPTB cmp eax, 0xE
  JMPTB jne public_4c0000000000d414
  JMPTB mov eax, 4
  JMPTB public_4c0000000000d414 : nop
        je public_5974e8
  JMPTB cmp eax, 0xF
  JMPTB jne public_4c0000000000d410
  JMPTB mov eax, 4
  JMPTB public_4c0000000000d410 : nop
        je public_5974e8
  JMPTB cmp eax, 0x10
  JMPTB jne public_4c0000000000d40c
  JMPTB mov eax, 4
  JMPTB public_4c0000000000d40c : nop
        je public_5974e8
  JMPTB cmp eax, 0x11
  JMPTB jne public_4c0000000000d408
  JMPTB mov eax, 4
  JMPTB public_4c0000000000d408 : nop
        je public_5974e8
  JMPTB cmp eax, 0x12
  JMPTB jne public_4c0000000000d404
  JMPTB mov eax, 4
  JMPTB public_4c0000000000d404 : nop
        je public_5974e8
  JMPTB cmp eax, 0x13
  JMPTB jne public_4c0000000000d400
  JMPTB mov eax, 4
  JMPTB public_4c0000000000d400 : nop
        je public_5974e8
  JMPTB cmp eax, 0x14
  JMPTB jne public_4c0000000000d3fc
  JMPTB mov eax, 4
  JMPTB public_4c0000000000d3fc : nop
        je public_5974e8
  JMPTB cmp eax, 0x15
  JMPTB jne public_4c0000000000d3f8
  JMPTB mov eax, 4
  JMPTB public_4c0000000000d3f8 : nop
        je public_5974e8
  JMPTB cmp eax, 0x16
  JMPTB jne public_4c0000000000d3f4
  JMPTB mov eax, 4
  JMPTB public_4c0000000000d3f4 : nop
        je public_5974e8
  JMPTB cmp eax, 0x17
  JMPTB jne public_4c0000000000d3f0
  JMPTB mov eax, 4
  JMPTB public_4c0000000000d3f0 : nop
        je public_5974e8
  JMPTB cmp eax, 0x18
  JMPTB jne public_4c0000000000d3ec
  JMPTB mov eax, 4
  JMPTB public_4c0000000000d3ec : nop
        je public_5974e8
  JMPTB cmp eax, 0x19
  JMPTB jne public_4c0000000000d3e8
  JMPTB mov eax, 4
  JMPTB public_4c0000000000d3e8 : nop
        je public_5974e8
  JMPTB cmp eax, 0x1A
  JMPTB jne public_4c0000000000d3e4
  JMPTB mov eax, 4
  JMPTB public_4c0000000000d3e4 : nop
        je public_5974e8
  JMPTB cmp eax, 0x1B
  JMPTB jne public_4c0000000000d3e0
  JMPTB mov eax, 4
  JMPTB public_4c0000000000d3e0 : nop
        je public_5974e8
  JMPTB cmp eax, 0x1C
  JMPTB jne public_4c0000000000d3dc
  JMPTB mov eax, 4
  JMPTB public_4c0000000000d3dc : nop
        je public_5974e8
  JMPTB cmp eax, 0x1D
  JMPTB jne public_4c0000000000d3d8
  JMPTB mov eax, 4
  JMPTB public_4c0000000000d3d8 : nop
        je public_5974e8
  JMPTB cmp eax, 0x1E
  JMPTB jne public_4c0000000000d3d4
  JMPTB mov eax, 4
  JMPTB public_4c0000000000d3d4 : nop
        je public_5974e8
  JMPTB cmp eax, 0x1F
  JMPTB jne public_4c0000000000d3d0
  JMPTB mov eax, 4
  JMPTB public_4c0000000000d3d0 : nop
        je public_5974e8
  JMPTB cmp eax, 0x20
  JMPTB jne public_4c0000000000d3cc
  JMPTB mov eax, 4
  JMPTB public_4c0000000000d3cc : nop
        je public_5974e8
  JMPTB cmp eax, 0x21
  JMPTB jne public_4c0000000000d3c8
  JMPTB mov eax, 4
  JMPTB public_4c0000000000d3c8 : nop
        je public_5974e8
  JMPTB cmp eax, 0x22
  JMPTB jne public_4c0000000000d3c4
  JMPTB mov eax, 4
  JMPTB public_4c0000000000d3c4 : nop
        je public_5974e8
  JMPTB cmp eax, 0x23
  JMPTB jne public_4c0000000000d3c0
  JMPTB mov eax, 4
  JMPTB public_4c0000000000d3c0 : nop
        je public_5974e8
  JMPTB cmp eax, 0x24
  JMPTB jne public_4c0000000000d3bc
  JMPTB mov eax, 4
  JMPTB public_4c0000000000d3bc : nop
        je public_5974e8
  JMPTB cmp eax, 0x25
  JMPTB jne public_4c0000000000d3b8
  JMPTB mov eax, 4
  JMPTB public_4c0000000000d3b8 : nop
        je public_5974e8
  JMPTB cmp eax, 0x26
  JMPTB jne public_4c0000000000d3b4
  JMPTB mov eax, 4
  JMPTB public_4c0000000000d3b4 : nop
        je public_5974e8
  JMPTB cmp eax, 0x27
  JMPTB jne public_4c0000000000d3b0
  JMPTB mov eax, 4
  JMPTB public_4c0000000000d3b0 : nop
        je public_5974e8
  JMPTB cmp eax, 0x28
  JMPTB jne public_4c0000000000d3ac
  JMPTB mov eax, 4
  JMPTB public_4c0000000000d3ac : nop
        je public_5974e8
  JMPTB cmp eax, 0x29
  JMPTB jne public_4c0000000000d3a8
  JMPTB mov eax, 4
  JMPTB public_4c0000000000d3a8 : nop
        je public_5974e8
  JMPTB cmp eax, 0x2A
  JMPTB jne public_4c0000000000d3a4
  JMPTB mov eax, 4
  JMPTB public_4c0000000000d3a4 : nop
        je public_5974e8
  JMPTB cmp eax, 0x2B
  JMPTB jne public_4c0000000000d3a0
  JMPTB mov eax, 4
  JMPTB public_4c0000000000d3a0 : nop
        je public_5974e8
  JMPTB cmp eax, 0x2C
  JMPTB jne public_4c0000000000d39c
  JMPTB mov eax, 4
  JMPTB public_4c0000000000d39c : nop
        je public_5974e8
  JMPTB cmp eax, 0x2D
  JMPTB jne public_4c0000000000d398
  JMPTB mov eax, 4
  JMPTB public_4c0000000000d398 : nop
        je public_5974e8
  JMPTB cmp eax, 0x2E
  JMPTB jne public_4c0000000000d394
  JMPTB mov eax, 4
  JMPTB public_4c0000000000d394 : nop
        je public_5974e8
  JMPTB cmp eax, 0x2F
  JMPTB jne public_4c0000000000d390
  JMPTB mov eax, 4
  JMPTB public_4c0000000000d390 : nop
        je public_5974e8
  JMPTB cmp eax, 0x30
  JMPTB jne public_4c0000000000d38c
  JMPTB mov eax, 4
  JMPTB public_4c0000000000d38c : nop
        je public_5974e8
  JMPTB cmp eax, 0x31
  JMPTB jne public_4c0000000000d388
  JMPTB mov eax, 1
  JMPTB public_4c0000000000d388 : nop
        je public_59744f
  JMPTB cmp eax, 0x32
  JMPTB jne public_4c0000000000d384
  JMPTB mov eax, 2
  JMPTB public_4c0000000000d384 : nop
        je public_5974b4
  JMPTB cmp eax, 0x33
  JMPTB jne public_4c0000000000d380
  JMPTB mov eax, 4
  JMPTB public_4c0000000000d380 : nop
        je public_5974e8
  JMPTB cmp eax, 0x34
  JMPTB jne public_4c0000000000d37c
  JMPTB mov eax, 4
  JMPTB public_4c0000000000d37c : nop
        je public_5974e8
  JMPTB cmp eax, 0x35
  JMPTB jne public_4c0000000000d378
  JMPTB mov eax, 3
  JMPTB public_4c0000000000d378 : nop
        je public_5974d6
  JMPTB int 3
        public_597374 : nop
        push edi
        lea edi, ds:[esi+0x41C]
        mov ecx, edi
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0xC], edx
        mov edx, dword ptr ss : [esp+0x5C]
        mov dword ptr ss : [esp+0x10], eax
        mov dword ptr ss : [esp+0x14], ecx
        mov ecx, dword ptr ds : [edx]
        mov eax, edi
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ds : [edx+4]
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ds : [eax+8], edx
        fld dword ptr ds : [esi+0x68]
        fsub dword ptr ss : [esp+0x14]
        sub esp, 0xC
        lea ecx, ss:[esp+0x18]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ds : [esi+0x64]
        fsub dword ptr ss : [esp+0x1C]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [esi+0x60]
        fsub dword ptr ss : [esp+0x18]
        fstp dword ptr ss : [esp]
        call public_422b80
        fld dword ptr ss : [esp+0x14]
        sub esp, 0xC
        fadd dword ptr ds : [edi+8]
        lea ecx, ss:[esp+0x24]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x1C]
        fadd dword ptr ds : [edi+4]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x18]
        fadd dword ptr ds : [edi]
        fstp dword ptr ss : [esp]
        call public_422b80
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, esi
        call public_5a0880
        mov eax, dword ptr ds : [public_67d9fc]
        test eax, eax
        jne public_59741d
        call public_5b73e0
        mov dword ptr ds : [public_67d9fc], eax
        public_59741d : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ds:[esi+0x3C]
        push edx
        lea edx, ss:[esp+0x60]
        push edx
        lea edx, ss:[esp+0x2C]
        push edx
        push eax
        call dword ptr ds : [ecx+0x5C]
        lea edi, ds:[esi+0x3DC]
        mov ecx, 0xC
        lea esi, ss:[esp+0x24]
        rep movsd
        pop edi
        mov eax, 1
        pop esi
        add esp, 0x4C
        ret 0xC
        public_59744f : nop
        mov eax, dword ptr ss : [esp+0x5C]
        fld dword ptr ds : [esi+0x428]
        mov ecx, dword ptr ss : [esp+0x58]
        fst dword ptr ds : [esi+0x3CC]
        mov dword ptr ss : [esp+0x54], eax
        sub eax, ecx
        mov dword ptr ss : [esp+4], eax
        fild dword ptr ss : [esp+4]
        fcomp 
        fnstsw ax
        mov al, byte ptr ds : [esi+0x6C]
        fstp st(0)
        test ah, 5
        jp public_597486
        and al, 0xFC
        mov byte ptr ds : [esi+0x6C], al
        jmp public_59749e
        public_597486 : nop
        fild dword ptr ss : [esp+0x5C]
        or al, 3
        mov byte ptr ds : [esi+0x6C], al
        fadd dword ptr ds : [public_5c75dc]
        call public_5b7ec0
        mov dword ptr ss : [esp+0x54], eax
        public_59749e : nop
        fild dword ptr ss : [esp+0x58]
        fstp dword ptr ds : [esi+0x3C0]
        fild dword ptr ss : [esp+0x54]
        fstp dword ptr ds : [esi+0x3C4]
        jmp public_5974be
        public_5974b4 : nop
        fild dword ptr ss : [esp+0x58]
        fstp dword ptr ds : [esi+0x3C8]
        public_5974be : nop
        mov ecx, esi
        call public_595ca0
        call public_595840
        mov eax, 1
        pop esi
        add esp, 0x4C
        ret 0xC
        public_5974d6 : nop
        fld dword ptr ds : [esi+0x3C8]
        call public_5b7ec0
        pop esi
        add esp, 0x4C
        ret 0xC
        public_5974e8 : nop
        mov eax, dword ptr ss : [esp+0x5C]
        mov edx, dword ptr ss : [esp+0x58]
        push eax
        push edx
        push ecx
        mov ecx, esi
        call public_5a13c0
        pop esi
        add esp, 0x4C
        ret 0xC
        UNREACHABLE_TRAP(0x597350)
        ASM_EXPORT_ENTRY_SINGLE(0x5974e8, public_5974e8)
    }
}

#undef public_597374
#undef public_59741d
#undef public_59744f
#undef public_597486
#undef public_59749e
#undef public_5974b4
#undef public_5974be
#undef public_5974d6
#undef public_5974e8

#pragma init_seg(compiler)
extern "C" void const* const public_5974e8 = __AsmFindLabelExport(&internal_597350, 0x5974e8);
