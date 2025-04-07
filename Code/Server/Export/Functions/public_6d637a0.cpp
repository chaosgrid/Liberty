#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce36f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d56df0);
CLANG_FORWARD_PROC_SYMBOL(public_6d572a0);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);
CLANG_FORWARD_PROC_SYMBOL(public_6d60018);

#define public_6d637ae _public_6d637ae
#define public_6d637b9 _public_6d637b9
#define public_6d637c5 _public_6d637c5
#define public_6d637d3 _public_6d637d3
#define public_6d637e1 _public_6d637e1
#define public_6d637f0 _public_6d637f0
#define public_6d637fb _public_6d637fb
#define public_6d63806 _public_6d63806
#define public_6d63811 _public_6d63811
#define public_6d6381c _public_6d6381c

PROC_DECLARE(0x6d637a0, internal_6d637a0, public_6d637a0);
/* CHUNK of public_6d510c0 */
extern "C" NAKED register_t __cdecl internal_6d637a0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x3E4]
        push eax
        call public_6d5ffb0
        pop ecx
        ret 
        public_6d637ae : nop
        lea ecx, ss:[ebp-0x3C8]
        jmp public_6d56df0
        public_6d637b9 : nop
        lea ecx, ss:[ebp-0x3D8]
        jmp dword ptr ds : [public_6d64b94]
        public_6d637c5 : nop
        mov eax, dword ptr ss : [ebp-0x3BC]
        push eax
        call public_6d5ffb0
        pop ecx
        ret 
        public_6d637d3 : nop
        mov ecx, dword ptr ss : [ebp-0x3BC]
        add ecx, 4
        jmp public_6ce36f0
        public_6d637e1 : nop
        mov ecx, dword ptr ss : [ebp-0x3BC]
        add ecx, 0x14
        jmp dword ptr ds : [public_6d64b94]
        public_6d637f0 : nop
        lea ecx, ss:[ebp-0x364]
        jmp public_6ce36f0
        public_6d637fb : nop
        lea ecx, ss:[ebp-0x3D8]
        jmp public_6d572a0
        public_6d63806 : nop
        lea ecx, ss:[ebp-0x388]
        jmp public_6d572a0
        public_6d63811 : nop
        lea ecx, ss:[ebp-0x3B8]
        jmp public_6ce36f0
        public_6d6381c : nop
        mov eax, offset public_6d75a24
        jmp public_6d60018
        UNREACHABLE_TRAP(0x6d637a0)
        ASM_EXPORT_ENTRY_FIRST(0x6d637ae, public_6d637ae)
        ASM_EXPORT_ENTRY(0x6d637b9, public_6d637b9)
        ASM_EXPORT_ENTRY(0x6d637c5, public_6d637c5)
        ASM_EXPORT_ENTRY(0x6d637d3, public_6d637d3)
        ASM_EXPORT_ENTRY(0x6d637e1, public_6d637e1)
        ASM_EXPORT_ENTRY(0x6d637f0, public_6d637f0)
        ASM_EXPORT_ENTRY(0x6d637fb, public_6d637fb)
        ASM_EXPORT_ENTRY(0x6d63806, public_6d63806)
        ASM_EXPORT_ENTRY(0x6d63811, public_6d63811)
        ASM_EXPORT_ENTRY_LAST(0x6d6381c, public_6d6381c)
    }
}

#undef public_6d637ae
#undef public_6d637b9
#undef public_6d637c5
#undef public_6d637d3
#undef public_6d637e1
#undef public_6d637f0
#undef public_6d637fb
#undef public_6d63806
#undef public_6d63811
#undef public_6d6381c

#pragma init_seg(compiler)
extern "C" void const* const public_6d637ae = __AsmFindLabelExport(&internal_6d637a0, 0x6d637ae);
extern "C" void const* const public_6d637b9 = __AsmFindLabelExport(&internal_6d637a0, 0x6d637b9);
extern "C" void const* const public_6d637c5 = __AsmFindLabelExport(&internal_6d637a0, 0x6d637c5);
extern "C" void const* const public_6d637d3 = __AsmFindLabelExport(&internal_6d637a0, 0x6d637d3);
extern "C" void const* const public_6d637e1 = __AsmFindLabelExport(&internal_6d637a0, 0x6d637e1);
extern "C" void const* const public_6d637f0 = __AsmFindLabelExport(&internal_6d637a0, 0x6d637f0);
extern "C" void const* const public_6d637fb = __AsmFindLabelExport(&internal_6d637a0, 0x6d637fb);
extern "C" void const* const public_6d63806 = __AsmFindLabelExport(&internal_6d637a0, 0x6d63806);
extern "C" void const* const public_6d63811 = __AsmFindLabelExport(&internal_6d637a0, 0x6d63811);
extern "C" void const* const public_6d6381c = __AsmFindLabelExport(&internal_6d637a0, 0x6d6381c);
