#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c60a0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c5268 _public_5c5268
#define public_5c5274 _public_5c5274

PROC_DECLARE(0x5c5260, internal_5c5260, public_5c5260);
/* CHUNK of public_5a6830 */
extern "C" NAKED register_t __cdecl internal_5c5260()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_4c60a0
        public_5c5268 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x10
        jmp dword ptr ds : [public_5c6098]
        public_5c5274 : nop
        mov eax, offset public_5ff0e0
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c5260)
        ASM_EXPORT_ENTRY_FIRST(0x5c5268, public_5c5268)
        ASM_EXPORT_ENTRY_LAST(0x5c5274, public_5c5274)
    }
}

#undef public_5c5268
#undef public_5c5274

#pragma init_seg(compiler)
extern "C" void const* const public_5c5268 = __AsmFindLabelExport(&internal_5c5260, 0x5c5268);
extern "C" void const* const public_5c5274 = __AsmFindLabelExport(&internal_5c5260, 0x5c5274);
