#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f439a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e96);

#define public_6f59618 _public_6f59618
#define public_6f59624 _public_6f59624

PROC_DECLARE(0x6f59610, internal_6f59610, public_6f59610);
/* CHUNK of public_6f49440 */
extern "C" NAKED register_t __cdecl internal_6f59610()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_6f439a0
        public_6f59618 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x60
        jmp dword ptr ds : [public_6f5a014]
        public_6f59624 : nop
        mov eax, offset public_6f5c848
        jmp public_6f57e96
        UNREACHABLE_TRAP(0x6f59610)
        ASM_EXPORT_ENTRY_FIRST(0x6f59618, public_6f59618)
        ASM_EXPORT_ENTRY_LAST(0x6f59624, public_6f59624)
    }
}

#undef public_6f59618
#undef public_6f59624

#pragma init_seg(compiler)
extern "C" void const* const public_6f59618 = __AsmFindLabelExport(&internal_6f59610, 0x6f59618);
extern "C" void const* const public_6f59624 = __AsmFindLabelExport(&internal_6f59610, 0x6f59624);
