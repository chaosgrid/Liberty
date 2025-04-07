#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f40510);
CLANG_FORWARD_PROC_SYMBOL(public_6f4a760);
CLANG_FORWARD_PROC_SYMBOL(public_6f4a780);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e96);

#define public_6f58f0b _public_6f58f0b
#define public_6f58f16 _public_6f58f16
#define public_6f58f22 _public_6f58f22
#define public_6f58f2e _public_6f58f2e
#define public_6f58f39 _public_6f58f39

PROC_DECLARE(0x6f58f00, internal_6f58f00, public_6f58f00);
/* CHUNK of public_6f403e0 */
extern "C" NAKED register_t __cdecl internal_6f58f00()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x10
        jmp public_6f4a760
        public_6f58f0b : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x14
        jmp public_6f4a780
        public_6f58f16 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x18
        jmp dword ptr ds : [public_6f5a014]
        public_6f58f22 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x28
        jmp dword ptr ds : [public_6f5a014]
        public_6f58f2e : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x70
        jmp public_6f40510
        public_6f58f39 : nop
        mov eax, offset public_6f5c0dc
        jmp public_6f57e96
        UNREACHABLE_TRAP(0x6f58f00)
        ASM_EXPORT_ENTRY_FIRST(0x6f58f0b, public_6f58f0b)
        ASM_EXPORT_ENTRY(0x6f58f16, public_6f58f16)
        ASM_EXPORT_ENTRY(0x6f58f22, public_6f58f22)
        ASM_EXPORT_ENTRY(0x6f58f2e, public_6f58f2e)
        ASM_EXPORT_ENTRY_LAST(0x6f58f39, public_6f58f39)
    }
}

#undef public_6f58f0b
#undef public_6f58f16
#undef public_6f58f22
#undef public_6f58f2e
#undef public_6f58f39

#pragma init_seg(compiler)
extern "C" void const* const public_6f58f0b = __AsmFindLabelExport(&internal_6f58f00, 0x6f58f0b);
extern "C" void const* const public_6f58f16 = __AsmFindLabelExport(&internal_6f58f00, 0x6f58f16);
extern "C" void const* const public_6f58f22 = __AsmFindLabelExport(&internal_6f58f00, 0x6f58f22);
extern "C" void const* const public_6f58f2e = __AsmFindLabelExport(&internal_6f58f00, 0x6f58f2e);
extern "C" void const* const public_6f58f39 = __AsmFindLabelExport(&internal_6f58f00, 0x6f58f39);
