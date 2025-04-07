#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620b710);
CLANG_FORWARD_PROC_SYMBOL(public_620ce80);
CLANG_FORWARD_PROC_SYMBOL(public_6225910);
CLANG_FORWARD_PROC_SYMBOL(public_6226100);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_6249038 _public_6249038
#define public_6249040 _public_6249040
#define public_6249048 _public_6249048
#define public_6249050 _public_6249050

PROC_DECLARE(0x6249030, internal_6249030, public_6249030);
/* CHUNK of public_62264f0 */
extern "C" NAKED register_t __cdecl internal_6249030()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x20]
        jmp public_620ce80
        public_6249038 : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        jmp public_6226100
        public_6249040 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        jmp public_6225910
        public_6249048 : nop
        mov ecx, dword ptr ss : [ebp-0x20]
        jmp public_620b710
        public_6249050 : nop
        mov eax, offset public_6251fb0
        jmp public_6246126
        UNREACHABLE_TRAP(0x6249030)
        ASM_EXPORT_ENTRY_FIRST(0x6249038, public_6249038)
        ASM_EXPORT_ENTRY(0x6249040, public_6249040)
        ASM_EXPORT_ENTRY(0x6249048, public_6249048)
        ASM_EXPORT_ENTRY_LAST(0x6249050, public_6249050)
    }
}

#undef public_6249038
#undef public_6249040
#undef public_6249048
#undef public_6249050

#pragma init_seg(compiler)
extern "C" void const* const public_6249038 = __AsmFindLabelExport(&internal_6249030, 0x6249038);
extern "C" void const* const public_6249040 = __AsmFindLabelExport(&internal_6249030, 0x6249040);
extern "C" void const* const public_6249048 = __AsmFindLabelExport(&internal_6249030, 0x6249048);
extern "C" void const* const public_6249050 = __AsmFindLabelExport(&internal_6249030, 0x6249050);
