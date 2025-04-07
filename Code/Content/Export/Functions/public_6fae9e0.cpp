#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea8cc0);
CLANG_FORWARD_PROC_SYMBOL(public_6ef4e60);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fae9e8 _public_6fae9e8
#define public_6fae9f3 _public_6fae9f3
#define public_6fae9fb _public_6fae9fb
#define public_6faea04 _public_6faea04

PROC_DECLARE(0x6fae9e0, internal_6fae9e0, public_6fae9e0);
/* CHUNK of public_6f31d40 */
extern "C" NAKED register_t __cdecl internal_6fae9e0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x44]
        jmp public_6ef4e60
        public_6fae9e8 : nop
        mov eax, dword ptr ss : [ebp+4]
        push eax
        call public_6fa8fe0
        pop ecx
        ret 
        public_6fae9f3 : nop
        mov ecx, dword ptr ss : [ebp+4]
        jmp public_6ea8cc0
        public_6fae9fb : nop
        lea ecx, ss:[ebp-0x44]
        jmp dword ptr ds : [public_6fb3034]
        public_6faea04 : nop
        mov eax, offset public_6fc3988
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fae9e0)
        ASM_EXPORT_ENTRY_FIRST(0x6fae9e8, public_6fae9e8)
        ASM_EXPORT_ENTRY(0x6fae9f3, public_6fae9f3)
        ASM_EXPORT_ENTRY(0x6fae9fb, public_6fae9fb)
        ASM_EXPORT_ENTRY_LAST(0x6faea04, public_6faea04)
    }
}

#undef public_6fae9e8
#undef public_6fae9f3
#undef public_6fae9fb
#undef public_6faea04

#pragma init_seg(compiler)
extern "C" void const* const public_6fae9e8 = __AsmFindLabelExport(&internal_6fae9e0, 0x6fae9e8);
extern "C" void const* const public_6fae9f3 = __AsmFindLabelExport(&internal_6fae9e0, 0x6fae9f3);
extern "C" void const* const public_6fae9fb = __AsmFindLabelExport(&internal_6fae9e0, 0x6fae9fb);
extern "C" void const* const public_6faea04 = __AsmFindLabelExport(&internal_6fae9e0, 0x6faea04);
