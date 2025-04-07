#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4b4fd0);
CLANG_FORWARD_PROC_SYMBOL(public_59dc00);

#define public_4b4ff0 _public_4b4ff0
#define public_4b4ffe _public_4b4ffe

PROC_DECLARE(0x4b4fd0, internal_4b4fd0, public_4b4fd0);
/* CHUNK of public_4b6630 */
extern "C" NAKED register_t __cdecl internal_4b4fd0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push esi
        push edi
        mov edi, ecx
        mov dword ptr ds : [edi], offset public_5d5544
        dec dword ptr ds : [public_67dcd4]
        mov cl, byte ptr ds : [edi+0x6C]
        mov esi, dword ptr ds : [edi+0xC]
        and cl, 0xFC
        test esi, esi
        mov byte ptr ds : [edi+0x6C], cl
        je public_4b4ffe
        public_4b4ff0 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x28]
        mov esi, dword ptr ds : [esi+8]
        test esi, esi
        jne public_4b4ff0
        public_4b4ffe : nop
        push edi
        call public_59dc00
        add esp, 4
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x4b4fd0)
        ASM_EXPORT_ENTRY_FIRST(0x4b4ff0, public_4b4ff0)
        ASM_EXPORT_ENTRY_LAST(0x4b4ffe, public_4b4ffe)
    }
}

#undef public_4b4ff0
#undef public_4b4ffe

#pragma init_seg(compiler)
extern "C" void const* const public_4b4ff0 = __AsmFindLabelExport(&internal_4b4fd0, 0x4b4ff0);
extern "C" void const* const public_4b4ffe = __AsmFindLabelExport(&internal_4b4fd0, 0x4b4ffe);
