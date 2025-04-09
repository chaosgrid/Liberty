#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40edf0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bd12c _public_5bd12c
#define public_5bd137 _public_5bd137
#define public_5bd143 _public_5bd143
#define public_5bd14f _public_5bd14f

PROC_DECLARE(0x5bd120, internal_5bd120, public_5bd120);
/* CHUNK of public_4b59b0 */
extern "C" NAKED register_t __cdecl internal_5bd120()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x1574]
        jmp dword ptr ds : [public_5c6048]
        public_5bd12c : nop
        lea ecx, ss:[ebp-0x1574]
        jmp public_40edf0
        public_5bd137 : nop
        mov ecx, dword ptr ss : [ebp-0x1688]
        jmp dword ptr ds : [public_5c7090]
        public_5bd143 : nop
        lea ecx, ss:[ebp-0x1574]
        jmp dword ptr ds : [public_5c7090]
        public_5bd14f : nop
        mov eax, offset public_5f73d0
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bd120)
        ASM_EXPORT_ENTRY_FIRST(0x5bd12c, public_5bd12c)
        ASM_EXPORT_ENTRY(0x5bd137, public_5bd137)
        ASM_EXPORT_ENTRY(0x5bd143, public_5bd143)
        ASM_EXPORT_ENTRY_LAST(0x5bd14f, public_5bd14f)
    }
}

#undef public_5bd12c
#undef public_5bd137
#undef public_5bd143
#undef public_5bd14f

#pragma init_seg(compiler)
extern "C" void const* const public_5bd12c = __AsmFindLabelExport(&internal_5bd120, 0x5bd12c);
extern "C" void const* const public_5bd137 = __AsmFindLabelExport(&internal_5bd120, 0x5bd137);
extern "C" void const* const public_5bd143 = __AsmFindLabelExport(&internal_5bd120, 0x5bd143);
extern "C" void const* const public_5bd14f = __AsmFindLabelExport(&internal_5bd120, 0x5bd14f);
