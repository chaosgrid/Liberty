#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f89cc0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fb0f8b _public_6fb0f8b
#define public_6fb0f93 _public_6fb0f93

PROC_DECLARE(0x6fb0f80, internal_6fb0f80, public_6fb0f80);
/* CHUNK of public_6f890f0 */
extern "C" NAKED register_t __cdecl internal_6fb0f80()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp+4]
        push eax
        call public_6fa8fe0
        pop ecx
        ret 
        public_6fb0f8b : nop
        mov ecx, dword ptr ss : [ebp+4]
        jmp public_6f89cc0
        public_6fb0f93 : nop
        mov eax, offset public_6fc64ec
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fb0f80)
        ASM_EXPORT_ENTRY_FIRST(0x6fb0f8b, public_6fb0f8b)
        ASM_EXPORT_ENTRY_LAST(0x6fb0f93, public_6fb0f93)
    }
}

#undef public_6fb0f8b
#undef public_6fb0f93

#pragma init_seg(compiler)
extern "C" void const* const public_6fb0f8b = __AsmFindLabelExport(&internal_6fb0f80, 0x6fb0f8b);
extern "C" void const* const public_6fb0f93 = __AsmFindLabelExport(&internal_6fb0f80, 0x6fb0f93);
