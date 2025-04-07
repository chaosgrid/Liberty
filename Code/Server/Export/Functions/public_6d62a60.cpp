#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce1090);
CLANG_FORWARD_PROC_SYMBOL(public_6d209f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d60018);

#define public_6d62a71 _public_6d62a71
#define public_6d62a79 _public_6d62a79
#define public_6d62a8a _public_6d62a8a
#define public_6d62a92 _public_6d62a92

PROC_DECLARE(0x6d62a60, internal_6d62a60, public_6d62a60);
/* CHUNK of public_6d26520 */
extern "C" NAKED register_t __cdecl internal_6d62a60()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp+8]
        push eax
        mov ecx, dword ptr ss : [ebp+4]
        push ecx
        call public_6ce1090
        add esp, 8
        ret 
        public_6d62a71 : nop
        mov ecx, dword ptr ss : [ebp+4]
        jmp public_6d209f0
        public_6d62a79 : nop
        mov eax, dword ptr ss : [ebp+8]
        push eax
        mov ecx, dword ptr ss : [ebp+4]
        push ecx
        call public_6ce1090
        add esp, 8
        ret 
        public_6d62a8a : nop
        mov ecx, dword ptr ss : [ebp+4]
        jmp public_6d209f0
        public_6d62a92 : nop
        mov eax, offset public_6d73ae0
        jmp public_6d60018
        UNREACHABLE_TRAP(0x6d62a60)
        ASM_EXPORT_ENTRY_FIRST(0x6d62a71, public_6d62a71)
        ASM_EXPORT_ENTRY(0x6d62a79, public_6d62a79)
        ASM_EXPORT_ENTRY(0x6d62a8a, public_6d62a8a)
        ASM_EXPORT_ENTRY_LAST(0x6d62a92, public_6d62a92)
    }
}

#undef public_6d62a71
#undef public_6d62a79
#undef public_6d62a8a
#undef public_6d62a92

#pragma init_seg(compiler)
extern "C" void const* const public_6d62a71 = __AsmFindLabelExport(&internal_6d62a60, 0x6d62a71);
extern "C" void const* const public_6d62a79 = __AsmFindLabelExport(&internal_6d62a60, 0x6d62a79);
extern "C" void const* const public_6d62a8a = __AsmFindLabelExport(&internal_6d62a60, 0x6d62a8a);
extern "C" void const* const public_6d62a92 = __AsmFindLabelExport(&internal_6d62a60, 0x6d62a92);
