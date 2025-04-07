#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ed61d0);
CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fab33b _public_6fab33b
#define public_6fab346 _public_6fab346
#define public_6fab351 _public_6fab351

PROC_DECLARE(0x6fab330, internal_6fab330, public_6fab330);
/* CHUNK of public_6edb260 */
extern "C" NAKED register_t __cdecl internal_6fab330()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x278]
        jmp public_6ed61d0
        public_6fab33b : nop
        lea ecx, ss:[ebp-0x290]
        jmp public_6eec8d0
        public_6fab346 : nop
        lea ecx, ss:[ebp-0x290]
        jmp public_6eec8d0
        public_6fab351 : nop
        mov eax, offset public_6fbfaa0
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fab330)
        ASM_EXPORT_ENTRY_FIRST(0x6fab33b, public_6fab33b)
        ASM_EXPORT_ENTRY(0x6fab346, public_6fab346)
        ASM_EXPORT_ENTRY_LAST(0x6fab351, public_6fab351)
    }
}

#undef public_6fab33b
#undef public_6fab346
#undef public_6fab351

#pragma init_seg(compiler)
extern "C" void const* const public_6fab33b = __AsmFindLabelExport(&internal_6fab330, 0x6fab33b);
extern "C" void const* const public_6fab346 = __AsmFindLabelExport(&internal_6fab330, 0x6fab346);
extern "C" void const* const public_6fab351 = __AsmFindLabelExport(&internal_6fab330, 0x6fab351);
