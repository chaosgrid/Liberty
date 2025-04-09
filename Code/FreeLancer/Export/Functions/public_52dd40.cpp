#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_52cfd0);
CLANG_FORWARD_PROC_SYMBOL(public_52dde0);
CLANG_FORWARD_PROC_SYMBOL(public_54bb00);
CLANG_FORWARD_PROC_SYMBOL(public_5532d0);

#define public_52dd68 _public_52dd68
#define public_52dd96 _public_52dd96
#define public_52dd9b _public_52dd9b
#define public_52ddad _public_52ddad
#define public_52ddbc _public_52ddbc
#define public_52ddbe _public_52ddbe
#define public_52ddd0 _public_52ddd0

PROC_DECLARE(0x52dd40, internal_52dd40, public_52dd40);
extern "C" NAKED register_t __cdecl internal_52dd40()
{
    __asm
    {
        push esi
        mov esi, ecx
        push edi
        mov edi, dword ptr ds : [esi+4]
        test edi, edi
        je public_52ddd0
        call public_52cfd0
        call dword ptr ds : [public_5c60d0]
        test al, al
        jne public_52dd68
        mov eax, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [eax+0x94]
        public_52dd68 : nop
        mov ecx, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x20]
        push eax
        call public_5532d0
        mov eax, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [eax+0x10]
        add esp, 4
        test eax, eax
        je public_52dd96
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 3
        cmp cl, 3
        jne public_52dd96
        mov eax, dword ptr ds : [eax+0xB4]
        jmp public_52dd9b
        public_52dd96 : nop
        call public_54bb00
        public_52dd9b : nop
        test eax, eax
        mov edi, dword ptr ss : [esp+0xC]
        je public_52ddad
        mov ecx, dword ptr ds : [esi+4]
        push edi
        call dword ptr ds : [public_5c6644]
        public_52ddad : nop
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        je public_52ddbc
        call dword ptr ds : [public_5c6548]
        jmp public_52ddbe
        public_52ddbc : nop
        xor eax, eax
        public_52ddbe : nop
        mov ecx, dword ptr ds : [eax+0x90]
        test ecx, ecx
        jne public_52ddd0
        push edi
        mov ecx, esi
        call public_52dde0
        public_52ddd0 : nop
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x52dd40)
    }
}

#undef public_52dd68
#undef public_52dd96
#undef public_52dd9b
#undef public_52ddad
#undef public_52ddbc
#undef public_52ddbe
#undef public_52ddd0
