#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620bd70);

#define public_620bd7e _public_620bd7e
#define public_620bd90 _public_620bd90
#define public_620bd97 _public_620bd97

PROC_DECLARE(0x620bd70, internal_620bd70, public_620bd70);
extern "C" NAKED register_t __cdecl internal_620bd70()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        cmp esi, edi
        je public_620bd97
        public_620bd7e : nop
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_620bd90
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi], 0
        public_620bd90 : nop
        add esi, 4
        cmp esi, edi
        jne public_620bd7e
        public_620bd97 : nop
        pop edi
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x620bd70)
    }
}

#undef public_620bd7e
#undef public_620bd90
#undef public_620bd97
