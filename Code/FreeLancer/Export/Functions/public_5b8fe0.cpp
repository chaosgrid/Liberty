#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4308d0);
CLANG_FORWARD_PROC_SYMBOL(public_4319d0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5b8feb _public_5b8feb
#define public_5b8ff6 _public_5b8ff6
#define public_5b9002 _public_5b9002

PROC_DECLARE(0x5b8fe0, internal_5b8fe0, public_5b8fe0);
/* CHUNK of public_431d90 */
extern "C" NAKED register_t __cdecl internal_5b8fe0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0xC
        jmp public_4308d0
        public_5b8feb : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x20
        jmp public_4319d0
        public_5b8ff6 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x2C
        jmp dword ptr ds : [public_5c7090]
        public_5b9002 : nop
        mov eax, offset public_5f2ed4
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5b8fe0)
        ASM_EXPORT_ENTRY_FIRST(0x5b8feb, public_5b8feb)
        ASM_EXPORT_ENTRY(0x5b8ff6, public_5b8ff6)
        ASM_EXPORT_ENTRY_LAST(0x5b9002, public_5b9002)
    }
}

#undef public_5b8feb
#undef public_5b8ff6
#undef public_5b9002

#pragma init_seg(compiler)
extern "C" void const* const public_5b8feb = __AsmFindLabelExport(&internal_5b8fe0, 0x5b8feb);
extern "C" void const* const public_5b8ff6 = __AsmFindLabelExport(&internal_5b8fe0, 0x5b8ff6);
extern "C" void const* const public_5b9002 = __AsmFindLabelExport(&internal_5b8fe0, 0x5b9002);
