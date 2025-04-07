#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6263310);
CLANG_FORWARD_PROC_SYMBOL(public_6263860);
CLANG_FORWARD_PROC_SYMBOL(public_631ed70);
CLANG_FORWARD_PROC_SYMBOL(public_631ee30);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6396c7b _public_6396c7b
#define public_6396c86 _public_6396c86
#define public_6396c91 _public_6396c91
#define public_6396c9c _public_6396c9c
#define public_6396ca8 _public_6396ca8
#define public_6396cb4 _public_6396cb4

PROC_DECLARE(0x6396c70, internal_6396c70, public_6396c70);
/* CHUNK of public_631e9a0 */
extern "C" NAKED register_t __cdecl internal_6396c70()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x1574]
        jmp public_6263860
        public_6396c7b : nop
        lea ecx, ss:[ebp-0x15E0]
        jmp public_631ed70
        public_6396c86 : nop
        lea ecx, ss:[ebp-0x15AC]
        jmp public_631ee30
        public_6396c91 : nop
        lea ecx, ss:[ebp-0x1574]
        jmp public_6263310
        public_6396c9c : nop
        mov ecx, dword ptr ss : [ebp-0x15E4]
        jmp dword ptr ds : [public_63991ac]
        public_6396ca8 : nop
        lea ecx, ss:[ebp-0x1574]
        jmp dword ptr ds : [public_63991ac]
        public_6396cb4 : nop
        mov eax, offset public_63b0bf8
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6396c70)
        ASM_EXPORT_ENTRY_FIRST(0x6396c7b, public_6396c7b)
        ASM_EXPORT_ENTRY(0x6396c86, public_6396c86)
        ASM_EXPORT_ENTRY(0x6396c91, public_6396c91)
        ASM_EXPORT_ENTRY(0x6396c9c, public_6396c9c)
        ASM_EXPORT_ENTRY(0x6396ca8, public_6396ca8)
        ASM_EXPORT_ENTRY_LAST(0x6396cb4, public_6396cb4)
    }
}

#undef public_6396c7b
#undef public_6396c86
#undef public_6396c91
#undef public_6396c9c
#undef public_6396ca8
#undef public_6396cb4

#pragma init_seg(compiler)
extern "C" void const* const public_6396c7b = __AsmFindLabelExport(&internal_6396c70, 0x6396c7b);
extern "C" void const* const public_6396c86 = __AsmFindLabelExport(&internal_6396c70, 0x6396c86);
extern "C" void const* const public_6396c91 = __AsmFindLabelExport(&internal_6396c70, 0x6396c91);
extern "C" void const* const public_6396c9c = __AsmFindLabelExport(&internal_6396c70, 0x6396c9c);
extern "C" void const* const public_6396ca8 = __AsmFindLabelExport(&internal_6396c70, 0x6396ca8);
extern "C" void const* const public_6396cb4 = __AsmFindLabelExport(&internal_6396c70, 0x6396cb4);
