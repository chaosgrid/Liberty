#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62e89a0);
CLANG_FORWARD_PROC_SYMBOL(public_62e8ce0);

#define public_62d570e _public_62d570e

PROC_DECLARE(0x62d56b0, internal_62d56b0, public_62d56b0);
extern "C" NAKED register_t __cdecl internal_62d56b0()
{
    __asm
    {
        sub esp, 0xC
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+8]
        lea eax, ss:[esp+4]
        push eax
        add ecx, 0x18
        mov dword ptr ss : [esp+8], 0
        mov dword ptr ss : [esp+0xC], 0
        mov dword ptr ss : [esp+0x10], 0
        call public_62e8ce0
        cmp dword ptr ds : [esi+0x34], 1
        je public_62d570e
        mov eax, dword ptr ds : [esi+0x44]
        test eax, eax
        jl public_62d570e
        cmp eax, 1
        jg public_62d570e
        mov ecx, dword ptr ds : [esi+8]
        push 0
        push 0
        add ecx, 0x18
        call public_62e89a0
        mov ecx, dword ptr ds : [esi+8]
        push 2
        push 0
        add ecx, 0x18
        call public_62e89a0
        public_62d570e : nop
        mov ecx, dword ptr ds : [esi+0xC]
        mov edx, dword ptr ds : [ecx+0xC]
        mov dword ptr ds : [edx+0x64], 0
        mov eax, dword ptr ds : [esi+0xC]
        mov ecx, dword ptr ds : [eax+0xC]
        mov dword ptr ss : [esp+4], 0
        mov edx, dword ptr ss : [esp+4]
        add ecx, 0x200
        mov dword ptr ds : [ecx], edx
        mov dword ptr ss : [esp+8], 0
        mov eax, dword ptr ss : [esp+8]
        mov dword ptr ss : [esp+0xC], 0
        mov edx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [ecx+4], eax
        mov dword ptr ds : [ecx+8], edx
        pop esi
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x62d56b0)
    }
}

#undef public_62d570e
