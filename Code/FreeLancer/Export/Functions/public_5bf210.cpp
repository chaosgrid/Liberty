#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c8630);
CLANG_FORWARD_PROC_SYMBOL(public_59fa50);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bf218 _public_5bf218
#define public_5bf230 _public_5bf230
#define public_5bf237 _public_5bf237
#define public_5bf23f _public_5bf23f

PROC_DECLARE(0x5bf210, internal_5bf210, public_5bf210);
/* CHUNK of public_4f3cd0 */
extern "C" NAKED register_t __cdecl internal_5bf210()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_4c8630
        public_5bf218 : nop
        cmp dword ptr ss : [ebp-0x10], 0
        je public_5bf230
        mov eax, dword ptr ss : [ebp-0x10]
        add eax, 0x38
        mov dword ptr ss : [ebp-0x14], eax
        jmp public_5bf237
        public_5bf230 : nop
        mov dword ptr ss : [ebp-0x14], 0
        public_5bf237 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        jmp public_59fa50
        public_5bf23f : nop
        mov eax, offset public_5f9164
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bf210)
        ASM_EXPORT_ENTRY_FIRST(0x5bf218, public_5bf218)
        ASM_EXPORT_ENTRY(0x5bf230, public_5bf230)
        ASM_EXPORT_ENTRY(0x5bf237, public_5bf237)
        ASM_EXPORT_ENTRY_LAST(0x5bf23f, public_5bf23f)
    }
}

#undef public_5bf218
#undef public_5bf230
#undef public_5bf237
#undef public_5bf23f

#pragma init_seg(compiler)
extern "C" void const* const public_5bf218 = __AsmFindLabelExport(&internal_5bf210, 0x5bf218);
extern "C" void const* const public_5bf230 = __AsmFindLabelExport(&internal_5bf210, 0x5bf230);
extern "C" void const* const public_5bf237 = __AsmFindLabelExport(&internal_5bf210, 0x5bf237);
extern "C" void const* const public_5bf23f = __AsmFindLabelExport(&internal_5bf210, 0x5bf23f);
