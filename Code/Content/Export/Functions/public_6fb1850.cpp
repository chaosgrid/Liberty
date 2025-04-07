#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f85550);
CLANG_FORWARD_PROC_SYMBOL(public_6f99890);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fb1859 _public_6fb1859
#define public_6fb1861 _public_6fb1861
#define public_6fb186d _public_6fb186d
#define public_6fb1875 _public_6fb1875

PROC_DECLARE(0x6fb1850, internal_6fb1850, public_6fb1850);
/* CHUNK of public_6f99560 */
extern "C" NAKED register_t __cdecl internal_6fb1850()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x6C]
        jmp dword ptr ds : [public_6fb3034]
        public_6fb1859 : nop
        lea ecx, ss:[ebp-0x70]
        jmp public_6f85550
        public_6fb1861 : nop
        mov ecx, dword ptr ss : [ebp-0x78]
        add ecx, 4
        jmp dword ptr ds : [public_6fb3034]
        public_6fb186d : nop
        lea ecx, ss:[ebp-0x40]
        jmp public_6f99890
        public_6fb1875 : nop
        mov eax, offset public_6fc6e58
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fb1850)
        ASM_EXPORT_ENTRY_FIRST(0x6fb1859, public_6fb1859)
        ASM_EXPORT_ENTRY(0x6fb1861, public_6fb1861)
        ASM_EXPORT_ENTRY(0x6fb186d, public_6fb186d)
        ASM_EXPORT_ENTRY_LAST(0x6fb1875, public_6fb1875)
    }
}

#undef public_6fb1859
#undef public_6fb1861
#undef public_6fb186d
#undef public_6fb1875

#pragma init_seg(compiler)
extern "C" void const* const public_6fb1859 = __AsmFindLabelExport(&internal_6fb1850, 0x6fb1859);
extern "C" void const* const public_6fb1861 = __AsmFindLabelExport(&internal_6fb1850, 0x6fb1861);
extern "C" void const* const public_6fb186d = __AsmFindLabelExport(&internal_6fb1850, 0x6fb186d);
extern "C" void const* const public_6fb1875 = __AsmFindLabelExport(&internal_6fb1850, 0x6fb1875);
