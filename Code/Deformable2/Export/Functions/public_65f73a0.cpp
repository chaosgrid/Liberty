#include "Deformable2-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65f7340);
CLANG_FORWARD_PROC_SYMBOL(public_6600de0);

#define public_65f7403 _public_65f7403
#define public_65f743c _public_65f743c
#define public_65f74ac _public_65f74ac
#define public_65f7500 _public_65f7500
#define public_65f753b _public_65f753b
#define public_65f757e _public_65f757e

PROC_DECLARE(0x65f73a0, internal_65f73a0, public_65f73a0);
extern "C" NAKED register_t __cdecl internal_65f73a0()
{
    __asm
    {
        sub esp, 0x9C
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xB4]
        mov eax, dword ptr ds : [edi]
        mov ebp, dword ptr ds : [eax+4]
        mov eax, dword ptr ss : [esp+0xB0]
        mov ebx, ecx
        mov ecx, dword ptr ds : [eax]
        push eax
        add ebp, 0xC
        call dword ptr ds : [ecx+0x40]
        lea ecx, ss:[esp+0x18]
        push ecx
        mov esi, eax
        mov eax, dword ptr ds : [public_6603130]
        push 7
        mov dword ptr ss : [esp+0x20], 1
        mov edx, dword ptr ds : [eax]
        push eax
        mov dword ptr ss : [esp+0x1C], esi
        call dword ptr ds : [edx+0x18]
        mov eax, dword ptr ss : [esp+0x18]
        test eax, eax
        je public_65f743c
        mov eax, dword ptr ds : [public_66031a4]
        test eax, eax
        jne public_65f7403
        call public_6600de0
        mov dword ptr ds : [public_66031a4], eax
        public_65f7403 : nop
        mov edx, dword ptr ds : [eax]
        push ebp
        push esi
        lea ecx, ss:[esp+0x30]
        push ecx
        push eax
        call dword ptr ds : [edx+0x1C]
        mov eax, dword ptr ds : [public_6603130]
        mov ecx, 0xC
        lea esi, ss:[esp+0x28]
        lea edi, ss:[esp+0x7C]
        rep movsd
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x7C]
        push ecx
        push eax
        call dword ptr ds : [edx+0x7C]
        mov edi, dword ptr ss : [esp+0xB4]
        mov esi, dword ptr ss : [esp+0x10]
        jmp public_65f74ac
        public_65f743c : nop
        mov eax, dword ptr ds : [public_6603130]
        lea ecx, ss:[esp+0x28]
        push ecx
        mov dword ptr ss : [esp+0x4C], 0x3F800000
        mov dword ptr ss : [esp+0x3C], 0x3F800000
        mov dword ptr ss : [esp+0x2C], 0x3F800000
        mov dword ptr ss : [esp+0x48], 0
        mov dword ptr ss : [esp+0x44], 0
        mov dword ptr ss : [esp+0x40], 0
        mov dword ptr ss : [esp+0x38], 0
        mov dword ptr ss : [esp+0x34], 0
        mov dword ptr ss : [esp+0x30], 0
        mov dword ptr ss : [esp+0x58], 0
        mov dword ptr ss : [esp+0x54], 0
        mov dword ptr ss : [esp+0x50], 0
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+0x6C]
        public_65f74ac : nop
        mov edx, dword ptr ds : [edi]
        mov eax, dword ptr ds : [edx+4]
        mov ecx, dword ptr ds : [eax+4]
        lea eax, ds:[edi+0x24]
        mov dword ptr ss : [esp+0x58], ecx
        mov ecx, dword ptr ds : [ebx+0x18]
        mov dword ptr ss : [esp+0x5C], ebp
        xor ebp, ebp
        mov dword ptr ss : [esp+0x70], eax
        xor eax, eax
        cmp ecx, ebp
        lea edx, ds:[edi+0x14]
        mov dword ptr ss : [esp+0x60], esi
        mov dword ptr ss : [esp+0x6C], edx
        mov dword ptr ss : [esp+0x64], ebp
        mov dword ptr ss : [esp+0x68], ebp
        mov dword ptr ss : [esp+0x1C], ebp
        mov dword ptr ss : [esp+0x20], ebp
        mov dword ptr ss : [esp+0x24], eax
        mov dword ptr ss : [esp+0x10], ebp
        jle public_65f757e
        mov dword ptr ss : [esp+0x14], ebp
        lea esp, ss:[esp]
        public_65f7500 : nop
        mov esi, dword ptr ds : [ebx+0x1C]
        mov ecx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [ebx+0x58]
        add esi, ecx
        test eax, eax
        je public_65f753b
        mov eax, dword ptr ds : [esi+0x20]
        test eax, eax
        jl public_65f753b
        mov edx, dword ptr ds : [ebx+0x5C]
        lea ecx, ds:[eax+eax*8]
        lea eax, ds:[edx+ecx*4]
        mov ecx, dword ptr ds : [edi]
        mov dword ptr ss : [esp+0x1C], eax
        mov edx, dword ptr ds : [eax]
        mov eax, dword ptr ds : [ecx+4]
        imul edx, 0x70
        add edx, eax
        lea eax, ss:[esp+0x1C]
        mov dword ptr ss : [esp+0x20], edx
        mov dword ptr ds : [esi+0xC], eax
        public_65f753b : nop
        push ebp
        lea ecx, ss:[esp+0x5C]
        push ecx
        mov ecx, esi
        call public_65f7340
        mov eax, dword ptr ds : [esi+0x1C]
        mov edx, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [ebx+0x18]
        add ebp, eax
        mov eax, dword ptr ss : [esp+0x10]
        inc eax
        add edx, 0x24
        cmp eax, ecx
        mov dword ptr ss : [esp+0x10], eax
        mov dword ptr ss : [esp+0x14], edx
        jl public_65f7500
        mov edx, dword ptr ss : [esp+0x24]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [ebx+0x48], edx
        mov al, 1
        pop ebx
        add esp, 0x9C
        ret 8
        public_65f757e : nop
        pop edi
        pop esi
        mov dword ptr ds : [ebx+0x48], eax
        pop ebp
        mov al, 1
        pop ebx
        add esp, 0x9C
        ret 8
        UNREACHABLE_TRAP(0x65f73a0)
    }
}

#undef public_65f7403
#undef public_65f743c
#undef public_65f74ac
#undef public_65f7500
#undef public_65f753b
#undef public_65f757e
