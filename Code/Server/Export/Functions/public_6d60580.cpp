#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);
CLANG_FORWARD_PROC_SYMBOL(public_6d60018);

#define public_6d6058b _public_6d6058b
#define public_6d60596 _public_6d60596
#define public_6d605a1 _public_6d605a1
#define public_6d605ac _public_6d605ac
#define public_6d605b7 _public_6d605b7
#define public_6d605c2 _public_6d605c2

PROC_DECLARE(0x6d60580, internal_6d60580, public_6d60580);
/* CHUNK of public_6ce8990 */
extern "C" NAKED register_t __cdecl internal_6d60580()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x14]
        push eax
        call public_6d5ffb0
        pop ecx
        ret 
        public_6d6058b : nop
        mov eax, dword ptr ss : [ebp-0x14]
        push eax
        call public_6d5ffb0
        pop ecx
        ret 
        public_6d60596 : nop
        mov eax, dword ptr ss : [ebp-0x14]
        push eax
        call public_6d5ffb0
        pop ecx
        ret 
        public_6d605a1 : nop
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_6d5ffb0
        pop ecx
        ret 
        public_6d605ac : nop
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_6d5ffb0
        pop ecx
        ret 
        public_6d605b7 : nop
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_6d5ffb0
        pop ecx
        ret 
        public_6d605c2 : nop
        mov eax, offset public_6d70e54
        jmp public_6d60018
        UNREACHABLE_TRAP(0x6d60580)
        ASM_EXPORT_ENTRY_FIRST(0x6d6058b, public_6d6058b)
        ASM_EXPORT_ENTRY(0x6d60596, public_6d60596)
        ASM_EXPORT_ENTRY(0x6d605a1, public_6d605a1)
        ASM_EXPORT_ENTRY(0x6d605ac, public_6d605ac)
        ASM_EXPORT_ENTRY(0x6d605b7, public_6d605b7)
        ASM_EXPORT_ENTRY_LAST(0x6d605c2, public_6d605c2)
    }
}

#undef public_6d6058b
#undef public_6d60596
#undef public_6d605a1
#undef public_6d605ac
#undef public_6d605b7
#undef public_6d605c2

#pragma init_seg(compiler)
extern "C" void const* const public_6d6058b = __AsmFindLabelExport(&internal_6d60580, 0x6d6058b);
extern "C" void const* const public_6d60596 = __AsmFindLabelExport(&internal_6d60580, 0x6d60596);
extern "C" void const* const public_6d605a1 = __AsmFindLabelExport(&internal_6d60580, 0x6d605a1);
extern "C" void const* const public_6d605ac = __AsmFindLabelExport(&internal_6d60580, 0x6d605ac);
extern "C" void const* const public_6d605b7 = __AsmFindLabelExport(&internal_6d60580, 0x6d605b7);
extern "C" void const* const public_6d605c2 = __AsmFindLabelExport(&internal_6d60580, 0x6d605c2);
