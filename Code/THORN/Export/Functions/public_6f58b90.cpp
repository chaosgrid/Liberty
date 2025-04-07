#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f37d40);
CLANG_FORWARD_PROC_SYMBOL(public_6f3ba30);
CLANG_FORWARD_PROC_SYMBOL(public_6f3bbd0);
CLANG_FORWARD_PROC_SYMBOL(public_6f3bc10);
CLANG_FORWARD_PROC_SYMBOL(public_6f3bf90);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e96);

#define public_6f58b9c _public_6f58b9c
#define public_6f58ba7 _public_6f58ba7
#define public_6f58bb5 _public_6f58bb5
#define public_6f58bc3 _public_6f58bc3
#define public_6f58bd1 _public_6f58bd1
#define public_6f58bdf _public_6f58bdf
#define public_6f58bed _public_6f58bed
#define public_6f58bfb _public_6f58bfb

PROC_DECLARE(0x6f58b90, internal_6f58b90, public_6f58b90);
/* CHUNK of public_6f37e00 */
extern "C" NAKED register_t __cdecl internal_6f58b90()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0xC
        jmp dword ptr ds : [public_6f5a014]
        public_6f58b9c : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x1C
        jmp public_6f3ba30
        public_6f58ba7 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0xA4
        jmp public_6f37d40
        public_6f58bb5 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0xB8
        jmp public_6f3bbd0
        public_6f58bc3 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0xC8
        jmp public_6f3bbd0
        public_6f58bd1 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0xD8
        jmp public_6f3bbd0
        public_6f58bdf : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0xE8
        jmp public_6f3bc10
        public_6f58bed : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0xF4
        jmp public_6f3bf90
        public_6f58bfb : nop
        mov eax, offset public_6f5bd78
        jmp public_6f57e96
        UNREACHABLE_TRAP(0x6f58b90)
        ASM_EXPORT_ENTRY_FIRST(0x6f58b9c, public_6f58b9c)
        ASM_EXPORT_ENTRY(0x6f58ba7, public_6f58ba7)
        ASM_EXPORT_ENTRY(0x6f58bb5, public_6f58bb5)
        ASM_EXPORT_ENTRY(0x6f58bc3, public_6f58bc3)
        ASM_EXPORT_ENTRY(0x6f58bd1, public_6f58bd1)
        ASM_EXPORT_ENTRY(0x6f58bdf, public_6f58bdf)
        ASM_EXPORT_ENTRY(0x6f58bed, public_6f58bed)
        ASM_EXPORT_ENTRY_LAST(0x6f58bfb, public_6f58bfb)
    }
}

#undef public_6f58b9c
#undef public_6f58ba7
#undef public_6f58bb5
#undef public_6f58bc3
#undef public_6f58bd1
#undef public_6f58bdf
#undef public_6f58bed
#undef public_6f58bfb

#pragma init_seg(compiler)
extern "C" void const* const public_6f58b9c = __AsmFindLabelExport(&internal_6f58b90, 0x6f58b9c);
extern "C" void const* const public_6f58ba7 = __AsmFindLabelExport(&internal_6f58b90, 0x6f58ba7);
extern "C" void const* const public_6f58bb5 = __AsmFindLabelExport(&internal_6f58b90, 0x6f58bb5);
extern "C" void const* const public_6f58bc3 = __AsmFindLabelExport(&internal_6f58b90, 0x6f58bc3);
extern "C" void const* const public_6f58bd1 = __AsmFindLabelExport(&internal_6f58b90, 0x6f58bd1);
extern "C" void const* const public_6f58bdf = __AsmFindLabelExport(&internal_6f58b90, 0x6f58bdf);
extern "C" void const* const public_6f58bed = __AsmFindLabelExport(&internal_6f58b90, 0x6f58bed);
extern "C" void const* const public_6f58bfb = __AsmFindLabelExport(&internal_6f58b90, 0x6f58bfb);
