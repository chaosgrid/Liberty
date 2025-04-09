#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_468850);
CLANG_FORWARD_PROC_SYMBOL(public_4a2d30);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bb4f8 _public_5bb4f8
#define public_5bb503 _public_5bb503
#define public_5bb50e _public_5bb50e
#define public_5bb519 _public_5bb519

PROC_DECLARE(0x5bb4f0, internal_5bb4f0, public_5bb4f0);
/* CHUNK of public_4688b0 */
extern "C" NAKED register_t __cdecl internal_5bb4f0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x18]
        jmp public_4a2d30
        public_5bb4f8 : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0xC
        jmp public_4a2d30
        public_5bb503 : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0x18
        jmp public_468850
        public_5bb50e : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0x28
        jmp public_468850
        public_5bb519 : nop
        mov eax, offset public_5f56cc
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bb4f0)
        ASM_EXPORT_ENTRY_FIRST(0x5bb4f8, public_5bb4f8)
        ASM_EXPORT_ENTRY(0x5bb503, public_5bb503)
        ASM_EXPORT_ENTRY(0x5bb50e, public_5bb50e)
        ASM_EXPORT_ENTRY_LAST(0x5bb519, public_5bb519)
    }
}

#undef public_5bb4f8
#undef public_5bb503
#undef public_5bb50e
#undef public_5bb519

#pragma init_seg(compiler)
extern "C" void const* const public_5bb4f8 = __AsmFindLabelExport(&internal_5bb4f0, 0x5bb4f8);
extern "C" void const* const public_5bb503 = __AsmFindLabelExport(&internal_5bb4f0, 0x5bb503);
extern "C" void const* const public_5bb50e = __AsmFindLabelExport(&internal_5bb4f0, 0x5bb50e);
extern "C" void const* const public_5bb519 = __AsmFindLabelExport(&internal_5bb4f0, 0x5bb519);
