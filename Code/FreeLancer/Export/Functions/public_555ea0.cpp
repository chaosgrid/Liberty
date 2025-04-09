#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_555ea0);
CLANG_FORWARD_PROC_SYMBOL(public_558de0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_555ec0 _public_555ec0
#define public_555ecd _public_555ecd
#define public_555ef0 _public_555ef0

PROC_DECLARE(0x555ea0, internal_555ea0, public_555ea0);
/* CHUNK of public_444960 */
extern "C" NAKED register_t __cdecl internal_555ea0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push esi
        mov esi, ecx
        push esi
        mov dword ptr ds : [esi], offset public_5e1218
        call public_558de0
        mov ecx, dword ptr ds : [public_67999c]
        mov eax, dword ptr ds : [ecx]
        add esp, 4
        cmp eax, ecx
        je public_555ef0
        mov edi, edi
        public_555ec0 : nop
        cmp dword ptr ds : [eax+8], esi
        je public_555ecd
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        jne public_555ec0
        pop esi
        ret 
        public_555ecd : nop
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [ecx+4], edx
        call public_5b7e1d
        mov eax, dword ptr ds : [public_6799a0]
        add esp, 4
        dec eax
        mov dword ptr ds : [public_6799a0], eax
        public_555ef0 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x555ea0)
        ASM_EXPORT_ENTRY_FIRST(0x555ec0, public_555ec0)
        ASM_EXPORT_ENTRY(0x555ecd, public_555ecd)
        ASM_EXPORT_ENTRY_LAST(0x555ef0, public_555ef0)
    }
}

#undef public_555ec0
#undef public_555ecd
#undef public_555ef0

#pragma init_seg(compiler)
extern "C" void const* const public_555ec0 = __AsmFindLabelExport(&internal_555ea0, 0x555ec0);
extern "C" void const* const public_555ecd = __AsmFindLabelExport(&internal_555ea0, 0x555ecd);
extern "C" void const* const public_555ef0 = __AsmFindLabelExport(&internal_555ea0, 0x555ef0);
