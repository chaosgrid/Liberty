#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ac4f80);
CLANG_FORWARD_PROC_SYMBOL(public_6ac4fb0);
CLANG_FORWARD_PROC_SYMBOL(public_6ac5090);
CLANG_FORWARD_PROC_SYMBOL(public_6ac8500);
CLANG_FORWARD_PROC_SYMBOL(public_6ac89d0);
CLANG_FORWARD_PROC_SYMBOL(public_6ac8a40);
CLANG_FORWARD_PROC_SYMBOL(public_6ac8a90);
CLANG_FORWARD_PROC_SYMBOL(public_6ac8d90);
CLANG_FORWARD_PROC_SYMBOL(public_6ac8e40);

#define public_6ac8e4f _public_6ac8e4f
#define public_6ac8e5d _public_6ac8e5d
#define public_6ac8e68 _public_6ac8e68
#define public_6ac8e76 _public_6ac8e76
#define public_6ac8f0f _public_6ac8f0f
#define public_6ac8f88 _public_6ac8f88
#define public_6ac8f96 _public_6ac8f96
#define public_6ac8fd3 _public_6ac8fd3
#define public_6ac8fe1 _public_6ac8fe1
#define public_6ac9018 _public_6ac9018
#define public_6ac90e6 _public_6ac90e6
#define public_6ac90fe _public_6ac90fe
#define public_6ac911a _public_6ac911a
#define public_6ac911d _public_6ac911d
#define public_6ac9191 _public_6ac9191
#define public_6ac91ab _public_6ac91ab
#define public_6ac91c1 _public_6ac91c1
#define public_6ac91e1 _public_6ac91e1
#define public_6ac91f3 _public_6ac91f3
#define public_6ac9203 _public_6ac9203
#define public_6ac9213 _public_6ac9213
#define public_6ac9230 _public_6ac9230
#define public_6ac923a _public_6ac923a

