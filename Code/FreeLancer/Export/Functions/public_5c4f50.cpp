#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_444e20);
CLANG_FORWARD_PROC_SYMBOL(public_444ee0);
CLANG_FORWARD_PROC_SYMBOL(public_445d70);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c4f58 _public_5c4f58
#define public_5c4f60 _public_5c4f60
#define public_5c4f68 _public_5c4f68
#define public_5c4f70 _public_5c4f70
#define public_5c4f7b _public_5c4f7b

PROC_DECLARE(0x5c4f50, internal_5c4f50, public_5c4f50);
/* CHUNK of public_5a0530 */
extern "C" NAKED register_t __cdecl internal_5c4f50()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x68]
        jmp public_444e20
        public_5c4f58 : nop
        lea ecx, ss:[ebp-0x70]
        jmp public_444ee0
        public_5c4f60 : nop
        lea ecx, ss:[ebp-0x68]
        jmp public_444e20
        public_5c4f68 : nop
        mov ecx, dword ptr ss : [ebp-0x74]
        jmp public_444e20
        public_5c4f70 : nop
        mov ecx, dword ptr ss : [ebp-0x74]
        add ecx, 0xC
        jmp public_445d70
        public_5c4f7b : nop
        mov eax, offset public_5fed48
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c4f50)
        ASM_EXPORT_ENTRY_FIRST(0x5c4f58, public_5c4f58)
        ASM_EXPORT_ENTRY(0x5c4f60, public_5c4f60)
        ASM_EXPORT_ENTRY(0x5c4f68, public_5c4f68)
        ASM_EXPORT_ENTRY(0x5c4f70, public_5c4f70)
        ASM_EXPORT_ENTRY_LAST(0x5c4f7b, public_5c4f7b)
    }
}

#undef public_5c4f58
#undef public_5c4f60
#undef public_5c4f68
#undef public_5c4f70
#undef public_5c4f7b

#pragma init_seg(compiler)
extern "C" void const* const public_5c4f58 = __AsmFindLabelExport(&internal_5c4f50, 0x5c4f58);
extern "C" void const* const public_5c4f60 = __AsmFindLabelExport(&internal_5c4f50, 0x5c4f60);
extern "C" void const* const public_5c4f68 = __AsmFindLabelExport(&internal_5c4f50, 0x5c4f68);
extern "C" void const* const public_5c4f70 = __AsmFindLabelExport(&internal_5c4f50, 0x5c4f70);
extern "C" void const* const public_5c4f7b = __AsmFindLabelExport(&internal_5c4f50, 0x5c4f7b);
