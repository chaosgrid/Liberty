#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d1bbf0);
CLANG_FORWARD_PROC_SYMBOL(public_6d1bd60);
CLANG_FORWARD_PROC_SYMBOL(public_6d1bd70);
CLANG_FORWARD_PROC_SYMBOL(public_6d60018);

#define public_6d62188 _public_6d62188
#define public_6d62193 _public_6d62193
#define public_6d6219e _public_6d6219e

PROC_DECLARE(0x6d62180, internal_6d62180, public_6d62180);
/* CHUNK of public_6d1bb20 */
extern "C" NAKED register_t __cdecl internal_6d62180()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x18]
        jmp public_6d1bbf0
        public_6d62188 : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0x2C
        jmp public_6d1bd60
        public_6d62193 : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0x3C
        jmp public_6d1bd70
        public_6d6219e : nop
        mov eax, offset public_6d7300c
        jmp public_6d60018
        UNREACHABLE_TRAP(0x6d62180)
        ASM_EXPORT_ENTRY_FIRST(0x6d62188, public_6d62188)
        ASM_EXPORT_ENTRY(0x6d62193, public_6d62193)
        ASM_EXPORT_ENTRY_LAST(0x6d6219e, public_6d6219e)
    }
}

#undef public_6d62188
#undef public_6d62193
#undef public_6d6219e

#pragma init_seg(compiler)
extern "C" void const* const public_6d62188 = __AsmFindLabelExport(&internal_6d62180, 0x6d62188);
extern "C" void const* const public_6d62193 = __AsmFindLabelExport(&internal_6d62180, 0x6d62193);
extern "C" void const* const public_6d6219e = __AsmFindLabelExport(&internal_6d62180, 0x6d6219e);
