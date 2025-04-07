#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6ef65a0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fac3ec _public_6fac3ec
#define public_6fac3f7 _public_6fac3f7
#define public_6fac402 _public_6fac402
#define public_6fac40d _public_6fac40d

PROC_DECLARE(0x6fac3e0, internal_6fac3e0, public_6fac3e0);
/* CHUNK of public_6ef5b50 */
extern "C" NAKED register_t __cdecl internal_6fac3e0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x14
        jmp dword ptr ds : [public_6fb3138]
        public_6fac3ec : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x28
        jmp public_6ef65a0
        public_6fac3f7 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x44
        jmp public_6eec8d0
        public_6fac402 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x60
        jmp public_6eec8d0
        public_6fac40d : nop
        mov eax, offset public_6fc107c
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fac3e0)
        ASM_EXPORT_ENTRY_FIRST(0x6fac3ec, public_6fac3ec)
        ASM_EXPORT_ENTRY(0x6fac3f7, public_6fac3f7)
        ASM_EXPORT_ENTRY(0x6fac402, public_6fac402)
        ASM_EXPORT_ENTRY_LAST(0x6fac40d, public_6fac40d)
    }
}

#undef public_6fac3ec
#undef public_6fac3f7
#undef public_6fac402
#undef public_6fac40d

#pragma init_seg(compiler)
extern "C" void const* const public_6fac3ec = __AsmFindLabelExport(&internal_6fac3e0, 0x6fac3ec);
extern "C" void const* const public_6fac3f7 = __AsmFindLabelExport(&internal_6fac3e0, 0x6fac3f7);
extern "C" void const* const public_6fac402 = __AsmFindLabelExport(&internal_6fac3e0, 0x6fac402);
extern "C" void const* const public_6fac40d = __AsmFindLabelExport(&internal_6fac3e0, 0x6fac40d);
