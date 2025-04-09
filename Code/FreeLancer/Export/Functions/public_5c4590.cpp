#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_444e20);
CLANG_FORWARD_PROC_SYMBOL(public_445d70);
CLANG_FORWARD_PROC_SYMBOL(public_59fa50);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c4598 _public_5c4598
#define public_5c45a6 _public_5c45a6
#define public_5c45ae _public_5c45ae
#define public_5c45b9 _public_5c45b9

PROC_DECLARE(0x5c4590, internal_5c4590, public_5c4590);
/* CHUNK of public_589d50 */
extern "C" NAKED register_t __cdecl internal_5c4590()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_59fa50
        public_5c4598 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x370
        jmp public_444e20
        public_5c45a6 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        jmp public_444e20
        public_5c45ae : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0xC
        jmp public_445d70
        public_5c45b9 : nop
        mov eax, offset public_5fe228
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c4590)
        ASM_EXPORT_ENTRY_FIRST(0x5c4598, public_5c4598)
        ASM_EXPORT_ENTRY(0x5c45a6, public_5c45a6)
        ASM_EXPORT_ENTRY(0x5c45ae, public_5c45ae)
        ASM_EXPORT_ENTRY_LAST(0x5c45b9, public_5c45b9)
    }
}

#undef public_5c4598
#undef public_5c45a6
#undef public_5c45ae
#undef public_5c45b9

#pragma init_seg(compiler)
extern "C" void const* const public_5c4598 = __AsmFindLabelExport(&internal_5c4590, 0x5c4598);
extern "C" void const* const public_5c45a6 = __AsmFindLabelExport(&internal_5c4590, 0x5c45a6);
extern "C" void const* const public_5c45ae = __AsmFindLabelExport(&internal_5c4590, 0x5c45ae);
extern "C" void const* const public_5c45b9 = __AsmFindLabelExport(&internal_5c4590, 0x5c45b9);
