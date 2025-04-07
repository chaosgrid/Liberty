#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f05f00);
CLANG_FORWARD_PROC_SYMBOL(public_6f062d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f06560);
CLANG_FORWARD_PROC_SYMBOL(public_6f06e50);
CLANG_FORWARD_PROC_SYMBOL(public_6f06fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6f07ef0);
CLANG_FORWARD_PROC_SYMBOL(public_6f0a270);
CLANG_FORWARD_PROC_SYMBOL(public_6f0aa40);
CLANG_FORWARD_PROC_SYMBOL(public_6f0de80);
CLANG_FORWARD_PROC_SYMBOL(public_6f27940);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6face03);

#define public_6f05f32 _public_6f05f32
#define public_6f05fb3 _public_6f05fb3
#define public_6f05fb5 _public_6f05fb5
#define public_6f05fdf _public_6f05fdf
#define public_6f0600a _public_6f0600a
#define public_6f06035 _public_6f06035
#define public_6f060c6 _public_6f060c6
#define public_6f060ca _public_6f060ca
#define public_6f060f1 _public_6f060f1
#define public_6f06118 _public_6f06118
#define public_6f0611a _public_6f0611a
#define public_6f0611c _public_6f0611c
#define public_6f06124 _public_6f06124
#define public_6f0613d _public_6f0613d
#define public_6f06149 _public_6f06149
#define public_6f06154 _public_6f06154

