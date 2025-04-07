#include "RemoteServer-PCH.h"


#define public_6bf9f92 _public_6bf9f92
#define public_6bf9fa7 _public_6bf9fa7

PROC_DECLARE(0x6bf9f70, internal_6bf9f70, public_6bf9f70);
extern "C" NAKED register_t __cdecl internal_6bf9f70()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push esi
        mov esi, ecx
        mov dword ptr ds : [esi+0x28], eax
        mov eax, dword ptr ds : [esi+0x24]
        test eax, eax
        je public_6bf9f92
        push eax
        call dword ptr ds : [public_6c0b20c]
        add esp, 4
        mov dword ptr ds : [esi+0x24], 0
        public_6bf9f92 : nop
        mov eax, dword ptr ss : [esp+8]
        test eax, eax
        je public_6bf9fa7
        push eax
        call dword ptr ds : [public_6c0b230]
        add esp, 4
        mov dword ptr ds : [esi+0x24], eax
        public_6bf9fa7 : nop
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x6bf9f70)
    }
}

#undef public_6bf9f92
#undef public_6bf9fa7
