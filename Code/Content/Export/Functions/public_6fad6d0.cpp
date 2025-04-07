#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f15350);
CLANG_FORWARD_PROC_SYMBOL(public_6f1d620);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fad6db _public_6fad6db
#define public_6fad6e6 _public_6fad6e6
#define public_6fad6ee _public_6fad6ee

PROC_DECLARE(0x6fad6d0, internal_6fad6d0, public_6fad6d0);
/* CHUNK of public_6f11a40 */
extern "C" NAKED register_t __cdecl internal_6fad6d0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x1C]
        add ecx, 0x3C
        jmp public_6f1d620
        public_6fad6db : nop
        mov ecx, dword ptr ss : [ebp-0x1C]
        add ecx, 0x48
        jmp public_6f15350
        public_6fad6e6 : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        jmp public_6f15350
        public_6fad6ee : nop
        mov eax, offset public_6fc25d8
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fad6d0)
        ASM_EXPORT_ENTRY_FIRST(0x6fad6db, public_6fad6db)
        ASM_EXPORT_ENTRY(0x6fad6e6, public_6fad6e6)
        ASM_EXPORT_ENTRY_LAST(0x6fad6ee, public_6fad6ee)
    }
}

#undef public_6fad6db
#undef public_6fad6e6
#undef public_6fad6ee

#pragma init_seg(compiler)
extern "C" void const* const public_6fad6db = __AsmFindLabelExport(&internal_6fad6d0, 0x6fad6db);
extern "C" void const* const public_6fad6e6 = __AsmFindLabelExport(&internal_6fad6d0, 0x6fad6e6);
extern "C" void const* const public_6fad6ee = __AsmFindLabelExport(&internal_6fad6d0, 0x6fad6ee);