PROC_DECLARE(0x6f05f00, internal_6f05f00, public_6f05f00);
extern "C" NAKED register_t __cdecl internal_6f05f00()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push 0xFFFFFFFF
/*FIXUP push public_6face03 @0x6f05f02*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6face03
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ds : [edi+8]
        xor esi, esi
        dec eax
        cmp eax, 5
        ja public_6f06124
/*FIXUP jmp dword ptr ds : [eax*4+public_6f06170] @0x6f05f2b*/
  JMPTB cmp eax, 0
  JMPTB je public_6f05f32
  JMPTB cmp eax, 1
  JMPTB je public_6f05fdf
  JMPTB cmp eax, 2
  JMPTB je public_6f0600a
  JMPTB cmp eax, 3
  JMPTB je public_6f06035
  JMPTB cmp eax, 4
  JMPTB je public_6f060ca
  JMPTB cmp eax, 5
  JMPTB je public_6f060f1
  JMPTB int 3
        public_6f05f32 : nop
        push 0x28
        call public_6fa912a
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x1C], esi
        test esi, esi
        mov dword ptr ss : [esp+0x14], 0
        je public_6f060c6
        push edi
        mov ecx, esi
        call public_6f06560
        lea eax, ds:[esi+0x20]
        push eax
        lea ecx, ds:[esi+0x1C]
        push ecx
        lea edx, ds:[esi+0x18]
        push edx
        lea eax, ds:[esi+0x14]
        push eax
        mov ecx, edi
        mov byte ptr ss : [esp+0x24], 1
        mov dword ptr ds : [esi], offset public_6fb81d8
        call public_6f062d0
        lea edi, ds:[esi+0x24]
        mov dword ptr ds : [edi], 0
        push 0x11C
        mov byte ptr ss : [esp+0x18], 3
        mov dword ptr ds : [esi], offset public_6fb8188
        call public_6fa912a
        add esp, 4
        mov dword ptr ss : [esp+8], eax
        test eax, eax
        mov byte ptr ss : [esp+0x14], 4
        je public_6f05fb3
        mov ecx, eax
        call public_6f06e50
        jmp public_6f05fb5
        public_6f05fb3 : nop
        xor eax, eax
        public_6f05fb5 : nop
        push eax
        mov ecx, edi
        mov byte ptr ss : [esp+0x18], 3
        call public_6f0de80
        mov ecx, dword ptr ds : [edi]
        push 0x461C4000
        call public_6f27940
        mov edi, dword ptr ds : [edi]
        mov dword ptr ds : [edi+0x114], 1
        jmp public_6f0611c
        public_6f05fdf : nop
        push 0x34
        call public_6fa912a
        add esp, 4
        mov dword ptr ss : [esp+0x1C], eax
        test eax, eax
        mov dword ptr ss : [esp+0x14], 5
        je public_6f06118
        push edi
        mov ecx, eax
        call public_6f06fe0
        jmp public_6f0611a
        public_6f0600a : nop
        push 0x34
        call public_6fa912a
        add esp, 4
        mov dword ptr ss : [esp+0x1C], eax
        test eax, eax
        mov dword ptr ss : [esp+0x14], 6
        je public_6f06118
        push edi
        mov ecx, eax
        call public_6f0aa40
        jmp public_6f0611a
        public_6f06035 : nop
        push 0x3C
        call public_6fa912a
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x1C], esi
        test esi, esi
        mov dword ptr ss : [esp+0x14], 7
        je public_6f060c6
        push edi
        mov ecx, esi
        call public_6f06560
        lea ecx, ds:[esi+0x20]
        push ecx
        lea edx, ds:[esi+0x1C]
        push edx
        lea eax, ds:[esi+0x18]
        push eax
        lea ecx, ds:[esi+0x14]
        push ecx
        mov ecx, edi
        mov byte ptr ss : [esp+0x24], 8
        mov dword ptr ds : [esi], offset public_6fb81d8
        call public_6f062d0
        lea ecx, ds:[esi+0x28]
        mov dword ptr ds : [ecx], 0
        push 0
        mov byte ptr ss : [esp+0x18], 0xA
        mov dword ptr ds : [esi], offset public_6fb8138
        mov dword ptr ds : [esi+0x24], 0
        call public_6f0de80
        mov dword ptr ds : [esi+0x24], 0
        mov edx, dword ptr ds : [edi+0x48]
        mov dword ptr ds : [esi+0x2C], edx
        mov eax, dword ptr ds : [public_6fb8114]
        mov dword ptr ds : [esi+0x30], eax
        mov ecx, dword ptr ds : [public_6fb8118]
        mov dword ptr ds : [esi+0x34], ecx
        mov edx, dword ptr ds : [public_6fb811c]
        mov dword ptr ds : [esi+0x38], edx
        jmp public_6f0611c
        public_6f060c6 : nop
        xor esi, esi
        jmp public_6f0611c
        public_6f060ca : nop
        push 0x1B0
        call public_6fa912a
        add esp, 4
        mov dword ptr ss : [esp+0x1C], eax
        test eax, eax
        mov dword ptr ss : [esp+0x14], 0xB
        je public_6f06118
        push edi
        mov ecx, eax
        call public_6f07ef0
        jmp public_6f0611a
        public_6f060f1 : nop
        push 0x1B8
        call public_6fa912a
        add esp, 4
        mov dword ptr ss : [esp+0x1C], eax
        test eax, eax
        mov dword ptr ss : [esp+0x14], 0xC
        je public_6f06118
        push edi
        mov ecx, eax
        call public_6f0a270
        jmp public_6f0611a
        public_6f06118 : nop
        xor eax, eax
        public_6f0611a : nop
        mov esi, eax
        public_6f0611c : nop
        mov dword ptr ss : [esp+0x14], 0xFFFFFFFF
        public_6f06124 : nop
        mov edi, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ds : [edi]
        cmp ecx, esi
        je public_6f06149
        test ecx, ecx
        je public_6f0613d
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+4]
        mov dword ptr ds : [edi], 0
        public_6f0613d : nop
        test esi, esi
        mov dword ptr ds : [edi], esi
        je public_6f06154
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx]
        public_6f06149 : nop
        mov ecx, dword ptr ds : [edi]
        test ecx, ecx
        je public_6f06154
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+4]
        public_6f06154 : nop
        mov ecx, dword ptr ds : [edi]
        xor eax, eax
        test ecx, ecx
        mov ecx, dword ptr ss : [esp+0xC]
        pop edi
        setne al
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6f05f00)
        ASM_EXPORT_ENTRY_FIRST(0x6f05f32, public_6f05f32)
        ASM_EXPORT_ENTRY(0x6f05fdf, public_6f05fdf)
        ASM_EXPORT_ENTRY(0x6f0600a, public_6f0600a)
        ASM_EXPORT_ENTRY(0x6f06035, public_6f06035)
        ASM_EXPORT_ENTRY(0x6f060ca, public_6f060ca)
        ASM_EXPORT_ENTRY_LAST(0x6f060f1, public_6f060f1)
    }
}

#undef public_6f05f32
#undef public_6f05fb3
#undef public_6f05fb5
#undef public_6f05fdf
#undef public_6f0600a
#undef public_6f06035
#undef public_6f060c6
#undef public_6f060ca
#undef public_6f060f1
#undef public_6f06118
#undef public_6f0611a
#undef public_6f0611c
#undef public_6f06124
#undef public_6f0613d
#undef public_6f06149
#undef public_6f06154

#pragma init_seg(compiler)
extern "C" void const* const public_6f05f32 = __AsmFindLabelExport(&internal_6f05f00, 0x6f05f32);
extern "C" void const* const public_6f05fdf = __AsmFindLabelExport(&internal_6f05f00, 0x6f05fdf);
extern "C" void const* const public_6f0600a = __AsmFindLabelExport(&internal_6f05f00, 0x6f0600a);
extern "C" void const* const public_6f06035 = __AsmFindLabelExport(&internal_6f05f00, 0x6f06035);
extern "C" void const* const public_6f060ca = __AsmFindLabelExport(&internal_6f05f00, 0x6f060ca);
extern "C" void const* const public_6f060f1 = __AsmFindLabelExport(&internal_6f05f00, 0x6f060f1);
