#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ebf720);
CLANG_FORWARD_PROC_SYMBOL(public_6ecfa90);
CLANG_FORWARD_PROC_SYMBOL(public_6f15350);
CLANG_FORWARD_PROC_SYMBOL(public_6f28e10);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fab0d1 _public_6fab0d1
#define public_6fab0dc _public_6fab0dc
#define public_6fab0e4 _public_6fab0e4
#define public_6fab0ef _public_6fab0ef
#define public_6fab0fa _public_6fab0fa

PROC_DECLARE(0x6fab0c0, internal_6fab0c0, public_6fab0c0);
/* CHUNK of public_6ed2a60 */
extern "C" NAKED register_t __cdecl internal_6fab0c0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp+4]
        push eax
        mov ecx, dword ptr ss : [ebp-0x14]
        push ecx
        call public_6ebf720
        add esp, 8
        ret 
        public_6fab0d1 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x3C
        jmp public_6f15350
        public_6fab0dc : nop
        mov ecx, dword ptr ss : [ebp+8]
        jmp public_6f15350
        public_6fab0e4 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x58
        jmp public_6ecfa90
        public_6fab0ef : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x68
        jmp public_6f28e10
        public_6fab0fa : nop
        mov eax, offset public_6fbf610
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fab0c0)
        ASM_EXPORT_ENTRY_FIRST(0x6fab0d1, public_6fab0d1)
        ASM_EXPORT_ENTRY(0x6fab0dc, public_6fab0dc)
        ASM_EXPORT_ENTRY(0x6fab0e4, public_6fab0e4)
        ASM_EXPORT_ENTRY(0x6fab0ef, public_6fab0ef)
        ASM_EXPORT_ENTRY_LAST(0x6fab0fa, public_6fab0fa)
    }
}

#undef public_6fab0d1
#undef public_6fab0dc
#undef public_6fab0e4
#undef public_6fab0ef
#undef public_6fab0fa

#pragma init_seg(compiler)
extern "C" void const* const public_6fab0d1 = __AsmFindLabelExport(&internal_6fab0c0, 0x6fab0d1);
extern "C" void const* const public_6fab0dc = __AsmFindLabelExport(&internal_6fab0c0, 0x6fab0dc);
extern "C" void const* const public_6fab0e4 = __AsmFindLabelExport(&internal_6fab0c0, 0x6fab0e4);
extern "C" void const* const public_6fab0ef = __AsmFindLabelExport(&internal_6fab0c0, 0x6fab0ef);
extern "C" void const* const public_6fab0fa = __AsmFindLabelExport(&internal_6fab0c0, 0x6fab0fa);
