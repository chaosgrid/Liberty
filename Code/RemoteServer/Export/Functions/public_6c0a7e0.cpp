#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bdc790);
CLANG_FORWARD_PROC_SYMBOL(public_6be1270);
CLANG_FORWARD_PROC_SYMBOL(public_6bebe40);
CLANG_FORWARD_PROC_SYMBOL(public_6c09d2c);

#define public_6c0a7e8 _public_6c0a7e8
#define public_6c0a7f3 _public_6c0a7f3
#define public_6c0a7fe _public_6c0a7fe
#define public_6c0a80a _public_6c0a80a

PROC_DECLARE(0x6c0a7e0, internal_6c0a7e0, public_6c0a7e0);
/* CHUNK of public_6be7520 */
extern "C" NAKED register_t __cdecl internal_6c0a7e0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x18]
        jmp public_6bebe40
        public_6c0a7e8 : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0x30
        jmp public_6be1270
        public_6c0a7f3 : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0x70
        jmp public_6bdc790
        public_6c0a7fe : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0x74
        jmp dword ptr ds : [public_6c0b03c]
        public_6c0a80a : nop
        mov eax, offset public_6c0eeb8
        jmp public_6c09d2c
        UNREACHABLE_TRAP(0x6c0a7e0)
        ASM_EXPORT_ENTRY_FIRST(0x6c0a7e8, public_6c0a7e8)
        ASM_EXPORT_ENTRY(0x6c0a7f3, public_6c0a7f3)
        ASM_EXPORT_ENTRY(0x6c0a7fe, public_6c0a7fe)
        ASM_EXPORT_ENTRY_LAST(0x6c0a80a, public_6c0a80a)
    }
}

#undef public_6c0a7e8
#undef public_6c0a7f3
#undef public_6c0a7fe
#undef public_6c0a80a

#pragma init_seg(compiler)
extern "C" void const* const public_6c0a7e8 = __AsmFindLabelExport(&internal_6c0a7e0, 0x6c0a7e8);
extern "C" void const* const public_6c0a7f3 = __AsmFindLabelExport(&internal_6c0a7e0, 0x6c0a7f3);
extern "C" void const* const public_6c0a7fe = __AsmFindLabelExport(&internal_6c0a7e0, 0x6c0a7fe);
extern "C" void const* const public_6c0a80a = __AsmFindLabelExport(&internal_6c0a7e0, 0x6c0a80a);
