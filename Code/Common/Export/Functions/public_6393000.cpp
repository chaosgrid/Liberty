#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6280b30);
CLANG_FORWARD_PROC_SYMBOL(public_6286c80);
CLANG_FORWARD_PROC_SYMBOL(public_62881d0);
CLANG_FORWARD_PROC_SYMBOL(public_62af440);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6393008 _public_6393008
#define public_6393016 _public_6393016
#define public_639301e _public_639301e
#define public_6393026 _public_6393026

PROC_DECLARE(0x6393000, internal_6393000, public_6393000);
/* CHUNK of public_6286670 */
extern "C" NAKED register_t __cdecl internal_6393000()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_62af440
        public_6393008 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x9C
        jmp public_6280b30
        public_6393016 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_6286c80
        public_639301e : nop
        mov ecx, dword ptr ss : [ebp+4]
        jmp public_62881d0
        public_6393026 : nop
        mov eax, offset public_63ac094
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6393000)
        ASM_EXPORT_ENTRY_FIRST(0x6393008, public_6393008)
        ASM_EXPORT_ENTRY(0x6393016, public_6393016)
        ASM_EXPORT_ENTRY(0x639301e, public_639301e)
        ASM_EXPORT_ENTRY_LAST(0x6393026, public_6393026)
    }
}

#undef public_6393008
#undef public_6393016
#undef public_639301e
#undef public_6393026

#pragma init_seg(compiler)
extern "C" void const* const public_6393008 = __AsmFindLabelExport(&internal_6393000, 0x6393008);
extern "C" void const* const public_6393016 = __AsmFindLabelExport(&internal_6393000, 0x6393016);
extern "C" void const* const public_639301e = __AsmFindLabelExport(&internal_6393000, 0x639301e);
extern "C" void const* const public_6393026 = __AsmFindLabelExport(&internal_6393000, 0x6393026);
