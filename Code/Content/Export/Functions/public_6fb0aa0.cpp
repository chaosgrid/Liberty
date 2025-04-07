#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f85550);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fb0aac _public_6fb0aac
#define public_6fb0ab4 _public_6fb0ab4
#define public_6fb0abf _public_6fb0abf

PROC_DECLARE(0x6fb0aa0, internal_6fb0aa0, public_6fb0aa0);
/* CHUNK of public_6f858c0 */
extern "C" NAKED register_t __cdecl internal_6fb0aa0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 4
        jmp dword ptr ds : [public_6fb3034]
        public_6fb0aac : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_6f85550
        public_6fb0ab4 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x5C
        jmp public_6eec8d0
        public_6fb0abf : nop
        mov eax, offset public_6fc5e00
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fb0aa0)
        ASM_EXPORT_ENTRY_FIRST(0x6fb0aac, public_6fb0aac)
        ASM_EXPORT_ENTRY(0x6fb0ab4, public_6fb0ab4)
        ASM_EXPORT_ENTRY_LAST(0x6fb0abf, public_6fb0abf)
    }
}

#undef public_6fb0aac
#undef public_6fb0ab4
#undef public_6fb0abf

#pragma init_seg(compiler)
extern "C" void const* const public_6fb0aac = __AsmFindLabelExport(&internal_6fb0aa0, 0x6fb0aac);
extern "C" void const* const public_6fb0ab4 = __AsmFindLabelExport(&internal_6fb0aa0, 0x6fb0ab4);
extern "C" void const* const public_6fb0abf = __AsmFindLabelExport(&internal_6fb0aa0, 0x6fb0abf);
