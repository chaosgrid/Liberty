#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4308d0);
CLANG_FORWARD_PROC_SYMBOL(public_4319d0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5b8f9b _public_5b8f9b
#define public_5b8fa6 _public_5b8fa6
#define public_5b8fb2 _public_5b8fb2

PROC_DECLARE(0x5b8f90, internal_5b8f90, public_5b8f90);
/* CHUNK of public_4316c0 */
extern "C" NAKED register_t __cdecl internal_5b8f90()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x1C]
        add ecx, 0xC
        jmp public_4308d0
        public_5b8f9b : nop
        mov ecx, dword ptr ss : [ebp-0x1C]
        add ecx, 0x20
        jmp public_4319d0
        public_5b8fa6 : nop
        mov ecx, dword ptr ss : [ebp-0x1C]
        add ecx, 0x2C
        jmp dword ptr ds : [public_5c7090]
        public_5b8fb2 : nop
        mov eax, offset public_5f2e74
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5b8f90)
        ASM_EXPORT_ENTRY_FIRST(0x5b8f9b, public_5b8f9b)
        ASM_EXPORT_ENTRY(0x5b8fa6, public_5b8fa6)
        ASM_EXPORT_ENTRY_LAST(0x5b8fb2, public_5b8fb2)
    }
}

#undef public_5b8f9b
#undef public_5b8fa6
#undef public_5b8fb2

#pragma init_seg(compiler)
extern "C" void const* const public_5b8f9b = __AsmFindLabelExport(&internal_5b8f90, 0x5b8f9b);
extern "C" void const* const public_5b8fa6 = __AsmFindLabelExport(&internal_5b8f90, 0x5b8fa6);
extern "C" void const* const public_5b8fb2 = __AsmFindLabelExport(&internal_5b8f90, 0x5b8fb2);
