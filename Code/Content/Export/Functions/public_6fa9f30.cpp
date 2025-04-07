#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ebf720);
CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fa9f41 _public_6fa9f41
#define public_6fa9f4c _public_6fa9f4c
#define public_6fa9f57 _public_6fa9f57
#define public_6fa9f62 _public_6fa9f62
#define public_6fa9f6d _public_6fa9f6d

PROC_DECLARE(0x6fa9f30, internal_6fa9f30, public_6fa9f30);
/* CHUNK of public_6eb1960 */
extern "C" NAKED register_t __cdecl internal_6fa9f30()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp+4]
        push eax
        mov ecx, dword ptr ss : [ebp-0x14]
        push ecx
        call public_6ebf720
        add esp, 8
        ret 
        public_6fa9f41 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x44
        jmp public_6eec8d0
        public_6fa9f4c : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x54
        jmp public_6eec8d0
        public_6fa9f57 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x64
        jmp public_6eec8d0
        public_6fa9f62 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x74
        jmp public_6eec8d0
        public_6fa9f6d : nop
        mov eax, offset public_6fbe330
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fa9f30)
        ASM_EXPORT_ENTRY_FIRST(0x6fa9f41, public_6fa9f41)
        ASM_EXPORT_ENTRY(0x6fa9f4c, public_6fa9f4c)
        ASM_EXPORT_ENTRY(0x6fa9f57, public_6fa9f57)
        ASM_EXPORT_ENTRY(0x6fa9f62, public_6fa9f62)
        ASM_EXPORT_ENTRY_LAST(0x6fa9f6d, public_6fa9f6d)
    }
}

#undef public_6fa9f41
#undef public_6fa9f4c
#undef public_6fa9f57
#undef public_6fa9f62
#undef public_6fa9f6d

#pragma init_seg(compiler)
extern "C" void const* const public_6fa9f41 = __AsmFindLabelExport(&internal_6fa9f30, 0x6fa9f41);
extern "C" void const* const public_6fa9f4c = __AsmFindLabelExport(&internal_6fa9f30, 0x6fa9f4c);
extern "C" void const* const public_6fa9f57 = __AsmFindLabelExport(&internal_6fa9f30, 0x6fa9f57);
extern "C" void const* const public_6fa9f62 = __AsmFindLabelExport(&internal_6fa9f30, 0x6fa9f62);
extern "C" void const* const public_6fa9f6d = __AsmFindLabelExport(&internal_6fa9f30, 0x6fa9f6d);
