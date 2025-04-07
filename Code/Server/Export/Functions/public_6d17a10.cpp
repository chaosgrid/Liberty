#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d143e0);
CLANG_FORWARD_PROC_SYMBOL(public_6d15650);
CLANG_FORWARD_PROC_SYMBOL(public_6d17a10);
CLANG_FORWARD_PROC_SYMBOL(public_6d43650);
CLANG_FORWARD_PROC_SYMBOL(public_6d48d20);

#define public_6d17ab5 _public_6d17ab5
#define public_6d17aba _public_6d17aba

PROC_DECLARE(0x6d17a10, internal_6d17a10, public_6d17a10);
extern "C" NAKED register_t __cdecl internal_6d17a10()
{
    __asm
    {
        sub esp, 8
        push ebx
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x1C]
        test edi, edi
        jbe public_6d17aba
        mov ecx, dword ptr ds : [public_6d90264]
        lea eax, ds:[edi-1]
        cmp eax, ecx
        jae public_6d17aba
        mov ecx, dword ptr ds : [public_6d90260]
        imul eax, 0x418
        mov edx, dword ptr ds : [eax+ecx+0x348]
        test edx, edx
        je public_6d17aba
        mov esi, edi
        imul esi, 0x418
        mov eax, dword ptr ds : [esi+ecx-0x2C]
        test eax, 0x3FFFFFFF
        lea ecx, ds:[esi+ecx-0x418]
        je public_6d17ab5
        mov eax, dword ptr ds : [ecx+0x3F8]
        test eax, 0x3FFFFFFF
        je public_6d17ab5
        mov ebx, dword ptr ss : [esp+0x18]
        cmp eax, ebx
        jne public_6d17ab5
        lea eax, ss:[esp+0xC]
        push eax
        push 0x2A
        mov dword ptr ss : [esp+0x14], ebx
        mov dword ptr ss : [esp+0x18], edi
        call public_6d43650
        add esp, 8
        push ebx
        push edi
        call public_6d15650
        mov ecx, eax
        call public_6d143e0
        mov ecx, dword ptr ds : [public_6d90260]
        pop edi
        mov dword ptr ds : [esi+ecx-0x20], 0
        pop esi
        pop ebx
        add esp, 8
        ret 8
        public_6d17ab5 : nop
        call public_6d48d20
        public_6d17aba : nop
        pop edi
        pop esi
        pop ebx
        add esp, 8
        ret 8
        UNREACHABLE_TRAP(0x6d17a10)
    }
}

#undef public_6d17ab5
#undef public_6d17aba
