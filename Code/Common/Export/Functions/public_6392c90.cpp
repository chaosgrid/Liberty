#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6269110);
CLANG_FORWARD_PROC_SYMBOL(public_627cae0);
CLANG_FORWARD_PROC_SYMBOL(public_627e9b0);
CLANG_FORWARD_PROC_SYMBOL(public_62a68e0);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6392c98 _public_6392c98
#define public_6392ca3 _public_6392ca3
#define public_6392cae _public_6392cae
#define public_6392cb6 _public_6392cb6

PROC_DECLARE(0x6392c90, internal_6392c90, public_6392c90);
/* CHUNK of public_627ce00 */
extern "C" NAKED register_t __cdecl internal_6392c90()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x18]
        jmp public_627cae0
        public_6392c98 : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0x64
        jmp public_6269110
        public_6392ca3 : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0x78
        jmp public_62a68e0
        public_6392cae : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        jmp public_627e9b0
        public_6392cb6 : nop
        mov eax, offset public_63abaf4
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6392c90)
        ASM_EXPORT_ENTRY_FIRST(0x6392c98, public_6392c98)
        ASM_EXPORT_ENTRY(0x6392ca3, public_6392ca3)
        ASM_EXPORT_ENTRY(0x6392cae, public_6392cae)
        ASM_EXPORT_ENTRY_LAST(0x6392cb6, public_6392cb6)
    }
}

#undef public_6392c98
#undef public_6392ca3
#undef public_6392cae
#undef public_6392cb6

#pragma init_seg(compiler)
extern "C" void const* const public_6392c98 = __AsmFindLabelExport(&internal_6392c90, 0x6392c98);
extern "C" void const* const public_6392ca3 = __AsmFindLabelExport(&internal_6392c90, 0x6392ca3);
extern "C" void const* const public_6392cae = __AsmFindLabelExport(&internal_6392c90, 0x6392cae);
extern "C" void const* const public_6392cb6 = __AsmFindLabelExport(&internal_6392c90, 0x6392cb6);
