#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4a2d30);
CLANG_FORWARD_PROC_SYMBOL(public_592080);
CLANG_FORWARD_PROC_SYMBOL(public_592170);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c4a28 _public_5c4a28
#define public_5c4a33 _public_5c4a33
#define public_5c4a3b _public_5c4a3b

PROC_DECLARE(0x5c4a20, internal_5c4a20, public_5c4a20);
/* CHUNK of public_591ef0 */
extern "C" NAKED register_t __cdecl internal_5c4a20()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x14]
        jmp public_4a2d30
        public_5c4a28 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x14
        jmp public_592080
        public_5c4a33 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_592170
        public_5c4a3b : nop
        mov eax, offset public_5fe6fc
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c4a20)
        ASM_EXPORT_ENTRY_FIRST(0x5c4a28, public_5c4a28)
        ASM_EXPORT_ENTRY(0x5c4a33, public_5c4a33)
        ASM_EXPORT_ENTRY_LAST(0x5c4a3b, public_5c4a3b)
    }
}

#undef public_5c4a28
#undef public_5c4a33
#undef public_5c4a3b

#pragma init_seg(compiler)
extern "C" void const* const public_5c4a28 = __AsmFindLabelExport(&internal_5c4a20, 0x5c4a28);
extern "C" void const* const public_5c4a33 = __AsmFindLabelExport(&internal_5c4a20, 0x5c4a33);
extern "C" void const* const public_5c4a3b = __AsmFindLabelExport(&internal_5c4a20, 0x5c4a3b);
