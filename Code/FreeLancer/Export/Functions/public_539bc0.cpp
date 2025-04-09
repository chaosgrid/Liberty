#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_539bc0);

PROC_DECLARE(0x539bc0, internal_539bc0, public_539bc0);
extern "C" NAKED register_t __cdecl internal_539bc0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        push eax
        mov esi, ecx
        call dword ptr ds : [public_5c69dc]
        mov ecx, dword ptr ss : [esp+0x10]
        add esp, 4
        push eax
        mov dword ptr ds : [esi+0x10], eax
        call dword ptr ds : [public_5c6a0c]
        mov ecx, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [ecx]
        mov ecx, dword ptr ds : [esi+0x10]
        mov ecx, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [eax]
        push 0
        push 0
        push ecx
        push eax
        call dword ptr ds : [edx+0x6C]
        push 1
        lea ecx, ds:[esi+0xC]
        call dword ptr ds : [public_5c67e8]
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x539bc0)
    }
}
