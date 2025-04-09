#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40d470);
CLANG_FORWARD_PROC_SYMBOL(public_4de730);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5b84ab _public_5b84ab
#define public_5b84b6 _public_5b84b6
#define public_5b84c1 _public_5b84c1
#define public_5b84cc _public_5b84cc

PROC_DECLARE(0x5b84a0, internal_5b84a0, public_5b84a0);
/* CHUNK of public_406b80 */
extern "C" NAKED register_t __cdecl internal_5b84a0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x20
        jmp public_4de730
        public_5b84ab : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x30
        jmp public_4de730
        public_5b84b6 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x40
        jmp public_40d470
        public_5b84c1 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 4
        jmp public_4de730
        public_5b84cc : nop
        mov eax, offset public_5f1f94
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5b84a0)
        ASM_EXPORT_ENTRY_FIRST(0x5b84ab, public_5b84ab)
        ASM_EXPORT_ENTRY(0x5b84b6, public_5b84b6)
        ASM_EXPORT_ENTRY(0x5b84c1, public_5b84c1)
        ASM_EXPORT_ENTRY_LAST(0x5b84cc, public_5b84cc)
    }
}

#undef public_5b84ab
#undef public_5b84b6
#undef public_5b84c1
#undef public_5b84cc

#pragma init_seg(compiler)
extern "C" void const* const public_5b84ab = __AsmFindLabelExport(&internal_5b84a0, 0x5b84ab);
extern "C" void const* const public_5b84b6 = __AsmFindLabelExport(&internal_5b84a0, 0x5b84b6);
extern "C" void const* const public_5b84c1 = __AsmFindLabelExport(&internal_5b84a0, 0x5b84c1);
extern "C" void const* const public_5b84cc = __AsmFindLabelExport(&internal_5b84a0, 0x5b84cc);
