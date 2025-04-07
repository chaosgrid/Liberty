#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ac45a0);
CLANG_FORWARD_PROC_SYMBOL(public_6ac4e20);
CLANG_FORWARD_PROC_SYMBOL(public_6ac4f80);
CLANG_FORWARD_PROC_SYMBOL(public_6ac4fb0);
CLANG_FORWARD_PROC_SYMBOL(public_6ac5090);
CLANG_FORWARD_PROC_SYMBOL(public_6ac8a90);

#define public_6ac4e56 _public_6ac4e56
#define public_6ac4e88 _public_6ac4e88
#define public_6ac4e91 _public_6ac4e91
#define public_6ac4e9f _public_6ac4e9f
#define public_6ac4ea1 _public_6ac4ea1
#define public_6ac4ee5 _public_6ac4ee5
#define public_6ac4f26 _public_6ac4f26

PROC_DECLARE(0x6ac4e20, internal_6ac4e20, public_6ac4e20);
extern "C" NAKED register_t __cdecl internal_6ac4e20()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        mov ebx, dword ptr ss : [ebp+0x14]
        push esi
        push edi
        mov esi, dword ptr ds : [ebx+0x100]
        push 0x261C
        mov dword ptr ss : [ebp-4], esi
        call public_6ac4f80
        mov edi, eax
        test edi, edi
        mov dword ptr ss : [ebp+0x14], edi
        jne public_6ac4e56
        mov edi, dword ptr ss : [ebp+0x10]
        mov ecx, esi
        rep stosd
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 0x10
        public_6ac4e56 : nop
        mov eax, dword ptr ss : [ebp+0xC]
        mov ecx, dword ptr ss : [ebp+8]
        push esi
        push ebx
        push eax
        push ecx
        call public_6ac8a90
        test eax, eax
        jl public_6ac4e88
        mov eax, dword ptr ss : [ebp+0xC]
        mov ecx, dword ptr ss : [ebp+8]
        push edi
        lea edx, ds:[ebx+0x114]
        push 0
        push edx
        push esi
        push ebx
        push eax
        push ecx
        call public_6ac5090
        mov edx, eax
        mov esi, edi
        jmp public_6ac4ea1
        public_6ac4e88 : nop
        mov esi, dword ptr ss : [ebp+8]
        mov eax, dword ptr ss : [ebp+0xC]
        mov edx, dword ptr ss : [ebp+8]
        public_6ac4e91 : nop
        test eax, eax
        je public_6ac4e9f
        mov ecx, dword ptr ds : [edx+eax*4-4]
        dec eax
        test ecx, ecx
        je public_6ac4e91
        inc eax
        public_6ac4e9f : nop
        mov edx, eax
        public_6ac4ea1 : nop
        mov eax, dword ptr ds : [ebx+0x110]
        test eax, eax
        jne public_6ac4ee5
        mov edi, dword ptr ss : [ebp+0x10]
        lea ebx, ds:[edx*4]
        mov ecx, ebx
        mov eax, ecx
        shr ecx, 2
        rep movsd
        mov ecx, eax
        xor eax, eax
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ss : [ebp-4]
        sub ecx, edx
        mov edx, dword ptr ss : [ebp+0x10]
        shl ecx, 2
        lea edi, ds:[ebx+edx]
        mov edx, ecx
        shr ecx, 2
        rep stosd
        mov ecx, edx
        and ecx, 3
        rep stosb
        jmp public_6ac4f26
        public_6ac4ee5 : nop
        mov eax, dword ptr ds : [ebx+0x104]
        mov ecx, edx
        mov dword ptr ss : [ebp+8], eax
        lea edi, ds:[edi+eax*4+0x100]
        rep movsd
        mov ecx, dword ptr ss : [ebp+0x14]
        lea esi, ds:[ecx+0x100]
        mov ecx, eax
        xor eax, eax
        mov edi, esi
        rep stosd
        mov eax, dword ptr ss : [ebp+0x14]
        mov ecx, dword ptr ss : [ebp+0x10]
        add eax, 0x300
        push eax
        mov eax, dword ptr ss : [ebp+8]
        push ebx
        push ecx
        add eax, edx
        push 0
        push eax
        push esi
        call public_6ac45a0
        public_6ac4f26 : nop
        mov ecx, dword ptr ss : [ebp+0x14]
        push ecx
        call public_6ac4fb0
        pop edi
        pop esi
        mov eax, 1
        pop ebx
        mov esp, ebp
        pop ebp
        ret 0x10
        UNREACHABLE_TRAP(0x6ac4e20)
    }
}

#undef public_6ac4e56
#undef public_6ac4e88
#undef public_6ac4e91
#undef public_6ac4e9f
#undef public_6ac4ea1
#undef public_6ac4ee5
#undef public_6ac4f26
