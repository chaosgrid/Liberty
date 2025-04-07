#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6287870);
CLANG_FORWARD_PROC_SYMBOL(public_629f2f0);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6393758 _public_6393758
#define public_6393763 _public_6393763

PROC_DECLARE(0x6393750, internal_6393750, public_6393750);
/* CHUNK of public_6295a40 */
extern "C" NAKED register_t __cdecl internal_6393750()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_629f2f0
        public_6393758 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x20
        jmp public_6287870
        public_6393763 : nop
        mov eax, offset public_63ac9a0
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6393750)
        ASM_EXPORT_ENTRY_FIRST(0x6393758, public_6393758)
        ASM_EXPORT_ENTRY_LAST(0x6393763, public_6393763)
    }
}

#undef public_6393758
#undef public_6393763

#pragma init_seg(compiler)
extern "C" void const* const public_6393758 = __AsmFindLabelExport(&internal_6393750, 0x6393758);
extern "C" void const* const public_6393763 = __AsmFindLabelExport(&internal_6393750, 0x6393763);
