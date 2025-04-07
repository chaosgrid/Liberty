#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d43650);

#define public_6cf0fe1 _public_6cf0fe1

PROC_DECLARE(0x6cf0fa0, internal_6cf0fa0, public_6cf0fa0);
extern "C" NAKED register_t __cdecl internal_6cf0fa0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        test ecx, ecx
        jbe public_6cf0fe1
        mov edx, dword ptr ds : [public_6d90264]
        lea eax, ds:[ecx-1]
        cmp eax, edx
        jae public_6cf0fe1
        mov edx, dword ptr ds : [public_6d90260]
        imul eax, 0x418
        push esi
        mov esi, dword ptr ds : [eax+edx+0x348]
        test esi, esi
        pop esi
        je public_6cf0fe1
        lea eax, ss:[esp+4]
        push eax
        push 0x33
        mov dword ptr ss : [esp+0xC], ecx
        call public_6d43650
        add esp, 8
        public_6cf0fe1 : nop
        ret 0xC
        UNREACHABLE_TRAP(0x6cf0fa0)
    }
}

#undef public_6cf0fe1
