#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_632ae20);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_632ae49 _public_632ae49
#define public_632ae59 _public_632ae59
#define public_632ae62 _public_632ae62
#define public_632ae68 _public_632ae68

PROC_DECLARE(0x632ae20, internal_632ae20, public_632ae20);
/* CHUNK of public_632ac30 */
extern "C" NAKED register_t __cdecl internal_632ae20()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push esi
        push edi
        mov edi, ecx
        mov esi, dword ptr ds : [edi]
        test esi, esi
        je public_632ae68
        lea eax, ds:[esi+8]
        push eax
        call dword ptr ds : [public_63990c8]
        test eax, eax
        jne public_632ae62
        test esi, esi
        je public_632ae62
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_632ae49
        push eax
        call dword ptr ds : [public_639935c]
        public_632ae49 : nop
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        je public_632ae59
        push eax
        call public_6391d5a
        add esp, 4
        public_632ae59 : nop
        push esi
        call public_6391d5a
        add esp, 4
        public_632ae62 : nop
        mov dword ptr ds : [edi], 0
        public_632ae68 : nop
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x632ae20)
        ASM_EXPORT_ENTRY_FIRST(0x632ae49, public_632ae49)
        ASM_EXPORT_ENTRY(0x632ae59, public_632ae59)
        ASM_EXPORT_ENTRY(0x632ae62, public_632ae62)
        ASM_EXPORT_ENTRY_LAST(0x632ae68, public_632ae68)
    }
}

#undef public_632ae49
#undef public_632ae59
#undef public_632ae62
#undef public_632ae68

#pragma init_seg(compiler)
extern "C" void const* const public_632ae49 = __AsmFindLabelExport(&internal_632ae20, 0x632ae49);
extern "C" void const* const public_632ae59 = __AsmFindLabelExport(&internal_632ae20, 0x632ae59);
extern "C" void const* const public_632ae62 = __AsmFindLabelExport(&internal_632ae20, 0x632ae62);
extern "C" void const* const public_632ae68 = __AsmFindLabelExport(&internal_632ae20, 0x632ae68);
