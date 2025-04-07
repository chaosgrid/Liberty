#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ed1c80);
CLANG_FORWARD_PROC_SYMBOL(public_6f00610);
CLANG_FORWARD_PROC_SYMBOL(public_6f1df30);
CLANG_FORWARD_PROC_SYMBOL(public_6f21210);
CLANG_FORWARD_PROC_SYMBOL(public_6f855f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f858c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f9dee0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa0330);
CLANG_FORWARD_PROC_SYMBOL(public_6fa6e80);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6fb1ade);

#define public_6f9df28 _public_6f9df28
#define public_6f9df62 _public_6f9df62
#define public_6f9dfaf _public_6f9dfaf
#define public_6f9dfb9 _public_6f9dfb9
#define public_6f9dfe2 _public_6f9dfe2
#define public_6f9dfe4 _public_6f9dfe4
#define public_6f9e015 _public_6f9e015
#define public_6f9e034 _public_6f9e034
#define public_6f9e03a _public_6f9e03a
#define public_6f9e040 _public_6f9e040
#define public_6f9e046 _public_6f9e046
#define public_6f9e04a _public_6f9e04a
#define public_6f9e059 _public_6f9e059
#define public_6f9e060 _public_6f9e060
#define public_6f9e067 _public_6f9e067
#define public_6f9e06c _public_6f9e06c
#define public_6f9e088 _public_6f9e088
#define public_6f9e098 _public_6f9e098
#define public_6f9e09b _public_6f9e09b
#define public_6f9e09f _public_6f9e09f
#define public_6f9e0cb _public_6f9e0cb
#define public_6f9e109 _public_6f9e109
#define public_6f9e112 _public_6f9e112
#define public_6f9e141 _public_6f9e141
#define public_6f9e150 _public_6f9e150
#define public_6f9e182 _public_6f9e182
#define public_6f9e197 _public_6f9e197

