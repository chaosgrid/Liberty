#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_405a00);
CLANG_FORWARD_PROC_SYMBOL(public_45a1a0);
CLANG_FORWARD_PROC_SYMBOL(public_45a740);
CLANG_FORWARD_PROC_SYMBOL(public_4e6cb0);
CLANG_FORWARD_PROC_SYMBOL(public_561f20);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec0);

#define public_4e6d25 _public_4e6d25
#define public_4e6d66 _public_4e6d66
#define public_4e6d85 _public_4e6d85
#define public_4e6d91 _public_4e6d91
#define public_4e6db4 _public_4e6db4
#define public_4e6dc0 _public_4e6dc0
#define public_4e6de8 _public_4e6de8
#define public_4e6df4 _public_4e6df4
#define public_4e6e17 _public_4e6e17
#define public_4e6e23 _public_4e6e23
#define public_4e6e5c _public_4e6e5c
#define public_4e6e60 _public_4e6e60
#define public_4e6eb4 _public_4e6eb4

PROC_DECLARE(0x4e6cb0, internal_4e6cb0, public_4e6cb0);
extern "C" NAKED register_t __cdecl internal_4e6cb0()
{
    __asm
    {
        sub esp, 0x24
        push esi
        push edi
        mov edi, ecx
        mov eax, dword ptr ds : [edi+0x398]
        test eax, eax
        mov dword ptr ss : [esp+0x10], edi
        je public_4e6eb4
        add eax, 0xFFFFFFF8
        test eax, eax
        je public_4e6eb4
        add eax, 0xC
        test eax, eax
        je public_4e6eb4
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        je public_4e6eb4
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x103
        cmp ecx, 0x103
        jne public_4e6eb4
        add eax, 0x144
        lea edx, ss:[esp+0x24]
        push edx
        mov ecx, eax
        mov byte ptr ss : [esp+0x28], 1
        mov dword ptr ss : [esp+0x1C], eax
        call dword ptr ds : [public_5c6584]
        mov esi, eax
        test esi, esi
        je public_4e6eb4
        push ebx
        public_4e6d25 : nop
        mov ebx, dword ptr ds : [public_679bb4]
        mov ecx, esi
        mov dword ptr ss : [esp+0xC], ebx
        call dword ptr ds : [public_5c6598]
        fsubr dword ptr ds : [public_5c75dc]
        fst dword ptr ss : [esp+0x18]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x41
        jne public_4e6d66
        mov eax, dword ptr ss : [esp+0x18]
        push eax
        lea ecx, ss:[esp+0x24]
        push ecx
        call public_45a1a0
        mov ebx, dword ptr ds : [eax]
        add esp, 8
        mov dword ptr ss : [esp+0xC], ebx
        public_4e6d66 : nop
        xor edx, edx
        mov dl, bl
        mov dword ptr ss : [esp+0x18], edx
        fild dword ptr ss : [esp+0x18]
        fmul dword ptr ds : [public_5d8e80]
        call public_5b7ec0
        test eax, eax
        jge public_4e6d85
        xor eax, eax
        jmp public_4e6d91
        public_4e6d85 : nop
        cmp eax, 0xFF
        jle public_4e6d91
        mov eax, 0xFF
        public_4e6d91 : nop
        mov byte ptr ss : [esp+0x10], al
        xor eax, eax
        mov al, bh
        mov dword ptr ss : [esp+0x18], eax
        fild dword ptr ss : [esp+0x18]
        fmul dword ptr ds : [public_5d8e80]
        call public_5b7ec0
        test eax, eax
        jge public_4e6db4
        xor eax, eax
        jmp public_4e6dc0
        public_4e6db4 : nop
        cmp eax, 0xFF
        jle public_4e6dc0
        mov eax, 0xFF
        public_4e6dc0 : nop
        mov bx, word ptr ss : [esp+0xE]
        xor ecx, ecx
        mov cl, bl
        mov byte ptr ss : [esp+0x11], al
        mov dword ptr ss : [esp+0x18], ecx
        fild dword ptr ss : [esp+0x18]
        fmul dword ptr ds : [public_5d8e80]
        call public_5b7ec0
        test eax, eax
        jge public_4e6de8
        xor eax, eax
        jmp public_4e6df4
        public_4e6de8 : nop
        cmp eax, 0xFF
        jle public_4e6df4
        mov eax, 0xFF
        public_4e6df4 : nop
        xor edx, edx
        mov dl, bh
        mov byte ptr ss : [esp+0x12], al
        mov dword ptr ss : [esp+0x18], edx
        fild dword ptr ss : [esp+0x18]
        fmul dword ptr ds : [public_5d8e80]
        call public_5b7ec0
        test eax, eax
        jge public_4e6e17
        xor eax, eax
        jmp public_4e6e23
        public_4e6e17 : nop
        cmp eax, 0xFF
        jle public_4e6e23
        mov eax, 0xFF
        public_4e6e23 : nop
        mov cx, word ptr ds : [edi+0x3B4]
        mov byte ptr ss : [esp+0x13], al
        mov eax, dword ptr ds : [esi+4]
        cmp cx, word ptr ds : [eax+4]
        mov ebx, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0xC], ebx
        jne public_4e6e60
        call public_45a740
        test al, al
        jne public_4e6e5c
        lea edx, ss:[esp+0x24]
        push ebx
        push edx
        call public_561f20
        mov ebx, dword ptr ds : [eax]
        add esp, 8
        mov dword ptr ss : [esp+0xC], ebx
        public_4e6e5c : nop
        mov edi, dword ptr ss : [esp+0x14]
        public_4e6e60 : nop
        mov ax, word ptr ss : [esp+0xE]
        xor ecx, ecx
        xor edx, edx
        mov cl, ah
        mov dl, bl
        movzx eax, al
        shl ecx, 8
        or ecx, edx
        xor edx, edx
        mov dl, bh
        shl ecx, 8
        or ecx, edx
        shl ecx, 8
        or ecx, eax
        push ecx
        push 0
        mov ecx, esi
        call dword ptr ds : [public_5c6580]
        push eax
        lea ecx, ds:[edi+0x3A0]
        call public_405a00
        lea ecx, ss:[esp+0x28]
        push ecx
        mov ecx, dword ptr ss : [esp+0x20]
        call dword ptr ds : [public_5c6584]
        mov esi, eax
        test esi, esi
        jne public_4e6d25
        pop ebx
        public_4e6eb4 : nop
        pop edi
        pop esi
        add esp, 0x24
        ret 
        UNREACHABLE_TRAP(0x4e6cb0)
    }
}

#undef public_4e6d25
#undef public_4e6d66
#undef public_4e6d85
#undef public_4e6d91
#undef public_4e6db4
#undef public_4e6dc0
#undef public_4e6de8
#undef public_4e6df4
#undef public_4e6e17
#undef public_4e6e23
#undef public_4e6e5c
#undef public_4e6e60
#undef public_4e6eb4
