#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620b210);
CLANG_FORWARD_PROC_SYMBOL(public_620b260);
CLANG_FORWARD_PROC_SYMBOL(public_620b300);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_6249a28 _public_6249a28
#define public_6249a33 _public_6249a33
#define public_6249a3e _public_6249a3e

PROC_DECLARE(0x6249a20, internal_6249a20, public_6249a20);
/* CHUNK of public_6231220 */
extern "C" NAKED register_t __cdecl internal_6249a20()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x14]
        jmp public_620b260
        public_6249a28 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x4C
        jmp public_620b210
        public_6249a33 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 4
        jmp public_620b300
        public_6249a3e : nop
        mov eax, offset public_6252a3c
        jmp public_6246126
        UNREACHABLE_TRAP(0x6249a20)
        ASM_EXPORT_ENTRY_FIRST(0x6249a28, public_6249a28)
        ASM_EXPORT_ENTRY(0x6249a33, public_6249a33)
        ASM_EXPORT_ENTRY_LAST(0x6249a3e, public_6249a3e)
    }
}

#undef public_6249a28
#undef public_6249a33
#undef public_6249a3e

#pragma init_seg(compiler)
extern "C" void const* const public_6249a28 = __AsmFindLabelExport(&internal_6249a20, 0x6249a28);
extern "C" void const* const public_6249a33 = __AsmFindLabelExport(&internal_6249a20, 0x6249a33);
extern "C" void const* const public_6249a3e = __AsmFindLabelExport(&internal_6249a20, 0x6249a3e);
