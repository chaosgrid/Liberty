#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6269110);
CLANG_FORWARD_PROC_SYMBOL(public_627cae0);
CLANG_FORWARD_PROC_SYMBOL(public_6280b30);
CLANG_FORWARD_PROC_SYMBOL(public_62a68e0);
CLANG_FORWARD_PROC_SYMBOL(public_62af440);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6393038 _public_6393038
#define public_6393043 _public_6393043
#define public_639304e _public_639304e
#define public_6393056 _public_6393056
#define public_6393064 _public_6393064

PROC_DECLARE(0x6393030, internal_6393030, public_6393030);
/* CHUNK of public_62860b0 */
extern "C" NAKED register_t __cdecl internal_6393030()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_627cae0
        public_6393038 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x64
        jmp public_6269110
        public_6393043 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x78
        jmp public_62a68e0
        public_639304e : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_62af440
        public_6393056 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x9C
        jmp public_6280b30
        public_6393064 : nop
        mov eax, offset public_63ac0d8
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6393030)
        ASM_EXPORT_ENTRY_FIRST(0x6393038, public_6393038)
        ASM_EXPORT_ENTRY(0x6393043, public_6393043)
        ASM_EXPORT_ENTRY(0x639304e, public_639304e)
        ASM_EXPORT_ENTRY(0x6393056, public_6393056)
        ASM_EXPORT_ENTRY_LAST(0x6393064, public_6393064)
    }
}

#undef public_6393038
#undef public_6393043
#undef public_639304e
#undef public_6393056
#undef public_6393064

#pragma init_seg(compiler)
extern "C" void const* const public_6393038 = __AsmFindLabelExport(&internal_6393030, 0x6393038);
extern "C" void const* const public_6393043 = __AsmFindLabelExport(&internal_6393030, 0x6393043);
extern "C" void const* const public_639304e = __AsmFindLabelExport(&internal_6393030, 0x639304e);
extern "C" void const* const public_6393056 = __AsmFindLabelExport(&internal_6393030, 0x6393056);
extern "C" void const* const public_6393064 = __AsmFindLabelExport(&internal_6393030, 0x6393064);
