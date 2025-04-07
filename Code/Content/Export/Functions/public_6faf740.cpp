#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb7230);
CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6faf748 _public_6faf748
#define public_6faf756 _public_6faf756
#define public_6faf764 _public_6faf764

PROC_DECLARE(0x6faf740, internal_6faf740, public_6faf740);
/* CHUNK of public_6f571a0 */
extern "C" NAKED register_t __cdecl internal_6faf740()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_6eb7230
        public_6faf748 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x128
        jmp public_6eec8d0
        public_6faf756 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x13C
        jmp public_6eec8d0
        public_6faf764 : nop
        mov eax, offset public_6fc46b4
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6faf740)
        ASM_EXPORT_ENTRY_FIRST(0x6faf748, public_6faf748)
        ASM_EXPORT_ENTRY(0x6faf756, public_6faf756)
        ASM_EXPORT_ENTRY_LAST(0x6faf764, public_6faf764)
    }
}

#undef public_6faf748
#undef public_6faf756
#undef public_6faf764

#pragma init_seg(compiler)
extern "C" void const* const public_6faf748 = __AsmFindLabelExport(&internal_6faf740, 0x6faf748);
extern "C" void const* const public_6faf756 = __AsmFindLabelExport(&internal_6faf740, 0x6faf756);
extern "C" void const* const public_6faf764 = __AsmFindLabelExport(&internal_6faf740, 0x6faf764);
