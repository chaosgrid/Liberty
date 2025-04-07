#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41dc50);
CLANG_FORWARD_PROC_SYMBOL(public_4a2d30);
CLANG_FORWARD_PROC_SYMBOL(public_50a120);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bfb38 _public_5bfb38
#define public_5bfb43 _public_5bfb43
#define public_5bfb4e _public_5bfb4e

PROC_DECLARE(0x5bfb30, internal_5bfb30, public_5bfb30);
/* CHUNK of public_50a170 */
extern "C" NAKED register_t __cdecl internal_5bfb30()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x14]
        jmp public_50a120
        public_5bfb38 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 4
        jmp public_41dc50
        public_5bfb43 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x64
        jmp public_4a2d30
        public_5bfb4e : nop
        mov eax, offset public_5f9a78
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bfb30)
        ASM_EXPORT_ENTRY_FIRST(0x5bfb38, public_5bfb38)
        ASM_EXPORT_ENTRY(0x5bfb43, public_5bfb43)
        ASM_EXPORT_ENTRY_LAST(0x5bfb4e, public_5bfb4e)
    }
}

#undef public_5bfb38
#undef public_5bfb43
#undef public_5bfb4e

#pragma init_seg(compiler)
extern "C" void const* const public_5bfb38 = __AsmFindLabelExport(&internal_5bfb30, 0x5bfb38);
extern "C" void const* const public_5bfb43 = __AsmFindLabelExport(&internal_5bfb30, 0x5bfb43);
extern "C" void const* const public_5bfb4e = __AsmFindLabelExport(&internal_5bfb30, 0x5bfb4e);
