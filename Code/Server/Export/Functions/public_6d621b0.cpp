#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d1bbf0);
CLANG_FORWARD_PROC_SYMBOL(public_6d1bd60);
CLANG_FORWARD_PROC_SYMBOL(public_6d1bd70);
CLANG_FORWARD_PROC_SYMBOL(public_6d60018);

#define public_6d621b8 _public_6d621b8
#define public_6d621c3 _public_6d621c3
#define public_6d621ce _public_6d621ce

PROC_DECLARE(0x6d621b0, internal_6d621b0, public_6d621b0);
/* CHUNK of public_6d1bc00 */
extern "C" NAKED register_t __cdecl internal_6d621b0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_6d1bbf0
        public_6d621b8 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x2C
        jmp public_6d1bd60
        public_6d621c3 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x3C
        jmp public_6d1bd70
        public_6d621ce : nop
        mov eax, offset public_6d73040
        jmp public_6d60018
        UNREACHABLE_TRAP(0x6d621b0)
        ASM_EXPORT_ENTRY_FIRST(0x6d621b8, public_6d621b8)
        ASM_EXPORT_ENTRY(0x6d621c3, public_6d621c3)
        ASM_EXPORT_ENTRY_LAST(0x6d621ce, public_6d621ce)
    }
}

#undef public_6d621b8
#undef public_6d621c3
#undef public_6d621ce

#pragma init_seg(compiler)
extern "C" void const* const public_6d621b8 = __AsmFindLabelExport(&internal_6d621b0, 0x6d621b8);
extern "C" void const* const public_6d621c3 = __AsmFindLabelExport(&internal_6d621b0, 0x6d621c3);
extern "C" void const* const public_6d621ce = __AsmFindLabelExport(&internal_6d621b0, 0x6d621ce);
