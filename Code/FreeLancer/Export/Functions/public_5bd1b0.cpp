#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_444e20);
CLANG_FORWARD_PROC_SYMBOL(public_444ee0);
CLANG_FORWARD_PROC_SYMBOL(public_445d70);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bd1b8 _public_5bd1b8
#define public_5bd1c0 _public_5bd1c0
#define public_5bd1c8 _public_5bd1c8
#define public_5bd1d0 _public_5bd1d0
#define public_5bd1db _public_5bd1db

PROC_DECLARE(0x5bd1b0, internal_5bd1b0, public_5bd1b0);
/* CHUNK of public_4b62f0 */
extern "C" NAKED register_t __cdecl internal_5bd1b0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x68]
        jmp public_444e20
        public_5bd1b8 : nop
        lea ecx, ss:[ebp-0x70]
        jmp public_444ee0
        public_5bd1c0 : nop
        lea ecx, ss:[ebp-0x68]
        jmp public_444e20
        public_5bd1c8 : nop
        mov ecx, dword ptr ss : [ebp+4]
        jmp public_444e20
        public_5bd1d0 : nop
        mov ecx, dword ptr ss : [ebp+4]
        add ecx, 0xC
        jmp public_445d70
        public_5bd1db : nop
        mov eax, offset public_5f7470
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bd1b0)
        ASM_EXPORT_ENTRY_FIRST(0x5bd1b8, public_5bd1b8)
        ASM_EXPORT_ENTRY(0x5bd1c0, public_5bd1c0)
        ASM_EXPORT_ENTRY(0x5bd1c8, public_5bd1c8)
        ASM_EXPORT_ENTRY(0x5bd1d0, public_5bd1d0)
        ASM_EXPORT_ENTRY_LAST(0x5bd1db, public_5bd1db)
    }
}

#undef public_5bd1b8
#undef public_5bd1c0
#undef public_5bd1c8
#undef public_5bd1d0
#undef public_5bd1db

#pragma init_seg(compiler)
extern "C" void const* const public_5bd1b8 = __AsmFindLabelExport(&internal_5bd1b0, 0x5bd1b8);
extern "C" void const* const public_5bd1c0 = __AsmFindLabelExport(&internal_5bd1b0, 0x5bd1c0);
extern "C" void const* const public_5bd1c8 = __AsmFindLabelExport(&internal_5bd1b0, 0x5bd1c8);
extern "C" void const* const public_5bd1d0 = __AsmFindLabelExport(&internal_5bd1b0, 0x5bd1d0);
extern "C" void const* const public_5bd1db = __AsmFindLabelExport(&internal_5bd1b0, 0x5bd1db);
