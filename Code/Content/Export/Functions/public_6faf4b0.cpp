#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb7ac0);
CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6faf4bb _public_6faf4bb
#define public_6faf4c6 _public_6faf4c6
#define public_6faf4d1 _public_6faf4d1
#define public_6faf4df _public_6faf4df
#define public_6faf4ed _public_6faf4ed
#define public_6faf4fb _public_6faf4fb

PROC_DECLARE(0x6faf4b0, internal_6faf4b0, public_6faf4b0);
/* CHUNK of public_6f52a20 */
extern "C" NAKED register_t __cdecl internal_6faf4b0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x48
        jmp public_6eec8d0
        public_6faf4bb : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x5C
        jmp public_6eec8d0
        public_6faf4c6 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x74
        jmp public_6eec8d0
        public_6faf4d1 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x84
        jmp public_6eec8d0
        public_6faf4df : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x9C
        jmp public_6eb7ac0
        public_6faf4ed : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0xB0
        jmp public_6eec8d0
        public_6faf4fb : nop
        mov eax, offset public_6fc44ac
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6faf4b0)
        ASM_EXPORT_ENTRY_FIRST(0x6faf4bb, public_6faf4bb)
        ASM_EXPORT_ENTRY(0x6faf4c6, public_6faf4c6)
        ASM_EXPORT_ENTRY(0x6faf4d1, public_6faf4d1)
        ASM_EXPORT_ENTRY(0x6faf4df, public_6faf4df)
        ASM_EXPORT_ENTRY(0x6faf4ed, public_6faf4ed)
        ASM_EXPORT_ENTRY_LAST(0x6faf4fb, public_6faf4fb)
    }
}

#undef public_6faf4bb
#undef public_6faf4c6
#undef public_6faf4d1
#undef public_6faf4df
#undef public_6faf4ed
#undef public_6faf4fb

#pragma init_seg(compiler)
extern "C" void const* const public_6faf4bb = __AsmFindLabelExport(&internal_6faf4b0, 0x6faf4bb);
extern "C" void const* const public_6faf4c6 = __AsmFindLabelExport(&internal_6faf4b0, 0x6faf4c6);
extern "C" void const* const public_6faf4d1 = __AsmFindLabelExport(&internal_6faf4b0, 0x6faf4d1);
extern "C" void const* const public_6faf4df = __AsmFindLabelExport(&internal_6faf4b0, 0x6faf4df);
extern "C" void const* const public_6faf4ed = __AsmFindLabelExport(&internal_6faf4b0, 0x6faf4ed);
extern "C" void const* const public_6faf4fb = __AsmFindLabelExport(&internal_6faf4b0, 0x6faf4fb);
