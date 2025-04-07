#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ecbfe0);
CLANG_FORWARD_PROC_SYMBOL(public_6ecc1f0);

#define public_6ecc222 _public_6ecc222
#define public_6ecc243 _public_6ecc243
#define public_6ecc24c _public_6ecc24c
#define public_6ecc261 _public_6ecc261

PROC_DECLARE(0x6ecc1f0, internal_6ecc1f0, public_6ecc1f0);
/* CHUNK of public_6ecbfc0 */
extern "C" NAKED register_t __cdecl internal_6ecc1f0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push ecx
        mov eax, dword ptr ss : [esp+8]
        push esi
        mov esi, ecx
        push edi
        mov dword ptr ss : [esp+8], 0
        mov dword ptr ds : [esi+0x40], eax
        call dword ptr ds : [public_6ed1008]
        mov edi, eax
        mov eax, dword ptr ss : [esp+8]
        test eax, eax
        je public_6ecc222
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+8], 0
        public_6ecc222 : nop
        mov edx, dword ptr ds : [edi]
        lea eax, ss:[esp+8]
        push eax
/*FIXUP push offset public_6ed48b4 @0x6ecc229*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed48b4
        push edi
        call dword ptr ds : [edx]
        test eax, eax
        jge public_6ecc24c
        mov eax, dword ptr ss : [esp+8]
        test eax, eax
        je public_6ecc243
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        public_6ecc243 : nop
        pop edi
        or eax, 0xFFFFFFFF
        pop esi
        pop ecx
        ret 4
        public_6ecc24c : nop
        mov ecx, esi
        call public_6ecbfe0
        mov eax, dword ptr ss : [esp+8]
        test eax, eax
        je public_6ecc261
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        public_6ecc261 : nop
        pop edi
        xor eax, eax
        pop esi
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x6ecc1f0)
        ASM_EXPORT_ENTRY_FIRST(0x6ecc222, public_6ecc222)
        ASM_EXPORT_ENTRY(0x6ecc243, public_6ecc243)
        ASM_EXPORT_ENTRY(0x6ecc24c, public_6ecc24c)
        ASM_EXPORT_ENTRY_LAST(0x6ecc261, public_6ecc261)
    }
}

#undef public_6ecc222
#undef public_6ecc243
#undef public_6ecc24c
#undef public_6ecc261

#pragma init_seg(compiler)
extern "C" void const* const public_6ecc222 = __AsmFindLabelExport(&internal_6ecc1f0, 0x6ecc222);
extern "C" void const* const public_6ecc243 = __AsmFindLabelExport(&internal_6ecc1f0, 0x6ecc243);
extern "C" void const* const public_6ecc24c = __AsmFindLabelExport(&internal_6ecc1f0, 0x6ecc24c);
extern "C" void const* const public_6ecc261 = __AsmFindLabelExport(&internal_6ecc1f0, 0x6ecc261);
