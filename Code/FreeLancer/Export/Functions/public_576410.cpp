#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_576410);
CLANG_FORWARD_PROC_SYMBOL(public_578920);
CLANG_FORWARD_PROC_SYMBOL(public_578950);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_576466 _public_576466
#define public_576476 _public_576476
#define public_57647b _public_57647b
#define public_576490 _public_576490
#define public_57649c _public_57649c
#define public_5764a4 _public_5764a4
#define public_5764ae _public_5764ae
#define public_5764b5 _public_5764b5
#define public_5764b9 _public_5764b9
#define public_5764c1 _public_5764c1
#define public_5764d8 _public_5764d8
#define public_576531 _public_576531
#define public_57653c _public_57653c

PROC_DECLARE(0x576410, internal_576410, public_576410);
extern "C" NAKED register_t __cdecl internal_576410()
{
    __asm
    {
        sub esp, 0x80
        push ebx
        push esi
        mov esi, dword ptr ds : [public_67c3a4]
        test esi, esi
        je public_57653c
        mov eax, dword ptr ss : [esp+0x8C]
        push edi
        lea ecx, ss:[esp+0x90]
        push ecx
        mov ecx, esi
        mov dword ptr ds : [public_67c278], eax
        call public_578950
        lea edx, ss:[esp+0x90]
        push edx
        mov ecx, esi
        mov edi, eax
        call public_578920
        mov ebx, dword ptr ss : [esp+0x94]
        xor edx, edx
        cmp eax, edi
        je public_5764b9
        mov esi, dword ptr ds : [public_67c3ac]
        public_576466 : nop
        cmp ebx, 1
        mov ecx, dword ptr ds : [eax+0x10]
        jne public_576476
        test esi, esi
        je public_576476
        cmp esi, ecx
        jne public_57647b
        public_576476 : nop
        mov dword ptr ss : [esp+edx*4+0xC], ecx
        inc edx
        public_57647b : nop
        mov ecx, dword ptr ds : [eax+8]
        cmp byte ptr ds : [ecx+0x15], 0
        jne public_57649c
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        cmp byte ptr ds : [ecx+0x15], 0
        jne public_5764b5
        mov edi, edi
        public_576490 : nop
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        cmp byte ptr ds : [ecx+0x15], 0
        je public_576490
        jmp public_5764b5
        public_57649c : nop
        mov ecx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [ecx+8]
        jne public_5764ae
        public_5764a4 : nop
        mov eax, ecx
        mov ecx, dword ptr ds : [ecx+4]
        cmp eax, dword ptr ds : [ecx+8]
        je public_5764a4
        public_5764ae : nop
        cmp dword ptr ds : [eax+8], ecx
        je public_5764b5
        mov eax, ecx
        public_5764b5 : nop
        cmp eax, edi
        jne public_576466
        public_5764b9 : nop
        lea esi, ds:[edx-1]
        test esi, esi
        pop edi
        jl public_5764d8
        public_5764c1 : nop
        mov ecx, dword ptr ss : [esp+esi*4+8]
        mov edx, dword ptr ss : [esp+0x8C]
        mov eax, dword ptr ds : [ecx]
        push edx
        call dword ptr ds : [eax]
        test al, al
        jne public_576531
        dec esi
        jns public_5764c1
        public_5764d8 : nop
        cmp ebx, 1
        jne public_57653c
        cmp dword ptr ss : [esp+0x8C], 0xF
        jne public_57653c
        mov al, byte ptr ds : [public_67c290]
        test al, al
        je public_57653c
        mov eax, dword ptr ds : [public_67c274]
        test eax, eax
        jle public_57653c
        mov eax, dword ptr ds : [public_67c270]
        mov eax, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov esi, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [ecx+4], edx
        call public_5b7e1d
        mov edx, dword ptr ds : [public_67c274]
        add esp, 4
        dec edx
        mov dword ptr ds : [public_67c274], edx
        mov eax, dword ptr ds : [esi]
        push 0x10
        mov ecx, esi
        call dword ptr ds : [eax]
        public_576531 : nop
        pop esi
        mov al, 1
        pop ebx
        add esp, 0x80
        ret 
        public_57653c : nop
        pop esi
        xor al, al
        pop ebx
        add esp, 0x80
        ret 
        UNREACHABLE_TRAP(0x576410)
    }
}

#undef public_576466
#undef public_576476
#undef public_57647b
#undef public_576490
#undef public_57649c
#undef public_5764a4
#undef public_5764ae
#undef public_5764b5
#undef public_5764b9
#undef public_5764c1
#undef public_5764d8
#undef public_576531
#undef public_57653c
