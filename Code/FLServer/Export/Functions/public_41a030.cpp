#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4193c0);

#define public_41a039 _public_41a039

PROC_DECLARE(0x41a030, internal_41a030, public_41a030);
/* CHUNK of public_40c380 */
extern "C" NAKED register_t __cdecl internal_41a030()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp dword ptr ds : [public_41b880]
        public_41a039 : nop
        mov eax, offset public_41f18c
        jmp public_4193c0
        UNREACHABLE_TRAP(0x41a030)
        ASM_EXPORT_ENTRY_SINGLE(0x41a039, public_41a039)
    }
}

#undef public_41a039

#pragma init_seg(compiler)
extern "C" void const* const public_41a039 = __AsmFindLabelExport(&internal_41a030, 0x41a039);
