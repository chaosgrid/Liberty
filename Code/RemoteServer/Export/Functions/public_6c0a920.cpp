#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bdc790);
CLANG_FORWARD_PROC_SYMBOL(public_6be1270);
CLANG_FORWARD_PROC_SYMBOL(public_6bebe40);
CLANG_FORWARD_PROC_SYMBOL(public_6c09d2c);

#define public_6c0a928 _public_6c0a928
#define public_6c0a933 _public_6c0a933
#define public_6c0a93e _public_6c0a93e
#define public_6c0a94a _public_6c0a94a

PROC_DECLARE(0x6c0a920, internal_6c0a920, public_6c0a920);
/* CHUNK of public_6bf0c10 */
extern "C" NAKED register_t __cdecl internal_6c0a920()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x18]
        jmp public_6bebe40
        public_6c0a928 : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0x30
        jmp public_6be1270
        public_6c0a933 : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0x70
        jmp public_6bdc790
        public_6c0a93e : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0x74
        jmp dword ptr ds : [public_6c0b03c]
        public_6c0a94a : nop
        mov eax, offset public_6c0f024
        jmp public_6c09d2c
        UNREACHABLE_TRAP(0x6c0a920)
        ASM_EXPORT_ENTRY_FIRST(0x6c0a928, public_6c0a928)
        ASM_EXPORT_ENTRY(0x6c0a933, public_6c0a933)
        ASM_EXPORT_ENTRY(0x6c0a93e, public_6c0a93e)
        ASM_EXPORT_ENTRY_LAST(0x6c0a94a, public_6c0a94a)
    }
}

#undef public_6c0a928
#undef public_6c0a933
#undef public_6c0a93e
#undef public_6c0a94a

#pragma init_seg(compiler)
extern "C" void const* const public_6c0a928 = __AsmFindLabelExport(&internal_6c0a920, 0x6c0a928);
extern "C" void const* const public_6c0a933 = __AsmFindLabelExport(&internal_6c0a920, 0x6c0a933);
extern "C" void const* const public_6c0a93e = __AsmFindLabelExport(&internal_6c0a920, 0x6c0a93e);
extern "C" void const* const public_6c0a94a = __AsmFindLabelExport(&internal_6c0a920, 0x6c0a94a);
