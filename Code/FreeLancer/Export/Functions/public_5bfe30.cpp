#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40edf0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bfe3c _public_5bfe3c
#define public_5bfe47 _public_5bfe47
#define public_5bfe53 _public_5bfe53
#define public_5bfe5f _public_5bfe5f

PROC_DECLARE(0x5bfe30, internal_5bfe30, public_5bfe30);
/* CHUNK of public_5173c0 */
extern "C" NAKED register_t __cdecl internal_5bfe30()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x1574]
        jmp dword ptr ds : [public_5c6048]
        public_5bfe3c : nop
        lea ecx, ss:[ebp-0x1574]
        jmp public_40edf0
        public_5bfe47 : nop
        mov ecx, dword ptr ss : [ebp-0x1798]
        jmp dword ptr ds : [public_5c7090]
        public_5bfe53 : nop
        lea ecx, ss:[ebp-0x1574]
        jmp dword ptr ds : [public_5c7090]
        public_5bfe5f : nop
        mov eax, offset public_5f9de4
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bfe30)
        ASM_EXPORT_ENTRY_FIRST(0x5bfe3c, public_5bfe3c)
        ASM_EXPORT_ENTRY(0x5bfe47, public_5bfe47)
        ASM_EXPORT_ENTRY(0x5bfe53, public_5bfe53)
        ASM_EXPORT_ENTRY_LAST(0x5bfe5f, public_5bfe5f)
    }
}

#undef public_5bfe3c
#undef public_5bfe47
#undef public_5bfe53
#undef public_5bfe5f

#pragma init_seg(compiler)
extern "C" void const* const public_5bfe3c = __AsmFindLabelExport(&internal_5bfe30, 0x5bfe3c);
extern "C" void const* const public_5bfe47 = __AsmFindLabelExport(&internal_5bfe30, 0x5bfe47);
extern "C" void const* const public_5bfe53 = __AsmFindLabelExport(&internal_5bfe30, 0x5bfe53);
extern "C" void const* const public_5bfe5f = __AsmFindLabelExport(&internal_5bfe30, 0x5bfe5f);
