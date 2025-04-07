#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6348720);

#define public_6348732 _public_6348732
#define public_634874a _public_634874a

PROC_DECLARE(0x6348720, internal_6348720, public_6348720);
extern "C" NAKED register_t __cdecl internal_6348720()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        test edx, edx
        push esi
        mov esi, ecx
        jne public_6348732
        mov byte ptr ds : [esi+4], dl
        pop esi
        ret 4
        public_6348732 : nop
        push edi
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, edx
        repne scasb
        not ecx
        dec ecx
        cmp ecx, 8
        pop edi
        jbe public_634874a
        mov dword ptr ds : [0], eax
        public_634874a : nop
        push 8
        push edx
        add esi, 4
        push esi
        call dword ptr ds : [public_63992e0]
        add esp, 0xC
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6348720)
    }
}

#undef public_6348732
#undef public_634874a
