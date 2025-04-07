#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fa9e0b _public_6fa9e0b
#define public_6fa9e16 _public_6fa9e16
#define public_6fa9e21 _public_6fa9e21
#define public_6fa9e2c _public_6fa9e2c

PROC_DECLARE(0x6fa9e00, internal_6fa9e00, public_6fa9e00);
/* CHUNK of public_6ead190 */
extern "C" NAKED register_t __cdecl internal_6fa9e00()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x44
        jmp public_6eec8d0
        public_6fa9e0b : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x54
        jmp public_6eec8d0
        public_6fa9e16 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x64
        jmp public_6eec8d0
        public_6fa9e21 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x74
        jmp public_6eec8d0
        public_6fa9e2c : nop
        mov eax, offset public_6fbe1d4
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fa9e00)
        ASM_EXPORT_ENTRY_FIRST(0x6fa9e0b, public_6fa9e0b)
        ASM_EXPORT_ENTRY(0x6fa9e16, public_6fa9e16)
        ASM_EXPORT_ENTRY(0x6fa9e21, public_6fa9e21)
        ASM_EXPORT_ENTRY_LAST(0x6fa9e2c, public_6fa9e2c)
    }
}

#undef public_6fa9e0b
#undef public_6fa9e16
#undef public_6fa9e21
#undef public_6fa9e2c

#pragma init_seg(compiler)
extern "C" void const* const public_6fa9e0b = __AsmFindLabelExport(&internal_6fa9e00, 0x6fa9e0b);
extern "C" void const* const public_6fa9e16 = __AsmFindLabelExport(&internal_6fa9e00, 0x6fa9e16);
extern "C" void const* const public_6fa9e21 = __AsmFindLabelExport(&internal_6fa9e00, 0x6fa9e21);
extern "C" void const* const public_6fa9e2c = __AsmFindLabelExport(&internal_6fa9e00, 0x6fa9e2c);
