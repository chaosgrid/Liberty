#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c8630);
CLANG_FORWARD_PROC_SYMBOL(public_5154f0);
CLANG_FORWARD_PROC_SYMBOL(public_59fa50);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bf1c9 _public_5bf1c9
#define public_5bf1d4 _public_5bf1d4
#define public_5bf1dc _public_5bf1dc
#define public_5bf1e7 _public_5bf1e7
#define public_5bf1f0 _public_5bf1f0
#define public_5bf1fe _public_5bf1fe

PROC_DECLARE(0x5bf1c0, internal_5bf1c0, public_5bf1c0);
/* CHUNK of public_4f3af0 */
extern "C" NAKED register_t __cdecl internal_5bf1c0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0xC]
        jmp dword ptr ds : [public_5c62a4]
        public_5bf1c9 : nop
        mov ecx, dword ptr ss : [ebp-0x1C]
        add ecx, 0x28
        jmp public_5154f0
        public_5bf1d4 : nop
        mov ecx, dword ptr ss : [ebp-0x1C]
        jmp public_4c8630
        public_5bf1dc : nop
        mov ecx, dword ptr ss : [ebp-0x1C]
        add ecx, 0x38
        jmp public_59fa50
        public_5bf1e7 : nop
        mov ecx, dword ptr ss : [ebp-0x24]
        jmp dword ptr ds : [public_5c62a4]
        public_5bf1f0 : nop
        mov ecx, dword ptr ss : [ebp-0x1C]
        add ecx, 0x364
        jmp public_5154f0
        public_5bf1fe : nop
        mov eax, offset public_5f9138
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bf1c0)
        ASM_EXPORT_ENTRY_FIRST(0x5bf1c9, public_5bf1c9)
        ASM_EXPORT_ENTRY(0x5bf1d4, public_5bf1d4)
        ASM_EXPORT_ENTRY(0x5bf1dc, public_5bf1dc)
        ASM_EXPORT_ENTRY(0x5bf1e7, public_5bf1e7)
        ASM_EXPORT_ENTRY(0x5bf1f0, public_5bf1f0)
        ASM_EXPORT_ENTRY_LAST(0x5bf1fe, public_5bf1fe)
    }
}

#undef public_5bf1c9
#undef public_5bf1d4
#undef public_5bf1dc
#undef public_5bf1e7
#undef public_5bf1f0
#undef public_5bf1fe

#pragma init_seg(compiler)
extern "C" void const* const public_5bf1c9 = __AsmFindLabelExport(&internal_5bf1c0, 0x5bf1c9);
extern "C" void const* const public_5bf1d4 = __AsmFindLabelExport(&internal_5bf1c0, 0x5bf1d4);
extern "C" void const* const public_5bf1dc = __AsmFindLabelExport(&internal_5bf1c0, 0x5bf1dc);
extern "C" void const* const public_5bf1e7 = __AsmFindLabelExport(&internal_5bf1c0, 0x5bf1e7);
extern "C" void const* const public_5bf1f0 = __AsmFindLabelExport(&internal_5bf1c0, 0x5bf1f0);
extern "C" void const* const public_5bf1fe = __AsmFindLabelExport(&internal_5bf1c0, 0x5bf1fe);
