#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_45eeb0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bcd29 _public_5bcd29
#define public_5bcd32 _public_5bcd32
#define public_5bcd3a _public_5bcd3a

PROC_DECLARE(0x5bcd20, internal_5bcd20, public_5bcd20);
/* CHUNK of public_4a8e80 */
extern "C" NAKED register_t __cdecl internal_5bcd20()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x18]
        jmp dword ptr ds : [public_5c62c4]
        public_5bcd29 : nop
        lea ecx, ss:[ebp-0x20]
        jmp dword ptr ds : [public_5c62b4]
        public_5bcd32 : nop
        lea ecx, ss:[ebp+4]
        jmp public_45eeb0
        public_5bcd3a : nop
        mov eax, offset public_5f6fdc
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bcd20)
        ASM_EXPORT_ENTRY_FIRST(0x5bcd29, public_5bcd29)
        ASM_EXPORT_ENTRY(0x5bcd32, public_5bcd32)
        ASM_EXPORT_ENTRY_LAST(0x5bcd3a, public_5bcd3a)
    }
}

#undef public_5bcd29
#undef public_5bcd32
#undef public_5bcd3a

#pragma init_seg(compiler)
extern "C" void const* const public_5bcd29 = __AsmFindLabelExport(&internal_5bcd20, 0x5bcd29);
extern "C" void const* const public_5bcd32 = __AsmFindLabelExport(&internal_5bcd20, 0x5bcd32);
extern "C" void const* const public_5bcd3a = __AsmFindLabelExport(&internal_5bcd20, 0x5bcd3a);
