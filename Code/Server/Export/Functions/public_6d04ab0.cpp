#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d04ab0);
CLANG_FORWARD_PROC_SYMBOL(public_6d04d60);
CLANG_FORWARD_PROC_SYMBOL(public_6d09bb0);
CLANG_FORWARD_PROC_SYMBOL(public_6d09c80);
CLANG_FORWARD_PROC_SYMBOL(public_6d15d10);
CLANG_FORWARD_PROC_SYMBOL(public_6d58e50);
CLANG_FORWARD_PROC_SYMBOL(public_6d5c600);

#define public_6d04b39 _public_6d04b39
#define public_6d04b3e _public_6d04b3e
#define public_6d04b64 _public_6d04b64
#define public_6d04b75 _public_6d04b75
#define public_6d04b95 _public_6d04b95

PROC_DECLARE(0x6d04ab0, internal_6d04ab0, public_6d04ab0);
extern "C" NAKED register_t __cdecl internal_6d04ab0()
{
    __asm
    {
        sub esp, 0x14
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x24]
        push edi
        mov edi, ecx
        lea ebp, ds:[esi+4]
        push ebp
        lea eax, ss:[esp+0x2C]
        lea ebx, ds:[edi+0x10]
        push eax
        mov ecx, ebx
        call public_6d15d10
        mov al, byte ptr ds : [esi+0xC]
        mov ecx, dword ptr ds : [edi+0x14]
        test al, al
        mov eax, dword ptr ss : [esp+0x28]
        je public_6d04b75
        cmp eax, ecx
        jne public_6d04b64
        add edi, 4
        push edi
        lea ecx, ss:[esp+0x14]
        push ecx
        mov ecx, offset public_6d8da2c
        call public_6d15d10
        mov al, byte ptr ds : [esi+0xD]
        mov edx, dword ptr ss : [esp+0x10]
        add esi, 8
        test al, al
        lea ecx, ds:[edx+0x10]
        push esi
        je public_6d04b39
        call public_6d09c80
        mov esi, eax
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x150]
        mov ecx, eax
        call dword ptr ds : [public_6d6419c]
        fld dword ptr ds : [eax+0x5C]
        mov ecx, dword ptr ds : [edi]
        push ecx
        push ecx
        fstp dword ptr ss : [esp]
        mov ecx, esi
        call public_6d04d60
        mov eax, esi
        jmp public_6d04b3e
        public_6d04b39 : nop
        call public_6d09bb0
        public_6d04b3e : nop
        mov ecx, dword ptr ss : [ebp]
        lea edx, ss:[esp+0x14]
        mov dword ptr ss : [esp+0x18], eax
        push edx
        lea eax, ss:[esp+0x20]
        mov dword ptr ss : [esp+0x18], ecx
        push eax
        mov ecx, ebx
        call public_6d5c600
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x14
        ret 4
        public_6d04b64 : nop
        mov ecx, dword ptr ds : [eax+0x10]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x14
        ret 4
        public_6d04b75 : nop
        cmp eax, ecx
        je public_6d04b95
        mov ecx, dword ptr ds : [eax+0x10]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x15C]
        mov ecx, dword ptr ss : [esp+0x28]
        push ecx
        lea edx, ss:[esp+0x14]
        push edx
        mov ecx, ebx
        call public_6d58e50
        public_6d04b95 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x14
        ret 4
        UNREACHABLE_TRAP(0x6d04ab0)
    }
}

#undef public_6d04b39
#undef public_6d04b3e
#undef public_6d04b64
#undef public_6d04b75
#undef public_6d04b95