PROC_DECLARE(0x6f9dee0, internal_6f9dee0, public_6f9dee0);
extern "C" NAKED register_t __cdecl internal_6f9dee0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push 0xFFFFFFFF
/*FIXUP push public_6fb1ade @0x6f9dee2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fb1ade
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x48
        push ebx
        push ebp
        push esi
        xor eax, eax
        push edi
        mov dword ptr ss : [esp+0x1C], eax
        mov ecx, dword ptr ss : [esp+0x6C]
        mov esi, dword ptr ds : [ecx]
        cmp esi, eax
        mov dword ptr ss : [esp+0x60], eax
        je public_6f9df28
        lea ecx, ss:[esp+0x1C]
        call public_6fa0330
        lea ecx, ds:[esi+4]
        mov dword ptr ss : [esp+0x1C], esi
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx]
        mov eax, dword ptr ss : [esp+0x1C]
        public_6f9df28 : nop
        lea ecx, ds:[eax+0xD4]
        mov dword ptr ss : [esp+0x20], ecx
        lea ecx, ds:[eax+0x160]
        mov dword ptr ss : [esp+0x24], ecx
        mov ecx, dword ptr ss : [esp+0x70]
        mov ecx, dword ptr ds : [ecx+8]
        mov ecx, dword ptr ds : [ecx]
        lea edx, ds:[eax+0x108]
        mov dword ptr ss : [esp+0x28], edx
        lea edx, ds:[eax+0x1AC]
        mov dword ptr ss : [esp+0x2C], edx
        mov dword ptr ss : [esp+0x14], ecx
        mov ebx, 1
        public_6f9df62 : nop
        mov edx, dword ptr ss : [esp+0x70]
        cmp ecx, dword ptr ds : [edx+8]
        je public_6f9e182
        mov eax, dword ptr ds : [ecx+0xC]
        cmp eax, 2
        je public_6f9dfb9
        cmp eax, ebx
        je public_6f9dfb9
        cmp eax, 3
        je public_6f9dfb9
        push 0x70
        call public_6fa912a
        add esp, 4
        mov dword ptr ss : [esp+0x6C], eax
        test eax, eax
        mov byte ptr ss : [esp+0x60], 2
        je public_6f9dfaf
        mov ecx, dword ptr ss : [esp+0x14]
        add ecx, 0x10
        push ecx
        mov ecx, eax
        call public_6f858c0
        mov byte ptr ss : [esp+0x60], 0
        mov esi, eax
        jmp public_6f9e015
        public_6f9dfaf : nop
        xor eax, eax
        mov byte ptr ss : [esp+0x60], al
        mov esi, eax
        jmp public_6f9e015
        public_6f9dfb9 : nop
        push 0x5C
        call public_6fa912a
        add esp, 4
        mov dword ptr ss : [esp+0x6C], eax
        test eax, eax
        mov byte ptr ss : [esp+0x60], bl
        je public_6f9dfe2
        mov edx, dword ptr ss : [esp+0x14]
        add edx, 0x10
        push edx
        mov ecx, eax
        call public_6f855f0
        mov esi, eax
        jmp public_6f9dfe4
        public_6f9dfe2 : nop
        xor esi, esi
        public_6f9dfe4 : nop
        mov eax, dword ptr ss : [esp+0x68]
        mov edx, dword ptr ds : [esi]
        lea ecx, ds:[eax+0x20]
        mov ebp, dword ptr ds : [ecx]
        mov eax, dword ptr ds : [eax+0x30]
        sub esp, 0xC
        mov edi, esp
        mov dword ptr ds : [edi], ebp
        mov ebp, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [edi+4], ebp
        push 0x44D
        mov dword ptr ds : [edi+8], ecx
        push eax
        mov ecx, esi
        mov byte ptr ss : [esp+0x74], 0
        call dword ptr ds : [edx+0x28]
        public_6f9e015 : nop
        mov edx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [edx+0xC]
        lea edx, ds:[eax-1]
        xor ecx, ecx
        cmp edx, 0x17
        ja public_6f9e04a
/*FIXUP movzx edx, byte ptr ds : [edx+public_6f9e1c0] @0x6f9e026*/
/*FIXUP jmp dword ptr ds : [edx*4+public_6f9e1ac] @0x6f9e02d*/
  JMPTB cmp edx, 0
  JMPTB jne public_4c00000000005747
  JMPTB mov edx, 0
  JMPTB public_4c00000000005747 : nop
        je public_6f9e034
  JMPTB cmp edx, 1
  JMPTB jne public_4c00000000005743
  JMPTB mov edx, 0
  JMPTB public_4c00000000005743 : nop
        je public_6f9e034
  JMPTB cmp edx, 2
  JMPTB jne public_4c0000000000573f
  JMPTB mov edx, 1
  JMPTB public_4c0000000000573f : nop
        je public_6f9e040
  JMPTB cmp edx, 3
  JMPTB jne public_4c0000000000573b
  JMPTB mov edx, 2
  JMPTB public_4c0000000000573b : nop
        je public_6f9e03a
  JMPTB cmp edx, 4
  JMPTB jne public_4c00000000005737
  JMPTB mov edx, 2
  JMPTB public_4c00000000005737 : nop
        je public_6f9e03a
  JMPTB cmp edx, 5
  JMPTB jne public_4c00000000005733
  JMPTB mov edx, 4
  JMPTB public_4c00000000005733 : nop
        je public_6f9e04a
  JMPTB cmp edx, 6
  JMPTB jne public_4c0000000000572f
  JMPTB mov edx, 4
  JMPTB public_4c0000000000572f : nop
        je public_6f9e04a
  JMPTB cmp edx, 7
  JMPTB jne public_4c0000000000572b
  JMPTB mov edx, 4
  JMPTB public_4c0000000000572b : nop
        je public_6f9e04a
  JMPTB cmp edx, 8
  JMPTB jne public_4c00000000005727
  JMPTB mov edx, 0
  JMPTB public_4c00000000005727 : nop
        je public_6f9e034
  JMPTB cmp edx, 9
  JMPTB jne public_4c00000000005723
  JMPTB mov edx, 0
  JMPTB public_4c00000000005723 : nop
        je public_6f9e034
  JMPTB cmp edx, 0xA
  JMPTB jne public_4c0000000000571f
  JMPTB mov edx, 0
  JMPTB public_4c0000000000571f : nop
        je public_6f9e034
  JMPTB cmp edx, 0xB
  JMPTB jne public_4c0000000000571b
  JMPTB mov edx, 0
  JMPTB public_4c0000000000571b : nop
        je public_6f9e034
  JMPTB cmp edx, 0xC
  JMPTB jne public_4c00000000005717
  JMPTB mov edx, 0
  JMPTB public_4c00000000005717 : nop
        je public_6f9e034
  JMPTB cmp edx, 0xD
  JMPTB jne public_4c00000000005713
  JMPTB mov edx, 4
  JMPTB public_4c00000000005713 : nop
        je public_6f9e04a
  JMPTB cmp edx, 0xE
  JMPTB jne public_4c0000000000570f
  JMPTB mov edx, 4
  JMPTB public_4c0000000000570f : nop
        je public_6f9e04a
  JMPTB cmp edx, 0xF
  JMPTB jne public_4c0000000000570b
  JMPTB mov edx, 4
  JMPTB public_4c0000000000570b : nop
        je public_6f9e04a
  JMPTB cmp edx, 0x10
  JMPTB jne public_4c00000000005707
  JMPTB mov edx, 4
  JMPTB public_4c00000000005707 : nop
        je public_6f9e04a
  JMPTB cmp edx, 0x11
  JMPTB jne public_4c00000000005703
  JMPTB mov edx, 4
  JMPTB public_4c00000000005703 : nop
        je public_6f9e04a
  JMPTB cmp edx, 0x12
  JMPTB jne public_4c000000000056ff
  JMPTB mov edx, 1
  JMPTB public_4c000000000056ff : nop
        je public_6f9e040
  JMPTB cmp edx, 0x13
  JMPTB jne public_4c000000000056fb
  JMPTB mov edx, 1
  JMPTB public_4c000000000056fb : nop
        je public_6f9e040
  JMPTB cmp edx, 0x14
  JMPTB jne public_4c000000000056f7
  JMPTB mov edx, 1
  JMPTB public_4c000000000056f7 : nop
        je public_6f9e040
  JMPTB cmp edx, 0x15
  JMPTB jne public_4c000000000056f3
  JMPTB mov edx, 3
  JMPTB public_4c000000000056f3 : nop
        je public_6f9e046
  JMPTB cmp edx, 0x16
  JMPTB jne public_4c000000000056ef
  JMPTB mov edx, 3
  JMPTB public_4c000000000056ef : nop
        je public_6f9e046
  JMPTB cmp edx, 0x17
  JMPTB jne public_4c000000000056eb
  JMPTB mov edx, 3
  JMPTB public_4c000000000056eb : nop
        je public_6f9e046
  JMPTB int 3
        public_6f9e034 : nop
        mov ecx, dword ptr ss : [esp+0x20]
        jmp public_6f9e04a
        public_6f9e03a : nop
        mov ecx, dword ptr ss : [esp+0x24]
        jmp public_6f9e04a
        public_6f9e040 : nop
        mov ecx, dword ptr ss : [esp+0x28]
        jmp public_6f9e04a
        public_6f9e046 : nop
        mov ecx, dword ptr ss : [esp+0x2C]
        public_6f9e04a : nop
        lea edx, ds:[eax-0x13]
        cmp edx, 5
        ja public_6f9e06c
