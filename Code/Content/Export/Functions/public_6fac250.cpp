#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6ef4ab0);
CLANG_FORWARD_PROC_SYMBOL(public_6ef4bb0);
CLANG_FORWARD_PROC_SYMBOL(public_6f28e10);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fac25b _public_6fac25b
#define public_6fac269 _public_6fac269
#define public_6fac274 _public_6fac274
#define public_6fac27f _public_6fac27f
#define public_6fac28a _public_6fac28a
#define public_6fac295 _public_6fac295
#define public_6fac2a0 _public_6fac2a0

PROC_DECLARE(0x6fac250, internal_6fac250, public_6fac250);
/* CHUNK of public_6ef4780 */
extern "C" NAKED register_t __cdecl internal_6fac250()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x510]
        jmp public_6ef4bb0
        public_6fac25b : nop
        mov eax, dword ptr ss : [ebp-0x524]
        push eax
        call public_6fa8fe0
        pop ecx
        ret 
        public_6fac269 : nop
        lea ecx, ss:[ebp-0x510]
        jmp public_6ef4ab0
        public_6fac274 : nop
        lea ecx, ss:[ebp-0x490]
        jmp public_6eec8d0
        public_6fac27f : nop
        lea ecx, ss:[ebp-0x414]
        jmp public_6f28e10
        public_6fac28a : nop
        lea ecx, ss:[ebp-0x510]
        jmp public_6f28e10
        public_6fac295 : nop
        lea ecx, ss:[ebp-0x4C0]
        jmp public_6eec8d0
        public_6fac2a0 : nop
        mov eax, offset public_6fc0f00
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fac250)
        ASM_EXPORT_ENTRY_FIRST(0x6fac25b, public_6fac25b)
        ASM_EXPORT_ENTRY(0x6fac269, public_6fac269)
        ASM_EXPORT_ENTRY(0x6fac274, public_6fac274)
        ASM_EXPORT_ENTRY(0x6fac27f, public_6fac27f)
        ASM_EXPORT_ENTRY(0x6fac28a, public_6fac28a)
        ASM_EXPORT_ENTRY(0x6fac295, public_6fac295)
        ASM_EXPORT_ENTRY_LAST(0x6fac2a0, public_6fac2a0)
    }
}

#undef public_6fac25b
#undef public_6fac269
#undef public_6fac274
#undef public_6fac27f
#undef public_6fac28a
#undef public_6fac295
#undef public_6fac2a0

#pragma init_seg(compiler)
extern "C" void const* const public_6fac25b = __AsmFindLabelExport(&internal_6fac250, 0x6fac25b);
extern "C" void const* const public_6fac269 = __AsmFindLabelExport(&internal_6fac250, 0x6fac269);
extern "C" void const* const public_6fac274 = __AsmFindLabelExport(&internal_6fac250, 0x6fac274);
extern "C" void const* const public_6fac27f = __AsmFindLabelExport(&internal_6fac250, 0x6fac27f);
extern "C" void const* const public_6fac28a = __AsmFindLabelExport(&internal_6fac250, 0x6fac28a);
extern "C" void const* const public_6fac295 = __AsmFindLabelExport(&internal_6fac250, 0x6fac295);
extern "C" void const* const public_6fac2a0 = __AsmFindLabelExport(&internal_6fac250, 0x6fac2a0);
