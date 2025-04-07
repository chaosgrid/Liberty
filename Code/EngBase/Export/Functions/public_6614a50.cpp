#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6612a00);
CLANG_FORWARD_PROC_SYMBOL(public_6612e70);
CLANG_FORWARD_PROC_SYMBOL(public_66142f0);
CLANG_FORWARD_PROC_SYMBOL(public_6615ec0);
CLANG_FORWARD_PROC_SYMBOL(public_6617660);
CLANG_FORWARD_PROC_SYMBOL(public_6618070);
CLANG_FORWARD_PROC_SYMBOL(public_6619790);
CLANG_FORWARD_PROC_SYMBOL(public_661a690);

#define public_6614a98 _public_6614a98
#define public_6614a9c _public_6614a9c
#define public_6614ac7 _public_6614ac7
#define public_6614ad6 _public_6614ad6
#define public_6614af8 _public_6614af8
#define public_6614b19 _public_6614b19

PROC_DECLARE(0x6614a50, internal_6614a50, public_6614a50);
extern "C" NAKED register_t __cdecl internal_6614a50()
{
    __asm
    {
        sub esp, 0x18
        push ebp
        push edi
        mov edi, dword ptr ss : [esp+0x24]
        lea eax, ss:[esp+0x28]
        lea ecx, ss:[esp+8]
        push eax
        lea ebp, ds:[edi+0x14]
        push ecx
        mov ecx, ebp
        mov dword ptr ss : [esp+0x1C], ebp
        call public_6612e70
        mov ecx, dword ptr ds : [edi+0x18]
        mov eax, dword ptr ss : [esp+8]
        cmp eax, ecx
        je public_6614b19
        mov ecx, dword ptr ds : [eax+0x20]
        push ebx
        mov ebx, dword ptr ds : [eax+0x2C]
        push esi
        mov esi, dword ptr ds : [eax+0x1C]
        mov dword ptr ss : [esp+0x18], ebx
        cmp esi, ecx
        je public_6614af8
        lea ebp, ds:[edi+0x28]
        jmp public_6614a9c
        public_6614a98 : nop
        mov edi, dword ptr ss : [esp+0x2C]
        public_6614a9c : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, edi
        push edx
        call public_6615ec0
        push esi
        mov ecx, ebp
        call public_661a690
        mov ebx, eax
        lea eax, ss:[esp+0x20]
        push esi
        push eax
        mov ecx, ebp
        call public_6619790
        mov edi, dword ptr ds : [eax]
        cmp edi, ebx
        mov dword ptr ss : [esp+0x14], edi
        je public_6614ad6
        public_6614ac7 : nop
        lea ecx, ss:[esp+0x14]
        call public_66142f0
        cmp dword ptr ss : [esp+0x14], ebx
        jne public_6614ac7
        public_6614ad6 : nop
        push ebx
        lea ecx, ss:[esp+0x28]
        push edi
        push ecx
        mov ecx, ebp
        call public_6618070
        add esi, 4
        mov eax, dword ptr ss : [esp+0x10]
        cmp esi, dword ptr ds : [eax+0x20]
        jne public_6614a98
        mov ebx, dword ptr ss : [esp+0x18]
        mov ebp, dword ptr ss : [esp+0x1C]
        public_6614af8 : nop
        lea ecx, ds:[eax+0x10]
        call public_6612a00
        mov edx, dword ptr ss : [esp+0x10]
        lea eax, ss:[esp+0x2C]
        push edx
        push eax
        mov ecx, ebp
        call public_6617660
        mov ecx, dword ptr ds : [ebx]
        push ebx
        call dword ptr ds : [ecx+8]
        pop esi
        pop ebx
        public_6614b19 : nop
        pop edi
        pop ebp
        add esp, 0x18
        ret 8
        UNREACHABLE_TRAP(0x6614a50)
    }
}

#undef public_6614a98
#undef public_6614a9c
#undef public_6614ac7
#undef public_6614ad6
#undef public_6614af8
#undef public_6614b19
