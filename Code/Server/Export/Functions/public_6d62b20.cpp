#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce1090);
CLANG_FORWARD_PROC_SYMBOL(public_6d209f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d60018);

#define public_6d62b31 _public_6d62b31
#define public_6d62b39 _public_6d62b39
#define public_6d62b4a _public_6d62b4a
#define public_6d62b52 _public_6d62b52
#define public_6d62b63 _public_6d62b63
#define public_6d62b6b _public_6d62b6b
#define public_6d62b7c _public_6d62b7c

PROC_DECLARE(0x6d62b20, internal_6d62b20, public_6d62b20);
/* CHUNK of public_6d27460 */
extern "C" NAKED register_t __cdecl internal_6d62b20()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp+0x10]
        push eax
        mov ecx, dword ptr ss : [ebp+0xC]
        push ecx
        call public_6ce1090
        add esp, 8
        ret 
        public_6d62b31 : nop
        mov ecx, dword ptr ss : [ebp+0xC]
        jmp public_6d209f0
        public_6d62b39 : nop
        mov eax, dword ptr ss : [ebp+0x10]
        push eax
        mov ecx, dword ptr ss : [ebp+0xC]
        push ecx
        call public_6ce1090
        add esp, 8
        ret 
        public_6d62b4a : nop
        mov ecx, dword ptr ss : [ebp+0xC]
        jmp public_6d209f0
        public_6d62b52 : nop
        mov eax, dword ptr ss : [ebp+0x10]
        push eax
        mov ecx, dword ptr ss : [ebp+0xC]
        push ecx
        call public_6ce1090
        add esp, 8
        ret 
        public_6d62b63 : nop
        mov ecx, dword ptr ss : [ebp+0xC]
        jmp public_6d209f0
        public_6d62b6b : nop
        mov eax, dword ptr ss : [ebp+0x10]
        push eax
        mov ecx, dword ptr ss : [ebp+0xC]
        push ecx
        call public_6ce1090
        add esp, 8
        ret 
        public_6d62b7c : nop
        mov eax, offset public_6d73c0c
        jmp public_6d60018
        UNREACHABLE_TRAP(0x6d62b20)
        ASM_EXPORT_ENTRY_FIRST(0x6d62b31, public_6d62b31)
        ASM_EXPORT_ENTRY(0x6d62b39, public_6d62b39)
        ASM_EXPORT_ENTRY(0x6d62b4a, public_6d62b4a)
        ASM_EXPORT_ENTRY(0x6d62b52, public_6d62b52)
        ASM_EXPORT_ENTRY(0x6d62b63, public_6d62b63)
        ASM_EXPORT_ENTRY(0x6d62b6b, public_6d62b6b)
        ASM_EXPORT_ENTRY_LAST(0x6d62b7c, public_6d62b7c)
    }
}

#undef public_6d62b31
#undef public_6d62b39
#undef public_6d62b4a
#undef public_6d62b52
#undef public_6d62b63
#undef public_6d62b6b
#undef public_6d62b7c

#pragma init_seg(compiler)
extern "C" void const* const public_6d62b31 = __AsmFindLabelExport(&internal_6d62b20, 0x6d62b31);
extern "C" void const* const public_6d62b39 = __AsmFindLabelExport(&internal_6d62b20, 0x6d62b39);
extern "C" void const* const public_6d62b4a = __AsmFindLabelExport(&internal_6d62b20, 0x6d62b4a);
extern "C" void const* const public_6d62b52 = __AsmFindLabelExport(&internal_6d62b20, 0x6d62b52);
extern "C" void const* const public_6d62b63 = __AsmFindLabelExport(&internal_6d62b20, 0x6d62b63);
extern "C" void const* const public_6d62b6b = __AsmFindLabelExport(&internal_6d62b20, 0x6d62b6b);
extern "C" void const* const public_6d62b7c = __AsmFindLabelExport(&internal_6d62b20, 0x6d62b7c);
