#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_42cc50);
CLANG_FORWARD_PROC_SYMBOL(public_576010);
CLANG_FORWARD_PROC_SYMBOL(public_59fa50);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bcb68 _public_5bcb68
#define public_5bcb76 _public_5bcb76
#define public_5bcb84 _public_5bcb84

PROC_DECLARE(0x5bcb60, internal_5bcb60, public_5bcb60);
/* CHUNK of public_4a3ff0 */
extern "C" NAKED register_t __cdecl internal_5bcb60()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_59fa50
        public_5bcb68 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x32C
        jmp public_576010
        public_5bcb76 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x564
        jmp public_42cc50
        public_5bcb84 : nop
        mov eax, offset public_5f6e08
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bcb60)
        ASM_EXPORT_ENTRY_FIRST(0x5bcb68, public_5bcb68)
        ASM_EXPORT_ENTRY(0x5bcb76, public_5bcb76)
        ASM_EXPORT_ENTRY_LAST(0x5bcb84, public_5bcb84)
    }
}

#undef public_5bcb68
#undef public_5bcb76
#undef public_5bcb84

#pragma init_seg(compiler)
extern "C" void const* const public_5bcb68 = __AsmFindLabelExport(&internal_5bcb60, 0x5bcb68);
extern "C" void const* const public_5bcb76 = __AsmFindLabelExport(&internal_5bcb60, 0x5bcb76);
extern "C" void const* const public_5bcb84 = __AsmFindLabelExport(&internal_5bcb60, 0x5bcb84);
