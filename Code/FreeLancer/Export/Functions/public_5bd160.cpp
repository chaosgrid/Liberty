#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_444e20);
CLANG_FORWARD_PROC_SYMBOL(public_444ee0);
CLANG_FORWARD_PROC_SYMBOL(public_445d70);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bd168 _public_5bd168
#define public_5bd170 _public_5bd170
#define public_5bd178 _public_5bd178
#define public_5bd180 _public_5bd180
#define public_5bd18b _public_5bd18b
#define public_5bd193 _public_5bd193
#define public_5bd19b _public_5bd19b
#define public_5bd1a6 _public_5bd1a6

PROC_DECLARE(0x5bd160, internal_5bd160, public_5bd160);
/* CHUNK of public_4b5ca0 */
extern "C" NAKED register_t __cdecl internal_5bd160()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x68]
        jmp public_444e20
        public_5bd168 : nop
        lea ecx, ss:[ebp-0x70]
        jmp public_444ee0
        public_5bd170 : nop
        lea ecx, ss:[ebp-0x68]
        jmp public_444e20
        public_5bd178 : nop
        mov ecx, dword ptr ss : [ebp-0x80]
        jmp public_444e20
        public_5bd180 : nop
        mov ecx, dword ptr ss : [ebp-0x80]
        add ecx, 0xC
        jmp public_445d70
        public_5bd18b : nop
        lea ecx, ss:[ebp-0x68]
        jmp public_444e20
        public_5bd193 : nop
        mov ecx, dword ptr ss : [ebp-0x80]
        jmp public_444e20
        public_5bd19b : nop
        mov ecx, dword ptr ss : [ebp-0x80]
        add ecx, 0xC
        jmp public_445d70
        public_5bd1a6 : nop
        mov eax, offset public_5f742c
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bd160)
        ASM_EXPORT_ENTRY_FIRST(0x5bd168, public_5bd168)
        ASM_EXPORT_ENTRY(0x5bd170, public_5bd170)
        ASM_EXPORT_ENTRY(0x5bd178, public_5bd178)
        ASM_EXPORT_ENTRY(0x5bd180, public_5bd180)
        ASM_EXPORT_ENTRY(0x5bd18b, public_5bd18b)
        ASM_EXPORT_ENTRY(0x5bd193, public_5bd193)
        ASM_EXPORT_ENTRY(0x5bd19b, public_5bd19b)
        ASM_EXPORT_ENTRY_LAST(0x5bd1a6, public_5bd1a6)
    }
}

#undef public_5bd168
#undef public_5bd170
#undef public_5bd178
#undef public_5bd180
#undef public_5bd18b
#undef public_5bd193
#undef public_5bd19b
#undef public_5bd1a6

#pragma init_seg(compiler)
extern "C" void const* const public_5bd168 = __AsmFindLabelExport(&internal_5bd160, 0x5bd168);
extern "C" void const* const public_5bd170 = __AsmFindLabelExport(&internal_5bd160, 0x5bd170);
extern "C" void const* const public_5bd178 = __AsmFindLabelExport(&internal_5bd160, 0x5bd178);
extern "C" void const* const public_5bd180 = __AsmFindLabelExport(&internal_5bd160, 0x5bd180);
extern "C" void const* const public_5bd18b = __AsmFindLabelExport(&internal_5bd160, 0x5bd18b);
extern "C" void const* const public_5bd193 = __AsmFindLabelExport(&internal_5bd160, 0x5bd193);
extern "C" void const* const public_5bd19b = __AsmFindLabelExport(&internal_5bd160, 0x5bd19b);
extern "C" void const* const public_5bd1a6 = __AsmFindLabelExport(&internal_5bd160, 0x5bd1a6);
