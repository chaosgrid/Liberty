#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f3a240);

#define public_6f3a350 _public_6f3a350
#define public_6f3a35e _public_6f3a35e
#define public_6f3a36a _public_6f3a36a

PROC_DECLARE(0x6f3a330, internal_6f3a330, public_6f3a330);
extern "C" NAKED register_t __cdecl internal_6f3a330()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [ecx+0xBC]
        mov edx, dword ptr ds : [ecx+0xC0]
        cmp eax, edx
        push esi
        push edi
        je public_6f3a35e
        mov esi, dword ptr ss : [esp+0x10]
        lea ebx, ds:[ebx]
        public_6f3a350 : nop
        mov edi, dword ptr ds : [eax]
        cmp dword ptr ds : [edi+0xC], esi
        je public_6f3a35e
        add eax, 4
        cmp eax, edx
        jne public_6f3a350
        public_6f3a35e : nop
        cmp eax, edx
        pop edi
        pop esi
        jne public_6f3a36a
        or eax, 0xFFFFFFFF
        ret 8
        public_6f3a36a : nop
        push eax
        call public_6f3a240
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x6f3a330)
    }
}

#undef public_6f3a350
#undef public_6f3a35e
#undef public_6f3a36a
