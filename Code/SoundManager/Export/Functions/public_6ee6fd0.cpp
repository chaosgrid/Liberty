#include "SoundManager-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ee6fd0);

#define public_6ee6fe8 _public_6ee6fe8
#define public_6ee700c _public_6ee700c
#define public_6ee7010 _public_6ee7010
#define public_6ee7015 _public_6ee7015
#define public_6ee7035 _public_6ee7035
#define public_6ee7040 _public_6ee7040
#define public_6ee704c _public_6ee704c
#define public_6ee7055 _public_6ee7055
#define public_6ee7067 _public_6ee7067
#define public_6ee706f _public_6ee706f
#define public_6ee7077 _public_6ee7077
#define public_6ee707f _public_6ee707f
#define public_6ee7087 _public_6ee7087
#define public_6ee70a5 _public_6ee70a5
#define public_6ee70ad _public_6ee70ad
#define public_6ee70b5 _public_6ee70b5
#define public_6ee70bd _public_6ee70bd
#define public_6ee70c5 _public_6ee70c5
#define public_6ee70e0 _public_6ee70e0
#define public_6ee70e8 _public_6ee70e8
#define public_6ee70f0 _public_6ee70f0
#define public_6ee70f8 _public_6ee70f8
#define public_6ee7100 _public_6ee7100
#define public_6ee7156 _public_6ee7156

