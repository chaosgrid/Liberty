#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_630d070);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_630d08e _public_630d08e
#define public_630d0f1 _public_630d0f1
#define public_630d0f5 _public_630d0f5
#define public_630d103 _public_630d103
#define public_630d119 _public_630d119
#define public_630d11d _public_630d11d
#define public_630d125 _public_630d125
#define public_630d141 _public_630d141
#define public_630d151 _public_630d151
#define public_630d153 _public_630d153
#define public_630d170 _public_630d170
#define public_630d184 _public_630d184
#define public_630d188 _public_630d188
#define public_630d193 _public_630d193
#define public_630d195 _public_630d195
#define public_630d1ce _public_630d1ce

PROC_DECLARE(0x630d070, internal_630d070, public_630d070);
extern "C" NAKED register_t __cdecl internal_630d070()
{
    __asm
    {
        sub esp, 0xC
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi]
        push edi
        xor edi, edi
        cmp eax, edi
        mov dword ptr ss : [esp+0x10], esi
        je public_630d08e
        pop edi
        mov eax, 1
        pop esi
        add esp, 0xC
        ret 
        public_630d08e : nop
        push ebx
        push 0x41C
        call public_6391d9c
        mov ebx, eax
        add esp, 4
        cmp ebx, edi
        mov dword ptr ss : [esp+0x10], ebx
        je public_630d1ce
        xor esi, esi
        push ebp
        mov dword ptr ds : [ebx+0x400], 0x20
        mov dword ptr ds : [ebx+0x404], 0x1E
        mov dword ptr ds : [ebx+0x408], 0x8005
        mov dword ptr ds : [ebx+0x40C], edi
        mov dword ptr ds : [ebx+0x410], edi
        mov byte ptr ds : [ebx+0x414], 1
        mov byte ptr ds : [ebx+0x415], 1
        mov dword ptr ds : [ebx+0x418], edi
        mov dword ptr ss : [esp+0x10], esi
        jmp public_630d0f5
        public_630d0f1 : nop
        mov esi, dword ptr ss : [esp+0x10]
        public_630d0f5 : nop
        mov al, byte ptr ds : [ebx+0x414]
        test al, al
        je public_630d125
        mov eax, esi
        xor edx, edx
        public_630d103 : nop
        mov ecx, 7
        sub ecx, edx
        mov edi, 1
        shl edi, cl
        test al, 1
        je public_630d119
        or esi, edi
        jmp public_630d11d
        public_630d119 : nop
        not edi
        and esi, edi
        public_630d11d : nop
        shr eax, 1
        inc edx
        cmp edx, 8
        jl public_630d103
        public_630d125 : nop
        mov edx, dword ptr ds : [ebx+0x404]
        lea ecx, ds:[edx-1]
        mov ebp, 1
        shl ebp, cl
        lea ecx, ds:[edx-8]
        shl esi, cl
        mov eax, 8
        mov ecx, esi
        public_630d141 : nop
        test ebp, ecx
        je public_630d151
        mov esi, dword ptr ds : [ebx+0x408]
        add ecx, ecx
        xor ecx, esi
        jmp public_630d153
        public_630d151 : nop
        shl ecx, 1
        public_630d153 : nop
        dec eax
        jne public_630d141
        mov al, byte ptr ds : [ebx+0x414]
        test al, al
        je public_630d195
        xor esi, esi
        test edx, edx
        mov edi, ecx
        mov eax, ecx
        jle public_630d193
        lea ebx, ds:[ebx]
        public_630d170 : nop
        mov ecx, edx
        sub ecx, esi
        dec ecx
        mov ebx, 1
        shl ebx, cl
        test al, 1
        je public_630d184
        or edi, ebx
        jmp public_630d188
        public_630d184 : nop
        not ebx
        and edi, ebx
        public_630d188 : nop
        shr eax, 1
        inc esi
        cmp esi, edx
        jl public_630d170
        mov ebx, dword ptr ss : [esp+0x14]
        public_630d193 : nop
        mov ecx, edi
        public_630d195 : nop
        mov eax, dword ptr ss : [esp+0x10]
        lea edx, ss:[ebp+ebp-1]
        or edx, 1
        and edx, ecx
        mov dword ptr ds : [ebx+eax*4], edx
        inc eax
        cmp eax, 0x100
        mov dword ptr ss : [esp+0x10], eax
        jl public_630d0f1
        mov esi, dword ptr ss : [esp+0x18]
        mov eax, ebx
        xor ecx, ecx
        test eax, eax
        pop ebp
        setne cl
        pop ebx
        mov dword ptr ds : [esi], eax
        pop edi
        pop esi
        mov eax, ecx
        add esp, 0xC
        ret 
        public_630d1ce : nop
        xor eax, eax
        xor ecx, ecx
        test eax, eax
        setne cl
        pop ebx
        mov dword ptr ds : [esi], eax
        pop edi
        pop esi
        mov eax, ecx
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x630d070)
    }
}

#undef public_630d08e
#undef public_630d0f1
#undef public_630d0f5
#undef public_630d103
#undef public_630d119
#undef public_630d11d
#undef public_630d125
#undef public_630d141
#undef public_630d151
#undef public_630d153
#undef public_630d170
#undef public_630d184
#undef public_630d188
#undef public_630d193
#undef public_630d195
#undef public_630d1ce
