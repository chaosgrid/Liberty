#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_418a98);
CLANG_FORWARD_PROC_SYMBOL(public_418c24);
CLANG_FORWARD_PROC_SYMBOL(public_4193c0);

#define public_41ab28 _public_41ab28
#define public_41ab33 _public_41ab33

PROC_DECLARE(0x41ab20, internal_41ab20, public_41ab20);
/* CHUNK of public_417ee0 */
extern "C" NAKED register_t __cdecl internal_41ab20()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_418a98
        public_41ab28 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x60
        jmp public_418c24
        public_41ab33 : nop
        mov eax, offset public_41fc60
        jmp public_4193c0
        UNREACHABLE_TRAP(0x41ab20)
        ASM_EXPORT_ENTRY_FIRST(0x41ab28, public_41ab28)
        ASM_EXPORT_ENTRY_LAST(0x41ab33, public_41ab33)
    }
}

#undef public_41ab28
#undef public_41ab33

#pragma init_seg(compiler)
extern "C" void const* const public_41ab28 = __AsmFindLabelExport(&internal_41ab20, 0x41ab28);
extern "C" void const* const public_41ab33 = __AsmFindLabelExport(&internal_41ab20, 0x41ab33);
