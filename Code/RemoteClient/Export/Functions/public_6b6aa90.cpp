#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b3ede0);
CLANG_FORWARD_PROC_SYMBOL(public_6b4e730);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a13a);

#define public_6b6aa98 _public_6b6aa98
#define public_6b6aaa3 _public_6b6aaa3
#define public_6b6aaae _public_6b6aaae

PROC_DECLARE(0x6b6aa90, internal_6b6aa90, public_6b6aa90);
/* CHUNK of public_6b4b8c0 */
extern "C" NAKED register_t __cdecl internal_6b6aa90()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_6b4e730
        public_6b6aa98 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x28
        jmp public_6b3ede0
        public_6b6aaa3 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x30
        jmp public_6b3ede0
        public_6b6aaae : nop
        mov eax, offset public_6b6f144
        jmp public_6b6a13a
        UNREACHABLE_TRAP(0x6b6aa90)
        ASM_EXPORT_ENTRY_FIRST(0x6b6aa98, public_6b6aa98)
        ASM_EXPORT_ENTRY(0x6b6aaa3, public_6b6aaa3)
        ASM_EXPORT_ENTRY_LAST(0x6b6aaae, public_6b6aaae)
    }
}

#undef public_6b6aa98
#undef public_6b6aaa3
#undef public_6b6aaae

#pragma init_seg(compiler)
extern "C" void const* const public_6b6aa98 = __AsmFindLabelExport(&internal_6b6aa90, 0x6b6aa98);
extern "C" void const* const public_6b6aaa3 = __AsmFindLabelExport(&internal_6b6aa90, 0x6b6aaa3);
extern "C" void const* const public_6b6aaae = __AsmFindLabelExport(&internal_6b6aa90, 0x6b6aaae);
