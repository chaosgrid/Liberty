#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb7900);
CLANG_FORWARD_PROC_SYMBOL(public_6f15350);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6faa418 _public_6faa418
#define public_6faa430 _public_6faa430
#define public_6faa437 _public_6faa437
#define public_6faa43f _public_6faa43f

PROC_DECLARE(0x6faa410, internal_6faa410, public_6faa410);
/* CHUNK of public_6eb75a0 */
extern "C" NAKED register_t __cdecl internal_6faa410()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x14]
        jmp public_6eb7900
        public_6faa418 : nop
        cmp dword ptr ss : [ebp-0x14], 0
        je public_6faa430
        mov eax, dword ptr ss : [ebp-0x14]
        add eax, 4
        mov dword ptr ss : [ebp-0x7C], eax
        jmp public_6faa437
        public_6faa430 : nop
        mov dword ptr ss : [ebp-0x7C], 0
        public_6faa437 : nop
        mov ecx, dword ptr ss : [ebp-0x7C]
        jmp public_6f15350
        public_6faa43f : nop
        mov eax, offset public_6fbe7f8
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6faa410)
        ASM_EXPORT_ENTRY_FIRST(0x6faa418, public_6faa418)
        ASM_EXPORT_ENTRY(0x6faa430, public_6faa430)
        ASM_EXPORT_ENTRY(0x6faa437, public_6faa437)
        ASM_EXPORT_ENTRY_LAST(0x6faa43f, public_6faa43f)
    }
}

#undef public_6faa418
#undef public_6faa430
#undef public_6faa437
#undef public_6faa43f

#pragma init_seg(compiler)
extern "C" void const* const public_6faa418 = __AsmFindLabelExport(&internal_6faa410, 0x6faa418);
extern "C" void const* const public_6faa430 = __AsmFindLabelExport(&internal_6faa410, 0x6faa430);
extern "C" void const* const public_6faa437 = __AsmFindLabelExport(&internal_6faa410, 0x6faa437);
extern "C" void const* const public_6faa43f = __AsmFindLabelExport(&internal_6faa410, 0x6faa43f);
