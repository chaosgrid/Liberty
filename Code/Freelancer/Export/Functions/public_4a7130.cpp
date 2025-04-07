#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41dda0);
CLANG_FORWARD_PROC_SYMBOL(public_42d6f0);
CLANG_FORWARD_PROC_SYMBOL(public_4a7210);
CLANG_FORWARD_PROC_SYMBOL(public_5763b0);

#define public_4a719e _public_4a719e
#define public_4a71d0 _public_4a71d0
#define public_4a71e0 _public_4a71e0
#define public_4a71f4 _public_4a71f4
#define public_4a7208 _public_4a7208

PROC_DECLARE(0x4a7130, internal_4a7130, public_4a7130);
extern "C" NAKED register_t __cdecl internal_4a7130()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        cmp eax, 0x26
        push esi
        push edi
        mov esi, ecx
        je public_4a71d0
        cmp eax, 0x42
        je public_4a719e
        cmp eax, 0x3006
        jne public_4a7208
        cmp dword ptr ss : [esp+0x10], 1
        jne public_4a7208
        push 0
        push 0xC5
        call public_5763b0
        mov al, byte ptr ds : [esi+0x330]
        push 0
        mov byte ptr ss : [esp+0x1C], al
        call public_42d6f0
        mov ecx, dword ptr ss : [esp+0x1C]
        push ecx
        call public_41dda0
        mov edx, dword ptr ds : [esi]
        add esp, 0x10
        mov ecx, esi
        call dword ptr ds : [edx+0x84]
        mov byte ptr ds : [esi+0x331], 1
        xor eax, eax
        pop edi
        pop esi
        ret 0xC
        public_4a719e : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov edi, dword ptr ds : [ecx]
        mov eax, dword ptr ds : [esi]
        sub esp, 0xC
        mov edx, esp
        mov dword ptr ds : [edx], edi
        mov edi, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [edx+4], edi
        mov dword ptr ds : [edx+8], ecx
        mov ecx, esi
        call dword ptr ds : [eax+0x7C]
        mov edx, dword ptr ds : [esi]
        lea eax, ds:[esi+0x60]
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+0x14]
        xor eax, eax
        pop edi
        pop esi
        ret 0xC
        public_4a71d0 : nop
        mov edx, dword ptr ss : [esp+0x10]
        xor eax, eax
        lea ecx, ds:[esi+0x338]
        lea esp, ss:[esp]
        public_4a71e0 : nop
        cmp edx, dword ptr ds : [ecx]
        je public_4a71f4
        inc eax
        add ecx, 4
        cmp eax, 5
        jl public_4a71e0
        xor eax, eax
        pop edi
        pop esi
        ret 0xC
        public_4a71f4 : nop
        cmp eax, 0xFFFFFFFF
        je public_4a7208
        mov ecx, dword ptr ds : [esi+eax*4+0x360]
        push ecx
        mov ecx, esi
        call public_4a7210
        public_4a7208 : nop
        pop edi
        xor eax, eax
        pop esi
        ret 0xC
        UNREACHABLE_TRAP(0x4a7130)
    }
}

#undef public_4a719e
#undef public_4a71d0
#undef public_4a71e0
#undef public_4a71f4
#undef public_4a7208
