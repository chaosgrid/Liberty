#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4285f0);
CLANG_FORWARD_PROC_SYMBOL(public_428680);

#define public_428604 _public_428604
#define public_42860d _public_42860d
#define public_42861c _public_42861c

PROC_DECLARE(0x4285f0, internal_4285f0, public_4285f0);
extern "C" NAKED register_t __cdecl internal_4285f0()
{
    __asm
    {
        mov ecx, dword ptr ds : [public_667c70]
        mov eax, dword ptr ds : [ecx]
        xor edx, edx
        cmp eax, ecx
        push esi
        mov esi, dword ptr ss : [esp+8]
        je public_42861c
        push edi
        public_428604 : nop
        mov edi, dword ptr ds : [eax+8]
        cmp dword ptr ds : [edi+0x18], esi
        jne public_42860d
        inc edx
        public_42860d : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        jne public_428604
        test edx, edx
        pop edi
        je public_42861c
        xor al, al
        pop esi
        ret 
        public_42861c : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0xC]
        push 0
        push eax
        push ecx
        push esi
        call public_428680
        add esp, 0x10
        pop esi
        ret 
        UNREACHABLE_TRAP(0x4285f0)
    }
}

#undef public_428604
#undef public_42860d
#undef public_42861c
