#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ebf2b0);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0ba0);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0bc0);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0c5c);

#define public_6ebf2e4 _public_6ebf2e4
#define public_6ebf2e9 _public_6ebf2e9
#define public_6ebf301 _public_6ebf301
#define public_6ebf311 _public_6ebf311
#define public_6ebf322 _public_6ebf322
#define public_6ebf32a _public_6ebf32a
#define public_6ebf33a _public_6ebf33a
#define public_6ebf344 _public_6ebf344
#define public_6ebf380 _public_6ebf380
#define public_6ebf388 _public_6ebf388
#define public_6ebf394 _public_6ebf394
#define public_6ebf3a3 _public_6ebf3a3
#define public_6ebf3f9 _public_6ebf3f9
#define public_6ebf400 _public_6ebf400
#define public_6ebf440 _public_6ebf440
#define public_6ebf450 _public_6ebf450
#define public_6ebf47a _public_6ebf47a
#define public_6ebf49d _public_6ebf49d
#define public_6ebf4c0 _public_6ebf4c0
#define public_6ebf4d0 _public_6ebf4d0
#define public_6ebf4ef _public_6ebf4ef
#define public_6ebf512 _public_6ebf512
#define public_6ebf528 _public_6ebf528
#define public_6ebf565 _public_6ebf565
#define public_6ebf591 _public_6ebf591
#define public_6ebf597 _public_6ebf597
#define public_6ebf5c5 _public_6ebf5c5
#define public_6ebf5e8 _public_6ebf5e8
#define public_6ebf5f3 _public_6ebf5f3
#define public_6ebf600 _public_6ebf600
#define public_6ebf629 _public_6ebf629
#define public_6ebf64c _public_6ebf64c
#define public_6ebf661 _public_6ebf661

