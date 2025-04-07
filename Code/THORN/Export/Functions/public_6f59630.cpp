#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f439a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e96);

#define public_6f59638 _public_6f59638
#define public_6f59644 _public_6f59644

PROC_DECLARE(0x6f59630, internal_6f59630, public_6f59630);
/* CHUNK of public_6f494e0 */
extern "C" NAKED register_t __cdecl internal_6f59630()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_6f439a0
        public_6f59638 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x60
        jmp dword ptr ds : [public_6f5a014]
        public_6f59644 : nop
        mov eax, offset public_6f5c874
        jmp public_6f57e96
        UNREACHABLE_TRAP(0x6f59630)
        ASM_EXPORT_ENTRY_FIRST(0x6f59638, public_6f59638)
        ASM_EXPORT_ENTRY_LAST(0x6f59644, public_6f59644)
    }
}

#undef public_6f59638
#undef public_6f59644

#pragma init_seg(compiler)
extern "C" void const* const public_6f59638 = __AsmFindLabelExport(&internal_6f59630, 0x6f59638);
extern "C" void const* const public_6f59644 = __AsmFindLabelExport(&internal_6f59630, 0x6f59644);
