#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d49f60);

#define public_6d45704 _public_6d45704

PROC_DECLARE(0x6d456b0, internal_6d456b0, public_6d456b0);
extern "C" NAKED register_t __cdecl internal_6d456b0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        test esi, esi
        push edi
        mov edi, ecx
        jbe public_6d45704
        mov ecx, dword ptr ds : [public_6d90264]
        lea eax, ds:[esi-1]
        cmp eax, ecx
        jae public_6d45704
        mov ecx, dword ptr ds : [public_6d90260]
        imul eax, 0x418
        mov edx, dword ptr ds : [eax+ecx+0x348]
        test edx, edx
        je public_6d45704
        mov eax, dword ptr ss : [esp+0xC]
        mov edx, esi
        imul edx, 0x418
        push esi
        push eax
        lea ecx, ds:[edx+ecx-0x418]
        call public_6d49f60
        mov eax, dword ptr ds : [edi]
        push 0
        push esi
        mov ecx, edi
        call dword ptr ds : [eax+0x4C]
        public_6d45704 : nop
        pop edi
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x6d456b0)
    }
}

#undef public_6d45704
