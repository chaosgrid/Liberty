#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b3ede0);
CLANG_FORWARD_PROC_SYMBOL(public_6b4e730);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a13a);

#define public_6b6a958 _public_6b6a958
#define public_6b6a963 _public_6b6a963
#define public_6b6a96e _public_6b6a96e

PROC_DECLARE(0x6b6a950, internal_6b6a950, public_6b6a950);
/* CHUNK of public_6b44d20 */
extern "C" NAKED register_t __cdecl internal_6b6a950()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x14]
        jmp public_6b4e730
        public_6b6a958 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x28
        jmp public_6b3ede0
        public_6b6a963 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x30
        jmp public_6b3ede0
        public_6b6a96e : nop
        mov eax, offset public_6b6efec
        jmp public_6b6a13a
        UNREACHABLE_TRAP(0x6b6a950)
        ASM_EXPORT_ENTRY_FIRST(0x6b6a958, public_6b6a958)
        ASM_EXPORT_ENTRY(0x6b6a963, public_6b6a963)
        ASM_EXPORT_ENTRY_LAST(0x6b6a96e, public_6b6a96e)
    }
}

#undef public_6b6a958
#undef public_6b6a963
#undef public_6b6a96e

#pragma init_seg(compiler)
extern "C" void const* const public_6b6a958 = __AsmFindLabelExport(&internal_6b6a950, 0x6b6a958);
extern "C" void const* const public_6b6a963 = __AsmFindLabelExport(&internal_6b6a950, 0x6b6a963);
extern "C" void const* const public_6b6a96e = __AsmFindLabelExport(&internal_6b6a950, 0x6b6a96e);
