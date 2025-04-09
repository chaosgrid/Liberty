#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5b87d9 _public_5b87d9

PROC_DECLARE(0x5b87d0, internal_5b87d0, public_5b87d0);
/* CHUNK of public_43dc40 */
extern "C" NAKED register_t __cdecl internal_5b87d0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp dword ptr ds : [public_5c7090]
        public_5b87d9 : nop
        mov eax, offset public_5f25d8
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5b87d0)
        ASM_EXPORT_ENTRY_SINGLE(0x5b87d9, public_5b87d9)
    }
}

#undef public_5b87d9

#pragma init_seg(compiler)
extern "C" void const* const public_5b87d9 = __AsmFindLabelExport(&internal_5b87d0, 0x5b87d9);
