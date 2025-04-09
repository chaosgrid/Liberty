#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_59fa50);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bafd8 _public_5bafd8
#define public_5bafe7 _public_5bafe7
#define public_5baff6 _public_5baff6
#define public_5bb005 _public_5bb005
#define public_5bb014 _public_5bb014

PROC_DECLARE(0x5bafd0, internal_5bafd0, public_5bafd0);
/* CHUNK of public_464dc0 */
extern "C" NAKED register_t __cdecl internal_5bafd0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_59fa50
        public_5bafd8 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x334
        jmp dword ptr ds : [public_5c62c4]
        public_5bafe7 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x340
        jmp dword ptr ds : [public_5c62c4]
        public_5baff6 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x34C
        jmp dword ptr ds : [public_5c62c4]
        public_5bb005 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x358
        jmp dword ptr ds : [public_5c62c4]
        public_5bb014 : nop
        mov eax, offset public_5f51d8
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bafd0)
        ASM_EXPORT_ENTRY_FIRST(0x5bafd8, public_5bafd8)
        ASM_EXPORT_ENTRY(0x5bafe7, public_5bafe7)
        ASM_EXPORT_ENTRY(0x5baff6, public_5baff6)
        ASM_EXPORT_ENTRY(0x5bb005, public_5bb005)
        ASM_EXPORT_ENTRY_LAST(0x5bb014, public_5bb014)
    }
}

#undef public_5bafd8
#undef public_5bafe7
#undef public_5baff6
#undef public_5bb005
#undef public_5bb014

#pragma init_seg(compiler)
extern "C" void const* const public_5bafd8 = __AsmFindLabelExport(&internal_5bafd0, 0x5bafd8);
extern "C" void const* const public_5bafe7 = __AsmFindLabelExport(&internal_5bafd0, 0x5bafe7);
extern "C" void const* const public_5baff6 = __AsmFindLabelExport(&internal_5bafd0, 0x5baff6);
extern "C" void const* const public_5bb005 = __AsmFindLabelExport(&internal_5bafd0, 0x5bb005);
extern "C" void const* const public_5bb014 = __AsmFindLabelExport(&internal_5bafd0, 0x5bb014);
