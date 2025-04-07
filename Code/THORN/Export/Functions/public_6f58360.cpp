#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f235d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f235f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f23610);
CLANG_FORWARD_PROC_SYMBOL(public_6f23650);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e96);

#define public_6f5836b _public_6f5836b
#define public_6f58376 _public_6f58376
#define public_6f58381 _public_6f58381
#define public_6f5838c _public_6f5838c

PROC_DECLARE(0x6f58360, internal_6f58360, public_6f58360);
/* CHUNK of public_6f21b60 */
extern "C" NAKED register_t __cdecl internal_6f58360()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x14
        jmp public_6f235d0
        public_6f5836b : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x24
        jmp public_6f235f0
        public_6f58376 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x34
        jmp public_6f23610
        public_6f58381 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x44
        jmp public_6f23650
        public_6f5838c : nop
        mov eax, offset public_6f5b514
        jmp public_6f57e96
        UNREACHABLE_TRAP(0x6f58360)
        ASM_EXPORT_ENTRY_FIRST(0x6f5836b, public_6f5836b)
        ASM_EXPORT_ENTRY(0x6f58376, public_6f58376)
        ASM_EXPORT_ENTRY(0x6f58381, public_6f58381)
        ASM_EXPORT_ENTRY_LAST(0x6f5838c, public_6f5838c)
    }
}

#undef public_6f5836b
#undef public_6f58376
#undef public_6f58381
#undef public_6f5838c

#pragma init_seg(compiler)
extern "C" void const* const public_6f5836b = __AsmFindLabelExport(&internal_6f58360, 0x6f5836b);
extern "C" void const* const public_6f58376 = __AsmFindLabelExport(&internal_6f58360, 0x6f58376);
extern "C" void const* const public_6f58381 = __AsmFindLabelExport(&internal_6f58360, 0x6f58381);
extern "C" void const* const public_6f5838c = __AsmFindLabelExport(&internal_6f58360, 0x6f5838c);
