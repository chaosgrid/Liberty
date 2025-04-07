#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_630e210);
CLANG_FORWARD_PROC_SYMBOL(public_63221f0);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6396f7b _public_6396f7b
#define public_6396f86 _public_6396f86
#define public_6396f8e _public_6396f8e
#define public_6396fa4 _public_6396fa4
#define public_6396fa5 _public_6396fa5
#define public_6396fb0 _public_6396fb0
#define public_6396fbb _public_6396fbb
#define public_6396fc6 _public_6396fc6

PROC_DECLARE(0x6396f70, internal_6396f70, public_6396f70);
/* CHUNK of public_6324b00 */
extern "C" NAKED register_t __cdecl internal_6396f70()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp+0x128]
        jmp public_63221f0
        public_6396f7b : nop
        lea ecx, ss:[ebp+0x98]
        jmp public_63221f0
        public_6396f86 : nop
        lea ecx, ss:[ebp+8]
        jmp public_63221f0
        public_6396f8e : nop
        mov eax, dword ptr ss : [ebp-0x14]
        and eax, 1
        test eax, eax
        je public_6396fa4
        mov ecx, dword ptr ss : [ebp+4]
        jmp public_63221f0
        public_6396fa4 : nop
        ret 
        public_6396fa5 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x10
        jmp public_630e210
        public_6396fb0 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x10
        jmp public_630e210
        public_6396fbb : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x10
        jmp public_630e210
        public_6396fc6 : nop
        mov eax, offset public_63b0fe8
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6396f70)
        ASM_EXPORT_ENTRY_FIRST(0x6396f7b, public_6396f7b)
        ASM_EXPORT_ENTRY(0x6396f86, public_6396f86)
        ASM_EXPORT_ENTRY(0x6396f8e, public_6396f8e)
        ASM_EXPORT_ENTRY(0x6396fa4, public_6396fa4)
        ASM_EXPORT_ENTRY(0x6396fa5, public_6396fa5)
        ASM_EXPORT_ENTRY(0x6396fb0, public_6396fb0)
        ASM_EXPORT_ENTRY(0x6396fbb, public_6396fbb)
        ASM_EXPORT_ENTRY_LAST(0x6396fc6, public_6396fc6)
    }
}

#undef public_6396f7b
#undef public_6396f86
#undef public_6396f8e
#undef public_6396fa4
#undef public_6396fa5
#undef public_6396fb0
#undef public_6396fbb
#undef public_6396fc6

#pragma init_seg(compiler)
extern "C" void const* const public_6396f7b = __AsmFindLabelExport(&internal_6396f70, 0x6396f7b);
extern "C" void const* const public_6396f86 = __AsmFindLabelExport(&internal_6396f70, 0x6396f86);
extern "C" void const* const public_6396f8e = __AsmFindLabelExport(&internal_6396f70, 0x6396f8e);
extern "C" void const* const public_6396fa4 = __AsmFindLabelExport(&internal_6396f70, 0x6396fa4);
extern "C" void const* const public_6396fa5 = __AsmFindLabelExport(&internal_6396f70, 0x6396fa5);
extern "C" void const* const public_6396fb0 = __AsmFindLabelExport(&internal_6396f70, 0x6396fb0);
extern "C" void const* const public_6396fbb = __AsmFindLabelExport(&internal_6396f70, 0x6396fbb);
extern "C" void const* const public_6396fc6 = __AsmFindLabelExport(&internal_6396f70, 0x6396fc6);
