#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_428640);
CLANG_FORWARD_PROC_SYMBOL(public_428680);

#define public_428651 _public_428651
#define public_42865f _public_42865f
#define public_428676 _public_428676

PROC_DECLARE(0x428640, internal_428640, public_428640);
extern "C" NAKED register_t __cdecl internal_428640()
{
    __asm
    {
        mov edx, dword ptr ds : [public_667c70]
        mov eax, dword ptr ds : [edx]
        cmp eax, edx
        push esi
        mov esi, dword ptr ss : [esp+8]
        je public_42865f
        public_428651 : nop
        mov ecx, dword ptr ds : [eax+8]
        cmp dword ptr ds : [ecx+0x18], esi
        je public_428676
        mov eax, dword ptr ds : [eax]
        cmp eax, edx
        jne public_428651
        public_42865f : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+0xC]
        push 0
        push ecx
        push edx
        push esi
        call public_428680
        add esp, 0x10
        pop esi
        ret 
        public_428676 : nop
        mov eax, dword ptr ds : [ecx]
        push 0
        call dword ptr ds : [eax+0x64]
        pop esi
        ret 
        UNREACHABLE_TRAP(0x428640)
    }
}

#undef public_428651
#undef public_42865f
#undef public_428676
