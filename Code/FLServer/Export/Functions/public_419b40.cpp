#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_403bd0);
CLANG_FORWARD_PROC_SYMBOL(public_4193c0);

#define public_419b4b _public_419b4b
#define public_419b57 _public_419b57

PROC_DECLARE(0x419b40, internal_419b40, public_419b40);
/* CHUNK of public_402e80 */
extern "C" NAKED register_t __cdecl internal_419b40()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 4
        jmp public_403bd0
        public_419b4b : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x14
        jmp dword ptr ds : [public_41b880]
        public_419b57 : nop
        mov eax, offset public_41ebb8
        jmp public_4193c0
        UNREACHABLE_TRAP(0x419b40)
        ASM_EXPORT_ENTRY_FIRST(0x419b4b, public_419b4b)
        ASM_EXPORT_ENTRY_LAST(0x419b57, public_419b57)
    }
}

#undef public_419b4b
#undef public_419b57

#pragma init_seg(compiler)
extern "C" void const* const public_419b4b = __AsmFindLabelExport(&internal_419b40, 0x419b4b);
extern "C" void const* const public_419b57 = __AsmFindLabelExport(&internal_419b40, 0x419b57);
