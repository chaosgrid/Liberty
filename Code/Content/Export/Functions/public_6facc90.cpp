#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f04b10);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6facc9c _public_6facc9c
#define public_6facca7 _public_6facca7
#define public_6faccb0 _public_6faccb0
#define public_6faccb9 _public_6faccb9
#define public_6faccc2 _public_6faccc2
#define public_6faccca _public_6faccca

PROC_DECLARE(0x6facc90, internal_6facc90, public_6facc90);
/* CHUNK of public_6f047e0 */
extern "C" NAKED register_t __cdecl internal_6facc90()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0xBC]
        jmp dword ptr ds : [public_6fb3138]
        public_6facc9c : nop
        lea ecx, ss:[ebp-0xA8]
        jmp public_6eec8d0
        public_6facca7 : nop
        lea ecx, ss:[ebp-0x5C]
        jmp dword ptr ds : [public_6fb3034]
        public_6faccb0 : nop
        lea ecx, ss:[ebp-0x44]
        jmp dword ptr ds : [public_6fb3034]
        public_6faccb9 : nop
        lea ecx, ss:[ebp-0x2C]
        jmp dword ptr ds : [public_6fb3034]
        public_6faccc2 : nop
        lea ecx, ss:[ebp-0x6C]
        jmp public_6f04b10
        public_6faccca : nop
        mov eax, offset public_6fc1990
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6facc90)
        ASM_EXPORT_ENTRY_FIRST(0x6facc9c, public_6facc9c)
        ASM_EXPORT_ENTRY(0x6facca7, public_6facca7)
        ASM_EXPORT_ENTRY(0x6faccb0, public_6faccb0)
        ASM_EXPORT_ENTRY(0x6faccb9, public_6faccb9)
        ASM_EXPORT_ENTRY(0x6faccc2, public_6faccc2)
        ASM_EXPORT_ENTRY_LAST(0x6faccca, public_6faccca)
    }
}

#undef public_6facc9c
#undef public_6facca7
#undef public_6faccb0
#undef public_6faccb9
#undef public_6faccc2
#undef public_6faccca

#pragma init_seg(compiler)
extern "C" void const* const public_6facc9c = __AsmFindLabelExport(&internal_6facc90, 0x6facc9c);
extern "C" void const* const public_6facca7 = __AsmFindLabelExport(&internal_6facc90, 0x6facca7);
extern "C" void const* const public_6faccb0 = __AsmFindLabelExport(&internal_6facc90, 0x6faccb0);
extern "C" void const* const public_6faccb9 = __AsmFindLabelExport(&internal_6facc90, 0x6faccb9);
extern "C" void const* const public_6faccc2 = __AsmFindLabelExport(&internal_6facc90, 0x6faccc2);
extern "C" void const* const public_6faccca = __AsmFindLabelExport(&internal_6facc90, 0x6faccca);
