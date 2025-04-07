#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6faff09 _public_6faff09
#define public_6faff14 _public_6faff14
#define public_6faff1f _public_6faff1f

PROC_DECLARE(0x6faff00, internal_6faff00, public_6faff00);
/* CHUNK of public_6f71920 */
extern "C" NAKED register_t __cdecl internal_6faff00()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp dword ptr ds : [public_6fb3200]
        public_6faff09 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x34
        jmp public_6eec8d0
        public_6faff14 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x44
        jmp public_6eec8d0
        public_6faff1f : nop
        mov eax, offset public_6fc51f4
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6faff00)
        ASM_EXPORT_ENTRY_FIRST(0x6faff09, public_6faff09)
        ASM_EXPORT_ENTRY(0x6faff14, public_6faff14)
        ASM_EXPORT_ENTRY_LAST(0x6faff1f, public_6faff1f)
    }
}

#undef public_6faff09
#undef public_6faff14
#undef public_6faff1f

#pragma init_seg(compiler)
extern "C" void const* const public_6faff09 = __AsmFindLabelExport(&internal_6faff00, 0x6faff09);
extern "C" void const* const public_6faff14 = __AsmFindLabelExport(&internal_6faff00, 0x6faff14);
extern "C" void const* const public_6faff1f = __AsmFindLabelExport(&internal_6faff00, 0x6faff1f);