/*FIXUP jmp dword ptr ds : [edx*4+public_6f9e1d8] @0x6f9e052*/
  JMPTB cmp edx, 0
  JMPTB je public_6f9e059
  JMPTB cmp edx, 1
  JMPTB je public_6f9e060
  JMPTB cmp edx, 2
  JMPTB je public_6f9e067
  JMPTB cmp edx, 3
  JMPTB je public_6f9e059
  JMPTB cmp edx, 4
  JMPTB je public_6f9e060
  JMPTB cmp edx, 5
  JMPTB je public_6f9e067
  JMPTB int 3
        public_6f9e059 : nop
        mov eax, 6
        jmp public_6f9e06c
        public_6f9e060 : nop
        mov eax, 7
        jmp public_6f9e06c
        public_6f9e067 : nop
        mov eax, 8
        public_6f9e06c : nop
        mov edx, dword ptr ds : [ecx+0xC]
        lea edi, ds:[ecx+4]
        mov ecx, dword ptr ds : [edi+4]
        mov dword ptr ss : [esp+0x40], eax
        mov dword ptr ss : [esp+0x44], esi
        mov esi, dword ptr ds : [ecx+4]
        cmp esi, edx
        mov ebp, ecx
        mov cl, bl
        je public_6f9e09f
        public_6f9e088 : nop
        cmp eax, dword ptr ds : [esi+0xC]
        setl cl
        test cl, cl
        mov ebp, esi
        je public_6f9e098
        mov esi, dword ptr ds : [esi]
        jmp public_6f9e09b
        public_6f9e098 : nop
        mov esi, dword ptr ds : [esi+8]
        public_6f9e09b : nop
        cmp esi, edx
        jne public_6f9e088
        public_6f9e09f : nop
        mov al, byte ptr ds : [edi+0xC]
        test al, al
        je public_6f9e0cb
        lea eax, ss:[esp+0x6C]
        push eax
        lea ecx, ss:[esp+0x44]
        push ecx
        push ebp
        push esi
        lea edx, ss:[esp+0x40]
        push edx
        mov ecx, edi
        mov byte ptr ss : [esp+0x80], bl
        call public_6f21210
        push eax
        jmp public_6f9e150
        public_6f9e0cb : nop
        test cl, cl
        mov dword ptr ss : [esp+0x18], ebp
        je public_6f9e112
        lea eax, ss:[esp+0x34]
        push eax
        mov ecx, edi
        call public_6f1df30
        mov ecx, dword ptr ss : [esp+0x18]
        cmp ecx, dword ptr ds : [eax]
        jne public_6f9e109
        lea edx, ss:[esp+0x6C]
        push edx
        lea eax, ss:[esp+0x44]
        push eax
        push ebp
        push esi
        lea ecx, ss:[esp+0x48]
        push ecx
        mov ecx, edi
        mov byte ptr ss : [esp+0x80], bl
        call public_6f21210
        push eax
        jmp public_6f9e150
        public_6f9e109 : nop
        lea ecx, ss:[esp+0x18]
        call public_6f00610
        public_6f9e112 : nop
        mov edx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [edx+0xC]
        cmp eax, dword ptr ss : [esp+0x40]
        jge public_6f9e141
        lea ecx, ss:[esp+0x6C]
        push ecx
        lea edx, ss:[esp+0x44]
        push edx
        push ebp
        push esi
        lea eax, ss:[esp+0x4C]
        push eax
        mov ecx, edi
        mov byte ptr ss : [esp+0x80], bl
        call public_6f21210
        push eax
        jmp public_6f9e150
        public_6f9e141 : nop
        lea ecx, ss:[esp+0x13]
        push ecx
        lea edx, ss:[esp+0x1C]
        mov byte ptr ss : [esp+0x17], 0
        push edx
        public_6f9e150 : nop
        lea ecx, ss:[esp+0x50]
        call public_6fa6e80
        lea eax, ss:[esp+0x4C]
        push eax
        lea ecx, ss:[esp+0x4C]
        push ecx
        lea ecx, ss:[esp+0x58]
        call public_6fa6e80
        lea ecx, ss:[esp+0x14]
        call public_6ed1c80
        mov eax, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ss : [esp+0x14]
        jmp public_6f9df62
        public_6f9e182 : nop
        test eax, eax
        mov dword ptr ss : [esp+0x60], 0xFFFFFFFF
        je public_6f9e197
        mov edx, dword ptr ds : [eax+4]
        lea ecx, ds:[eax+4]
        call dword ptr ds : [edx+4]
        public_6f9e197 : nop
        mov ecx, dword ptr ss : [esp+0x58]
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs : [0], ecx
        pop ebx
        add esp, 0x54
        ret 0x10
        UNREACHABLE_TRAP(0x6f9dee0)
        ASM_EXPORT_ENTRY_FIRST(0x6f9e034, public_6f9e034)
        ASM_EXPORT_ENTRY(0x6f9e03a, public_6f9e03a)
        ASM_EXPORT_ENTRY(0x6f9e040, public_6f9e040)
        ASM_EXPORT_ENTRY(0x6f9e046, public_6f9e046)
        ASM_EXPORT_ENTRY(0x6f9e04a, public_6f9e04a)
        ASM_EXPORT_ENTRY(0x6f9e059, public_6f9e059)
        ASM_EXPORT_ENTRY(0x6f9e060, public_6f9e060)
        ASM_EXPORT_ENTRY_LAST(0x6f9e067, public_6f9e067)
    }
}

