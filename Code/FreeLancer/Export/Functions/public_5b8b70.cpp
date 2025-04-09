#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40edf0);
CLANG_FORWARD_PROC_SYMBOL(public_420cb0);
CLANG_FORWARD_PROC_SYMBOL(public_426de0);
CLANG_FORWARD_PROC_SYMBOL(public_526a20);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5b8b7c _public_5b8b7c
#define public_5b8b87 _public_5b8b87
#define public_5b8b92 _public_5b8b92
#define public_5b8b9d _public_5b8b9d
#define public_5b8ba8 _public_5b8ba8
#define public_5b8bb4 _public_5b8bb4
#define public_5b8bc0 _public_5b8bc0

PROC_DECLARE(0x5b8b70, internal_5b8b70, public_5b8b70);
/* CHUNK of public_425b30 */
extern "C" NAKED register_t __cdecl internal_5b8b70()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x1780]
        jmp dword ptr ds : [public_5c6048]
        public_5b8b7c : nop
        lea ecx, ss:[ebp-0x1D0C]
        jmp public_526a20
        public_5b8b87 : nop
        lea ecx, ss:[ebp-0x1C54]
        jmp public_426de0
        public_5b8b92 : nop
        lea ecx, ss:[ebp-0x18D4]
        jmp public_420cb0
        public_5b8b9d : nop
        lea ecx, ss:[ebp-0x1780]
        jmp public_40edf0
        public_5b8ba8 : nop
        mov ecx, dword ptr ss : [ebp-0x1CCC]
        jmp dword ptr ds : [public_5c7090]
        public_5b8bb4 : nop
        lea ecx, ss:[ebp-0x1780]
        jmp dword ptr ds : [public_5c7090]
        public_5b8bc0 : nop
        mov eax, offset public_5f2a5c
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5b8b70)
        ASM_EXPORT_ENTRY_FIRST(0x5b8b7c, public_5b8b7c)
        ASM_EXPORT_ENTRY(0x5b8b87, public_5b8b87)
        ASM_EXPORT_ENTRY(0x5b8b92, public_5b8b92)
        ASM_EXPORT_ENTRY(0x5b8b9d, public_5b8b9d)
        ASM_EXPORT_ENTRY(0x5b8ba8, public_5b8ba8)
        ASM_EXPORT_ENTRY(0x5b8bb4, public_5b8bb4)
        ASM_EXPORT_ENTRY_LAST(0x5b8bc0, public_5b8bc0)
    }
}

#undef public_5b8b7c
#undef public_5b8b87
#undef public_5b8b92
#undef public_5b8b9d
#undef public_5b8ba8
#undef public_5b8bb4
#undef public_5b8bc0

#pragma init_seg(compiler)
extern "C" void const* const public_5b8b7c = __AsmFindLabelExport(&internal_5b8b70, 0x5b8b7c);
extern "C" void const* const public_5b8b87 = __AsmFindLabelExport(&internal_5b8b70, 0x5b8b87);
extern "C" void const* const public_5b8b92 = __AsmFindLabelExport(&internal_5b8b70, 0x5b8b92);
extern "C" void const* const public_5b8b9d = __AsmFindLabelExport(&internal_5b8b70, 0x5b8b9d);
extern "C" void const* const public_5b8ba8 = __AsmFindLabelExport(&internal_5b8b70, 0x5b8ba8);
extern "C" void const* const public_5b8bb4 = __AsmFindLabelExport(&internal_5b8b70, 0x5b8bb4);
extern "C" void const* const public_5b8bc0 = __AsmFindLabelExport(&internal_5b8b70, 0x5b8bc0);
