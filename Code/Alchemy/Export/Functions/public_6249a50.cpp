#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620b710);
CLANG_FORWARD_PROC_SYMBOL(public_620ce80);
CLANG_FORWARD_PROC_SYMBOL(public_62307d0);
CLANG_FORWARD_PROC_SYMBOL(public_6230f10);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_6249a58 _public_6249a58
#define public_6249a60 _public_6249a60
#define public_6249a68 _public_6249a68
#define public_6249a70 _public_6249a70

PROC_DECLARE(0x6249a50, internal_6249a50, public_6249a50);
/* CHUNK of public_6231360 */
extern "C" NAKED register_t __cdecl internal_6249a50()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x20]
        jmp public_620ce80
        public_6249a58 : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        jmp public_6230f10
        public_6249a60 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        jmp public_62307d0
        public_6249a68 : nop
        mov ecx, dword ptr ss : [ebp-0x20]
        jmp public_620b710
        public_6249a70 : nop
        mov eax, offset public_6252a78
        jmp public_6246126
        UNREACHABLE_TRAP(0x6249a50)
        ASM_EXPORT_ENTRY_FIRST(0x6249a58, public_6249a58)
        ASM_EXPORT_ENTRY(0x6249a60, public_6249a60)
        ASM_EXPORT_ENTRY(0x6249a68, public_6249a68)
        ASM_EXPORT_ENTRY_LAST(0x6249a70, public_6249a70)
    }
}

#undef public_6249a58
#undef public_6249a60
#undef public_6249a68
#undef public_6249a70

#pragma init_seg(compiler)
extern "C" void const* const public_6249a58 = __AsmFindLabelExport(&internal_6249a50, 0x6249a58);
extern "C" void const* const public_6249a60 = __AsmFindLabelExport(&internal_6249a50, 0x6249a60);
extern "C" void const* const public_6249a68 = __AsmFindLabelExport(&internal_6249a50, 0x6249a68);
extern "C" void const* const public_6249a70 = __AsmFindLabelExport(&internal_6249a50, 0x6249a70);