#undef public_6f9df28
#undef public_6f9df62
#undef public_6f9dfaf
#undef public_6f9dfb9
#undef public_6f9dfe2
#undef public_6f9dfe4
#undef public_6f9e015
#undef public_6f9e034
#undef public_6f9e03a
#undef public_6f9e040
#undef public_6f9e046
#undef public_6f9e04a
#undef public_6f9e059
#undef public_6f9e060
#undef public_6f9e067
#undef public_6f9e06c
#undef public_6f9e088
#undef public_6f9e098
#undef public_6f9e09b
#undef public_6f9e09f
#undef public_6f9e0cb
#undef public_6f9e109
#undef public_6f9e112
#undef public_6f9e141
#undef public_6f9e150
#undef public_6f9e182
#undef public_6f9e197

#pragma init_seg(compiler)
extern "C" void const* const public_6f9e034 = __AsmFindLabelExport(&internal_6f9dee0, 0x6f9e034);
extern "C" void const* const public_6f9e03a = __AsmFindLabelExport(&internal_6f9dee0, 0x6f9e03a);
extern "C" void const* const public_6f9e040 = __AsmFindLabelExport(&internal_6f9dee0, 0x6f9e040);
extern "C" void const* const public_6f9e046 = __AsmFindLabelExport(&internal_6f9dee0, 0x6f9e046);
extern "C" void const* const public_6f9e04a = __AsmFindLabelExport(&internal_6f9dee0, 0x6f9e04a);
extern "C" void const* const public_6f9e059 = __AsmFindLabelExport(&internal_6f9dee0, 0x6f9e059);
extern "C" void const* const public_6f9e060 = __AsmFindLabelExport(&internal_6f9dee0, 0x6f9e060);
extern "C" void const* const public_6f9e067 = __AsmFindLabelExport(&internal_6f9dee0, 0x6f9e067);
