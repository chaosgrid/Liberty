#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_629b720);

#define public_62b1a95 _public_62b1a95
#define public_62b1a9e _public_62b1a9e
#define public_62b1aa0 _public_62b1aa0
#define public_62b1aad _public_62b1aad
#define public_62b1aaf _public_62b1aaf
#define public_62b1aba _public_62b1aba
#define public_62b1abe _public_62b1abe
#define public_62b1ae0 _public_62b1ae0
#define public_62b1ae9 _public_62b1ae9
#define public_62b1aed _public_62b1aed
#define public_62b1b13 _public_62b1b13
#define public_62b1b1b _public_62b1b1b
#define public_62b1b1d _public_62b1b1d
#define public_62b1b34 _public_62b1b34
#define public_62b1b36 _public_62b1b36
#define public_62b1b47 _public_62b1b47
#define public_62b1b4c _public_62b1b4c
#define public_62b1b56 _public_62b1b56

PROC_DECLARE(0x62b1a40, internal_62b1a40, public_62b1a40);
extern "C" NAKED register_t __cdecl internal_62b1a40()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        push esi
        push edi
        mov esi, ecx
        push 0x80000
        lea ecx, ds:[esi+0xE4]
        call public_629b720
        mov edi, eax
        test edi, edi
        je public_62b1b4c
        mov ebx, dword ptr ds : [edi+0x824]
        cmp ebx, 1
        jl public_62b1b4c
        mov eax, dword ptr ds : [esi+0x220]
        test eax, eax
        mov dword ptr ss : [esp+0x10], 0xFFFFFFFF
        je public_62b1abe
        add eax, 0xFFFFFFF8
        test eax, eax
        je public_62b1abe
        xor ecx, ecx
        test ebx, ebx
        jle public_62b1abe
        mov esi, dword ptr ds : [esi+0x220]
        public_62b1a95 : nop
        test esi, esi
        je public_62b1a9e
        lea edx, ds:[esi-8]
        jmp public_62b1aa0
        public_62b1a9e : nop
        xor edx, edx
        public_62b1aa0 : nop
        mov eax, dword ptr ds : [edi+ecx*8+0x24]
        test eax, eax
        je public_62b1aad
        add eax, 0xFFFFFFF8
        jmp public_62b1aaf
        public_62b1aad : nop
        xor eax, eax
        public_62b1aaf : nop
        cmp edx, eax
        je public_62b1aba
        inc ecx
        cmp ecx, ebx
        jl public_62b1a95
        jmp public_62b1abe
        public_62b1aba : nop
        mov dword ptr ss : [esp+0x10], ecx
        public_62b1abe : nop
        mov cl, byte ptr ss : [esp+0x18]
        mov esi, dword ptr ss : [esp+0x10]
        xor eax, eax
        test cl, cl
        sete al
        xor ebp, ebp
        test ebx, ebx
        lea eax, ds:[eax+eax-1]
        mov dword ptr ss : [esp+0x18], eax
        jle public_62b1b4c
        nop 
        lea esp, ss:[esp]
        public_62b1ae0 : nop
        add esi, dword ptr ss : [esp+0x18]
        jns public_62b1b13
        lea esi, ds:[ebx-1]
        public_62b1ae9 : nop
        test esi, esi
        jl public_62b1b47
        public_62b1aed : nop
        cmp esi, ebx
        jge public_62b1b47
        cmp esi, dword ptr ss : [esp+0x10]
        je public_62b1b47
        mov eax, dword ptr ds : [edi+esi*8+0x24]
        test eax, eax
        je public_62b1b47
        add eax, 0xFFFFFFF8
        test eax, eax
        je public_62b1b47
        mov eax, dword ptr ds : [edi+esi*8+0x24]
        test eax, eax
        je public_62b1b1b
        lea ecx, ds:[eax-8]
        jmp public_62b1b1d
        public_62b1b13 : nop
        cmp esi, ebx
        jl public_62b1ae9
        xor esi, esi
        jmp public_62b1aed
        public_62b1b1b : nop
        xor ecx, ecx
        public_62b1b1d : nop
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x150]
        test eax, eax
        je public_62b1b34
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 3
        cmp cl, 3
        je public_62b1b36
        public_62b1b34 : nop
        xor eax, eax
        public_62b1b36 : nop
        mov eax, dword ptr ds : [eax+0xE0]
        test eax, eax
        je public_62b1b47
        cmp eax, 0x20000000
        jne public_62b1b56
        public_62b1b47 : nop
        inc ebp
        cmp ebp, ebx
        jl public_62b1ae0
        public_62b1b4c : nop
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        pop ecx
        ret 4
        public_62b1b56 : nop
        mov esi, dword ptr ds : [edi+esi*8+0x24]
        test esi, esi
        je public_62b1b4c
        pop edi
        lea eax, ds:[esi-8]
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x62b1a40)
    }
}

#undef public_62b1a95
#undef public_62b1a9e
#undef public_62b1aa0
#undef public_62b1aad
#undef public_62b1aaf
#undef public_62b1aba
#undef public_62b1abe
#undef public_62b1ae0
#undef public_62b1ae9
#undef public_62b1aed
#undef public_62b1b13
#undef public_62b1b1b
#undef public_62b1b1d
#undef public_62b1b34
#undef public_62b1b36
#undef public_62b1b47
#undef public_62b1b4c
#undef public_62b1b56
