#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f405e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4a8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e96);

#define public_6f59138 _public_6f59138
#define public_6f59146 _public_6f59146
#define public_6f59155 _public_6f59155

PROC_DECLARE(0x6f59130, internal_6f59130, public_6f59130);
/* CHUNK of public_6f426f0 */
extern "C" NAKED register_t __cdecl internal_6f59130()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_6f405e0
        public_6f59138 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0xD0
        jmp public_6f4a8d0
        public_6f59146 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0xD4
        jmp dword ptr ds : [public_6f5a014]
        public_6f59155 : nop
        mov eax, offset public_6f5c310
        jmp public_6f57e96
        UNREACHABLE_TRAP(0x6f59130)
        ASM_EXPORT_ENTRY_FIRST(0x6f59138, public_6f59138)
        ASM_EXPORT_ENTRY(0x6f59146, public_6f59146)
        ASM_EXPORT_ENTRY_LAST(0x6f59155, public_6f59155)
    }
}

#undef public_6f59138
#undef public_6f59146
#undef public_6f59155

#pragma init_seg(compiler)
extern "C" void const* const public_6f59138 = __AsmFindLabelExport(&internal_6f59130, 0x6f59138);
extern "C" void const* const public_6f59146 = __AsmFindLabelExport(&internal_6f59130, 0x6f59146);
extern "C" void const* const public_6f59155 = __AsmFindLabelExport(&internal_6f59130, 0x6f59155);
