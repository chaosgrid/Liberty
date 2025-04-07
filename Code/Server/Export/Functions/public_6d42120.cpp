#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d42120);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);

#define public_6d42131 _public_6d42131
#define public_6d42150 _public_6d42150

PROC_DECLARE(0x6d42120, internal_6d42120, public_6d42120);
/* CHUNK of public_6d42a60 */
extern "C" NAKED register_t __cdecl internal_6d42120()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        mov dword ptr ds : [esi+0x1000], eax
        je public_6d42150
        push edi
        public_6d42131 : nop
        mov eax, dword ptr ds : [esi+0x1000]
        mov edi, dword ptr ds : [eax+4]
        mov ecx, eax
        push ecx
        call public_6d5ffb0
        add esp, 4
        test edi, edi
        mov dword ptr ds : [esi+0x1000], edi
        jne public_6d42131
        pop edi
        public_6d42150 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6d42120)
        ASM_EXPORT_ENTRY_FIRST(0x6d42131, public_6d42131)
        ASM_EXPORT_ENTRY_LAST(0x6d42150, public_6d42150)
    }
}

#undef public_6d42131
#undef public_6d42150

#pragma init_seg(compiler)
extern "C" void const* const public_6d42131 = __AsmFindLabelExport(&internal_6d42120, 0x6d42131);
extern "C" void const* const public_6d42150 = __AsmFindLabelExport(&internal_6d42120, 0x6d42150);
