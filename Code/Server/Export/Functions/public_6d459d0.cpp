#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d4c800);

#define public_6d45a2d _public_6d45a2d

PROC_DECLARE(0x6d459d0, internal_6d459d0, public_6d459d0);
extern "C" NAKED register_t __cdecl internal_6d459d0()
{
    __asm
    {
        call dword ptr ds : [public_6d641c0]
        test al, al
        je public_6d45a2d
        mov ecx, dword ptr ss : [esp+0xC]
        test ecx, ecx
        jbe public_6d45a2d
        mov edx, dword ptr ds : [public_6d90264]
        lea eax, ds:[ecx-1]
        cmp eax, edx
        jae public_6d45a2d
        mov edx, dword ptr ds : [public_6d90260]
        imul eax, 0x418
        push esi
        mov esi, dword ptr ds : [eax+edx+0x348]
        test esi, esi
        pop esi
        je public_6d45a2d
        imul ecx, 0x418
        lea eax, ds:[ecx+edx]
        test dword ptr ds : [eax-0x34], 0x3FFFFFFF
        jne public_6d45a2d
        mov dword ptr ss : [esp+0xC], 0
        lea ecx, ds:[eax-0x418]
        jmp public_6d4c800
        public_6d45a2d : nop
        ret 0xC
        UNREACHABLE_TRAP(0x6d459d0)
    }
}

#undef public_6d45a2d
