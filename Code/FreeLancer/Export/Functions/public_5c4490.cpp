#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_444e20);
CLANG_FORWARD_PROC_SYMBOL(public_444e50);
CLANG_FORWARD_PROC_SYMBOL(public_444ee0);
CLANG_FORWARD_PROC_SYMBOL(public_445d70);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c449b _public_5c449b
#define public_5c44a6 _public_5c44a6
#define public_5c44b1 _public_5c44b1
#define public_5c44bc _public_5c44bc
#define public_5c44c4 _public_5c44c4
#define public_5c44cf _public_5c44cf

PROC_DECLARE(0x5c4490, internal_5c4490, public_5c4490);
/* CHUNK of public_5897d0 */
extern "C" NAKED register_t __cdecl internal_5c4490()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x9C]
        jmp public_444e20
        public_5c449b : nop
        lea ecx, ss:[ebp-0x94]
        jmp public_444e50
        public_5c44a6 : nop
        lea ecx, ss:[ebp-0xA4]
        jmp public_444ee0
        public_5c44b1 : nop
        lea ecx, ss:[ebp-0x9C]
        jmp public_444e20
        public_5c44bc : nop
        mov ecx, dword ptr ss : [ebp-0x40]
        jmp public_444e20
        public_5c44c4 : nop
        mov ecx, dword ptr ss : [ebp-0x40]
        add ecx, 0xC
        jmp public_445d70
        public_5c44cf : nop
        mov eax, offset public_5fe0e8
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c4490)
        ASM_EXPORT_ENTRY_FIRST(0x5c449b, public_5c449b)
        ASM_EXPORT_ENTRY(0x5c44a6, public_5c44a6)
        ASM_EXPORT_ENTRY(0x5c44b1, public_5c44b1)
        ASM_EXPORT_ENTRY(0x5c44bc, public_5c44bc)
        ASM_EXPORT_ENTRY(0x5c44c4, public_5c44c4)
        ASM_EXPORT_ENTRY_LAST(0x5c44cf, public_5c44cf)
    }
}

#undef public_5c449b
#undef public_5c44a6
#undef public_5c44b1
#undef public_5c44bc
#undef public_5c44c4
#undef public_5c44cf

#pragma init_seg(compiler)
extern "C" void const* const public_5c449b = __AsmFindLabelExport(&internal_5c4490, 0x5c449b);
extern "C" void const* const public_5c44a6 = __AsmFindLabelExport(&internal_5c4490, 0x5c44a6);
extern "C" void const* const public_5c44b1 = __AsmFindLabelExport(&internal_5c4490, 0x5c44b1);
extern "C" void const* const public_5c44bc = __AsmFindLabelExport(&internal_5c4490, 0x5c44bc);
extern "C" void const* const public_5c44c4 = __AsmFindLabelExport(&internal_5c4490, 0x5c44c4);
extern "C" void const* const public_5c44cf = __AsmFindLabelExport(&internal_5c4490, 0x5c44cf);
