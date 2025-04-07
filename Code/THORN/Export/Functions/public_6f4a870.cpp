#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4a870);

#define public_6f4a885 _public_6f4a885

PROC_DECLARE(0x6f4a870, internal_6f4a870, public_6f4a870);
/* CHUNK of public_6f41110 */
extern "C" NAKED register_t __cdecl internal_6f4a870()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_6f4a885
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi], 0
        public_6f4a885 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f4a870)
        ASM_EXPORT_ENTRY_SINGLE(0x6f4a885, public_6f4a885)
    }
}

#undef public_6f4a885

#pragma init_seg(compiler)
extern "C" void const* const public_6f4a885 = __AsmFindLabelExport(&internal_6f4a870, 0x6f4a885);
