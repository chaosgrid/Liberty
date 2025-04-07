#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620b710);
CLANG_FORWARD_PROC_SYMBOL(public_620ce80);
CLANG_FORWARD_PROC_SYMBOL(public_62307d0);
CLANG_FORWARD_PROC_SYMBOL(public_6230f10);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_62499cb _public_62499cb
#define public_62499d3 _public_62499d3
#define public_62499db _public_62499db
#define public_62499e3 _public_62499e3
#define public_62499eb _public_62499eb

PROC_DECLARE(0x62499c0, internal_62499c0, public_62499c0);
/* CHUNK of public_6230ce0 */
extern "C" NAKED register_t __cdecl internal_62499c0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp+4]
        push eax
        call public_62460e0
        pop ecx
        ret 
        public_62499cb : nop
        mov ecx, dword ptr ss : [ebp-0x1C]
        jmp public_620ce80
        public_62499d3 : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        jmp public_6230f10
        public_62499db : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        jmp public_62307d0
        public_62499e3 : nop
        mov ecx, dword ptr ss : [ebp-0x1C]
        jmp public_620b710
        public_62499eb : nop
        mov eax, offset public_62529dc
        jmp public_6246126
        UNREACHABLE_TRAP(0x62499c0)
        ASM_EXPORT_ENTRY_FIRST(0x62499cb, public_62499cb)
        ASM_EXPORT_ENTRY(0x62499d3, public_62499d3)
        ASM_EXPORT_ENTRY(0x62499db, public_62499db)
        ASM_EXPORT_ENTRY(0x62499e3, public_62499e3)
        ASM_EXPORT_ENTRY_LAST(0x62499eb, public_62499eb)
    }
}

#undef public_62499cb
#undef public_62499d3
#undef public_62499db
#undef public_62499e3
#undef public_62499eb

#pragma init_seg(compiler)
extern "C" void const* const public_62499cb = __AsmFindLabelExport(&internal_62499c0, 0x62499cb);
extern "C" void const* const public_62499d3 = __AsmFindLabelExport(&internal_62499c0, 0x62499d3);
extern "C" void const* const public_62499db = __AsmFindLabelExport(&internal_62499c0, 0x62499db);
extern "C" void const* const public_62499e3 = __AsmFindLabelExport(&internal_62499c0, 0x62499e3);
extern "C" void const* const public_62499eb = __AsmFindLabelExport(&internal_62499c0, 0x62499eb);
