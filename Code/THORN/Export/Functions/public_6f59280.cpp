#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f439a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e96);

#define public_6f59288 _public_6f59288
#define public_6f59294 _public_6f59294
#define public_6f592a3 _public_6f592a3

PROC_DECLARE(0x6f59280, internal_6f59280, public_6f59280);
/* CHUNK of public_6f439b0 */
extern "C" NAKED register_t __cdecl internal_6f59280()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_6f439a0
        public_6f59288 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x7C
        jmp dword ptr ds : [public_6f5a014]
        public_6f59294 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x8C
        jmp dword ptr ds : [public_6f5a014]
        public_6f592a3 : nop
        mov eax, offset public_6f5c458
        jmp public_6f57e96
        UNREACHABLE_TRAP(0x6f59280)
        ASM_EXPORT_ENTRY_FIRST(0x6f59288, public_6f59288)
        ASM_EXPORT_ENTRY(0x6f59294, public_6f59294)
        ASM_EXPORT_ENTRY_LAST(0x6f592a3, public_6f592a3)
    }
}

#undef public_6f59288
#undef public_6f59294
#undef public_6f592a3

#pragma init_seg(compiler)
extern "C" void const* const public_6f59288 = __AsmFindLabelExport(&internal_6f59280, 0x6f59288);
extern "C" void const* const public_6f59294 = __AsmFindLabelExport(&internal_6f59280, 0x6f59294);
extern "C" void const* const public_6f592a3 = __AsmFindLabelExport(&internal_6f59280, 0x6f592a3);
