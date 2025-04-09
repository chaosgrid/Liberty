#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c6a50);
CLANG_FORWARD_PROC_SYMBOL(public_583690);
CLANG_FORWARD_PROC_SYMBOL(public_585bd0);
CLANG_FORWARD_PROC_SYMBOL(public_585cd0);
CLANG_FORWARD_PROC_SYMBOL(public_585d20);
CLANG_FORWARD_PROC_SYMBOL(public_585d90);
CLANG_FORWARD_PROC_SYMBOL(public_585e80);

#define public_4c6ac0 _public_4c6ac0
#define public_4c6b16 _public_4c6b16
#define public_4c6b27 _public_4c6b27
#define public_4c6b53 _public_4c6b53
#define public_4c6b55 _public_4c6b55
#define public_4c6b5c _public_4c6b5c
#define public_4c6b71 _public_4c6b71

PROC_DECLARE(0x4c6a50, internal_4c6a50, public_4c6a50);
extern "C" NAKED register_t __cdecl internal_4c6a50()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi]
        test ecx, ecx
        je public_4c6b71
        push ebx
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        test edi, edi
        je public_4c6b53
        mov ebx, dword ptr ds : [public_5c60b4]
        mov ecx, edi
        call ebx
        test al, al
        je public_4c6ac0
        mov eax, dword ptr ss : [esp+0x18]
        test eax, eax
        jne public_4c6ac0
        lea eax, ss:[esp+0x18]
        push eax
        lea ecx, ss:[esp+0x14]
        push ecx
        push edi
        mov dword ptr ss : [esp+0x1C], 0
        mov dword ptr ss : [esp+0x24], 0
        call public_583690
        mov edx, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ss : [esp+0x24]
        add esp, 0xC
        push edx
        mov edx, dword ptr ss : [esp+0x14]
        push ecx
        mov ecx, dword ptr ds : [esi]
        push edx
        push eax
        call public_585cd0
        jmp public_4c6b5c
        public_4c6ac0 : nop
        mov ecx, edi
        call ebx
        test al, al
        je public_4c6b16
        cmp dword ptr ss : [esp+0x18], 2
        jne public_4c6b16
        lea eax, ss:[esp+0x18]
        push eax
        lea ecx, ss:[esp+0x14]
        push ecx
        xor ebx, ebx
        push edi
        mov dword ptr ss : [esp+0x1C], ebx
        mov dword ptr ss : [esp+0x24], ebx
        call public_583690
        mov edx, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ss : [esp+0x24]
        add esp, 0xC
        push edx
        mov edx, dword ptr ss : [esp+0x14]
        push ecx
        mov ecx, dword ptr ds : [esi]
        push edx
        push eax
        call public_585cd0
        mov ecx, dword ptr ds : [esi]
        push ebx
        push ebx
        push 0xFFFFFFFF
        call public_585bd0
        pop edi
        pop ebx
        mov al, 1
        pop esi
        ret 0xC
        public_4c6b16 : nop
        mov ecx, edi
        call ebx
        test al, al
        je public_4c6b27
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [esi]
        push eax
        jmp public_4c6b55
        public_4c6b27 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        push ecx
        mov ecx, dword ptr ds : [esi]
        push edi
        call public_585d20
        mov edi, dword ptr ds : [edi+8]
        mov ecx, dword ptr ds : [esi]
        push 0
        push 1
        push edi
        call public_585e80
        mov ecx, dword ptr ds : [esi]
        push eax
        call public_585bd0
        pop edi
        pop ebx
        mov al, 1
        pop esi
        ret 0xC
        public_4c6b53 : nop
        push 0
        public_4c6b55 : nop
        push 0
        call public_585d90
        public_4c6b5c : nop
        mov ecx, dword ptr ds : [esi]
        push 0
        push 0
        push 0xFFFFFFFF
        call public_585bd0
        pop edi
        pop ebx
        mov al, 1
        pop esi
        ret 0xC
        public_4c6b71 : nop
        xor al, al
        pop esi
        ret 0xC
        UNREACHABLE_TRAP(0x4c6a50)
    }
}

#undef public_4c6ac0
#undef public_4c6b16
#undef public_4c6b27
#undef public_4c6b53
#undef public_4c6b55
#undef public_4c6b5c
#undef public_4c6b71
