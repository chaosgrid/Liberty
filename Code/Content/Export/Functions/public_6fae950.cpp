#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f30690);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fae958 _public_6fae958
#define public_6fae963 _public_6fae963

PROC_DECLARE(0x6fae950, internal_6fae950, public_6fae950);
/* CHUNK of public_6f30720 */
extern "C" NAKED register_t __cdecl internal_6fae950()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x14]
        jmp public_6f30690
        public_6fae958 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x14
        jmp public_6eec8d0
        public_6fae963 : nop
        mov eax, offset public_6fc385c
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fae950)
        ASM_EXPORT_ENTRY_FIRST(0x6fae958, public_6fae958)
        ASM_EXPORT_ENTRY_LAST(0x6fae963, public_6fae963)
    }
}

#undef public_6fae958
#undef public_6fae963

#pragma init_seg(compiler)
extern "C" void const* const public_6fae958 = __AsmFindLabelExport(&internal_6fae950, 0x6fae958);
extern "C" void const* const public_6fae963 = __AsmFindLabelExport(&internal_6fae950, 0x6fae963);
