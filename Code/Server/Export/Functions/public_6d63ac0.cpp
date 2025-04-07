#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce36f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d60018);

#define public_6d63acb _public_6d63acb
#define public_6d63ad7 _public_6d63ad7

PROC_DECLARE(0x6d63ac0, internal_6d63ac0, public_6d63ac0);
/* CHUNK of public_6d56860 */
extern "C" NAKED register_t __cdecl internal_6d63ac0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 4
        jmp public_6ce36f0
        public_6d63acb : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x14
        jmp dword ptr ds : [public_6d64b94]
        public_6d63ad7 : nop
        mov eax, offset public_6d75cf4
        jmp public_6d60018
        UNREACHABLE_TRAP(0x6d63ac0)
        ASM_EXPORT_ENTRY_FIRST(0x6d63acb, public_6d63acb)
        ASM_EXPORT_ENTRY_LAST(0x6d63ad7, public_6d63ad7)
    }
}

#undef public_6d63acb
#undef public_6d63ad7

#pragma init_seg(compiler)
extern "C" void const* const public_6d63acb = __AsmFindLabelExport(&internal_6d63ac0, 0x6d63acb);
extern "C" void const* const public_6d63ad7 = __AsmFindLabelExport(&internal_6d63ac0, 0x6d63ad7);
