#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41c8d0);
CLANG_FORWARD_PROC_SYMBOL(public_5b73e0);

#define public_41c8f4 _public_41c8f4

PROC_DECLARE(0x41c8d0, internal_41c8d0, public_41c8d0);
extern "C" NAKED register_t __cdecl internal_41c8d0()
{
    __asm
    {
        sub esp, 0x18
        push esi
        mov esi, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ds : [esi]
        push edi
        push esi
        call dword ptr ds : [eax+0x40]
        mov edi, eax
        mov eax, dword ptr ds : [public_616720]
        test eax, eax
        jne public_41c8f4
        call public_5b73e0
        mov dword ptr ds : [public_616720], eax
        public_41c8f4 : nop
        mov edx, dword ptr ss : [esp+0x28]
        mov ecx, dword ptr ds : [eax]
        push edx
        push edi
        lea edx, ss:[esp+0x10]
        push edx
        push eax
        call dword ptr ds : [ecx+0x28]
        mov ecx, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+8]
        mov dword ptr ss : [esp+0x18], ecx
        mov ecx, dword ptr ss : [esp+0x2C]
        mov dword ptr ss : [esp+0x1C], edx
        push ecx
        lea edx, ss:[esp+0x18]
        push edx
        mov dword ptr ss : [esp+0x1C], eax
        mov eax, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [eax+0x3C]
        xor ecx, ecx
        cmp eax, 3
        setge cl
        pop edi
        mov al, cl
        pop esi
        add esp, 0x18
        ret 
        UNREACHABLE_TRAP(0x41c8d0)
    }
}

#undef public_41c8f4
