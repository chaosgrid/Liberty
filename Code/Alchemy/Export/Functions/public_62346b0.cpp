#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62346b0);

#define public_62346b9 _public_62346b9
#define public_62346c9 _public_62346c9

PROC_DECLARE(0x62346b0, internal_62346b0, public_62346b0);
/* CHUNK of public_6234440 */
extern "C" NAKED register_t __cdecl internal_62346b0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ds : [ecx]
        xor edx, edx
        cmp eax, edx
        je public_62346c9
        push esi
        public_62346b9 : nop
        mov esi, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], esi
        mov dword ptr ds : [eax], edx
        mov dword ptr ds : [eax+4], edx
        mov eax, dword ptr ds : [ecx]
        cmp eax, edx
        jne public_62346b9
        pop esi
        public_62346c9 : nop
        mov dword ptr ds : [ecx], edx
        mov dword ptr ds : [ecx+4], edx
        ret 
        UNREACHABLE_TRAP(0x62346b0)
        ASM_EXPORT_ENTRY_FIRST(0x62346b9, public_62346b9)
        ASM_EXPORT_ENTRY_LAST(0x62346c9, public_62346c9)
    }
}

#undef public_62346b9
#undef public_62346c9

#pragma init_seg(compiler)
extern "C" void const* const public_62346b9 = __AsmFindLabelExport(&internal_62346b0, 0x62346b9);
extern "C" void const* const public_62346c9 = __AsmFindLabelExport(&internal_62346b0, 0x62346c9);
