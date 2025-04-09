#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_444e20);
CLANG_FORWARD_PROC_SYMBOL(public_444e50);
CLANG_FORWARD_PROC_SYMBOL(public_444ee0);
CLANG_FORWARD_PROC_SYMBOL(public_445d70);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5ba218 _public_5ba218
#define public_5ba220 _public_5ba220
#define public_5ba228 _public_5ba228
#define public_5ba230 _public_5ba230
#define public_5ba238 _public_5ba238
#define public_5ba243 _public_5ba243

PROC_DECLARE(0x5ba210, internal_5ba210, public_5ba210);
/* CHUNK of public_45a270 */
extern "C" NAKED register_t __cdecl internal_5ba210()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x68]
        jmp public_444e20
        public_5ba218 : nop
        lea ecx, ss:[ebp-0x60]
        jmp public_444e50
        public_5ba220 : nop
        lea ecx, ss:[ebp-0x70]
        jmp public_444ee0
        public_5ba228 : nop
        lea ecx, ss:[ebp-0x68]
        jmp public_444e20
        public_5ba230 : nop
        mov ecx, dword ptr ss : [ebp+0xC]
        jmp public_444e20
        public_5ba238 : nop
        mov ecx, dword ptr ss : [ebp+0xC]
        add ecx, 0xC
        jmp public_445d70
        public_5ba243 : nop
        mov eax, offset public_5f4604
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5ba210)
        ASM_EXPORT_ENTRY_FIRST(0x5ba218, public_5ba218)
        ASM_EXPORT_ENTRY(0x5ba220, public_5ba220)
        ASM_EXPORT_ENTRY(0x5ba228, public_5ba228)
        ASM_EXPORT_ENTRY(0x5ba230, public_5ba230)
        ASM_EXPORT_ENTRY(0x5ba238, public_5ba238)
        ASM_EXPORT_ENTRY_LAST(0x5ba243, public_5ba243)
    }
}

#undef public_5ba218
#undef public_5ba220
#undef public_5ba228
#undef public_5ba230
#undef public_5ba238
#undef public_5ba243

#pragma init_seg(compiler)
extern "C" void const* const public_5ba218 = __AsmFindLabelExport(&internal_5ba210, 0x5ba218);
extern "C" void const* const public_5ba220 = __AsmFindLabelExport(&internal_5ba210, 0x5ba220);
extern "C" void const* const public_5ba228 = __AsmFindLabelExport(&internal_5ba210, 0x5ba228);
extern "C" void const* const public_5ba230 = __AsmFindLabelExport(&internal_5ba210, 0x5ba230);
extern "C" void const* const public_5ba238 = __AsmFindLabelExport(&internal_5ba210, 0x5ba238);
extern "C" void const* const public_5ba243 = __AsmFindLabelExport(&internal_5ba210, 0x5ba243);
