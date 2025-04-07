#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_632af20);
CLANG_FORWARD_PROC_SYMBOL(public_6392140);

#define public_632af31 _public_632af31

PROC_DECLARE(0x632af20, internal_632af20, public_632af20);
/* CHUNK of public_632ac30 */
extern "C" NAKED register_t __cdecl internal_632af20()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push ecx
        call dword ptr ds : [public_6399368]
        test eax, eax
        jge public_632af31
        push eax
        call public_6392140
        public_632af31 : nop
        ret 
        UNREACHABLE_TRAP(0x632af20)
        ASM_EXPORT_ENTRY_SINGLE(0x632af31, public_632af31)
    }
}

#undef public_632af31

#pragma init_seg(compiler)
extern "C" void const* const public_632af31 = __AsmFindLabelExport(&internal_632af20, 0x632af31);
