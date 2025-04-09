#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_444e20);
CLANG_FORWARD_PROC_SYMBOL(public_445d70);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5b9868 _public_5b9868
#define public_5b9873 _public_5b9873

PROC_DECLARE(0x5b9860, internal_5b9860, public_5b9860);
/* CHUNK of public_444e50 */
extern "C" NAKED register_t __cdecl internal_5b9860()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_444e20
        public_5b9868 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0xC
        jmp public_445d70
        public_5b9873 : nop
        mov eax, offset public_5f38a8
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5b9860)
        ASM_EXPORT_ENTRY_FIRST(0x5b9868, public_5b9868)
        ASM_EXPORT_ENTRY_LAST(0x5b9873, public_5b9873)
    }
}

#undef public_5b9868
#undef public_5b9873

#pragma init_seg(compiler)
extern "C" void const* const public_5b9868 = __AsmFindLabelExport(&internal_5b9860, 0x5b9868);
extern "C" void const* const public_5b9873 = __AsmFindLabelExport(&internal_5b9860, 0x5b9873);
