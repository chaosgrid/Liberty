#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f439a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e96);

#define public_6f59408 _public_6f59408
#define public_6f59417 _public_6f59417

PROC_DECLARE(0x6f59400, internal_6f59400, public_6f59400);
/* CHUNK of public_6f46430 */
extern "C" NAKED register_t __cdecl internal_6f59400()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_6f439a0
        public_6f59408 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0xA8
        jmp dword ptr ds : [public_6f5a014]
        public_6f59417 : nop
        mov eax, offset public_6f5c5fc
        jmp public_6f57e96
        UNREACHABLE_TRAP(0x6f59400)
        ASM_EXPORT_ENTRY_FIRST(0x6f59408, public_6f59408)
        ASM_EXPORT_ENTRY_LAST(0x6f59417, public_6f59417)
    }
}

#undef public_6f59408
#undef public_6f59417

#pragma init_seg(compiler)
extern "C" void const* const public_6f59408 = __AsmFindLabelExport(&internal_6f59400, 0x6f59408);
extern "C" void const* const public_6f59417 = __AsmFindLabelExport(&internal_6f59400, 0x6f59417);
