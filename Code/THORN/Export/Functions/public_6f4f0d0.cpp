#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4ef20);
CLANG_FORWARD_PROC_SYMBOL(public_6f4f0d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4f1b0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4f1f0);

#define public_6f4f116 _public_6f4f116
#define public_6f4f12c _public_6f4f12c
#define public_6f4f139 _public_6f4f139
#define public_6f4f15d _public_6f4f15d
#define public_6f4f16c _public_6f4f16c
#define public_6f4f180 _public_6f4f180
#define public_6f4f183 _public_6f4f183
#define public_6f4f1a2 _public_6f4f1a2

PROC_DECLARE(0x6f4f0d0, internal_6f4f0d0, public_6f4f0d0);
extern "C" NAKED register_t __cdecl internal_6f4f0d0()
{
    __asm
    {
        sub esp, 0xC
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [esp+0x10]
        push ebx
        push ebp
        push esi
        push edi
        push eax
        push ecx
        call public_6f4f1b0
        mov edi, dword ptr ss : [esp+0x30]
        mov ebp, dword ptr ds : [edi]
        mov esi, eax
        mov eax, dword ptr ds : [edi+4]
        lea edx, ds:[eax+eax*2]
        lea eax, ss:[ebp+ebp]
        add esp, 8
        cmp edx, eax
        mov dword ptr ss : [esp+0x14], esi
        mov dword ptr ss : [esp+0x10], 0xFFFFFFFF
        jl public_6f4f116
        push edi
        call public_6f4ef20
        mov ebp, dword ptr ds : [edi]
        add esp, 4
        public_6f4f116 : nop
        xor edx, edx
        mov eax, esi
        div ebp
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ss : [esp+0x18], ecx
        mov ebx, edx
        mov eax, dword ptr ds : [ecx+ebx*4]
        test eax, eax
        je public_6f4f180
        public_6f4f12c : nop
        cmp eax, offset public_6f608b0
        jne public_6f4f139
        mov dword ptr ss : [esp+0x10], ebx
        jmp public_6f4f15d
        public_6f4f139 : nop
        mov edx, dword ptr ss : [esp+0x24]
        cmp dword ptr ds : [eax+0x20], edx
        jne public_6f4f15d
        mov esi, dword ptr ss : [esp+0x20]
        mov ecx, edx
        lea edi, ds:[eax+0x28]
        xor edx, edx
        repe cmpsb
        je public_6f4f1a2
        mov edi, dword ptr ss : [esp+0x28]
        mov esi, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [esp+0x18]
        public_6f4f15d : nop
        lea eax, ss:[ebp-2]
        and eax, esi
        lea ebx, ds:[ebx+eax+1]
        cmp ebx, ebp
        jl public_6f4f16c
        sub ebx, ebp
        public_6f4f16c : nop
        mov eax, dword ptr ds : [ecx+ebx*4]
        test eax, eax
        jne public_6f4f12c
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, 0xFFFFFFFF
        je public_6f4f180
        mov ebx, eax
        jmp public_6f4f183
        public_6f4f180 : nop
        inc dword ptr ds : [edi+4]
        public_6f4f183 : nop
        mov ecx, dword ptr ss : [esp+0x24]
        mov edx, dword ptr ss : [esp+0x20]
        push esi
        push ecx
        push edx
        call public_6f4f1f0
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ds : [ecx+ebx*4], eax
        mov edx, dword ptr ds : [edi+8]
        mov eax, dword ptr ds : [edx+ebx*4]
        add esp, 0xC
        public_6f4f1a2 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x6f4f0d0)
    }
}

#undef public_6f4f116
#undef public_6f4f12c
#undef public_6f4f139
#undef public_6f4f15d
#undef public_6f4f16c
#undef public_6f4f180
#undef public_6f4f183
#undef public_6f4f1a2
