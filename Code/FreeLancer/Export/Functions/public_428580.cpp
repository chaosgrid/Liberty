#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_428580);

#define public_428590 _public_428590
#define public_4285a5 _public_4285a5
#define public_4285b0 _public_4285b0

PROC_DECLARE(0x428580, internal_428580, public_428580);
/* CHUNK of public_42d6f0 */
extern "C" NAKED register_t __cdecl internal_428580()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ds : [public_667c70]
        push edi
        mov edi, dword ptr ds : [eax]
        cmp edi, eax
        je public_4285b0
        push esi
        lea ecx, ds:[ecx]
        public_428590 : nop
        mov esi, dword ptr ds : [edi+8]
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x70]
        test al, al
        je public_4285a5
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x6C]
        public_4285a5 : nop
        mov edi, dword ptr ds : [edi]
        cmp edi, dword ptr ds : [public_667c70]
        jne public_428590
        pop esi
        public_4285b0 : nop
        pop edi
        ret 
        UNREACHABLE_TRAP(0x428580)
        ASM_EXPORT_ENTRY_FIRST(0x428590, public_428590)
        ASM_EXPORT_ENTRY(0x4285a5, public_4285a5)
        ASM_EXPORT_ENTRY_LAST(0x4285b0, public_4285b0)
    }
}

#undef public_428590
#undef public_4285a5
#undef public_4285b0

#pragma init_seg(compiler)
extern "C" void const* const public_428590 = __AsmFindLabelExport(&internal_428580, 0x428590);
extern "C" void const* const public_4285a5 = __AsmFindLabelExport(&internal_428580, 0x4285a5);
extern "C" void const* const public_4285b0 = __AsmFindLabelExport(&internal_428580, 0x4285b0);
