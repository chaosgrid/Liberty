#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d2f249);
CLANG_FORWARD_PROC_SYMBOL(public_6d30c72);

#define public_6d30c89 _public_6d30c89
#define public_6d30c9d _public_6d30c9d
#define public_6d30cb3 _public_6d30cb3
#define public_6d30cc9 _public_6d30cc9

PROC_DECLARE(0x6d30c72, internal_6d30c72, public_6d30c72);
extern "C" NAKED register_t __cdecl internal_6d30c72()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        je public_6d30c89
        cmp dword ptr ds : [esi+0x38], 0
        je public_6d30c89
        push eax
        call public_6d2f249
        pop ecx
        public_6d30c89 : nop
        mov eax, dword ptr ds : [esi+8]
        test eax, eax
        je public_6d30c9d
        cmp dword ptr ds : [esi+0x3C], 0
        je public_6d30c9d
        push eax
        call public_6d2f249
        pop ecx
        public_6d30c9d : nop
        push edi
        mov edi, dword ptr ds : [esi+0x4C]
        test edi, edi
        je public_6d30cb3
        mov ecx, edi
        call public_6d30c72
        push edi
        call public_6d2f249
        pop ecx
        public_6d30cb3 : nop
        mov esi, dword ptr ds : [esi+0x50]
        test esi, esi
        pop edi
        je public_6d30cc9
        mov ecx, esi
        call public_6d30c72
        push esi
        call public_6d2f249
        pop ecx
        public_6d30cc9 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6d30c72)
    }
}

#undef public_6d30c89
#undef public_6d30c9d
#undef public_6d30cb3
#undef public_6d30cc9
