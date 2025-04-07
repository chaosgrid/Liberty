#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f67660);
CLANG_FORWARD_PROC_SYMBOL(public_6f6e810);
CLANG_FORWARD_PROC_SYMBOL(public_6f6ee40);

#define public_6f6ee64 _public_6f6ee64
#define public_6f6ee74 _public_6f6ee74
#define public_6f6ee9b _public_6f6ee9b
#define public_6f6eeae _public_6f6eeae

PROC_DECLARE(0x6f6ee40, internal_6f6ee40, public_6f6ee40);
extern "C" NAKED register_t __cdecl internal_6f6ee40()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        sub esp, 0x24
        push esi
        push eax
        call public_6f67660
        add esp, 4
        test eax, eax
        je public_6f6eeae
        mov ecx, dword ptr ds : [public_6fd1bcc]
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [ecx]
        cmp eax, ecx
        je public_6f6eeae
        public_6f6ee64 : nop
        cmp dword ptr ds : [eax+0xC], edx
        je public_6f6ee74
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        jne public_6f6ee64
        pop esi
        add esp, 0x24
        ret 
        public_6f6ee74 : nop
        mov esi, dword ptr ds : [eax+0x10]
        lea ecx, ds:[eax+0x10]
        mov eax, dword ptr ds : [eax+0x14]
        lea edx, ss:[esp+4]
        push edx
        push eax
        push ecx
        call dword ptr ds : [public_6fb3564]
        mov eax, dword ptr ss : [esp+0x30]
        add esp, 0xC
        cmp eax, 7
        je public_6f6ee9b
        cmp eax, 8
        jne public_6f6eeae
        public_6f6ee9b : nop
        mov ecx, dword ptr ss : [esp+0x2C]
        mov edx, dword ptr ds : [ecx+4]
        push 0
        push esi
        push edx
        call public_6f6e810
        add esp, 0xC
        public_6f6eeae : nop
        pop esi
        add esp, 0x24
        ret 
        UNREACHABLE_TRAP(0x6f6ee40)
    }
}

#undef public_6f6ee64
#undef public_6f6ee74
#undef public_6f6ee9b
#undef public_6f6eeae
