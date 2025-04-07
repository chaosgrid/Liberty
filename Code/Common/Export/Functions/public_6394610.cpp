#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6285b90);
CLANG_FORWARD_PROC_SYMBOL(public_62881d0);
CLANG_FORWARD_PROC_SYMBOL(public_629ff20);
CLANG_FORWARD_PROC_SYMBOL(public_62fd570);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_639461b _public_639461b
#define public_6394623 _public_6394623
#define public_639462e _public_639462e
#define public_6394636 _public_6394636
#define public_6394641 _public_6394641

PROC_DECLARE(0x6394610, internal_6394610, public_6394610);
/* CHUNK of public_62b2d40 */
extern "C" NAKED register_t __cdecl internal_6394610()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x14]
        push eax
        call public_62fd570
        pop ecx
        ret 
        public_639461b : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        jmp public_629ff20
        public_6394623 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 8
        jmp public_6285b90
        public_639462e : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_62881d0
        public_6394636 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x18
        jmp public_62881d0
        public_6394641 : nop
        mov eax, offset public_63adba0
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6394610)
        ASM_EXPORT_ENTRY_FIRST(0x639461b, public_639461b)
        ASM_EXPORT_ENTRY(0x6394623, public_6394623)
        ASM_EXPORT_ENTRY(0x639462e, public_639462e)
        ASM_EXPORT_ENTRY(0x6394636, public_6394636)
        ASM_EXPORT_ENTRY_LAST(0x6394641, public_6394641)
    }
}

#undef public_639461b
#undef public_6394623
#undef public_639462e
#undef public_6394636
#undef public_6394641

#pragma init_seg(compiler)
extern "C" void const* const public_639461b = __AsmFindLabelExport(&internal_6394610, 0x639461b);
extern "C" void const* const public_6394623 = __AsmFindLabelExport(&internal_6394610, 0x6394623);
extern "C" void const* const public_639462e = __AsmFindLabelExport(&internal_6394610, 0x639462e);
extern "C" void const* const public_6394636 = __AsmFindLabelExport(&internal_6394610, 0x6394636);
extern "C" void const* const public_6394641 = __AsmFindLabelExport(&internal_6394610, 0x6394641);
