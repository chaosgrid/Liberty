#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f08c70);

#define public_6f0a643 _public_6f0a643
#define public_6f0a660 _public_6f0a660
#define public_6f0a690 _public_6f0a690
#define public_6f0a6b1 _public_6f0a6b1
#define public_6f0a713 _public_6f0a713
#define public_6f0a721 _public_6f0a721
#define public_6f0a727 _public_6f0a727
#define public_6f0a73e _public_6f0a73e
#define public_6f0a78b _public_6f0a78b
#define public_6f0a7b9 _public_6f0a7b9
#define public_6f0a7cc _public_6f0a7cc
#define public_6f0a7db _public_6f0a7db
#define public_6f0a7e3 _public_6f0a7e3
#define public_6f0a7f4 _public_6f0a7f4

PROC_DECLARE(0x6f0a620, internal_6f0a620, public_6f0a620);
extern "C" NAKED register_t __cdecl internal_6f0a620()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push ebp
        push esi
        mov esi, ecx
        mov ecx, dword ptr ss : [esp+0xC]
        lea eax, ds:[ecx-0x11]
        cmp eax, 0x16
        push edi
        ja public_6f0a7cc
/*FIXUP movzx eax, byte ptr ds : [eax+public_6f0a810] @0x6f0a635*/
/*FIXUP jmp dword ptr ds : [eax*4+public_6f0a7fc] @0x6f0a63c*/
  JMPTB cmp eax, 0
  JMPTB jne public_4c00000000004f69
  JMPTB mov eax, 0
  JMPTB public_4c00000000004f69 : nop
        je public_6f0a73e
  JMPTB cmp eax, 1
  JMPTB jne public_4c00000000004f65
  JMPTB mov eax, 4
  JMPTB public_4c00000000004f65 : nop
        je public_6f0a7cc
  JMPTB cmp eax, 2
  JMPTB jne public_4c00000000004f61
  JMPTB mov eax, 4
  JMPTB public_4c00000000004f61 : nop
        je public_6f0a7cc
  JMPTB cmp eax, 3
  JMPTB jne public_4c00000000004f5d
  JMPTB mov eax, 4
  JMPTB public_4c00000000004f5d : nop
        je public_6f0a7cc
  JMPTB cmp eax, 4
  JMPTB jne public_4c00000000004f59
  JMPTB mov eax, 4
  JMPTB public_4c00000000004f59 : nop
        je public_6f0a7cc
  JMPTB cmp eax, 5
  JMPTB jne public_4c00000000004f55
  JMPTB mov eax, 1
  JMPTB public_4c00000000004f55 : nop
        je public_6f0a78b
  JMPTB cmp eax, 6
  JMPTB jne public_4c00000000004f51
  JMPTB mov eax, 4
  JMPTB public_4c00000000004f51 : nop
        je public_6f0a7cc
  JMPTB cmp eax, 7
  JMPTB jne public_4c00000000004f4d
  JMPTB mov eax, 4
  JMPTB public_4c00000000004f4d : nop
        je public_6f0a7cc
  JMPTB cmp eax, 8
  JMPTB jne public_4c00000000004f49
  JMPTB mov eax, 4
  JMPTB public_4c00000000004f49 : nop
        je public_6f0a7cc
  JMPTB cmp eax, 9
  JMPTB jne public_4c00000000004f45
  JMPTB mov eax, 4
  JMPTB public_4c00000000004f45 : nop
        je public_6f0a7cc
  JMPTB cmp eax, 0xA
  JMPTB jne public_4c00000000004f41
  JMPTB mov eax, 4
  JMPTB public_4c00000000004f41 : nop
        je public_6f0a7cc
  JMPTB cmp eax, 0xB
  JMPTB jne public_4c00000000004f3d
  JMPTB mov eax, 4
  JMPTB public_4c00000000004f3d : nop
        je public_6f0a7cc
  JMPTB cmp eax, 0xC
  JMPTB jne public_4c00000000004f39
  JMPTB mov eax, 4
  JMPTB public_4c00000000004f39 : nop
        je public_6f0a7cc
  JMPTB cmp eax, 0xD
  JMPTB jne public_4c00000000004f35
  JMPTB mov eax, 4
  JMPTB public_4c00000000004f35 : nop
        je public_6f0a7cc
  JMPTB cmp eax, 0xE
  JMPTB jne public_4c00000000004f31
  JMPTB mov eax, 4
  JMPTB public_4c00000000004f31 : nop
        je public_6f0a7cc
  JMPTB cmp eax, 0xF
  JMPTB jne public_4c00000000004f2d
  JMPTB mov eax, 2
  JMPTB public_4c00000000004f2d : nop
        je public_6f0a643
  JMPTB cmp eax, 0x10
  JMPTB jne public_4c00000000004f29
  JMPTB mov eax, 4
  JMPTB public_4c00000000004f29 : nop
        je public_6f0a7cc
  JMPTB cmp eax, 0x11
  JMPTB jne public_4c00000000004f25
  JMPTB mov eax, 4
  JMPTB public_4c00000000004f25 : nop
        je public_6f0a7cc
  JMPTB cmp eax, 0x12
  JMPTB jne public_4c00000000004f21
  JMPTB mov eax, 4
  JMPTB public_4c00000000004f21 : nop
        je public_6f0a7cc
  JMPTB cmp eax, 0x13
  JMPTB jne public_4c00000000004f1d
  JMPTB mov eax, 4
  JMPTB public_4c00000000004f1d : nop
        je public_6f0a7cc
  JMPTB cmp eax, 0x14
  JMPTB jne public_4c00000000004f19
  JMPTB mov eax, 4
  JMPTB public_4c00000000004f19 : nop
        je public_6f0a7cc
  JMPTB cmp eax, 0x15
  JMPTB jne public_4c00000000004f15
  JMPTB mov eax, 4
  JMPTB public_4c00000000004f15 : nop
        je public_6f0a7cc
  JMPTB cmp eax, 0x16
  JMPTB jne public_4c00000000004f11
  JMPTB mov eax, 3
  JMPTB public_4c00000000004f11 : nop
        je public_6f0a690
  JMPTB int 3
        public_6f0a643 : nop
        mov eax, dword ptr ds : [esi+0x174]
        cmp eax, 0xA
        je public_6f0a660
        cmp eax, 0xD
        jne public_6f0a7cc
        mov byte ptr ds : [esi+0x10], 1
        jmp public_6f0a7e3
        public_6f0a660 : nop
        mov edx, 0xC
        cmp eax, edx
        mov cl, 1
        mov byte ptr ds : [esi+0x1B5], cl
        mov byte ptr ds : [esi+0x10], 0
        je public_6f0a7e3
        mov dword ptr ds : [esi+0x178], eax
        mov dword ptr ds : [esi+0x174], edx
        mov byte ptr ds : [esi+0x1B4], cl
        jmp public_6f0a7e3
        public_6f0a690 : nop
        cmp dword ptr ds : [esi+0x174], 0xC
        je public_6f0a6b1
        mov al, byte ptr ds : [esi+0x1B5]
        test al, al
        jne public_6f0a7e3
        mov eax, dword ptr ss : [esp+0x14]
        push eax
        jmp public_6f0a7db
        public_6f0a6b1 : nop
        mov ecx, dword ptr ds : [esi+8]
        mov ebp, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [ebp]
        cmp edx, dword ptr ds : [ecx+4]
        jne public_6f0a7e3
        mov ecx, dword ptr ds : [esi+0x1B0]
        lea eax, ss:[esp+0x10]
        lea edi, ds:[esi+0x1B0]
        push eax
        push ecx
        call dword ptr ds : [public_6fb33a0]
        add esp, 8
        test eax, eax
        jne public_6f0a7e3
        lea edx, ss:[esp+0x14]
        push edx
        push edi
        mov dword ptr ss : [esp+0x1C], eax
        call dword ptr ds : [public_6fb3428]
        mov ecx, dword ptr ss : [esp+0x18]
        add esp, 8
        test ch, 1
        je public_6f0a713
        mov eax, dword ptr ss : [ebp+4]
        test eax, 0x3FFFFFFF
        je public_6f0a713
        cmp dword ptr ss : [esp+0x14], eax
        je public_6f0a727
        public_6f0a713 : nop
        test cl, 0x20
        je public_6f0a7e3
        mov eax, dword ptr ds : [edi]
        cmp eax, dword ptr ss : [ebp+8]
        public_6f0a721 : nop
        jne public_6f0a7e3
        public_6f0a727 : nop
        mov eax, dword ptr ds : [esi+0x174]
        cmp eax, 0xD
        je public_6f0a7e3
        mov dword ptr ds : [esi+0x178], eax
        jmp public_6f0a7b9
        public_6f0a73e : nop
        cmp dword ptr ds : [esi+0x174], 0xC
        jne public_6f0a7cc
        mov eax, dword ptr ds : [esi+8]
        mov edi, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [edi]
        cmp ecx, dword ptr ds : [eax+4]
        jne public_6f0a7e3
        mov eax, dword ptr ds : [esi+0x1B0]
        lea edx, ss:[esp+0x14]
        push edx
        push eax
        call dword ptr ds : [public_6fb33a0]
        add esp, 8
        test eax, eax
        jne public_6f0a7e3
        test dword ptr ss : [esp+0x14], 0xC40
        je public_6f0a7e3
        mov ecx, dword ptr ds : [esi+0x1B0]
        cmp ecx, dword ptr ds : [edi+4]
        jmp public_6f0a721
        public_6f0a78b : nop
        mov eax, dword ptr ds : [esi+0x174]
        mov edx, 0xC
        cmp eax, edx
        jne public_6f0a7cc
        mov ecx, dword ptr ds : [esi+8]
        mov eax, dword ptr ss : [esp+0x14]
        mov edi, dword ptr ds : [eax]
        cmp edi, dword ptr ds : [ecx+4]
        jne public_6f0a7e3
        mov eax, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [esi+0x1B0]
        jne public_6f0a7e3
        mov dword ptr ds : [esi+0x178], edx
        public_6f0a7b9 : nop
        mov dword ptr ds : [esi+0x174], 0xD
        mov byte ptr ds : [esi+0x1B4], 1
        jmp public_6f0a7e3
        public_6f0a7cc : nop
        mov al, byte ptr ds : [esi+0x1B5]
        test al, al
        jne public_6f0a7e3
        mov edx, dword ptr ss : [esp+0x14]
        push edx
        public_6f0a7db : nop
        push ecx
        mov ecx, esi
        call public_6f08c70
        public_6f0a7e3 : nop
        mov al, byte ptr ds : [esi+0x1B4]
        test al, al
        je public_6f0a7f4
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x10]
        public_6f0a7f4 : nop
        pop edi
        pop esi
        pop ebp
        ret 8
        UNREACHABLE_TRAP(0x6f0a620)
        ASM_EXPORT_ENTRY_FIRST(0x6f0a643, public_6f0a643)
        ASM_EXPORT_ENTRY(0x6f0a690, public_6f0a690)
        ASM_EXPORT_ENTRY(0x6f0a73e, public_6f0a73e)
        ASM_EXPORT_ENTRY(0x6f0a78b, public_6f0a78b)
        ASM_EXPORT_ENTRY_LAST(0x6f0a7cc, public_6f0a7cc)
    }
}

#undef public_6f0a643
#undef public_6f0a660
#undef public_6f0a690
#undef public_6f0a6b1
#undef public_6f0a713
#undef public_6f0a721
#undef public_6f0a727
#undef public_6f0a73e
#undef public_6f0a78b
#undef public_6f0a7b9
#undef public_6f0a7cc
#undef public_6f0a7db
#undef public_6f0a7e3
#undef public_6f0a7f4

#pragma init_seg(compiler)
extern "C" void const* const public_6f0a643 = __AsmFindLabelExport(&internal_6f0a620, 0x6f0a643);
extern "C" void const* const public_6f0a690 = __AsmFindLabelExport(&internal_6f0a620, 0x6f0a690);
extern "C" void const* const public_6f0a73e = __AsmFindLabelExport(&internal_6f0a620, 0x6f0a73e);
extern "C" void const* const public_6f0a78b = __AsmFindLabelExport(&internal_6f0a620, 0x6f0a78b);
extern "C" void const* const public_6f0a7cc = __AsmFindLabelExport(&internal_6f0a620, 0x6f0a7cc);
