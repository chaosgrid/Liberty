#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f15350);
CLANG_FORWARD_PROC_SYMBOL(public_6f33d20);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6faeeeb _public_6faeeeb
#define public_6faeefc _public_6faeefc

PROC_DECLARE(0x6faeee0, internal_6faeee0, public_6faeee0);
/* CHUNK of public_6f471d0 */
extern "C" NAKED register_t __cdecl internal_6faeee0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x404]
        jmp public_6f33d20
        public_6faeeeb : nop
        mov ecx, dword ptr ss : [ebp-0x404]
        add ecx, 0x180
        jmp public_6f15350
        public_6faeefc : nop
        mov eax, offset public_6fc3e74
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6faeee0)
        ASM_EXPORT_ENTRY_FIRST(0x6faeeeb, public_6faeeeb)
        ASM_EXPORT_ENTRY_LAST(0x6faeefc, public_6faeefc)
    }
}

#undef public_6faeeeb
#undef public_6faeefc

#pragma init_seg(compiler)
extern "C" void const* const public_6faeeeb = __AsmFindLabelExport(&internal_6faeee0, 0x6faeeeb);
extern "C" void const* const public_6faeefc = __AsmFindLabelExport(&internal_6faeee0, 0x6faeefc);
