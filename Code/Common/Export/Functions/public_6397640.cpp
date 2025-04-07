#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6263310);
CLANG_FORWARD_PROC_SYMBOL(public_6263860);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_639764b _public_639764b
#define public_6397656 _public_6397656
#define public_6397662 _public_6397662
#define public_639766e _public_639766e
#define public_6397679 _public_6397679
#define public_6397685 _public_6397685
#define public_6397691 _public_6397691

PROC_DECLARE(0x6397640, internal_6397640, public_6397640);
/* CHUNK of public_6336750 */
extern "C" NAKED register_t __cdecl internal_6397640()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x1574]
        jmp public_6263860
        public_639764b : nop
        lea ecx, ss:[ebp-0x1574]
        jmp public_6263310
        public_6397656 : nop
        mov ecx, dword ptr ss : [ebp-0x1780]
        jmp dword ptr ds : [public_63991ac]
        public_6397662 : nop
        lea ecx, ss:[ebp-0x1574]
        jmp dword ptr ds : [public_63991ac]
        public_639766e : nop
        lea ecx, ss:[ebp-0x1574]
        jmp public_6263310
        public_6397679 : nop
        mov ecx, dword ptr ss : [ebp-0x1780]
        jmp dword ptr ds : [public_63991ac]
        public_6397685 : nop
        lea ecx, ss:[ebp-0x1574]
        jmp dword ptr ds : [public_63991ac]
        public_6397691 : nop
        mov eax, offset public_63b185c
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6397640)
        ASM_EXPORT_ENTRY_FIRST(0x639764b, public_639764b)
        ASM_EXPORT_ENTRY(0x6397656, public_6397656)
        ASM_EXPORT_ENTRY(0x6397662, public_6397662)
        ASM_EXPORT_ENTRY(0x639766e, public_639766e)
        ASM_EXPORT_ENTRY(0x6397679, public_6397679)
        ASM_EXPORT_ENTRY(0x6397685, public_6397685)
        ASM_EXPORT_ENTRY_LAST(0x6397691, public_6397691)
    }
}

#undef public_639764b
#undef public_6397656
#undef public_6397662
#undef public_639766e
#undef public_6397679
#undef public_6397685
#undef public_6397691

#pragma init_seg(compiler)
extern "C" void const* const public_639764b = __AsmFindLabelExport(&internal_6397640, 0x639764b);
extern "C" void const* const public_6397656 = __AsmFindLabelExport(&internal_6397640, 0x6397656);
extern "C" void const* const public_6397662 = __AsmFindLabelExport(&internal_6397640, 0x6397662);
extern "C" void const* const public_639766e = __AsmFindLabelExport(&internal_6397640, 0x639766e);
extern "C" void const* const public_6397679 = __AsmFindLabelExport(&internal_6397640, 0x6397679);
extern "C" void const* const public_6397685 = __AsmFindLabelExport(&internal_6397640, 0x6397685);
extern "C" void const* const public_6397691 = __AsmFindLabelExport(&internal_6397640, 0x6397691);
