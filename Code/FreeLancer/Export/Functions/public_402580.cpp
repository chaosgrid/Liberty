#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_402580);
CLANG_FORWARD_PROC_SYMBOL(public_402790);

#define public_4025e7 _public_4025e7
#define public_402610 _public_402610
#define public_402616 _public_402616
#define public_40262e _public_40262e
#define public_402651 _public_402651
#define public_402655 _public_402655
#define public_40269d _public_40269d
#define public_4026c6 _public_4026c6
#define public_4026d3 _public_4026d3
#define public_4026ed _public_4026ed
#define public_40270d _public_40270d
#define public_402711 _public_402711

PROC_DECLARE(0x402580, internal_402580, public_402580);
extern "C" NAKED register_t __cdecl internal_402580()
{
    __asm
    {
        sub esp, 0x18
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x24]
        xor eax, eax
        cmp ebp, 0xFFFFFFFF
        push esi
        push edi
        mov dword ptr ss : [esp+0x10], eax
        je public_402711
        mov esi, dword ptr ss : [esp+0x34]
        test esi, esi
        mov ebx, dword ptr ss : [esp+0x30]
        mov edi, ebx
        je public_4025e7
        mov eax, dword ptr ds : [public_5c6df0]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x14]
        push edx
        push ebp
        push eax
        call dword ptr ds : [ecx+0x24]
        test eax, eax
        jl public_4025e7
        lea eax, ss:[esp+0x18]
        push eax
        lea ecx, ss:[esp+0x24]
        push ecx
        mov ecx, esi
        mov dword ptr ss : [esp+0x20], ebp
        mov dword ptr ss : [esp+0x24], 0
        call public_402790
        mov edx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [eax+0x10], edx
        public_4025e7 : nop
        mov ecx, dword ptr ds : [public_5c6df0]
        mov dword ptr ss : [esp+0x2C], 0
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x2C]
        push ecx
        push ebp
        push eax
        call dword ptr ds : [edx+0x20]
        mov eax, dword ptr ss : [esp+0x2C]
        xor esi, esi
        test eax, eax
        jle public_402610
        lea esi, ds:[eax-1]
        public_402610 : nop
        cmp ebx, esi
        jle public_402616
        mov edi, esi
        public_402616 : nop
        mov edx, dword ptr ds : [public_5c6df0]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push edi
        push ebp
        push eax
        call dword ptr ds : [ecx+0x28]
        test esi, esi
        jle public_40262e
        mov dword ptr ss : [esp+0x10], esi
        public_40262e : nop
        mov edx, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push 0xFFFFFFFF
        push 0
        push ebp
        push eax
        call dword ptr ds : [ecx+0xD8]
        mov esi, eax
        cmp esi, 0xFFFFFFFF
        je public_40270d
        jmp public_402655
        public_402651 : nop
        mov ebx, dword ptr ss : [esp+0x30]
        public_402655 : nop
        mov edi, dword ptr ss : [esp+0x34]
        test edi, edi
        je public_40269d
        mov edx, dword ptr ds : [public_5c6df0]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x14]
        push edx
        push esi
        push eax
        call dword ptr ds : [ecx+0x24]
        test eax, eax
        jl public_40269d
        lea eax, ss:[esp+0x18]
        push eax
        lea ecx, ss:[esp+0x24]
        push ecx
        mov ecx, edi
        mov dword ptr ss : [esp+0x20], esi
        mov dword ptr ss : [esp+0x24], 0
        call public_402790
        mov edx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [eax+0x10], edx
        public_40269d : nop
        mov ecx, dword ptr ds : [public_5c6df0]
        mov dword ptr ss : [esp+0x2C], 0
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x2C]
        push ecx
        push esi
        push eax
        call dword ptr ds : [edx+0x20]
        mov eax, dword ptr ss : [esp+0x2C]
        xor edi, edi
        test eax, eax
        jle public_4026c6
        lea edi, ds:[eax-1]
        public_4026c6 : nop
        mov ecx, dword ptr ss : [esp+0x30]
        lea eax, ds:[edi+1]
        cmp ecx, eax
        jle public_4026d3
        mov ebx, eax
        public_4026d3 : nop
        mov edx, dword ptr ds : [public_5c6df0]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push ebx
        push esi
        push eax
        call dword ptr ds : [ecx+0x28]
        cmp edi, dword ptr ss : [esp+0x10]
        jle public_4026ed
        mov dword ptr ss : [esp+0x10], edi
        public_4026ed : nop
        mov edx, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push esi
        push 0
        push ebp
        push eax
        call dword ptr ds : [ecx+0xD8]
        mov esi, eax
        cmp esi, 0xFFFFFFFF
        jne public_402651
        public_40270d : nop
        mov eax, dword ptr ss : [esp+0x10]
        public_402711 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x18
        ret 
        UNREACHABLE_TRAP(0x402580)
    }
}

#undef public_4025e7
#undef public_402610
#undef public_402616
#undef public_40262e
#undef public_402651
#undef public_402655
#undef public_40269d
#undef public_4026c6
#undef public_4026d3
#undef public_4026ed
#undef public_40270d
#undef public_402711
