#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f68600);

#define public_6f68611 _public_6f68611
#define public_6f68623 _public_6f68623
#define public_6f6862a _public_6f6862a

PROC_DECLARE(0x6f68600, internal_6f68600, public_6f68600);
/* CHUNK of public_6f33fd0 */
extern "C" NAKED register_t __cdecl internal_6f68600()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [ecx]
        cmp eax, ecx
        push esi
        je public_6f6862a
        mov edx, dword ptr ss : [esp+8]
        mov edx, dword ptr ds : [edx+4]
        public_6f68611 : nop
        mov esi, dword ptr ds : [eax+8]
        cmp dword ptr ds : [esi+4], edx
        je public_6f68623
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        jne public_6f68611
        pop esi
        ret 4
        public_6f68623 : nop
        mov dword ptr ds : [eax+0x10], 0
        public_6f6862a : nop
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6f68600)
        ASM_EXPORT_ENTRY_FIRST(0x6f68611, public_6f68611)
        ASM_EXPORT_ENTRY(0x6f68623, public_6f68623)
        ASM_EXPORT_ENTRY_LAST(0x6f6862a, public_6f6862a)
    }
}

#undef public_6f68611
#undef public_6f68623
#undef public_6f6862a

#pragma init_seg(compiler)
extern "C" void const* const public_6f68611 = __AsmFindLabelExport(&internal_6f68600, 0x6f68611);
extern "C" void const* const public_6f68623 = __AsmFindLabelExport(&internal_6f68600, 0x6f68623);
extern "C" void const* const public_6f6862a = __AsmFindLabelExport(&internal_6f68600, 0x6f6862a);
