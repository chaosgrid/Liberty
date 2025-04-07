#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_627e9b0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_627e9c2 _public_627e9c2
#define public_627e9d4 _public_627e9d4
#define public_627e9e8 _public_627e9e8

PROC_DECLARE(0x627e9b0, internal_627e9b0, public_627e9b0);
/* CHUNK of public_627ce00 */
extern "C" NAKED register_t __cdecl internal_627e9b0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        dec dword ptr ds : [public_63fc438]
        jne public_627e9e8
        mov eax, dword ptr ds : [public_63fc434]
        test eax, eax
        je public_627e9d4
        push esi
        public_627e9c2 : nop
        mov esi, dword ptr ds : [eax]
        push eax
        call public_6391d5a
        add esp, 4
        test esi, esi
        mov eax, esi
        jne public_627e9c2
        pop esi
        public_627e9d4 : nop
        mov dword ptr ds : [public_63fc434], 0
        mov dword ptr ds : [public_63fc440], 0
        public_627e9e8 : nop
        ret 
        UNREACHABLE_TRAP(0x627e9b0)
        ASM_EXPORT_ENTRY_FIRST(0x627e9c2, public_627e9c2)
        ASM_EXPORT_ENTRY(0x627e9d4, public_627e9d4)
        ASM_EXPORT_ENTRY_LAST(0x627e9e8, public_627e9e8)
    }
}

#undef public_627e9c2
#undef public_627e9d4
#undef public_627e9e8

#pragma init_seg(compiler)
extern "C" void const* const public_627e9c2 = __AsmFindLabelExport(&internal_627e9b0, 0x627e9c2);
extern "C" void const* const public_627e9d4 = __AsmFindLabelExport(&internal_627e9b0, 0x627e9d4);
extern "C" void const* const public_627e9e8 = __AsmFindLabelExport(&internal_627e9b0, 0x627e9e8);
