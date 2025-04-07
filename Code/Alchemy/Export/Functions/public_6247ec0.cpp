#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620b700);
CLANG_FORWARD_PROC_SYMBOL(public_620b710);
CLANG_FORWARD_PROC_SYMBOL(public_620ce80);
CLANG_FORWARD_PROC_SYMBOL(public_6211030);
CLANG_FORWARD_PROC_SYMBOL(public_6211040);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_6247ec8 _public_6247ec8
#define public_6247ed6 _public_6247ed6
#define public_6247ede _public_6247ede
#define public_6247ee6 _public_6247ee6
#define public_6247eee _public_6247eee

PROC_DECLARE(0x6247ec0, internal_6247ec0, public_6247ec0);
/* CHUNK of public_6211860 */
extern "C" NAKED register_t __cdecl internal_6247ec0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x20]
        jmp public_620ce80
        public_6247ec8 : nop
        mov ecx, dword ptr ss : [ebp-0x20]
        add ecx, 0xB4
        jmp public_620b700
        public_6247ed6 : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        jmp public_6211040
        public_6247ede : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        jmp public_6211030
        public_6247ee6 : nop
        mov ecx, dword ptr ss : [ebp-0x20]
        jmp public_620b710
        public_6247eee : nop
        mov eax, offset public_6250d40
        jmp public_6246126
        UNREACHABLE_TRAP(0x6247ec0)
        ASM_EXPORT_ENTRY_FIRST(0x6247ec8, public_6247ec8)
        ASM_EXPORT_ENTRY(0x6247ed6, public_6247ed6)
        ASM_EXPORT_ENTRY(0x6247ede, public_6247ede)
        ASM_EXPORT_ENTRY(0x6247ee6, public_6247ee6)
        ASM_EXPORT_ENTRY_LAST(0x6247eee, public_6247eee)
    }
}

#undef public_6247ec8
#undef public_6247ed6
#undef public_6247ede
#undef public_6247ee6
#undef public_6247eee

#pragma init_seg(compiler)
extern "C" void const* const public_6247ec8 = __AsmFindLabelExport(&internal_6247ec0, 0x6247ec8);
extern "C" void const* const public_6247ed6 = __AsmFindLabelExport(&internal_6247ec0, 0x6247ed6);
extern "C" void const* const public_6247ede = __AsmFindLabelExport(&internal_6247ec0, 0x6247ede);
extern "C" void const* const public_6247ee6 = __AsmFindLabelExport(&internal_6247ec0, 0x6247ee6);
extern "C" void const* const public_6247eee = __AsmFindLabelExport(&internal_6247ec0, 0x6247eee);
