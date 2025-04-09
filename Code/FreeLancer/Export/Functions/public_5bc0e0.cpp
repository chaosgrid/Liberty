#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_488be0);
CLANG_FORWARD_PROC_SYMBOL(public_576010);
CLANG_FORWARD_PROC_SYMBOL(public_59fa50);
CLANG_FORWARD_PROC_SYMBOL(public_5a1fe0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bc0e8 _public_5bc0e8
#define public_5bc0f6 _public_5bc0f6
#define public_5bc104 _public_5bc104
#define public_5bc113 _public_5bc113
#define public_5bc121 _public_5bc121

PROC_DECLARE(0x5bc0e0, internal_5bc0e0, public_5bc0e0);
/* CHUNK of public_485960 */
extern "C" NAKED register_t __cdecl internal_5bc0e0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_59fa50
        public_5bc0e8 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x32C
        jmp public_576010
        public_5bc0f6 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x340
        jmp public_488be0
        public_5bc104 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x350
        jmp dword ptr ds : [public_5c7058]
        public_5bc113 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x5DC
        jmp public_5a1fe0
        public_5bc121 : nop
        mov eax, offset public_5f6538
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bc0e0)
        ASM_EXPORT_ENTRY_FIRST(0x5bc0e8, public_5bc0e8)
        ASM_EXPORT_ENTRY(0x5bc0f6, public_5bc0f6)
        ASM_EXPORT_ENTRY(0x5bc104, public_5bc104)
        ASM_EXPORT_ENTRY(0x5bc113, public_5bc113)
        ASM_EXPORT_ENTRY_LAST(0x5bc121, public_5bc121)
    }
}

#undef public_5bc0e8
#undef public_5bc0f6
#undef public_5bc104
#undef public_5bc113
#undef public_5bc121

#pragma init_seg(compiler)
extern "C" void const* const public_5bc0e8 = __AsmFindLabelExport(&internal_5bc0e0, 0x5bc0e8);
extern "C" void const* const public_5bc0f6 = __AsmFindLabelExport(&internal_5bc0e0, 0x5bc0f6);
extern "C" void const* const public_5bc104 = __AsmFindLabelExport(&internal_5bc0e0, 0x5bc104);
extern "C" void const* const public_5bc113 = __AsmFindLabelExport(&internal_5bc0e0, 0x5bc113);
extern "C" void const* const public_5bc121 = __AsmFindLabelExport(&internal_5bc0e0, 0x5bc121);
