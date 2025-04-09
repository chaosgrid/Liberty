#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_45eeb0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bd679 _public_5bd679
#define public_5bd682 _public_5bd682
#define public_5bd68a _public_5bd68a
#define public_5bd693 _public_5bd693
#define public_5bd69c _public_5bd69c
#define public_5bd6a4 _public_5bd6a4

PROC_DECLARE(0x5bd670, internal_5bd670, public_5bd670);
/* CHUNK of public_4c2800 */
extern "C" NAKED register_t __cdecl internal_5bd670()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x24]
        jmp dword ptr ds : [public_5c62c4]
        public_5bd679 : nop
        lea ecx, ss:[ebp-0x2C]
        jmp dword ptr ds : [public_5c62b4]
        public_5bd682 : nop
        lea ecx, ss:[ebp+8]
        jmp public_45eeb0
        public_5bd68a : nop
        lea ecx, ss:[ebp-0x18]
        jmp dword ptr ds : [public_5c62c4]
        public_5bd693 : nop
        lea ecx, ss:[ebp-0x2C]
        jmp dword ptr ds : [public_5c62b4]
        public_5bd69c : nop
        lea ecx, ss:[ebp+8]
        jmp public_45eeb0
        public_5bd6a4 : nop
        mov eax, offset public_5f7a20
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bd670)
        ASM_EXPORT_ENTRY_FIRST(0x5bd679, public_5bd679)
        ASM_EXPORT_ENTRY(0x5bd682, public_5bd682)
        ASM_EXPORT_ENTRY(0x5bd68a, public_5bd68a)
        ASM_EXPORT_ENTRY(0x5bd693, public_5bd693)
        ASM_EXPORT_ENTRY(0x5bd69c, public_5bd69c)
        ASM_EXPORT_ENTRY_LAST(0x5bd6a4, public_5bd6a4)
    }
}

#undef public_5bd679
#undef public_5bd682
#undef public_5bd68a
#undef public_5bd693
#undef public_5bd69c
#undef public_5bd6a4

#pragma init_seg(compiler)
extern "C" void const* const public_5bd679 = __AsmFindLabelExport(&internal_5bd670, 0x5bd679);
extern "C" void const* const public_5bd682 = __AsmFindLabelExport(&internal_5bd670, 0x5bd682);
extern "C" void const* const public_5bd68a = __AsmFindLabelExport(&internal_5bd670, 0x5bd68a);
extern "C" void const* const public_5bd693 = __AsmFindLabelExport(&internal_5bd670, 0x5bd693);
extern "C" void const* const public_5bd69c = __AsmFindLabelExport(&internal_5bd670, 0x5bd69c);
extern "C" void const* const public_5bd6a4 = __AsmFindLabelExport(&internal_5bd670, 0x5bd6a4);
