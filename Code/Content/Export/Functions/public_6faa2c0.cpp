#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ebf720);
CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6faa2d1 _public_6faa2d1
#define public_6faa2d9 _public_6faa2d9
#define public_6faa2e5 _public_6faa2e5
#define public_6faa2f1 _public_6faa2f1

PROC_DECLARE(0x6faa2c0, internal_6faa2c0, public_6faa2c0);
/* CHUNK of public_6eb68a0 */
extern "C" NAKED register_t __cdecl internal_6faa2c0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp+4]
        push eax
        mov ecx, dword ptr ss : [ebp-0x10]
        push ecx
        call public_6ebf720
        add esp, 8
        ret 
        public_6faa2d1 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_6eec8d0
        public_6faa2d9 : nop
        mov ecx, dword ptr ss : [ebp+8]
        add ecx, 0xC
        jmp dword ptr ds : [public_6fb3034]
        public_6faa2e5 : nop
        mov ecx, dword ptr ss : [ebp+8]
        add ecx, 0x24
        jmp dword ptr ds : [public_6fb3034]
        public_6faa2f1 : nop
        mov eax, offset public_6fbe6f8
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6faa2c0)
        ASM_EXPORT_ENTRY_FIRST(0x6faa2d1, public_6faa2d1)
        ASM_EXPORT_ENTRY(0x6faa2d9, public_6faa2d9)
        ASM_EXPORT_ENTRY(0x6faa2e5, public_6faa2e5)
        ASM_EXPORT_ENTRY_LAST(0x6faa2f1, public_6faa2f1)
    }
}

#undef public_6faa2d1
#undef public_6faa2d9
#undef public_6faa2e5
#undef public_6faa2f1

#pragma init_seg(compiler)
extern "C" void const* const public_6faa2d1 = __AsmFindLabelExport(&internal_6faa2c0, 0x6faa2d1);
extern "C" void const* const public_6faa2d9 = __AsmFindLabelExport(&internal_6faa2c0, 0x6faa2d9);
extern "C" void const* const public_6faa2e5 = __AsmFindLabelExport(&internal_6faa2c0, 0x6faa2e5);
extern "C" void const* const public_6faa2f1 = __AsmFindLabelExport(&internal_6faa2c0, 0x6faa2f1);
