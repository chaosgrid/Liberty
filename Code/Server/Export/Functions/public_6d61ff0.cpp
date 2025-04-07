#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d19f00);
CLANG_FORWARD_PROC_SYMBOL(public_6d60018);

#define public_6d61ff9 _public_6d61ff9
#define public_6d62002 _public_6d62002
#define public_6d6200a _public_6d6200a
#define public_6d62013 _public_6d62013
#define public_6d6201b _public_6d6201b
#define public_6d62024 _public_6d62024
#define public_6d6202c _public_6d6202c

PROC_DECLARE(0x6d61ff0, internal_6d61ff0, public_6d61ff0);
/* CHUNK of public_6d1a800 */
extern "C" NAKED register_t __cdecl internal_6d61ff0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x2C]
        jmp dword ptr ds : [public_6d647f0]
        public_6d61ff9 : nop
        lea ecx, ss:[ebp-0x34]
        jmp dword ptr ds : [public_6d64800]
        public_6d62002 : nop
        lea ecx, ss:[ebp-0x40]
        jmp public_6d19f00
        public_6d6200a : nop
        lea ecx, ss:[ebp-0x20]
        jmp dword ptr ds : [public_6d647f8]
        public_6d62013 : nop
        lea ecx, ss:[ebp+8]
        jmp public_6d19f00
        public_6d6201b : nop
        lea ecx, ss:[ebp-0x20]
        jmp dword ptr ds : [public_6d647f8]
        public_6d62024 : nop
        lea ecx, ss:[ebp+8]
        jmp public_6d19f00
        public_6d6202c : nop
        mov eax, offset public_6d72d88
        jmp public_6d60018
        UNREACHABLE_TRAP(0x6d61ff0)
        ASM_EXPORT_ENTRY_FIRST(0x6d61ff9, public_6d61ff9)
        ASM_EXPORT_ENTRY(0x6d62002, public_6d62002)
        ASM_EXPORT_ENTRY(0x6d6200a, public_6d6200a)
        ASM_EXPORT_ENTRY(0x6d62013, public_6d62013)
        ASM_EXPORT_ENTRY(0x6d6201b, public_6d6201b)
        ASM_EXPORT_ENTRY(0x6d62024, public_6d62024)
        ASM_EXPORT_ENTRY_LAST(0x6d6202c, public_6d6202c)
    }
}

#undef public_6d61ff9
#undef public_6d62002
#undef public_6d6200a
#undef public_6d62013
#undef public_6d6201b
#undef public_6d62024
#undef public_6d6202c

#pragma init_seg(compiler)
extern "C" void const* const public_6d61ff9 = __AsmFindLabelExport(&internal_6d61ff0, 0x6d61ff9);
extern "C" void const* const public_6d62002 = __AsmFindLabelExport(&internal_6d61ff0, 0x6d62002);
extern "C" void const* const public_6d6200a = __AsmFindLabelExport(&internal_6d61ff0, 0x6d6200a);
extern "C" void const* const public_6d62013 = __AsmFindLabelExport(&internal_6d61ff0, 0x6d62013);
extern "C" void const* const public_6d6201b = __AsmFindLabelExport(&internal_6d61ff0, 0x6d6201b);
extern "C" void const* const public_6d62024 = __AsmFindLabelExport(&internal_6d61ff0, 0x6d62024);
extern "C" void const* const public_6d6202c = __AsmFindLabelExport(&internal_6d61ff0, 0x6d6202c);