PROC_DECLARE(0x6ac8e40, internal_6ac8e40, public_6ac8e40);
extern "C" NAKED register_t __cdecl internal_6ac8e40()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x2C
        push ebx
        push esi
        push edi
        mov eax, dword ptr ss : [ebp+0xC]
        mov edx, dword ptr ss : [ebp+8]
        public_6ac8e4f : nop
        test eax, eax
        je public_6ac8e5d
        mov ecx, dword ptr ds : [edx+eax*4-4]
        dec eax
        test ecx, ecx
        je public_6ac8e4f
        inc eax
        public_6ac8e5d : nop
        mov esi, eax
        mov dword ptr ss : [ebp-0x10], esi
        mov eax, dword ptr ss : [ebp+0x14]
        mov edx, dword ptr ss : [ebp+0x10]
        public_6ac8e68 : nop
        test eax, eax
        je public_6ac8e76
        mov ecx, dword ptr ds : [edx+eax*4-4]
        dec eax
        test ecx, ecx
        je public_6ac8e68
        inc eax
        public_6ac8e76 : nop
        push 0x808
        mov dword ptr ss : [ebp-0x14], eax
        call public_6ac4f80
        mov ebx, eax
        mov eax, dword ptr ds : [public_6ae097c]
        test eax, eax
        jne public_6ac91f3
        test ebx, ebx
        je public_6ac91f3
        mov eax, dword ptr ss : [ebp-0x14]
        mov edx, dword ptr ss : [ebp-0x10]
        mov ecx, esi
        mov esi, dword ptr ss : [ebp+8]
        mov edi, ebx
        mov dword ptr ss : [ebp-0x2C], edx
        rep movsd
        mov esi, dword ptr ss : [ebp+0x10]
        lea edi, ds:[ebx+0x100]
        mov ecx, eax
        mov dword ptr ss : [ebp-0x28], eax
        test edx, edx
        rep movsd
        je public_6ac91c1
        test eax, eax
        je public_6ac91c1
        push edx
        push ebx
        push eax
        lea eax, ds:[ebx+0x100]
        mov ecx, 1
        push eax
        mov dword ptr ds : [ebx+0x200], ecx
        mov dword ptr ss : [ebp-0x24], ecx
        mov dword ptr ss : [ebp-0x20], 0
        call public_6ac8a90
        xor edx, edx
        lea ecx, ss:[ebp-0x28]
        test eax, eax
        setg dl
        mov dword ptr ss : [ebp-4], edx
        lea eax, ds:[edx*4]
        sub ecx, eax
        cmp dword ptr ds : [ecx], 0
        je public_6ac9018
        public_6ac8f0f : nop
        mov eax, dword ptr ds : [public_6ae097c]
        test eax, eax
        jne public_6ac9018
        mov eax, 1
        mov esi, dword ptr ss : [ebp+edx*4-0x2C]
        sub eax, edx
        lea edi, ss:[ebp+edx*4-0x2C]
        mov dword ptr ss : [ebp-0x10], eax
        lea ecx, ds:[eax*4]
        mov dword ptr ss : [ebp-8], ecx
        mov ecx, dword ptr ss : [ebp+ecx-0x2C]
        sub esi, ecx
        mov dword ptr ss : [ebp-0x18], ecx
        inc esi
        lea ecx, ds:[ebx+0x400]
        mov dword ptr ss : [ebp-0xC], esi
        lea esi, ds:[ebx+0x608]
        push esi
        push ecx
        mov ecx, dword ptr ss : [ebp-0x18]
        push 0
        shl eax, 8
        add eax, ebx
        push ecx
        shl edx, 8
        push eax
        mov eax, dword ptr ds : [edi]
        add edx, ebx
        push eax
        push edx
        mov dword ptr ss : [ebp-0x1C], edx
        call public_6ac5090
        mov dword ptr ds : [edi], eax
        mov edi, dword ptr ss : [ebp-0x1C]
        mov ecx, eax
        rep movsd
        lea edi, ds:[ebx+0x400]
        mov dword ptr ss : [ebp-0x1C], edi
        mov eax, dword ptr ss : [ebp-0xC]
        mov edx, dword ptr ss : [ebp-0x1C]
        public_6ac8f88 : nop
        test eax, eax
        je public_6ac8f96
        mov ecx, dword ptr ds : [edx+eax*4-4]
        dec eax
        test ecx, ecx
        je public_6ac8f88
        inc eax
        public_6ac8f96 : nop
        mov edx, dword ptr ss : [ebp-8]
        lea esi, ds:[ebx+0x608]
        push esi
        mov dword ptr ss : [ebp-0xC], eax
        mov ecx, dword ptr ss : [ebp+edx-0x24]
        push ecx
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 2
        shl ecx, 8
        add ecx, ebx
        push ecx
        push eax
        push edi
        call public_6ac8d90
        mov edx, dword ptr ss : [ebp-8]
        mov ecx, dword ptr ss : [ebp-0xC]
        mov dword ptr ss : [ebp-0x1C], esi
        mov eax, dword ptr ss : [ebp+edx-0x24]
        add eax, ecx
        mov dword ptr ss : [ebp-0x18], eax
        mov eax, dword ptr ss : [ebp-0x18]
        mov edx, dword ptr ss : [ebp-0x1C]
        public_6ac8fd3 : nop
        test eax, eax
        je public_6ac8fe1
        mov ecx, dword ptr ds : [edx+eax*4-4]
        dec eax
        test ecx, ecx
        je public_6ac8fd3
        inc eax
        public_6ac8fe1 : nop
        mov edx, dword ptr ss : [ebp-4]
        lea ecx, ds:[edx+2]
        lea edi, ss:[ebp+edx*4-0x24]
        shl ecx, 8
        mov edx, dword ptr ds : [edi]
        add ecx, ebx
        push ecx
        push edx
        push ecx
        push eax
        push esi
        call public_6ac8a40
        mov edx, dword ptr ss : [ebp-8]
        lea ecx, ss:[ebp-0x28]
        mov dword ptr ds : [edi], eax
        mov eax, dword ptr ss : [ebp-0x10]
        sub ecx, edx
        mov dword ptr ss : [ebp-4], eax
        mov edx, dword ptr ss : [ebp-4]
        cmp dword ptr ds : [ecx], 0
        jne public_6ac8f0f
        public_6ac9018 : nop
        mov edi, dword ptr ss : [ebp+0x20]
        lea eax, ds:[edx*4]
        mov esi, edx
        mov ecx, dword ptr ss : [ebp+eax-0x2C]
        shl esi, 8
        add esi, ebx
        mov dword ptr ss : [ebp-0xC], ecx
        rep movsd
        lea ecx, ss:[ebp-0x20]
        mov esi, dword ptr ss : [ebp+0x14]
        sub ecx, eax
        mov eax, 3
        sub eax, edx
        mov edi, dword ptr ds : [ecx]
        mov ecx, dword ptr ss : [ebp+0x10]
        shl eax, 8
        add eax, ebx
        push edi
        push eax
        push esi
        push ecx
        mov dword ptr ss : [ebp-8], eax
        call public_6ac8a90
        test eax, eax
        jl public_6ac91ab
        mov edx, dword ptr ss : [ebp-4]
        mov ecx, edx
        lea eax, ds:[edx*4]
        mov edx, dword ptr ss : [ebp-8]
        add ecx, 2
        mov eax, dword ptr ss : [ebp+eax-0x24]
        shl ecx, 8
        add ecx, ebx
        push eax
        push ecx
        push edi
        push edx
        call public_6ac8a90
        test eax, eax
        jl public_6ac91ab
        mov edx, dword ptr ss : [ebp-0x24]
        mov ecx, esi
        sub ecx, edx
        xor eax, eax
        shl ecx, 2
        lea edi, ds:[ebx+edx*4+0x200]
        mov edx, ecx
        shr ecx, 2
        rep stosd
        mov ecx, edx
        mov edx, dword ptr ss : [ebp-0x20]
        and ecx, 3
        rep stosb
        mov ecx, esi
        lea edi, ds:[ebx+edx*4+0x300]
        sub ecx, edx
        xor eax, eax
        shl ecx, 2
        mov edx, ecx
        shr ecx, 2
        rep stosd
        mov ecx, edx
        and ecx, 3
        rep stosb
        mov eax, dword ptr ss : [ebp-4]
        test eax, eax
        jne public_6ac90e6
        mov edi, dword ptr ss : [ebp+0x18]
        mov ecx, esi
        lea esi, ds:[ebx+0x200]
        rep movsd
        mov esi, dword ptr ss : [ebp+0x14]
        jmp public_6ac90fe
        public_6ac90e6 : nop
        mov eax, dword ptr ss : [ebp+0x18]
        push esi
        push eax
        lea ecx, ds:[ebx+0x300]
        lea eax, ds:[ebx+0x200]
        push ecx
        push eax
        call public_6ac89d0
        public_6ac90fe : nop
        mov eax, dword ptr ss : [ebp+0x24]
        test eax, eax
        je public_6ac911a
        mov edi, dword ptr ss : [ebp-8]
        mov edx, dword ptr ss : [ebp+0xC]
        push eax
        mov eax, dword ptr ss : [ebp+8]
        push esi
        push edi
        push edx
        push eax
        call public_6ac8d90
        jmp public_6ac911d
        public_6ac911a : nop
        mov edi, dword ptr ss : [ebp-8]
        public_6ac911d : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        je public_6ac91e1
        mov ecx, dword ptr ss : [ebp+0x18]
        push esi
        push edi
        push ecx
        push edi
        call public_6ac89d0
        mov edx, dword ptr ss : [ebp-8]
        mov eax, dword ptr ss : [ebp+0xC]
        mov ecx, dword ptr ss : [ebp+8]
        lea edi, ds:[ebx+0x608]
        push edi
        push esi
        push edx
        push eax
        push ecx
        call public_6ac8d90
        mov edx, dword ptr ss : [ebp-0xC]
        mov ecx, dword ptr ss : [ebp+0xC]
        mov eax, dword ptr ss : [ebp+0x20]
        push edi
        push edx
        add ecx, esi
        push eax
        push ecx
        push edi
        call public_6ac8500
        mov edx, dword ptr ss : [ebp-8]
        mov eax, dword ptr ss : [ebp-0x14]
        mov ecx, dword ptr ss : [ebp+0x10]
        lea esi, ds:[ebx+0x400]
        push edx
        mov edx, dword ptr ss : [ebp+0xC]
        push esi
        push 0
        push eax
        add eax, edx
        push ecx
        push eax
        push edi
        call public_6ac5090
        test eax, eax
        je public_6ac9191
        mov dword ptr ds : [public_6ae097c], 0x26
        public_6ac9191 : nop
        mov ecx, dword ptr ss : [ebp+0xC]
        mov edi, dword ptr ss : [ebp+0x1C]
        rep movsd
        push ebx
        call public_6ac4fb0
        mov eax, dword ptr ss : [ebp-0xC]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 0x20
        public_6ac91ab : nop
        mov eax, dword ptr ss : [ebp-0xC]
        pop edi
        pop esi
        mov dword ptr ds : [public_6ae097c], 0x25
        pop ebx
        mov esp, ebp
        pop ebp
        ret 0x20
        public_6ac91c1 : nop
        mov ecx, dword ptr ss : [ebp+0x20]
        mov dword ptr ds : [public_6ae097c], 0x27
        push ecx
        mov ecx, dword ptr ss : [ebp+8]
        push eax
        mov eax, dword ptr ss : [ebp+0x10]
        push eax
        push edx
        push ecx
        call public_6ac8a40
        mov dword ptr ss : [ebp-0xC], eax
        public_6ac91e1 : nop
        push ebx
        call public_6ac4fb0
        mov eax, dword ptr ss : [ebp-0xC]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 0x20
        public_6ac91f3 : nop
        mov edi, dword ptr ss : [ebp+0x18]
        mov esi, dword ptr ss : [ebp+0x14]
        test edi, edi
        je public_6ac9203
        mov ecx, esi
        xor eax, eax
        rep stosd
        public_6ac9203 : nop
        mov edi, dword ptr ss : [ebp+0x1C]
        mov edx, dword ptr ss : [ebp+0xC]
        test edi, edi
        je public_6ac9213
        mov ecx, edx
        xor eax, eax
        rep stosd
        public_6ac9213 : nop
        mov edi, dword ptr ss : [ebp+0x24]
        test edi, edi
        je public_6ac9230
        lea ecx, ds:[edx+esi]
        xor eax, eax
        shl ecx, 2
        mov edx, ecx
        shr ecx, 2
        rep stosd
        mov ecx, edx
        and ecx, 3
        rep stosb
        public_6ac9230 : nop
        test ebx, ebx
        je public_6ac923a
        push ebx
        call public_6ac4fb0
        public_6ac923a : nop
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        mov esp, ebp
        pop ebp
        ret 0x20
        UNREACHABLE_TRAP(0x6ac8e40)
    }
}

#undef public_6ac8e4f
#undef public_6ac8e5d
#undef public_6ac8e68
#undef public_6ac8e76
#undef public_6ac8f0f
#undef public_6ac8f88
#undef public_6ac8f96
#undef public_6ac8fd3
#undef public_6ac8fe1
#undef public_6ac9018
#undef public_6ac90e6
#undef public_6ac90fe
#undef public_6ac911a
#undef public_6ac911d
#undef public_6ac9191
#undef public_6ac91ab
#undef public_6ac91c1
#undef public_6ac91e1
#undef public_6ac91f3
#undef public_6ac9203
#undef public_6ac9213
#undef public_6ac9230
#undef public_6ac923a
