#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62c3040);
CLANG_FORWARD_PROC_SYMBOL(public_62d2080);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6394d38 _public_6394d38
#define public_6394d43 _public_6394d43

PROC_DECLARE(0x6394d30, internal_6394d30, public_6394d30);
/* CHUNK of public_62c95e0 */
extern "C" NAKED register_t __cdecl internal_6394d30()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_62d2080
        public_6394d38 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x70
        jmp public_62c3040
        public_6394d43 : nop
        mov eax, offset public_63ae388
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6394d30)
        ASM_EXPORT_ENTRY_FIRST(0x6394d38, public_6394d38)
        ASM_EXPORT_ENTRY_LAST(0x6394d43, public_6394d43)
    }
}

#undef public_6394d38
#undef public_6394d43

#pragma init_seg(compiler)
extern "C" void const* const public_6394d38 = __AsmFindLabelExport(&internal_6394d30, 0x6394d38);
extern "C" void const* const public_6394d43 = __AsmFindLabelExport(&internal_6394d30, 0x6394d43);
