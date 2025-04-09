#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_48e5f0);
CLANG_FORWARD_PROC_SYMBOL(public_4ceb50);
CLANG_FORWARD_PROC_SYMBOL(public_517340);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c1178 _public_5c1178
#define public_5c1180 _public_5c1180
#define public_5c1188 _public_5c1188

PROC_DECLARE(0x5c1170, internal_5c1170, public_5c1170);
/* CHUNK of public_549180 */
extern "C" NAKED register_t __cdecl internal_5c1170()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_517340
        public_5c1178 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_4ceb50
        public_5c1180 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_48e5f0
        public_5c1188 : nop
        mov eax, offset public_5fb438
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c1170)
        ASM_EXPORT_ENTRY_FIRST(0x5c1178, public_5c1178)
        ASM_EXPORT_ENTRY(0x5c1180, public_5c1180)
        ASM_EXPORT_ENTRY_LAST(0x5c1188, public_5c1188)
    }
}

#undef public_5c1178
#undef public_5c1180
#undef public_5c1188

#pragma init_seg(compiler)
extern "C" void const* const public_5c1178 = __AsmFindLabelExport(&internal_5c1170, 0x5c1178);
extern "C" void const* const public_5c1180 = __AsmFindLabelExport(&internal_5c1170, 0x5c1180);
extern "C" void const* const public_5c1188 = __AsmFindLabelExport(&internal_5c1170, 0x5c1188);
