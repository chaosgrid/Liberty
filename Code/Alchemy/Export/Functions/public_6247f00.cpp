#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6207470);
CLANG_FORWARD_PROC_SYMBOL(public_62084b0);
CLANG_FORWARD_PROC_SYMBOL(public_6212ec0);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_6247f08 _public_6247f08
#define public_6247f13 _public_6247f13
#define public_6247f1e _public_6247f1e
#define public_6247f26 _public_6247f26

PROC_DECLARE(0x6247f00, internal_6247f00, public_6247f00);
/* CHUNK of public_6212810 */
extern "C" NAKED register_t __cdecl internal_6247f00()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_6212ec0
        public_6247f08 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x4C
        jmp public_62084b0
        public_6247f13 : nop
        mov eax, dword ptr ss : [ebp-0x14]
        push eax
        call public_62460e0
        pop ecx
        ret 
        public_6247f1e : nop
        lea ecx, ss:[ebp-0x14]
        jmp public_6207470
        public_6247f26 : nop
        mov eax, offset public_6250d7c
        jmp public_6246126
        UNREACHABLE_TRAP(0x6247f00)
        ASM_EXPORT_ENTRY_FIRST(0x6247f08, public_6247f08)
        ASM_EXPORT_ENTRY(0x6247f13, public_6247f13)
        ASM_EXPORT_ENTRY(0x6247f1e, public_6247f1e)
        ASM_EXPORT_ENTRY_LAST(0x6247f26, public_6247f26)
    }
}

#undef public_6247f08
#undef public_6247f13
#undef public_6247f1e
#undef public_6247f26

#pragma init_seg(compiler)
extern "C" void const* const public_6247f08 = __AsmFindLabelExport(&internal_6247f00, 0x6247f08);
extern "C" void const* const public_6247f13 = __AsmFindLabelExport(&internal_6247f00, 0x6247f13);
extern "C" void const* const public_6247f1e = __AsmFindLabelExport(&internal_6247f00, 0x6247f1e);
extern "C" void const* const public_6247f26 = __AsmFindLabelExport(&internal_6247f00, 0x6247f26);
