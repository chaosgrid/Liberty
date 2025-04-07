#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce1090);
CLANG_FORWARD_PROC_SYMBOL(public_6cfffc0);
CLANG_FORWARD_PROC_SYMBOL(public_6d60018);

#define public_6d61751 _public_6d61751
#define public_6d6175a _public_6d6175a
#define public_6d61762 _public_6d61762
#define public_6d6176b _public_6d6176b

PROC_DECLARE(0x6d61740, internal_6d61740, public_6d61740);
/* CHUNK of public_6d0f830 */
extern "C" NAKED register_t __cdecl internal_6d61740()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp+4]
        push eax
        mov ecx, dword ptr ss : [ebp-0x10]
        push ecx
        call public_6ce1090
        add esp, 8
        ret 
        public_6d61751 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp dword ptr ds : [public_6d6459c]
        public_6d6175a : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_6cfffc0
        public_6d61762 : nop
        mov ecx, dword ptr ss : [ebp+8]
        jmp dword ptr ds : [public_6d6459c]
        public_6d6176b : nop
        mov eax, offset public_6d723c0
        jmp public_6d60018
        UNREACHABLE_TRAP(0x6d61740)
        ASM_EXPORT_ENTRY_FIRST(0x6d61751, public_6d61751)
        ASM_EXPORT_ENTRY(0x6d6175a, public_6d6175a)
        ASM_EXPORT_ENTRY(0x6d61762, public_6d61762)
        ASM_EXPORT_ENTRY_LAST(0x6d6176b, public_6d6176b)
    }
}

#undef public_6d61751
#undef public_6d6175a
#undef public_6d61762
#undef public_6d6176b

#pragma init_seg(compiler)
extern "C" void const* const public_6d61751 = __AsmFindLabelExport(&internal_6d61740, 0x6d61751);
extern "C" void const* const public_6d6175a = __AsmFindLabelExport(&internal_6d61740, 0x6d6175a);
extern "C" void const* const public_6d61762 = __AsmFindLabelExport(&internal_6d61740, 0x6d61762);
extern "C" void const* const public_6d6176b = __AsmFindLabelExport(&internal_6d61740, 0x6d6176b);
