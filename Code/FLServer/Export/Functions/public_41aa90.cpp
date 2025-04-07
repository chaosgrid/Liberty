#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_418a98);
CLANG_FORWARD_PROC_SYMBOL(public_418c24);
CLANG_FORWARD_PROC_SYMBOL(public_4193c0);

#define public_41aa98 _public_41aa98
#define public_41aaa3 _public_41aaa3
#define public_41aab1 _public_41aab1
#define public_41aabf _public_41aabf

PROC_DECLARE(0x41aa90, internal_41aa90, public_41aa90);
/* CHUNK of public_4160b0 */
extern "C" NAKED register_t __cdecl internal_41aa90()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x14]
        jmp public_418a98
        public_41aa98 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x64
        jmp public_418c24
        public_41aaa3 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0xA4
        jmp public_418c24
        public_41aab1 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0xE4
        jmp public_418c24
        public_41aabf : nop
        mov eax, offset public_41fbf0
        jmp public_4193c0
        UNREACHABLE_TRAP(0x41aa90)
        ASM_EXPORT_ENTRY_FIRST(0x41aa98, public_41aa98)
        ASM_EXPORT_ENTRY(0x41aaa3, public_41aaa3)
        ASM_EXPORT_ENTRY(0x41aab1, public_41aab1)
        ASM_EXPORT_ENTRY_LAST(0x41aabf, public_41aabf)
    }
}

#undef public_41aa98
#undef public_41aaa3
#undef public_41aab1
#undef public_41aabf

#pragma init_seg(compiler)
extern "C" void const* const public_41aa98 = __AsmFindLabelExport(&internal_41aa90, 0x41aa98);
extern "C" void const* const public_41aaa3 = __AsmFindLabelExport(&internal_41aa90, 0x41aaa3);
extern "C" void const* const public_41aab1 = __AsmFindLabelExport(&internal_41aa90, 0x41aab1);
extern "C" void const* const public_41aabf = __AsmFindLabelExport(&internal_41aa90, 0x41aabf);
