#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bbdbb _public_5bbdbb

PROC_DECLARE(0x5bbdb0, internal_5bbdb0, public_5bbdb0);
/* CHUNK of public_4770e0 */
extern "C" NAKED register_t __cdecl internal_5bbdb0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_5b7e1d
        pop ecx
        ret 
        public_5bbdbb : nop
        mov eax, offset public_5f6158
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bbdb0)
        ASM_EXPORT_ENTRY_SINGLE(0x5bbdbb, public_5bbdbb)
    }
}

#undef public_5bbdbb

#pragma init_seg(compiler)
extern "C" void const* const public_5bbdbb = __AsmFindLabelExport(&internal_5bbdb0, 0x5bbdbb);
