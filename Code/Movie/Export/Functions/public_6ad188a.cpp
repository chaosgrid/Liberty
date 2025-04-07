#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ad188a);
CLANG_FORWARD_PROC_SYMBOL(public_6ad52bc);

#define public_6ad1898 _public_6ad1898
#define public_6ad18ad _public_6ad18ad
#define public_6ad18c4 _public_6ad18c4
#define public_6ad18c6 _public_6ad18c6

PROC_DECLARE(0x6ad188a, internal_6ad188a, public_6ad188a);
/* CHUNK of public_6ad15a6 */
extern "C" NAKED register_t __cdecl internal_6ad188a()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        xor eax, eax
        cmp esi, 0xFFFFFFE0
        ja public_6ad18ad
        cmp esi, edi
        jne public_6ad1898
        push 1
        pop esi
        public_6ad1898 : nop
        add esi, 0xF
        and esi, 0xFFFFFFF0
        push esi
        push ebx
        push edi
        push dword ptr ds : [public_6ae2460]
        call dword ptr ds : [public_6ada100]
        public_6ad18ad : nop
        cmp eax, edi
        jne public_6ad18c6
        cmp dword ptr ds : [public_6ae108c], edi
        je public_6ad18c6
        push esi
        call public_6ad52bc
        pop ecx
        test eax, eax
        jne public_6ad188a
        public_6ad18c4 : nop
        xor eax, eax
        public_6ad18c6 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        mov dword ptr fs : [0], ecx
        pop edi
        pop esi
        pop ebx
        leave 
        ret 
        UNREACHABLE_TRAP(0x6ad188a)
        ASM_EXPORT_ENTRY_FIRST(0x6ad1898, public_6ad1898)
        ASM_EXPORT_ENTRY(0x6ad18ad, public_6ad18ad)
        ASM_EXPORT_ENTRY(0x6ad18c4, public_6ad18c4)
        ASM_EXPORT_ENTRY_LAST(0x6ad18c6, public_6ad18c6)
    }
}

#undef public_6ad1898
#undef public_6ad18ad
#undef public_6ad18c4
#undef public_6ad18c6

#pragma init_seg(compiler)
extern "C" void const* const public_6ad1898 = __AsmFindLabelExport(&internal_6ad188a, 0x6ad1898);
extern "C" void const* const public_6ad18ad = __AsmFindLabelExport(&internal_6ad188a, 0x6ad18ad);
extern "C" void const* const public_6ad18c4 = __AsmFindLabelExport(&internal_6ad188a, 0x6ad18c4);
extern "C" void const* const public_6ad18c6 = __AsmFindLabelExport(&internal_6ad188a, 0x6ad18c6);
