#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_48e5f0);
CLANG_FORWARD_PROC_SYMBOL(public_5154f0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bfef8 _public_5bfef8
#define public_5bff01 _public_5bff01
#define public_5bff0f _public_5bff0f

PROC_DECLARE(0x5bfef0, internal_5bfef0, public_5bfef0);
/* CHUNK of public_51b2f0 */
extern "C" NAKED register_t __cdecl internal_5bfef0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_48e5f0
        public_5bfef8 : nop
        mov ecx, dword ptr ss : [ebp-8]
        jmp dword ptr ds : [public_5c62a4]
        public_5bff01 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0xC0
        jmp public_5154f0
        public_5bff0f : nop
        mov eax, offset public_5f9ecc
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bfef0)
        ASM_EXPORT_ENTRY_FIRST(0x5bfef8, public_5bfef8)
        ASM_EXPORT_ENTRY(0x5bff01, public_5bff01)
        ASM_EXPORT_ENTRY_LAST(0x5bff0f, public_5bff0f)
    }
}

#undef public_5bfef8
#undef public_5bff01
#undef public_5bff0f

#pragma init_seg(compiler)
extern "C" void const* const public_5bfef8 = __AsmFindLabelExport(&internal_5bfef0, 0x5bfef8);
extern "C" void const* const public_5bff01 = __AsmFindLabelExport(&internal_5bfef0, 0x5bff01);
extern "C" void const* const public_5bff0f = __AsmFindLabelExport(&internal_5bfef0, 0x5bff0f);
