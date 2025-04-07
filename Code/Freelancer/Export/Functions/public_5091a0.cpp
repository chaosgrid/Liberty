#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4101e0);
CLANG_FORWARD_PROC_SYMBOL(public_421ed0);
CLANG_FORWARD_PROC_SYMBOL(public_422190);
CLANG_FORWARD_PROC_SYMBOL(public_422440);
CLANG_FORWARD_PROC_SYMBOL(public_551500);
CLANG_FORWARD_PROC_SYMBOL(public_5b7010);

#define public_509270 _public_509270
#define public_509287 _public_509287
#define public_50932c _public_50932c

PROC_DECLARE(0x5091a0, internal_5091a0, public_5091a0);
extern "C" NAKED register_t __cdecl internal_5091a0()
{
    __asm
    {
        sub esp, 0x18
        push esi
        mov esi, ecx
        mov al, byte ptr ds : [esi+0x2C0]
        test al, al
        je public_50932c
        mov eax, dword ptr ds : [public_5c6dcc]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push ebp
        push edi
        push 0xFFFFFFFF
        push 1
        push eax
        call dword ptr ds : [ecx+0x20]
        mov edx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push 0
        push 0x89
        push eax
        call dword ptr ds : [ecx+0xF0]
        call public_4101e0
        mov edx, dword ptr ds : [public_5c6de0]
        mov dword ptr ss : [esp+0xC], 0
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0xC]
        push edx
        push 0x8B
        push eax
        call dword ptr ds : [ecx+0xF4]
        mov eax, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push 0xFFFFFFFF
        push 0x8B
        push eax
        call dword ptr ds : [ecx+0xF0]
        push 0
        call public_422190
        mov edx, dword ptr ds : [esi+0x2B0]
        mov eax, dword ptr ds : [esi+0x2AC]
        push edx
        push eax
        lea ecx, ds:[esi+0x2A0]
        push ecx
        call public_422440
        mov edx, dword ptr ds : [public_5c6de0]
        add esp, 0x10
        push 1
        mov dword ptr ds : [public_675004], 0
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push 0x16
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov ebp, dword ptr ds : [esi+0xF8]
        mov edi, dword ptr ss : [ebp]
        cmp edi, ebp
        je public_509287
        mov edi, edi
        public_509270 : nop
        mov edx, dword ptr ds : [esi+0x34]
        mov eax, dword ptr ss : [esp+0x28]
        mov ecx, dword ptr ds : [edi+8]
        push edx
        push eax
        call public_551500
        mov edi, dword ptr ds : [edi]
        cmp edi, ebp
        jne public_509270
        public_509287 : nop
        mov ecx, dword ptr ds : [public_5c6dcc]
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax]
        push 1
        push 1
        push eax
        call dword ptr ds : [edx+0x20]
        mov eax, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push 2
        push 0x16
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov edx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push 1
        push 0x89
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov edx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [edx]
        mov edx, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ds : [eax]
        push edx
        push 0x8B
        push eax
        call dword ptr ds : [ecx+0xF0]
        push 1
        call public_422190
        push 0xB60
        call public_421ed0
        mov eax, dword ptr ds : [public_67500c]
        add esp, 8
        test eax, eax
        pop edi
        pop ebp
        je public_50932c
        push 0
        call public_5b7010
        mov dword ptr ss : [esp+0x1C], eax
        mov eax, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        add esp, 4
        lea edx, ss:[esp+8]
        push edx
        push eax
        call dword ptr ds : [ecx+0x44]
        mov eax, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x48]
        public_50932c : nop
        pop esi
        add esp, 0x18
        ret 4
        UNREACHABLE_TRAP(0x5091a0)
    }
}

#undef public_509270
#undef public_509287
#undef public_50932c
