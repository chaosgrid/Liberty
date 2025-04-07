#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f235d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f235f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f23610);
CLANG_FORWARD_PROC_SYMBOL(public_6f23650);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e96);

#define public_6f583ab _public_6f583ab
#define public_6f583b6 _public_6f583b6
#define public_6f583c1 _public_6f583c1
#define public_6f583cc _public_6f583cc

PROC_DECLARE(0x6f583a0, internal_6f583a0, public_6f583a0);
/* CHUNK of public_6f21c00 */
extern "C" NAKED register_t __cdecl internal_6f583a0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x14
        jmp public_6f235d0
        public_6f583ab : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x24
        jmp public_6f235f0
        public_6f583b6 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x34
        jmp public_6f23610
        public_6f583c1 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x44
        jmp public_6f23650
        public_6f583cc : nop
        mov eax, offset public_6f5b550
        jmp public_6f57e96
        UNREACHABLE_TRAP(0x6f583a0)
        ASM_EXPORT_ENTRY_FIRST(0x6f583ab, public_6f583ab)
        ASM_EXPORT_ENTRY(0x6f583b6, public_6f583b6)
        ASM_EXPORT_ENTRY(0x6f583c1, public_6f583c1)
        ASM_EXPORT_ENTRY_LAST(0x6f583cc, public_6f583cc)
    }
}

#undef public_6f583ab
#undef public_6f583b6
#undef public_6f583c1
#undef public_6f583cc

#pragma init_seg(compiler)
extern "C" void const* const public_6f583ab = __AsmFindLabelExport(&internal_6f583a0, 0x6f583ab);
extern "C" void const* const public_6f583b6 = __AsmFindLabelExport(&internal_6f583a0, 0x6f583b6);
extern "C" void const* const public_6f583c1 = __AsmFindLabelExport(&internal_6f583a0, 0x6f583c1);
extern "C" void const* const public_6f583cc = __AsmFindLabelExport(&internal_6f583a0, 0x6f583cc);
