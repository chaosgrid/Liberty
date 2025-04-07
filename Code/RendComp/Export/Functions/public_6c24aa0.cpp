#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c22440);
CLANG_FORWARD_PROC_SYMBOL(public_6c24aa0);
CLANG_FORWARD_PROC_SYMBOL(public_6c24be0);
CLANG_FORWARD_PROC_SYMBOL(public_6c26fa0);
CLANG_FORWARD_PROC_SYMBOL(public_6c276e0);
CLANG_FORWARD_PROC_SYMBOL(public_6c34eac);

#define public_6c24ac3 _public_6c24ac3
#define public_6c24ac5 _public_6c24ac5
#define public_6c24af0 _public_6c24af0
#define public_6c24b0a _public_6c24b0a
#define public_6c24b0c _public_6c24b0c
#define public_6c24b2a _public_6c24b2a
#define public_6c24b2d _public_6c24b2d
#define public_6c24b4a _public_6c24b4a

PROC_DECLARE(0x6c24aa0, internal_6c24aa0, public_6c24aa0);
extern "C" NAKED register_t __cdecl internal_6c24aa0()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        push esi
        push edi
        push 0x228
        mov ebp, ecx
        call public_6c34eac
        add esp, 4
        test eax, eax
        je public_6c24ac3
        mov ecx, eax
        call public_6c22440
        mov ebx, eax
        jmp public_6c24ac5
        public_6c24ac3 : nop
        xor ebx, ebx
        public_6c24ac5 : nop
        mov eax, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [eax], ebx
        lea eax, ds:[ebx+0x1C]
        push eax
        lea ecx, ss:[ebp+0x1C]
        push ecx
        call public_6c24be0
        mov eax, dword ptr ss : [ebp+0x14]
        mov esi, dword ptr ss : [ebp+0x10]
        add esp, 8
        cmp esi, eax
        mov dword ptr ss : [esp+0x10], eax
        je public_6c24b4a
        lea edi, ds:[ebx+0xC]
        lea esp, ss:[esp]
        public_6c24af0 : nop
        push 0x40
        call public_6c34eac
        add esp, 4
        test eax, eax
        je public_6c24b0a
        mov edx, dword ptr ds : [esi]
        push edx
        mov ecx, eax
        call public_6c276e0
        jmp public_6c24b0c
        public_6c24b0a : nop
        xor eax, eax
        public_6c24b0c : nop
        mov dword ptr ss : [esp+0x18], eax
        mov ecx, dword ptr ds : [eax+0x2C]
        cmp ecx, dword ptr ds : [eax+0x30]
        lea ecx, ds:[ebx+0x1C]
        jne public_6c24b2a
        mov dword ptr ds : [eax+0x2C], ecx
        mov eax, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ds : [eax+0x2C]
        mov dword ptr ds : [eax+0x30], edx
        jmp public_6c24b2d
        public_6c24b2a : nop
        mov dword ptr ds : [eax+0x30], ecx
        public_6c24b2d : nop
        mov ecx, dword ptr ds : [edi+8]
        lea eax, ss:[esp+0x18]
        push eax
        push 1
        push ecx
        mov ecx, edi
        call public_6c26fa0
        mov eax, dword ptr ss : [esp+0x10]
        add esi, 4
        cmp esi, eax
        jne public_6c24af0
        public_6c24b4a : nop
        mov edx, dword ptr ss : [ebp+0xA8]
        mov dword ptr ds : [ebx+0xA8], edx
        lea eax, ss:[ebp+0x1B0]
        mov edx, dword ptr ds : [eax]
        lea ecx, ds:[ebx+0x1B0]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+8], eax
        lea esi, ss:[ebp+0x1BC]
        lea edi, ds:[ebx+0x1BC]
        mov ecx, 6
        rep movsd
        lea ecx, ss:[ebp+0x1D4]
        mov eax, dword ptr ds : [ecx]
        lea edx, ds:[ebx+0x1D4]
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], eax
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [edx+8], ecx
        mov edx, dword ptr ss : [ebp+0x1E0]
        push 0x104
        add ebp, 0xAC
        lea eax, ds:[ebx+0xAC]
        push ebp
        push eax
        mov dword ptr ds : [ebx+0x1E0], edx
        call dword ptr ds : [public_6c3604c]
        mov ecx, dword ptr ds : [ebx+0x14]
        add esp, 0xC
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [ebx+0x1E8], ecx
        xor eax, eax
        pop ebx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x6c24aa0)
    }
}

#undef public_6c24ac3
#undef public_6c24ac5
#undef public_6c24af0
#undef public_6c24b0a
#undef public_6c24b0c
#undef public_6c24b2a
#undef public_6c24b2d
#undef public_6c24b4a
