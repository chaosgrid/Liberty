#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62a68e0);
CLANG_FORWARD_PROC_SYMBOL(public_62bd310);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_639495b _public_639495b
#define public_6394966 _public_6394966

PROC_DECLARE(0x6394950, internal_6394950, public_6394950);
/* CHUNK of public_62bd960 */
extern "C" NAKED register_t __cdecl internal_6394950()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x30]
        add ecx, 0x10
        jmp public_62bd310
        public_639495b : nop
        mov ecx, dword ptr ss : [ebp-0x30]
        add ecx, 0x28
        jmp public_62a68e0
        public_6394966 : nop
        mov eax, offset public_63adf88
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6394950)
        ASM_EXPORT_ENTRY_FIRST(0x639495b, public_639495b)
        ASM_EXPORT_ENTRY_LAST(0x6394966, public_6394966)
    }
}

#undef public_639495b
#undef public_6394966

#pragma init_seg(compiler)
extern "C" void const* const public_639495b = __AsmFindLabelExport(&internal_6394950, 0x639495b);
extern "C" void const* const public_6394966 = __AsmFindLabelExport(&internal_6394950, 0x6394966);
