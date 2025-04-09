#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_444e50);
CLANG_FORWARD_PROC_SYMBOL(public_4b4fd0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c4d1b _public_5c4d1b
#define public_5c4d23 _public_5c4d23
#define public_5c4d2e _public_5c4d2e

PROC_DECLARE(0x5c4d10, internal_5c4d10, public_5c4d10);
/* CHUNK of public_59c3d0 */
extern "C" NAKED register_t __cdecl internal_5c4d10()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_5b7e1d
        pop ecx
        ret 
        public_5c4d1b : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_4b4fd0
        public_5c4d23 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x7C
        jmp public_444e50
        public_5c4d2e : nop
        mov eax, offset public_5fea34
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c4d10)
        ASM_EXPORT_ENTRY_FIRST(0x5c4d1b, public_5c4d1b)
        ASM_EXPORT_ENTRY(0x5c4d23, public_5c4d23)
        ASM_EXPORT_ENTRY_LAST(0x5c4d2e, public_5c4d2e)
    }
}

#undef public_5c4d1b
#undef public_5c4d23
#undef public_5c4d2e

#pragma init_seg(compiler)
extern "C" void const* const public_5c4d1b = __AsmFindLabelExport(&internal_5c4d10, 0x5c4d1b);
extern "C" void const* const public_5c4d23 = __AsmFindLabelExport(&internal_5c4d10, 0x5c4d23);
extern "C" void const* const public_5c4d2e = __AsmFindLabelExport(&internal_5c4d10, 0x5c4d2e);
