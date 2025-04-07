#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62184a0);

#define public_62184a9 _public_62184a9
#define public_62184b9 _public_62184b9

PROC_DECLARE(0x62184a0, internal_62184a0, public_62184a0);
/* CHUNK of public_6218240 */
extern "C" NAKED register_t __cdecl internal_62184a0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ds : [ecx]
        xor edx, edx
        cmp eax, edx
        je public_62184b9
        push esi
        public_62184a9 : nop
        mov esi, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], esi
        mov dword ptr ds : [eax], edx
        mov dword ptr ds : [eax+4], edx
        mov eax, dword ptr ds : [ecx]
        cmp eax, edx
        jne public_62184a9
        pop esi
        public_62184b9 : nop
        mov dword ptr ds : [ecx], edx
        mov dword ptr ds : [ecx+4], edx
        ret 
        UNREACHABLE_TRAP(0x62184a0)
        ASM_EXPORT_ENTRY_FIRST(0x62184a9, public_62184a9)
        ASM_EXPORT_ENTRY_LAST(0x62184b9, public_62184b9)
    }
}

#undef public_62184a9
#undef public_62184b9

#pragma init_seg(compiler)
extern "C" void const* const public_62184a9 = __AsmFindLabelExport(&internal_62184a0, 0x62184a9);
extern "C" void const* const public_62184b9 = __AsmFindLabelExport(&internal_62184a0, 0x62184b9);
