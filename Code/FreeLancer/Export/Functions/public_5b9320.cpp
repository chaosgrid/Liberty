#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_43c0f0);
CLANG_FORWARD_PROC_SYMBOL(public_43c330);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5b932e _public_5b932e
#define public_5b9339 _public_5b9339
#define public_5b9347 _public_5b9347

PROC_DECLARE(0x5b9320, internal_5b9320, public_5b9320);
/* CHUNK of public_4397a0 */
extern "C" NAKED register_t __cdecl internal_5b9320()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x13C]
        push eax
        call public_5b7e1d
        pop ecx
        ret 
        public_5b932e : nop
        mov ecx, dword ptr ss : [ebp-0x13C]
        jmp public_43c0f0
        public_5b9339 : nop
        mov ecx, dword ptr ss : [ebp-0x13C]
        add ecx, 0x18
        jmp public_43c330
        public_5b9347 : nop
        mov eax, offset public_5f32c4
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5b9320)
        ASM_EXPORT_ENTRY_FIRST(0x5b932e, public_5b932e)
        ASM_EXPORT_ENTRY(0x5b9339, public_5b9339)
        ASM_EXPORT_ENTRY_LAST(0x5b9347, public_5b9347)
    }
}

#undef public_5b932e
#undef public_5b9339
#undef public_5b9347

#pragma init_seg(compiler)
extern "C" void const* const public_5b932e = __AsmFindLabelExport(&internal_5b9320, 0x5b932e);
extern "C" void const* const public_5b9339 = __AsmFindLabelExport(&internal_5b9320, 0x5b9339);
extern "C" void const* const public_5b9347 = __AsmFindLabelExport(&internal_5b9320, 0x5b9347);
