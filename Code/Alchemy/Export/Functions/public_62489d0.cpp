#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620b710);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_62489db _public_62489db
#define public_62489e3 _public_62489e3

PROC_DECLARE(0x62489d0, internal_62489d0, public_62489d0);
/* CHUNK of public_621dd20 */
extern "C" NAKED register_t __cdecl internal_62489d0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp+4]
        push eax
        call public_62460e0
        pop ecx
        ret 
        public_62489db : nop
        mov ecx, dword ptr ss : [ebp+8]
        jmp public_620b710
        public_62489e3 : nop
        mov eax, offset public_6251898
        jmp public_6246126
        UNREACHABLE_TRAP(0x62489d0)
        ASM_EXPORT_ENTRY_FIRST(0x62489db, public_62489db)
        ASM_EXPORT_ENTRY_LAST(0x62489e3, public_62489e3)
    }
}

#undef public_62489db
#undef public_62489e3

#pragma init_seg(compiler)
extern "C" void const* const public_62489db = __AsmFindLabelExport(&internal_62489d0, 0x62489db);
extern "C" void const* const public_62489e3 = __AsmFindLabelExport(&internal_62489d0, 0x62489e3);
