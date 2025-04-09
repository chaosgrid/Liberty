#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_55d610);
CLANG_FORWARD_PROC_SYMBOL(public_59fa50);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c1778 _public_5c1778
#define public_5c1780 _public_5c1780
#define public_5c178f _public_5c178f
#define public_5c179e _public_5c179e

PROC_DECLARE(0x5c1770, internal_5c1770, public_5c1770);
/* CHUNK of public_55d710 */
extern "C" NAKED register_t __cdecl internal_5c1770()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_55d610
        public_5c1778 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_59fa50
        public_5c1780 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x350
        jmp dword ptr ds : [public_5c7090]
        public_5c178f : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x360
        jmp dword ptr ds : [public_5c7090]
        public_5c179e : nop
        mov eax, offset public_5fbb88
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c1770)
        ASM_EXPORT_ENTRY_FIRST(0x5c1778, public_5c1778)
        ASM_EXPORT_ENTRY(0x5c1780, public_5c1780)
        ASM_EXPORT_ENTRY(0x5c178f, public_5c178f)
        ASM_EXPORT_ENTRY_LAST(0x5c179e, public_5c179e)
    }
}

#undef public_5c1778
#undef public_5c1780
#undef public_5c178f
#undef public_5c179e

#pragma init_seg(compiler)
extern "C" void const* const public_5c1778 = __AsmFindLabelExport(&internal_5c1770, 0x5c1778);
extern "C" void const* const public_5c1780 = __AsmFindLabelExport(&internal_5c1770, 0x5c1780);
extern "C" void const* const public_5c178f = __AsmFindLabelExport(&internal_5c1770, 0x5c178f);
extern "C" void const* const public_5c179e = __AsmFindLabelExport(&internal_5c1770, 0x5c179e);
