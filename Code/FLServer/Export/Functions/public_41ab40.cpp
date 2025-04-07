#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_418a98);
CLANG_FORWARD_PROC_SYMBOL(public_418c24);
CLANG_FORWARD_PROC_SYMBOL(public_4193c0);

#define public_41ab48 _public_41ab48
#define public_41ab53 _public_41ab53

PROC_DECLARE(0x41ab40, internal_41ab40, public_41ab40);
/* CHUNK of public_417f40 */
extern "C" NAKED register_t __cdecl internal_41ab40()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_418a98
        public_41ab48 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x60
        jmp public_418c24
        public_41ab53 : nop
        mov eax, offset public_41fc8c
        jmp public_4193c0
        UNREACHABLE_TRAP(0x41ab40)
        ASM_EXPORT_ENTRY_FIRST(0x41ab48, public_41ab48)
        ASM_EXPORT_ENTRY_LAST(0x41ab53, public_41ab53)
    }
}

#undef public_41ab48
#undef public_41ab53

#pragma init_seg(compiler)
extern "C" void const* const public_41ab48 = __AsmFindLabelExport(&internal_41ab40, 0x41ab48);
extern "C" void const* const public_41ab53 = __AsmFindLabelExport(&internal_41ab40, 0x41ab53);
