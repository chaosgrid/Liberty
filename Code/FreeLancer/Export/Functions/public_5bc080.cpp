#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c6200);
CLANG_FORWARD_PROC_SYMBOL(public_59fa50);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bc08b _public_5bc08b
#define public_5bc093 _public_5bc093
#define public_5bc0a1 _public_5bc0a1
#define public_5bc0b0 _public_5bc0b0

PROC_DECLARE(0x5bc080, internal_5bc080, public_5bc080);
/* CHUNK of public_4856e0 */
extern "C" NAKED register_t __cdecl internal_5bc080()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_5b7e1d
        pop ecx
        ret 
        public_5bc08b : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_59fa50
        public_5bc093 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x330
        jmp public_4c6200
        public_5bc0a1 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x3A8
        jmp dword ptr ds : [public_5c60fc]
        public_5bc0b0 : nop
        mov eax, offset public_5f64d0
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bc080)
        ASM_EXPORT_ENTRY_FIRST(0x5bc08b, public_5bc08b)
        ASM_EXPORT_ENTRY(0x5bc093, public_5bc093)
        ASM_EXPORT_ENTRY(0x5bc0a1, public_5bc0a1)
        ASM_EXPORT_ENTRY_LAST(0x5bc0b0, public_5bc0b0)
    }
}

#undef public_5bc08b
#undef public_5bc093
#undef public_5bc0a1
#undef public_5bc0b0

#pragma init_seg(compiler)
extern "C" void const* const public_5bc08b = __AsmFindLabelExport(&internal_5bc080, 0x5bc08b);
extern "C" void const* const public_5bc093 = __AsmFindLabelExport(&internal_5bc080, 0x5bc093);
extern "C" void const* const public_5bc0a1 = __AsmFindLabelExport(&internal_5bc080, 0x5bc0a1);
extern "C" void const* const public_5bc0b0 = __AsmFindLabelExport(&internal_5bc080, 0x5bc0b0);
