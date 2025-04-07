#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b3ede0);
CLANG_FORWARD_PROC_SYMBOL(public_6b4e730);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a13a);

#define public_6b6aa48 _public_6b6aa48
#define public_6b6aa53 _public_6b6aa53
#define public_6b6aa5e _public_6b6aa5e

PROC_DECLARE(0x6b6aa40, internal_6b6aa40, public_6b6aa40);
/* CHUNK of public_6b4af30 */
extern "C" NAKED register_t __cdecl internal_6b6aa40()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_6b4e730
        public_6b6aa48 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x20
        jmp public_6b3ede0
        public_6b6aa53 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x28
        jmp public_6b3ede0
        public_6b6aa5e : nop
        mov eax, offset public_6b6f0ec
        jmp public_6b6a13a
        UNREACHABLE_TRAP(0x6b6aa40)
        ASM_EXPORT_ENTRY_FIRST(0x6b6aa48, public_6b6aa48)
        ASM_EXPORT_ENTRY(0x6b6aa53, public_6b6aa53)
        ASM_EXPORT_ENTRY_LAST(0x6b6aa5e, public_6b6aa5e)
    }
}

#undef public_6b6aa48
#undef public_6b6aa53
#undef public_6b6aa5e

#pragma init_seg(compiler)
extern "C" void const* const public_6b6aa48 = __AsmFindLabelExport(&internal_6b6aa40, 0x6b6aa48);
extern "C" void const* const public_6b6aa53 = __AsmFindLabelExport(&internal_6b6aa40, 0x6b6aa53);
extern "C" void const* const public_6b6aa5e = __AsmFindLabelExport(&internal_6b6aa40, 0x6b6aa5e);
