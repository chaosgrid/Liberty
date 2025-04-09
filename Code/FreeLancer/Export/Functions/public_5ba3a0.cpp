#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_45eeb0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5ba3a9 _public_5ba3a9
#define public_5ba3b1 _public_5ba3b1
#define public_5ba3ba _public_5ba3ba
#define public_5ba3c2 _public_5ba3c2
#define public_5ba3cb _public_5ba3cb
#define public_5ba3d3 _public_5ba3d3
#define public_5ba3dc _public_5ba3dc
#define public_5ba3e4 _public_5ba3e4

PROC_DECLARE(0x5ba3a0, internal_5ba3a0, public_5ba3a0);
/* CHUNK of public_45eaf0 */
extern "C" NAKED register_t __cdecl internal_5ba3a0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x30]
        jmp dword ptr ds : [public_5c62b4]
        public_5ba3a9 : nop
        lea ecx, ss:[ebp-0x44]
        jmp public_45eeb0
        public_5ba3b1 : nop
        lea ecx, ss:[ebp-0x20]
        jmp dword ptr ds : [public_5c62ac]
        public_5ba3ba : nop
        lea ecx, ss:[ebp-0x44]
        jmp public_45eeb0
        public_5ba3c2 : nop
        lea ecx, ss:[ebp-0x20]
        jmp dword ptr ds : [public_5c62ac]
        public_5ba3cb : nop
        lea ecx, ss:[ebp-0x44]
        jmp public_45eeb0
        public_5ba3d3 : nop
        lea ecx, ss:[ebp-0x28]
        jmp dword ptr ds : [public_5c62b4]
        public_5ba3dc : nop
        lea ecx, ss:[ebp-0x40]
        jmp public_45eeb0
        public_5ba3e4 : nop
        mov eax, offset public_5f47d4
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5ba3a0)
        ASM_EXPORT_ENTRY_FIRST(0x5ba3a9, public_5ba3a9)
        ASM_EXPORT_ENTRY(0x5ba3b1, public_5ba3b1)
        ASM_EXPORT_ENTRY(0x5ba3ba, public_5ba3ba)
        ASM_EXPORT_ENTRY(0x5ba3c2, public_5ba3c2)
        ASM_EXPORT_ENTRY(0x5ba3cb, public_5ba3cb)
        ASM_EXPORT_ENTRY(0x5ba3d3, public_5ba3d3)
        ASM_EXPORT_ENTRY(0x5ba3dc, public_5ba3dc)
        ASM_EXPORT_ENTRY_LAST(0x5ba3e4, public_5ba3e4)
    }
}

#undef public_5ba3a9
#undef public_5ba3b1
#undef public_5ba3ba
#undef public_5ba3c2
#undef public_5ba3cb
#undef public_5ba3d3
#undef public_5ba3dc
#undef public_5ba3e4

#pragma init_seg(compiler)
extern "C" void const* const public_5ba3a9 = __AsmFindLabelExport(&internal_5ba3a0, 0x5ba3a9);
extern "C" void const* const public_5ba3b1 = __AsmFindLabelExport(&internal_5ba3a0, 0x5ba3b1);
extern "C" void const* const public_5ba3ba = __AsmFindLabelExport(&internal_5ba3a0, 0x5ba3ba);
extern "C" void const* const public_5ba3c2 = __AsmFindLabelExport(&internal_5ba3a0, 0x5ba3c2);
extern "C" void const* const public_5ba3cb = __AsmFindLabelExport(&internal_5ba3a0, 0x5ba3cb);
extern "C" void const* const public_5ba3d3 = __AsmFindLabelExport(&internal_5ba3a0, 0x5ba3d3);
extern "C" void const* const public_5ba3dc = __AsmFindLabelExport(&internal_5ba3a0, 0x5ba3dc);
extern "C" void const* const public_5ba3e4 = __AsmFindLabelExport(&internal_5ba3a0, 0x5ba3e4);
