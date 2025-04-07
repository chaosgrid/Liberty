#include "Server-PCH.h"


#define public_6ce8cff _public_6ce8cff
#define public_6ce8d01 _public_6ce8d01
#define public_6ce8d37 _public_6ce8d37

PROC_DECLARE(0x6ce8cd0, internal_6ce8cd0, public_6ce8cd0);
extern "C" NAKED register_t __cdecl internal_6ce8cd0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        push 0
        push eax
        mov esi, ecx
        call dword ptr ds : [public_6d64250]
        mov dword ptr ss : [esp+0x10], eax
        mov eax, dword ptr ds : [esi+0x10]
        add esp, 8
        test eax, eax
        je public_6ce8cff
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x103
        cmp ecx, 0x103
        je public_6ce8d01
        public_6ce8cff : nop
        xor eax, eax
        public_6ce8d01 : nop
        lea edx, ss:[esp+8]
        push edx
        lea ecx, ds:[eax+0x144]
        call dword ptr ds : [public_6d6424c]
        test eax, eax
        je public_6ce8d37
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [esi]
        push ebx
        push 1
        push ecx
        mov ecx, dword ptr ss : [esp+0x18]
        push ecx
        push eax
        mov ecx, esi
        mov bl, 1
        call dword ptr ds : [edx+0x220]
        mov al, bl
        pop ebx
        pop esi
        ret 0xC
        public_6ce8d37 : nop
        xor al, al
        pop esi
        ret 0xC
        UNREACHABLE_TRAP(0x6ce8cd0)
    }
}

#undef public_6ce8cff
#undef public_6ce8d01
#undef public_6ce8d37
