#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5361e0);
CLANG_FORWARD_PROC_SYMBOL(public_547500);

#define public_53e8d9 _public_53e8d9
#define public_53e8e7 _public_53e8e7

PROC_DECLARE(0x53e8a0, internal_53e8a0, public_53e8a0);
extern "C" NAKED register_t __cdecl internal_53e8a0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        cmp eax, 2
        push esi
        mov esi, ecx
        jne public_53e8e7
        mov eax, dword ptr ds : [esi+0xAC]
        test eax, eax
        je public_53e8d9
        mov eax, dword ptr ds : [esi]
        call dword ptr ds : [eax]
        mov ecx, dword ptr ds : [esi+0xAC]
        push eax
        push esi
        push ecx
        call public_5361e0
        add esp, 0xC
        push eax
        lea ecx, ds:[esi+0x20]
        call dword ptr ds : [public_5c67f4]
        pop esi
        ret 4
        public_53e8d9 : nop
        mov edx, dword ptr ds : [esi]
        push 1
        call dword ptr ds : [edx+0x15C]
        pop esi
        ret 4
        public_53e8e7 : nop
        push eax
        call public_547500
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x53e8a0)
    }
}

#undef public_53e8d9
#undef public_53e8e7
