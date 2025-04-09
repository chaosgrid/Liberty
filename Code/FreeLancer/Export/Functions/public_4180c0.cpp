#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_412670);
CLANG_FORWARD_PROC_SYMBOL(public_4180c0);
CLANG_FORWARD_PROC_SYMBOL(public_52afa0);

#define public_4180d3 _public_4180d3
#define public_4180e4 _public_4180e4
#define public_4180fc _public_4180fc
#define public_418103 _public_418103
#define public_418119 _public_418119

PROC_DECLARE(0x4180c0, internal_4180c0, public_4180c0);
extern "C" NAKED register_t __cdecl internal_4180c0()
{
    __asm
    {
        push ecx
        inc dword ptr ds : [public_6105b0]
        jne public_4180d3
        mov dword ptr ds : [public_6105b0], 1
        public_4180d3 : nop
        mov ecx, dword ptr ds : [public_616528]
        mov eax, dword ptr ds : [ecx]
        cmp eax, ecx
        mov dword ptr ss : [esp], eax
        je public_418119
        push esi
        public_4180e4 : nop
        mov esi, dword ptr ds : [eax+0x10]
        test esi, esi
        je public_418103
        mov ecx, dword ptr ds : [esi]
        test ecx, ecx
        je public_4180fc
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+4]
        mov dword ptr ds : [esi], 0
        public_4180fc : nop
        mov dword ptr ds : [esi+4], 0
        public_418103 : nop
        lea ecx, ss:[esp+4]
        call public_52afa0
        mov eax, dword ptr ss : [esp+4]
        cmp eax, dword ptr ds : [public_616528]
        jne public_4180e4
        pop esi
        public_418119 : nop
        mov ecx, dword ptr ds : [public_616660]
        push ecx
        call dword ptr ds : [public_5c71d8]
        mov edx, dword ptr ds : [public_616658]
        mov eax, dword ptr ds : [public_616664]
        add esp, 4
        push edx
        push eax
        mov dword ptr ds : [public_616660], 0
        call dword ptr ds : [public_5c6e0c]
        mov ecx, dword ptr ds : [public_616654]
        push ecx
        call dword ptr ds : [public_5c6e3c]
        mov edx, dword ptr ds : [public_616664]
        push edx
        call dword ptr ds : [public_5c6e38]
        mov eax, dword ptr ds : [public_5c6de0]
        mov ecx, dword ptr ds : [eax]
        push ecx
        mov ecx, offset public_616654
        call public_412670
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x4180c0)
    }
}

#undef public_4180d3
#undef public_4180e4
#undef public_4180fc
#undef public_418103
#undef public_418119
