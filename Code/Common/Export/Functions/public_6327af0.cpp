#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6327af0);

#define public_6327b23 _public_6327b23
#define public_6327b38 _public_6327b38

PROC_DECLARE(0x6327af0, internal_6327af0, public_6327af0);
extern "C" NAKED register_t __cdecl internal_6327af0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0xC]
        test eax, eax
        mov dword ptr ds : [esi], offset public_63a4608
        je public_6327b23
        mov ecx, dword ptr ds : [esi+0x14]
        push ecx
        push eax
        call dword ptr ds : [public_6399088]
        mov edx, dword ptr ds : [esi+0xC]
        push edx
        call dword ptr ds : [public_6399080]
        mov dword ptr ds : [esi+0xC], 0
        mov dword ptr ds : [esi+0x14], 0
        public_6327b23 : nop
        mov eax, dword ptr ds : [esi+0x10]
        test eax, eax
        je public_6327b38
        push eax
        call dword ptr ds : [public_639907c]
        mov dword ptr ds : [esi+0x10], 0
        public_6327b38 : nop
        mov dword ptr ds : [esi], offset public_63a4610
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6327af0)
    }
}

#undef public_6327b23
#undef public_6327b38
