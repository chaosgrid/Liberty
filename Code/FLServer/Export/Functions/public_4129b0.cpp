#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_418ab0);

#define public_412a18 _public_412a18

PROC_DECLARE(0x4129b0, internal_4129b0, public_4129b0);
extern "C" NAKED register_t __cdecl internal_4129b0()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        mov esi, ecx
        lea eax, ds:[esi+0x60]
        push eax
        push 3
        push edi
        call public_418ab0
        lea ecx, ds:[esi+0xE0]
        push ecx
        push 2
        push edi
        call public_418ab0
        lea edx, ds:[esi+0x120]
        push edx
        push 0x415
        push edi
        call public_418ab0
        lea eax, ds:[esi+0x160]
        push eax
        push 0x405
        push edi
        call public_418ab0
        lea ecx, ds:[esi+0x1A0]
        test ecx, ecx
        je public_412a18
        lea eax, ds:[esi+0x1A4]
        push eax
        push 0x410
        push edi
        call public_418ab0
        pop edi
        pop esi
        ret 4
        public_412a18 : nop
        xor eax, eax
        push eax
        push 0x410
        push edi
        call public_418ab0
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x4129b0)
    }
}

#undef public_412a18
