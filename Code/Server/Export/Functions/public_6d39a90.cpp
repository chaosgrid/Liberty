#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d1f540);
CLANG_FORWARD_PROC_SYMBOL(public_6d39440);
CLANG_FORWARD_PROC_SYMBOL(public_6d3e550);

#define public_6d39af2 _public_6d39af2
#define public_6d39af6 _public_6d39af6
#define public_6d39b3a _public_6d39b3a
#define public_6d39b58 _public_6d39b58
#define public_6d39b9f _public_6d39b9f
#define public_6d39ba3 _public_6d39ba3
#define public_6d39bdf _public_6d39bdf
#define public_6d39be7 _public_6d39be7
#define public_6d39beb _public_6d39beb
#define public_6d39c22 _public_6d39c22
#define public_6d39c24 _public_6d39c24
#define public_6d39c35 _public_6d39c35
#define public_6d39c47 _public_6d39c47

PROC_DECLARE(0x6d39a90, internal_6d39a90, public_6d39a90);
extern "C" NAKED register_t __cdecl internal_6d39a90()
{
    __asm
    {
        sub esp, 0x10
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x24]
        mov eax, dword ptr ds : [edi+0x10]
        mov ebp, ecx
        mov dword ptr ss : [esp+0x14], eax
        mov eax, dword ptr ss : [ebp+0x10]
        test eax, eax
        mov dword ptr ss : [esp+0x10], ebp
        mov dword ptr ss : [esp+0x24], 0
        je public_6d39beb
        mov ecx, dword ptr ss : [ebp+8]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edi+0x18], edx
        mov eax, dword ptr ds : [ecx+8]
        mov edx, dword ptr ds : [edi]
        mov edx, dword ptr ds : [edx+4]
        shl eax, 5
        add eax, edx
        mov dl, byte ptr ds : [eax+8]
        test dl, dl
        mov dword ptr ss : [esp+0x18], ecx
        je public_6d39beb
        mov esi, dword ptr ds : [eax]
        mov eax, dword ptr ds : [eax+4]
        cmp esi, eax
        mov ebx, dword ptr ds : [edi+0x10]
        mov dword ptr ss : [esp+0x1C], eax
        je public_6d39b3a
        jmp public_6d39af6
        public_6d39af2 : nop
        mov ecx, dword ptr ss : [esp+0x18]
        public_6d39af6 : nop
        push ebx
        push edi
        add ecx, 0xD
        call public_6d39440
        test al, al
        jne public_6d39be7
        mov edx, dword ptr ss : [esp+0x18]
        xor eax, eax
        mov ax, word ptr ds : [esi]
        xor ecx, ecx
        mov cx, word ptr ds : [ebx]
        push eax
        push ecx
        lea ecx, ds:[edx+0xC]
        call public_6d3e550
        test al, al
        jne public_6d39be7
        mov eax, dword ptr ss : [esp+0x1C]
        add esi, 2
        add ebx, 2
        cmp esi, eax
        jne public_6d39af2
        mov ebp, dword ptr ss : [esp+0x10]
        public_6d39b3a : nop
        mov edx, dword ptr ss : [esp+0x14]
        mov eax, ebx
        sub eax, edx
        test eax, 0xFFFFFFFE
        mov dword ptr ds : [edi+0x10], ebx
        jne public_6d39b58
        mov ecx, dword ptr ss : [ebp+0xC]
        mov dword ptr ss : [esp+0x24], ecx
        jmp public_6d39beb
        public_6d39b58 : nop
        mov eax, dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ss : [ebp+0x10]
        inc eax
        cmp eax, ecx
        mov dword ptr ss : [esp+0x24], eax
        jae public_6d39beb
        mov ecx, dword ptr ss : [ebp+8]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edi+0x18], edx
        mov eax, dword ptr ds : [ecx+8]
        mov edx, dword ptr ds : [edi]
        mov edx, dword ptr ds : [edx+4]
        shl eax, 5
        add eax, edx
        mov dl, byte ptr ds : [eax+8]
        test dl, dl
        mov dword ptr ss : [esp+0x18], ecx
        je public_6d39beb
        mov esi, dword ptr ds : [eax]
        mov eax, dword ptr ds : [eax+4]
        cmp esi, eax
        mov ebx, dword ptr ds : [edi+0x10]
        mov dword ptr ss : [esp+0x1C], eax
        je public_6d39bdf
        jmp public_6d39ba3
        public_6d39b9f : nop
        mov ecx, dword ptr ss : [esp+0x18]
        public_6d39ba3 : nop
        push ebx
        push edi
        add ecx, 0xD
        call public_6d39440
        test al, al
        jne public_6d39be7
        mov edx, dword ptr ss : [esp+0x18]
        xor eax, eax
        mov ax, word ptr ds : [esi]
        xor ecx, ecx
        mov cx, word ptr ds : [ebx]
        push eax
        push ecx
        lea ecx, ds:[edx+0xC]
        call public_6d3e550
        test al, al
        jne public_6d39be7
        mov eax, dword ptr ss : [esp+0x1C]
        add esi, 2
        add ebx, 2
        cmp esi, eax
        jne public_6d39b9f
        mov ebp, dword ptr ss : [esp+0x10]
        public_6d39bdf : nop
        mov dword ptr ds : [edi+0x10], ebx
        jmp public_6d39b58
        public_6d39be7 : nop
        mov ebp, dword ptr ss : [esp+0x10]
        public_6d39beb : nop
        mov eax, dword ptr ss : [esp+0x24]
        cmp eax, dword ptr ss : [ebp+0xC]
        jb public_6d39c47
        mov ecx, dword ptr ds : [edi+0x14]
        mov edx, dword ptr ds : [ecx+0x1008]
        mov esi, dword ptr ds : [ecx+0x100C]
        lea eax, ds:[edx+8]
        cmp eax, esi
        mov dword ptr ds : [ecx+0x1008], eax
        jbe public_6d39c22
        add eax, 0xFFFFFFF8
        push 8
        mov dword ptr ds : [ecx+0x1008], eax
        call public_6d1f540
        jmp public_6d39c24
        public_6d39c22 : nop
        mov eax, edx
        public_6d39c24 : nop
        test eax, eax
        je public_6d39c35
        mov ecx, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0x24]
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [eax+4], edx
        public_6d39c35 : nop
        mov eax, dword ptr ss : [ebp+4]
        mov dword ptr ds : [edi+0x18], eax
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 0x10
        ret 4
        public_6d39c47 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [edi+0x10], ecx
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x6d39a90)
    }
}

#undef public_6d39af2
#undef public_6d39af6
#undef public_6d39b3a
#undef public_6d39b58
#undef public_6d39b9f
#undef public_6d39ba3
#undef public_6d39bdf
#undef public_6d39be7
#undef public_6d39beb
#undef public_6d39c22
#undef public_6d39c24
#undef public_6d39c35
#undef public_6d39c47