PROC_DECLARE(0x6ee6fd0, internal_6ee6fd0, public_6ee6fd0);
extern "C" NAKED register_t __cdecl internal_6ee6fd0()
{
    __asm
    {
        sub esp, 0xDC
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0xE8]
        push edi
        mov edi, dword ptr ds : [public_6eea024]
        mov eax, esi
        public_6ee6fe8 : nop
        mov dl, byte ptr ds : [eax]
        mov bl, byte ptr ds : [edi]
        mov cl, dl
        cmp dl, bl
        jne public_6ee7010
        test cl, cl
        je public_6ee700c
        mov dl, byte ptr ds : [eax+1]
        mov bl, byte ptr ds : [edi+1]
        mov cl, dl
        cmp dl, bl
        jne public_6ee7010
        add eax, 2
        add edi, 2
        test cl, cl
        jne public_6ee6fe8
        public_6ee700c : nop
        xor eax, eax
        jmp public_6ee7015
        public_6ee7010 : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_6ee7015 : nop
        test eax, eax
        jne public_6ee7035
        mov ecx, dword ptr ss : [esp+0xF0]
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [ecx+4], eax
        pop edi
        mov dword ptr ds : [ecx+8], eax
        pop esi
        mov dword ptr ds : [ecx+0xC], eax
        pop ebx
        add esp, 0xDC
        ret 
        public_6ee7035 : nop
        mov al, byte ptr ds : [esi]
        test al, al
        je public_6ee704c
        nop 
        lea esp, ss:[esp]
        public_6ee7040 : nop
        cmp al, 0x7B
        je public_6ee704c
        mov al, byte ptr ds : [esi+1]
        inc esi
        test al, al
        jne public_6ee7040
        public_6ee704c : nop
        inc esi
        lea edx, ss:[esp+0x20]
        mov eax, esi
        sub edx, esi
        public_6ee7055 : nop
        mov cl, byte ptr ds : [eax]
        mov byte ptr ds : [edx+eax], cl
        inc eax
        test cl, cl
        jne public_6ee7055
        mov al, byte ptr ds : [esi]
        test al, al
        mov ecx, esi
        je public_6ee7087
        public_6ee7067 : nop
        cmp al, 0x30
        jl public_6ee706f
        cmp al, 0x39
        jle public_6ee707f
        public_6ee706f : nop
        cmp al, 0x61
        jl public_6ee7077
        cmp al, 0x66
        jle public_6ee707f
        public_6ee7077 : nop
        cmp al, 0x41
        jl public_6ee7087
        cmp al, 0x46
        jg public_6ee7087
        public_6ee707f : nop
        mov al, byte ptr ds : [esi+1]
        inc esi
        test al, al
        jne public_6ee7067
        public_6ee7087 : nop
        push ebp
        mov ebp, dword ptr ds : [public_6ee909c]
        push 0x10
        push 0
        push ecx
        inc esi
        call ebp
        mov dword ptr ss : [esp+0x2C], eax
        mov al, byte ptr ds : [esi]
        add esp, 0xC
        test al, al
        mov ecx, esi
        je public_6ee70c5
        public_6ee70a5 : nop
        cmp al, 0x30
        jl public_6ee70ad
        cmp al, 0x39
        jle public_6ee70bd
        public_6ee70ad : nop
        cmp al, 0x61
        jl public_6ee70b5
        cmp al, 0x66
        jle public_6ee70bd
        public_6ee70b5 : nop
        cmp al, 0x41
        jl public_6ee70c5
        cmp al, 0x46
        jg public_6ee70c5
        public_6ee70bd : nop
        mov al, byte ptr ds : [esi+1]
        inc esi
        test al, al
        jne public_6ee70a5
        public_6ee70c5 : nop
        push 0x10
        push 0
        push ecx
        inc esi
        call ebp
        mov dword ptr ss : [esp+0x28], eax
        mov al, byte ptr ds : [esi]
        add esp, 0xC
        test al, al
        mov ecx, esi
        je public_6ee7100
        lea esp, ss:[esp]
        public_6ee70e0 : nop
        cmp al, 0x30
        jl public_6ee70e8
        cmp al, 0x39
        jle public_6ee70f8
        public_6ee70e8 : nop
        cmp al, 0x61
        jl public_6ee70f0
        cmp al, 0x66
        jle public_6ee70f8
        public_6ee70f0 : nop
        cmp al, 0x41
        jl public_6ee7100
        cmp al, 0x46
        jg public_6ee7100
        public_6ee70f8 : nop
        mov al, byte ptr ds : [esi+1]
        inc esi
        test al, al
        jne public_6ee70e0
        public_6ee7100 : nop
        push 0x10
        push 0
        push ecx
        inc esi
        call ebp
        mov dl, byte ptr ds : [esi]
        push 0x10
        inc esi
        mov ebx, eax
        mov al, byte ptr ds : [esi]
        lea ecx, ss:[esp+0x20]
        push 0
        push ecx
        mov byte ptr ss : [esp+0x28], dl
        mov byte ptr ss : [esp+0x29], al
        inc esi
        mov byte ptr ss : [esp+0x2A], 0
        call ebp
        mov dl, byte ptr ds : [esi]
        push 0x10
        mov byte ptr ss : [esp+0x30], al
        mov al, byte ptr ds : [esi+1]
        inc esi
        lea ecx, ss:[esp+0x2C]
        push 0
        push ecx
        mov byte ptr ss : [esp+0x34], dl
        mov byte ptr ss : [esp+0x35], al
        mov byte ptr ss : [esp+0x36], 0
        call ebp
        add esp, 0x24
        add esi, 2
        mov byte ptr ss : [esp+0x15], al
        xor edi, edi
        public_6ee7156 : nop
        mov dl, byte ptr ds : [esi]
        mov al, byte ptr ds : [esi+1]
        push 0x10
        inc esi
        lea ecx, ss:[esp+0x14]
        push 0
        push ecx
        mov byte ptr ss : [esp+0x1C], dl
        mov byte ptr ss : [esp+0x1D], al
        inc esi
        mov byte ptr ss : [esp+0x1E], 0
        call ebp
        add esp, 0xC
        mov byte ptr ss : [esp+edi+0x16], al
        inc edi
        cmp edi, 6
        jl public_6ee7156
        mov eax, dword ptr ss : [esp+0xF4]
        mov edx, dword ptr ss : [esp+0x20]
        mov cx, word ptr ss : [esp+0x1C]
        pop ebp
        pop edi
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ss : [esp+0xC]
        mov word ptr ds : [eax+4], cx
        mov ecx, dword ptr ss : [esp+0x10]
        pop esi
        mov word ptr ds : [eax+6], bx
        mov dword ptr ds : [eax+8], edx
        mov dword ptr ds : [eax+0xC], ecx
        pop ebx
        add esp, 0xDC
        ret 
        UNREACHABLE_TRAP(0x6ee6fd0)
    }
}

#undef public_6ee6fe8
#undef public_6ee700c
#undef public_6ee7010
#undef public_6ee7015
#undef public_6ee7035
#undef public_6ee7040
#undef public_6ee704c
#undef public_6ee7055
#undef public_6ee7067
#undef public_6ee706f
#undef public_6ee7077
#undef public_6ee707f
#undef public_6ee7087
#undef public_6ee70a5
#undef public_6ee70ad
#undef public_6ee70b5
#undef public_6ee70bd
#undef public_6ee70c5
#undef public_6ee70e0
#undef public_6ee70e8
#undef public_6ee70f0
#undef public_6ee70f8
#undef public_6ee7100
#undef public_6ee7156
