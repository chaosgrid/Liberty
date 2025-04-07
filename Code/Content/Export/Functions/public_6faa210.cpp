#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea7c30);
CLANG_FORWARD_PROC_SYMBOL(public_6eb5380);
CLANG_FORWARD_PROC_SYMBOL(public_6eb5410);
CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6faa218 _public_6faa218
#define public_6faa220 _public_6faa220
#define public_6faa228 _public_6faa228
#define public_6faa230 _public_6faa230
#define public_6faa239 _public_6faa239
#define public_6faa241 _public_6faa241

PROC_DECLARE(0x6faa210, internal_6faa210, public_6faa210);
/* CHUNK of public_6eb4ba0 */
extern "C" NAKED register_t __cdecl internal_6faa210()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x68]
        jmp public_6eec8d0
        public_6faa218 : nop
        lea ecx, ss:[ebp-0x68]
        jmp public_6eb5380
        public_6faa220 : nop
        lea ecx, ss:[ebp-0x2C]
        jmp public_6eb5410
        public_6faa228 : nop
        lea ecx, ss:[ebp-0x68]
        jmp public_6eec8d0
        public_6faa230 : nop
        lea ecx, ss:[ebp-0x68]
        jmp dword ptr ds : [public_6fb3034]
        public_6faa239 : nop
        lea ecx, ss:[ebp-0x78]
        jmp public_6ea7c30
        public_6faa241 : nop
        mov eax, offset public_6fbe624
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6faa210)
        ASM_EXPORT_ENTRY_FIRST(0x6faa218, public_6faa218)
        ASM_EXPORT_ENTRY(0x6faa220, public_6faa220)
        ASM_EXPORT_ENTRY(0x6faa228, public_6faa228)
        ASM_EXPORT_ENTRY(0x6faa230, public_6faa230)
        ASM_EXPORT_ENTRY(0x6faa239, public_6faa239)
        ASM_EXPORT_ENTRY_LAST(0x6faa241, public_6faa241)
    }
}

#undef public_6faa218
#undef public_6faa220
#undef public_6faa228
#undef public_6faa230
#undef public_6faa239
#undef public_6faa241

#pragma init_seg(compiler)
extern "C" void const* const public_6faa218 = __AsmFindLabelExport(&internal_6faa210, 0x6faa218);
extern "C" void const* const public_6faa220 = __AsmFindLabelExport(&internal_6faa210, 0x6faa220);
extern "C" void const* const public_6faa228 = __AsmFindLabelExport(&internal_6faa210, 0x6faa228);
extern "C" void const* const public_6faa230 = __AsmFindLabelExport(&internal_6faa210, 0x6faa230);
extern "C" void const* const public_6faa239 = __AsmFindLabelExport(&internal_6faa210, 0x6faa239);
extern "C" void const* const public_6faa241 = __AsmFindLabelExport(&internal_6faa210, 0x6faa241);
