#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f405e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4a8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e96);

#define public_6f59168 _public_6f59168
#define public_6f59176 _public_6f59176
#define public_6f59185 _public_6f59185

PROC_DECLARE(0x6f59160, internal_6f59160, public_6f59160);
/* CHUNK of public_6f42cb0 */
extern "C" NAKED register_t __cdecl internal_6f59160()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_6f405e0
        public_6f59168 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0xD0
        jmp public_6f4a8d0
        public_6f59176 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0xD4
        jmp dword ptr ds : [public_6f5a014]
        public_6f59185 : nop
        mov eax, offset public_6f5c344
        jmp public_6f57e96
        UNREACHABLE_TRAP(0x6f59160)
        ASM_EXPORT_ENTRY_FIRST(0x6f59168, public_6f59168)
        ASM_EXPORT_ENTRY(0x6f59176, public_6f59176)
        ASM_EXPORT_ENTRY_LAST(0x6f59185, public_6f59185)
    }
}

#undef public_6f59168
#undef public_6f59176
#undef public_6f59185

#pragma init_seg(compiler)
extern "C" void const* const public_6f59168 = __AsmFindLabelExport(&internal_6f59160, 0x6f59168);
extern "C" void const* const public_6f59176 = __AsmFindLabelExport(&internal_6f59160, 0x6f59176);
extern "C" void const* const public_6f59185 = __AsmFindLabelExport(&internal_6f59160, 0x6f59185);
