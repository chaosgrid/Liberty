#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_526a20);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5b845e _public_5b845e
#define public_5b8469 _public_5b8469
#define public_5b8474 _public_5b8474
#define public_5b847f _public_5b847f
#define public_5b848a _public_5b848a

PROC_DECLARE(0x5b8450, internal_5b8450, public_5b8450);
/* CHUNK of public_405b10 */
extern "C" NAKED register_t __cdecl internal_5b8450()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0xA0]
        push eax
        call public_5b7e1d
        pop ecx
        ret 
        public_5b845e : nop
        lea ecx, ss:[ebp-0xA8]
        jmp public_526a20
        public_5b8469 : nop
        lea ecx, ss:[ebp-0xAC]
        jmp public_526a20
        public_5b8474 : nop
        lea ecx, ss:[ebp-0xA4]
        jmp public_526a20
        public_5b847f : nop
        lea ecx, ss:[ebp-0xAC]
        jmp public_526a20
        public_5b848a : nop
        mov eax, offset public_5f1f58
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5b8450)
        ASM_EXPORT_ENTRY_FIRST(0x5b845e, public_5b845e)
        ASM_EXPORT_ENTRY(0x5b8469, public_5b8469)
        ASM_EXPORT_ENTRY(0x5b8474, public_5b8474)
        ASM_EXPORT_ENTRY(0x5b847f, public_5b847f)
        ASM_EXPORT_ENTRY_LAST(0x5b848a, public_5b848a)
    }
}

#undef public_5b845e
#undef public_5b8469
#undef public_5b8474
#undef public_5b847f
#undef public_5b848a

#pragma init_seg(compiler)
extern "C" void const* const public_5b845e = __AsmFindLabelExport(&internal_5b8450, 0x5b845e);
extern "C" void const* const public_5b8469 = __AsmFindLabelExport(&internal_5b8450, 0x5b8469);
extern "C" void const* const public_5b8474 = __AsmFindLabelExport(&internal_5b8450, 0x5b8474);
extern "C" void const* const public_5b847f = __AsmFindLabelExport(&internal_5b8450, 0x5b847f);
extern "C" void const* const public_5b848a = __AsmFindLabelExport(&internal_5b8450, 0x5b848a);
