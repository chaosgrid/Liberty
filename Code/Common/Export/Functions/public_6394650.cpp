#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6285b90);
CLANG_FORWARD_PROC_SYMBOL(public_62881d0);
CLANG_FORWARD_PROC_SYMBOL(public_629ff20);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6394658 _public_6394658
#define public_6394670 _public_6394670
#define public_6394677 _public_6394677
#define public_639467f _public_639467f
#define public_639468a _public_639468a

PROC_DECLARE(0x6394650, internal_6394650, public_6394650);
/* CHUNK of public_62b2f30 */
extern "C" NAKED register_t __cdecl internal_6394650()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_629ff20
        public_6394658 : nop
        cmp dword ptr ss : [ebp-0x10], 0
        je public_6394670
        mov eax, dword ptr ss : [ebp-0x10]
        add eax, 8
        mov dword ptr ss : [ebp-0x14], eax
        jmp public_6394677
        public_6394670 : nop
        mov dword ptr ss : [ebp-0x14], 0
        public_6394677 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        jmp public_6285b90
        public_639467f : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x18
        jmp public_62881d0
        public_639468a : nop
        mov eax, offset public_63adbd4
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6394650)
        ASM_EXPORT_ENTRY_FIRST(0x6394658, public_6394658)
        ASM_EXPORT_ENTRY(0x6394670, public_6394670)
        ASM_EXPORT_ENTRY(0x6394677, public_6394677)
        ASM_EXPORT_ENTRY(0x639467f, public_639467f)
        ASM_EXPORT_ENTRY_LAST(0x639468a, public_639468a)
    }
}

#undef public_6394658
#undef public_6394670
#undef public_6394677
#undef public_639467f
#undef public_639468a

#pragma init_seg(compiler)
extern "C" void const* const public_6394658 = __AsmFindLabelExport(&internal_6394650, 0x6394658);
extern "C" void const* const public_6394670 = __AsmFindLabelExport(&internal_6394650, 0x6394670);
extern "C" void const* const public_6394677 = __AsmFindLabelExport(&internal_6394650, 0x6394677);
extern "C" void const* const public_639467f = __AsmFindLabelExport(&internal_6394650, 0x639467f);
extern "C" void const* const public_639468a = __AsmFindLabelExport(&internal_6394650, 0x639468a);
