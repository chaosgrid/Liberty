#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_627e5e0);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6394218 _public_6394218
#define public_6394222 _public_6394222

PROC_DECLARE(0x6394210, internal_6394210, public_6394210);
/* CHUNK of public_62ae080 */
extern "C" NAKED register_t __cdecl internal_6394210()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-1]
        jmp public_627e5e0
        public_6394218 : nop
        mov ecx, offset public_63fc374
        jmp public_627e5e0
        public_6394222 : nop
        mov eax, offset public_63ad784
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6394210)
        ASM_EXPORT_ENTRY_FIRST(0x6394218, public_6394218)
        ASM_EXPORT_ENTRY_LAST(0x6394222, public_6394222)
    }
}

#undef public_6394218
#undef public_6394222

#pragma init_seg(compiler)
extern "C" void const* const public_6394218 = __AsmFindLabelExport(&internal_6394210, 0x6394218);
extern "C" void const* const public_6394222 = __AsmFindLabelExport(&internal_6394210, 0x6394222);
