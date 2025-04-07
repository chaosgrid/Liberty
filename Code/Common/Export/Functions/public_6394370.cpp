#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6285b90);
CLANG_FORWARD_PROC_SYMBOL(public_62881d0);
CLANG_FORWARD_PROC_SYMBOL(public_629ff20);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6394378 _public_6394378
#define public_6394383 _public_6394383
#define public_639438b _public_639438b

PROC_DECLARE(0x6394370, internal_6394370, public_6394370);
/* CHUNK of public_62afda0 */
extern "C" NAKED register_t __cdecl internal_6394370()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x14]
        jmp public_629ff20
        public_6394378 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 8
        jmp public_6285b90
        public_6394383 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_62881d0
        public_639438b : nop
        mov eax, offset public_63ad948
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6394370)
        ASM_EXPORT_ENTRY_FIRST(0x6394378, public_6394378)
        ASM_EXPORT_ENTRY(0x6394383, public_6394383)
        ASM_EXPORT_ENTRY_LAST(0x639438b, public_639438b)
    }
}

#undef public_6394378
#undef public_6394383
#undef public_639438b

#pragma init_seg(compiler)
extern "C" void const* const public_6394378 = __AsmFindLabelExport(&internal_6394370, 0x6394378);
extern "C" void const* const public_6394383 = __AsmFindLabelExport(&internal_6394370, 0x6394383);
extern "C" void const* const public_639438b = __AsmFindLabelExport(&internal_6394370, 0x639438b);
