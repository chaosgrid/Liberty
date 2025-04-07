#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620b700);
CLANG_FORWARD_PROC_SYMBOL(public_620b710);
CLANG_FORWARD_PROC_SYMBOL(public_620ce80);
CLANG_FORWARD_PROC_SYMBOL(public_62346a0);
CLANG_FORWARD_PROC_SYMBOL(public_62346b0);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_6249db8 _public_6249db8
#define public_6249dc6 _public_6249dc6
#define public_6249dce _public_6249dce
#define public_6249dd6 _public_6249dd6
#define public_6249dde _public_6249dde

PROC_DECLARE(0x6249db0, internal_6249db0, public_6249db0);
/* CHUNK of public_6234ec0 */
extern "C" NAKED register_t __cdecl internal_6249db0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x20]
        jmp public_620ce80
        public_6249db8 : nop
        mov ecx, dword ptr ss : [ebp-0x20]
        add ecx, 0xB4
        jmp public_620b700
        public_6249dc6 : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        jmp public_62346b0
        public_6249dce : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        jmp public_62346a0
        public_6249dd6 : nop
        mov ecx, dword ptr ss : [ebp-0x20]
        jmp public_620b710
        public_6249dde : nop
        mov eax, offset public_6252e30
        jmp public_6246126
        UNREACHABLE_TRAP(0x6249db0)
        ASM_EXPORT_ENTRY_FIRST(0x6249db8, public_6249db8)
        ASM_EXPORT_ENTRY(0x6249dc6, public_6249dc6)
        ASM_EXPORT_ENTRY(0x6249dce, public_6249dce)
        ASM_EXPORT_ENTRY(0x6249dd6, public_6249dd6)
        ASM_EXPORT_ENTRY_LAST(0x6249dde, public_6249dde)
    }
}

#undef public_6249db8
#undef public_6249dc6
#undef public_6249dce
#undef public_6249dd6
#undef public_6249dde

#pragma init_seg(compiler)
extern "C" void const* const public_6249db8 = __AsmFindLabelExport(&internal_6249db0, 0x6249db8);
extern "C" void const* const public_6249dc6 = __AsmFindLabelExport(&internal_6249db0, 0x6249dc6);
extern "C" void const* const public_6249dce = __AsmFindLabelExport(&internal_6249db0, 0x6249dce);
extern "C" void const* const public_6249dd6 = __AsmFindLabelExport(&internal_6249db0, 0x6249dd6);
extern "C" void const* const public_6249dde = __AsmFindLabelExport(&internal_6249db0, 0x6249dde);
