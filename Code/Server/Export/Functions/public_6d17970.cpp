#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d14170);
CLANG_FORWARD_PROC_SYMBOL(public_6d14350);
CLANG_FORWARD_PROC_SYMBOL(public_6d15650);
CLANG_FORWARD_PROC_SYMBOL(public_6d43650);

#define public_6d17a04 _public_6d17a04

PROC_DECLARE(0x6d17970, internal_6d17970, public_6d17970);
extern "C" NAKED register_t __cdecl internal_6d17970()
{
    __asm
    {
        sub esp, 8
        push ebx
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x1C]
        test edi, edi
        jbe public_6d17a04
        mov ecx, dword ptr ds : [public_6d90264]
        lea eax, ds:[edi-1]
        cmp eax, ecx
        jae public_6d17a04
        mov ecx, dword ptr ds : [public_6d90260]
        imul eax, 0x418
        mov edx, dword ptr ds : [eax+ecx+0x348]
        test edx, edx
        je public_6d17a04
        mov esi, edi
        imul esi, 0x418
        mov edx, dword ptr ds : [esi+ecx-0x20]
        mov eax, 0x3FFFFFFF
        test eax, edx
        jne public_6d17a04
        test dword ptr ds : [esi+ecx-0x2C], eax
        je public_6d17a04
        mov ebx, dword ptr ss : [esp+0x18]
        push ebx
        call public_6d15650
        mov ecx, eax
        call public_6d14170
        test eax, eax
        je public_6d17a04
        mov eax, dword ptr ds : [public_6d90260]
        push ebx
        push edi
        mov dword ptr ds : [esi+eax-0x20], ebx
        call public_6d15650
        mov ecx, eax
        call public_6d14350
        lea ecx, ss:[esp+0xC]
        push ecx
        push 0x29
        mov dword ptr ss : [esp+0x14], ebx
        mov dword ptr ss : [esp+0x18], edi
        call public_6d43650
        add esp, 8
        public_6d17a04 : nop
        pop edi
        pop esi
        pop ebx
        add esp, 8
        ret 8
        UNREACHABLE_TRAP(0x6d17970)
    }
}

#undef public_6d17a04
