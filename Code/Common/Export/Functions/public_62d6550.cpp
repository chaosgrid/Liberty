#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62e89a0);
CLANG_FORWARD_PROC_SYMBOL(public_62e8ce0);
CLANG_FORWARD_PROC_SYMBOL(public_62e90a0);
CLANG_FORWARD_PROC_SYMBOL(public_62e9120);

#define public_62d65a1 _public_62d65a1

PROC_DECLARE(0x62d6550, internal_62d6550, public_62d6550);
extern "C" NAKED register_t __cdecl internal_62d6550()
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
        mov al, byte ptr ds : [esi+0x39]
        test al, al
        jne public_62d65a1
        mov ecx, dword ptr ds : [esi+8]
        push 0
        push 0
        add ecx, 0x18
        call public_62e89a0
        mov ecx, dword ptr ds : [esi+8]
        push 0
        add ecx, 0x18
        call public_62e90a0
        public_62d65a1 : nop
        mov ecx, dword ptr ds : [esi+8]
        push 0
        add ecx, 0x18
        call public_62e9120
        mov ecx, dword ptr ds : [esi+0xC]
        mov edx, dword ptr ds : [ecx+0xC]
        mov dword ptr ss : [esp+4], 0
        mov eax, dword ptr ss : [esp+4]
        add edx, 0x200
        mov dword ptr ds : [edx], eax
        mov dword ptr ss : [esp+8], 0
        mov ecx, dword ptr ss : [esp+8]
        mov dword ptr ss : [esp+0xC], 0
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [edx+4], ecx
        mov dword ptr ds : [edx+8], eax
        pop esi
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x62d6550)
    }
}

#undef public_62d65a1
