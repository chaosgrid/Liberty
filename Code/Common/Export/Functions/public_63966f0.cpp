#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6315b30);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_63966fc _public_63966fc
#define public_6396707 _public_6396707
#define public_6396713 _public_6396713

PROC_DECLARE(0x63966f0, internal_63966f0, public_63966f0);
/* CHUNK of public_63149d0 */
extern "C" NAKED register_t __cdecl internal_63966f0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 4
        jmp dword ptr ds : [public_63991ac]
        public_63966fc : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x14
        jmp public_6315b30
        public_6396707 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x24
        jmp dword ptr ds : [public_63991ac]
        public_6396713 : nop
        mov eax, offset public_63b05b4
        jmp public_6391da2
        UNREACHABLE_TRAP(0x63966f0)
        ASM_EXPORT_ENTRY_FIRST(0x63966fc, public_63966fc)
        ASM_EXPORT_ENTRY(0x6396707, public_6396707)
        ASM_EXPORT_ENTRY_LAST(0x6396713, public_6396713)
    }
}

#undef public_63966fc
#undef public_6396707
#undef public_6396713

#pragma init_seg(compiler)
extern "C" void const* const public_63966fc = __AsmFindLabelExport(&internal_63966f0, 0x63966fc);
extern "C" void const* const public_6396707 = __AsmFindLabelExport(&internal_63966f0, 0x6396707);
extern "C" void const* const public_6396713 = __AsmFindLabelExport(&internal_63966f0, 0x6396713);
