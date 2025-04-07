#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6263310);
CLANG_FORWARD_PROC_SYMBOL(public_6263860);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6392bbb _public_6392bbb
#define public_6392bc6 _public_6392bc6
#define public_6392bd2 _public_6392bd2
#define public_6392bde _public_6392bde

PROC_DECLARE(0x6392bb0, internal_6392bb0, public_6392bb0);
/* CHUNK of public_627a110 */
extern "C" NAKED register_t __cdecl internal_6392bb0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x1574]
        jmp public_6263860
        public_6392bbb : nop
        lea ecx, ss:[ebp-0x1574]
        jmp public_6263310
        public_6392bc6 : nop
        mov ecx, dword ptr ss : [ebp-0x159C]
        jmp dword ptr ds : [public_63991ac]
        public_6392bd2 : nop
        lea ecx, ss:[ebp-0x1574]
        jmp dword ptr ds : [public_63991ac]
        public_6392bde : nop
        mov eax, offset public_63ab9d4
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6392bb0)
        ASM_EXPORT_ENTRY_FIRST(0x6392bbb, public_6392bbb)
        ASM_EXPORT_ENTRY(0x6392bc6, public_6392bc6)
        ASM_EXPORT_ENTRY(0x6392bd2, public_6392bd2)
        ASM_EXPORT_ENTRY_LAST(0x6392bde, public_6392bde)
    }
}

#undef public_6392bbb
#undef public_6392bc6
#undef public_6392bd2
#undef public_6392bde

#pragma init_seg(compiler)
extern "C" void const* const public_6392bbb = __AsmFindLabelExport(&internal_6392bb0, 0x6392bbb);
extern "C" void const* const public_6392bc6 = __AsmFindLabelExport(&internal_6392bb0, 0x6392bc6);
extern "C" void const* const public_6392bd2 = __AsmFindLabelExport(&internal_6392bb0, 0x6392bd2);
extern "C" void const* const public_6392bde = __AsmFindLabelExport(&internal_6392bb0, 0x6392bde);
