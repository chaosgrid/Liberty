#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6269110);
CLANG_FORWARD_PROC_SYMBOL(public_627cae0);
CLANG_FORWARD_PROC_SYMBOL(public_627e9b0);
CLANG_FORWARD_PROC_SYMBOL(public_62a68e0);
CLANG_FORWARD_PROC_SYMBOL(public_62af700);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6394338 _public_6394338
#define public_6394343 _public_6394343
#define public_639434e _public_639434e
#define public_639435c _public_639435c
#define public_6394364 _public_6394364

PROC_DECLARE(0x6394330, internal_6394330, public_6394330);
/* CHUNK of public_62af440 */
extern "C" NAKED register_t __cdecl internal_6394330()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x1C]
        jmp public_627cae0
        public_6394338 : nop
        mov ecx, dword ptr ss : [ebp-0x1C]
        add ecx, 0x64
        jmp public_6269110
        public_6394343 : nop
        mov ecx, dword ptr ss : [ebp-0x1C]
        add ecx, 0x78
        jmp public_62a68e0
        public_639434e : nop
        mov ecx, dword ptr ss : [ebp-0x1C]
        add ecx, 0x8C
        jmp public_62af700
        public_639435c : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        jmp public_627e9b0
        public_6394364 : nop
        mov eax, offset public_63ad914
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6394330)
        ASM_EXPORT_ENTRY_FIRST(0x6394338, public_6394338)
        ASM_EXPORT_ENTRY(0x6394343, public_6394343)
        ASM_EXPORT_ENTRY(0x639434e, public_639434e)
        ASM_EXPORT_ENTRY(0x639435c, public_639435c)
        ASM_EXPORT_ENTRY_LAST(0x6394364, public_6394364)
    }
}

#undef public_6394338
#undef public_6394343
#undef public_639434e
#undef public_639435c
#undef public_6394364

#pragma init_seg(compiler)
extern "C" void const* const public_6394338 = __AsmFindLabelExport(&internal_6394330, 0x6394338);
extern "C" void const* const public_6394343 = __AsmFindLabelExport(&internal_6394330, 0x6394343);
extern "C" void const* const public_639434e = __AsmFindLabelExport(&internal_6394330, 0x639434e);
extern "C" void const* const public_639435c = __AsmFindLabelExport(&internal_6394330, 0x639435c);
extern "C" void const* const public_6394364 = __AsmFindLabelExport(&internal_6394330, 0x6394364);