PROC_DECLARE(0x6ebf2b0, internal_6ebf2b0, public_6ebf2b0);
extern "C" NAKED register_t __cdecl internal_6ebf2b0()
{
    __asm
    {
        push ecx
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        mov dl, byte ptr ds : [ebx+1]
        cmp dl, 1
        ja public_6ebf2e4
        mov cl, byte ptr ds : [ebx+2]
        xor eax, eax
        mov al, cl
        and eax, 0xFFFFFFF7
        cmp eax, 3
        jg public_6ebf2e4
        mov al, byte ptr ds : [ebx+0x10]
        cmp al, 8
        je public_6ebf2e9
        cmp al, 0xF
        je public_6ebf2e9
        cmp al, 0x10
        je public_6ebf2e9
        cmp al, 0x18
        je public_6ebf2e9
        cmp al, 0x20
        je public_6ebf2e9
        public_6ebf2e4 : nop
        xor al, al
        pop ebx
        pop ecx
        ret 
        public_6ebf2e9 : nop
        and cl, 7
        cmp cl, 1
        jne public_6ebf301
        cmp dl, cl
        jne public_6ebf301
        push 0
        push 0
        push 0
        push 0
        push 8
        jmp public_6ebf344
        public_6ebf301 : nop
        cmp al, 0x10
        jne public_6ebf311
        push 0
        push 5
        push 5
        push 5
        push 0x10
        jmp public_6ebf344
        public_6ebf311 : nop
        cmp cl, 3
        jne public_6ebf322
        push 0
        push 0
        push 0
        push 8
        push 8
        jmp public_6ebf344
        public_6ebf322 : nop
        cmp cl, 1
        jne public_6ebf32a
        mov al, byte ptr ds : [ebx+7]
        public_6ebf32a : nop
        cmp al, 0x20
        jne public_6ebf33a
        push 8
        push 8
        push 8
        push 8
        push 0x20
        jmp public_6ebf344
        public_6ebf33a : nop
        push 0
        push 8
        push 8
        push 8
        push 0x18
        public_6ebf344 : nop
        mov ecx, dword ptr ss : [esp+0x24]
        call public_6ed0bc0
        mov cl, byte ptr ds : [ebx+2]
        push ebp
        and cl, 7
        cmp cl, 1
        push esi
        push edi
        jne public_6ebf3a3
        mov al, byte ptr ds : [ebx+7]
        movzx edx, byte ptr ds : [ebx]
        mov edi, dword ptr ss : [esp+0x20]
        shr al, 3
        movzx esi, al
        lea ecx, ds:[edx+ebx+0x12]
        lea ecx, ds:[esi+ecx-1]
        mov dword ptr ss : [esp+0x18], 0x100
        nop 
        lea esp, ss:[esp]
        public_6ebf380 : nop
        xor eax, eax
        test esi, esi
        jle public_6ebf394
        mov ebp, ecx
        public_6ebf388 : nop
        mov dl, byte ptr ss : [ebp]
        mov byte ptr ds : [edi+eax], dl
        inc eax
        dec ebp
        cmp eax, esi
        jl public_6ebf388
        public_6ebf394 : nop
        mov eax, dword ptr ss : [esp+0x18]
        add ecx, esi
        add edi, esi
        dec eax
        mov dword ptr ss : [esp+0x18], eax
        jne public_6ebf380
        public_6ebf3a3 : nop
        mov eax, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ds : [eax]
        push ecx
        call public_6ed0ba0
        mov eax, dword ptr ds : [eax+4]
        movsx edx, word ptr ds : [ebx+0xC]
        lea ebp, ds:[eax+7]
        movsx eax, word ptr ds : [ebx+0xE]
        shr ebp, 3
        imul ebp, edx
        imul eax, ebp
        push eax
        call public_6ed0c5c
        mov edx, dword ptr ss : [esp+0x2C]
        mov edi, eax
        mov dword ptr ds : [edx], edi
        mov al, byte ptr ds : [ebx+2]
        and al, 7
        add esp, 8
        cmp al, 1
        jne public_6ebf3f9
        movsx ecx, word ptr ds : [ebx+3]
        movsx eax, word ptr ds : [ebx+5]
        movzx esi, byte ptr ds : [ebx]
        add eax, ecx
        lea ecx, ds:[eax+ebx+6]
        lea eax, ds:[ecx+eax*2+0xC]
        add esi, eax
        jmp public_6ebf400
        public_6ebf3f9 : nop
        movzx ecx, byte ptr ds : [ebx]
        lea esi, ds:[ecx+ebx+0x12]
        public_6ebf400 : nop
        mov al, byte ptr ds : [ebx+0x11]
        mov cl, al
        not cl
        test cl, 0x20
        mov dword ptr ss : [esp+0x18], esi
        jne public_6ebf565
        test al, 0x10
        je public_6ebf512
        mov eax, dword ptr ss : [esp+0x1C]
        cmp dword ptr ds : [eax], 1
        jne public_6ebf49d
        xor eax, eax
        cmp word ptr ds : [ebx+0xE], ax
        mov dword ptr ss : [esp+0x20], eax
        jle public_6ebf661
        movsx ecx, word ptr ds : [ebx+0xC]
        mov dword ptr ss : [esp+0x1C], eax
        lea ecx, ds:[ecx]
        public_6ebf440 : nop
        xor eax, eax
        test ecx, ecx
        jle public_6ebf47a
        mov edi, dword ptr ss : [esp+0x1C]
        add edi, esi
        mov dword ptr ss : [esp+0x24], edi
        public_6ebf450 : nop
        mov edi, dword ptr ss : [esp+0x1C]
        mov esi, dword ptr ds : [edx]
        sub ecx, eax
        add ecx, edi
        mov edi, dword ptr ss : [esp+0x24]
        mov dword ptr ss : [esp+0x10], edx
        mov dl, byte ptr ds : [edi+eax]
        mov byte ptr ds : [ecx+esi-1], dl
        movsx ecx, word ptr ds : [ebx+0xC]
        mov edx, dword ptr ss : [esp+0x10]
        inc eax
        cmp eax, ecx
        jl public_6ebf450
        mov esi, dword ptr ss : [esp+0x18]
        public_6ebf47a : nop
        mov edi, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ss : [esp+0x20]
        add edi, ebp
        mov dword ptr ss : [esp+0x1C], edi
        movsx edi, word ptr ds : [ebx+0xE]
        inc eax
        cmp eax, edi
        mov dword ptr ss : [esp+0x20], eax
        jl public_6ebf440
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        pop ecx
        ret 
        public_6ebf49d : nop
        cmp word ptr ds : [ebx+0xE], 0
        mov dword ptr ss : [esp+0x18], 0
        jle public_6ebf661
        mov ecx, ebp
        sub ecx, esi
        mov dword ptr ss : [esp+0x1C], esi
        mov dword ptr ss : [esp+0x24], ecx
        lea esp, ss:[esp]
        public_6ebf4c0 : nop
        xor eax, eax
        test ebp, ebp
        jbe public_6ebf4ef
        mov esi, dword ptr ss : [esp+0x1C]
        add esi, ecx
        lea esp, ss:[esp]
        public_6ebf4d0 : nop
        mov ecx, dword ptr ds : [edx]
        mov edi, dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0x20], edx
        mov dl, byte ptr ds : [edi+eax]
        mov byte ptr ds : [esi+ecx-1], dl
        mov edx, dword ptr ss : [esp+0x20]
        inc eax
        dec esi
        cmp eax, ebp
        jb public_6ebf4d0
        mov ecx, dword ptr ss : [esp+0x24]
        public_6ebf4ef : nop
        mov esi, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ss : [esp+0x18]
        add esi, ebp
        mov dword ptr ss : [esp+0x1C], esi
        movsx esi, word ptr ds : [ebx+0xE]
        inc eax
        cmp eax, esi
        mov dword ptr ss : [esp+0x18], eax
        jl public_6ebf4c0
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        pop ecx
        ret 
        public_6ebf512 : nop
        movsx edi, word ptr ds : [ebx+0xE]
        xor eax, eax
        test edi, edi
        mov dword ptr ss : [esp+0x1C], eax
        jle public_6ebf661
        mov dword ptr ss : [esp+0x18], esi
        public_6ebf528 : nop
        sub edi, eax
        mov eax, dword ptr ds : [edx]
        dec edi
        imul edi, ebp
        add edi, eax
        mov ecx, ebp
        mov eax, ecx
        shr ecx, 2
        rep movsd
        mov ecx, eax
        mov eax, dword ptr ss : [esp+0x1C]
        and ecx, 3
        rep movsb
        mov esi, dword ptr ss : [esp+0x18]
        movsx edi, word ptr ds : [ebx+0xE]
        inc eax
        add esi, ebp
        cmp eax, edi
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ss : [esp+0x18], esi
        jl public_6ebf528
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        pop ecx
        ret 
        public_6ebf565 : nop
        test al, 0x10
        je public_6ebf64c
        mov ecx, dword ptr ss : [esp+0x1C]
        cmp dword ptr ds : [ecx], 1
        mov dword ptr ss : [esp+0x1C], 0
        jne public_6ebf5e8
        cmp word ptr ds : [ebx+0xE], 0
        jle public_6ebf661
        movsx ecx, word ptr ds : [ebx+0xC]
        mov dword ptr ss : [esp+0x18], esi
        public_6ebf591 : nop
        xor eax, eax
        test ecx, ecx
        jle public_6ebf5c5
        public_6ebf597 : nop
        movsx esi, word ptr ds : [ebx+0xE]
        sub esi, dword ptr ss : [esp+0x1C]
        mov edi, dword ptr ss : [esp+0x18]
        dec esi
        imul esi, ebp
        sub esi, eax
        add esi, ecx
        mov ecx, dword ptr ds : [edx]
        mov dword ptr ss : [esp+0x20], edx
        mov dl, byte ptr ds : [edi+eax]
        mov byte ptr ds : [esi+ecx-1], dl
        movsx ecx, word ptr ds : [ebx+0xC]
        mov edx, dword ptr ss : [esp+0x20]
        inc eax
        cmp eax, ecx
        jl public_6ebf597
        public_6ebf5c5 : nop
        mov esi, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ss : [esp+0x1C]
        add esi, ebp
        mov dword ptr ss : [esp+0x18], esi
        movsx esi, word ptr ds : [ebx+0xE]
        inc eax
        cmp eax, esi
        mov dword ptr ss : [esp+0x1C], eax
        jl public_6ebf591
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        pop ecx
        ret 
        public_6ebf5e8 : nop
        cmp word ptr ds : [ebx+0xE], 0
        jle public_6ebf661
        mov dword ptr ss : [esp+0x18], esi
        public_6ebf5f3 : nop
        xor eax, eax
        test ebp, ebp
        jbe public_6ebf629
        lea esp, ss:[esp]
        public_6ebf600 : nop
        movsx ecx, word ptr ds : [ebx+0xE]
        mov edi, dword ptr ss : [esp+0x1C]
        mov esi, dword ptr ds : [edx]
        sub ecx, edi
        mov edi, dword ptr ss : [esp+0x18]
        imul ecx, ebp
        sub ecx, eax
        mov dword ptr ss : [esp+0x20], edx
        mov dl, byte ptr ds : [edi+eax]
        inc eax
        cmp eax, ebp
        mov byte ptr ds : [ecx+esi-1], dl
        mov edx, dword ptr ss : [esp+0x20]
        jb public_6ebf600
        public_6ebf629 : nop
        mov eax, dword ptr ss : [esp+0x1C]
        mov edi, dword ptr ss : [esp+0x18]
        movsx ecx, word ptr ds : [ebx+0xE]
        inc eax
        add edi, ebp
        cmp eax, ecx
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ss : [esp+0x18], edi
        jl public_6ebf5f3
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        pop ecx
        ret 
        public_6ebf64c : nop
        movsx ecx, word ptr ds : [ebx+0xE]
        imul ecx, ebp
        mov edx, ecx
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        public_6ebf661 : nop
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6ebf2b0)
    }
}

#undef public_6ebf2e4
#undef public_6ebf2e9
#undef public_6ebf301
#undef public_6ebf311
#undef public_6ebf322
#undef public_6ebf32a
#undef public_6ebf33a
#undef public_6ebf344
#undef public_6ebf380
#undef public_6ebf388
#undef public_6ebf394
#undef public_6ebf3a3
#undef public_6ebf3f9
#undef public_6ebf400
#undef public_6ebf440
#undef public_6ebf450
#undef public_6ebf47a
#undef public_6ebf49d
#undef public_6ebf4c0
#undef public_6ebf4d0
#undef public_6ebf4ef
#undef public_6ebf512
#undef public_6ebf528
#undef public_6ebf565
#undef public_6ebf591
#undef public_6ebf597
#undef public_6ebf5c5
#undef public_6ebf5e8
#undef public_6ebf5f3
#undef public_6ebf600
#undef public_6ebf629
#undef public_6ebf64c
#undef public_6ebf661
