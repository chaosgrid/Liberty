#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ed1670);
CLANG_FORWARD_PROC_SYMBOL(public_6ed2d60);
CLANG_FORWARD_PROC_SYMBOL(public_6f15c70);
CLANG_FORWARD_PROC_SYMBOL(public_6f1fa00);
CLANG_FORWARD_PROC_SYMBOL(public_6fa7200);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6ec5750 _public_6ec5750
#define public_6ec5780 _public_6ec5780
#define public_6ec5787 _public_6ec5787
#define public_6ec57a7 _public_6ec57a7
#define public_6ec57ab _public_6ec57ab
#define public_6ec57b0 _public_6ec57b0
#define public_6ec57c5 _public_6ec57c5
#define public_6ec57c7 _public_6ec57c7
#define public_6ec57cb _public_6ec57cb
#define public_6ec57f7 _public_6ec57f7
#define public_6ec5816 _public_6ec5816
#define public_6ec5839 _public_6ec5839
#define public_6ec583f _public_6ec583f
#define public_6ec588f _public_6ec588f

PROC_DECLARE(0x6ec5700, internal_6ec5700, public_6ec5700);
extern "C" NAKED register_t __cdecl internal_6ec5700()
{
    __asm
    {
        sub esp, 0x50
        push ebp
        mov ebp, ecx
        lea eax, ss:[ebp+0x10]
        push eax
        call dword ptr ds : [public_6fb3000]
        mov ecx, dword ptr ss : [ebp+4]
        add esp, 4
        lea edx, ss:[esp+0xC]
        add ecx, 0xEC
        push edx
        mov dword ptr ss : [esp+0x10], eax
        call public_6fa7200
        mov ecx, dword ptr ss : [ebp+4]
        mov dword ptr ss : [esp+8], eax
        lea eax, ss:[esp+0xC]
        add ecx, 0xEC
        push eax
        call public_6ed1670
        mov ecx, dword ptr ss : [esp+8]
        cmp ecx, eax
        je public_6ec588f
        push ebx
        push esi
        push edi
        public_6ec5750 : nop
        add ecx, 0x10
        push ecx
        lea ecx, ss:[esp+0x30]
        push ecx
        mov ecx, dword ptr ss : [ebp+4]
        call public_6f15c70
        mov ebx, dword ptr ss : [ebp+4]
        mov edx, dword ptr ds : [ebx+0x15C]
        mov edi, dword ptr ds : [edx]
        xor al, al
        cmp edi, edx
        mov byte ptr ss : [esp+0x13], al
        mov dword ptr ss : [esp+0x1C], ebx
        je public_6ec57cb
        lea ebx, ds:[ebx]
        public_6ec5780 : nop
        lea esi, ss:[esp+0x30]
        lea eax, ds:[edi+0xC]
        public_6ec5787 : nop
        mov bl, byte ptr ds : [eax]
        mov cl, bl
        cmp bl, byte ptr ds : [esi]
        jne public_6ec57ab
        test cl, cl
        je public_6ec57a7
        mov bl, byte ptr ds : [eax+1]
        mov cl, bl
        cmp bl, byte ptr ds : [esi+1]
        jne public_6ec57ab
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_6ec5787
        public_6ec57a7 : nop
        xor eax, eax
        jmp public_6ec57b0
        public_6ec57ab : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_6ec57b0 : nop
        test eax, eax
        sete al
        test al, al
        jne public_6ec57c5
        mov edi, dword ptr ds : [edi]
        cmp edi, edx
        jne public_6ec5780
        mov al, byte ptr ss : [esp+0x13]
        jmp public_6ec57c7
        public_6ec57c5 : nop
        mov al, 1
        public_6ec57c7 : nop
        mov ebx, dword ptr ss : [esp+0x1C]
        public_6ec57cb : nop
        mov cl, byte ptr ss : [ebp+0x40]
        test cl, cl
        je public_6ec57f7
        test al, al
        je public_6ec583f
        mov edx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [edi]
        mov dword ptr ds : [edx], eax
        mov ecx, dword ptr ds : [edi]
        mov edx, dword ptr ds : [edi+4]
        push edi
        mov dword ptr ds : [ecx+4], edx
        call public_6fa8fe0
        mov eax, dword ptr ds : [ebx+0x160]
        add esp, 4
        dec eax
        jmp public_6ec5839
        public_6ec57f7 : nop
        test al, al
        jne public_6ec583f
        mov esi, dword ptr ds : [ebx+0x15C]
        mov edi, dword ptr ds : [esi+4]
        push 0x3C
        call public_6fa912a
        add esp, 4
        test edi, edi
        mov dword ptr ds : [eax], esi
        jne public_6ec5816
        mov edi, eax
        public_6ec5816 : nop
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        lea edx, ss:[esp+0x2C]
        mov dword ptr ds : [ecx], eax
        push edx
        add eax, 8
        push eax
        call public_6ed2d60
        mov eax, dword ptr ds : [ebx+0x160]
        add esp, 8
        inc eax
        public_6ec5839 : nop
        mov dword ptr ds : [ebx+0x160], eax
        public_6ec583f : nop
        mov edx, dword ptr ss : [esp+0x14]
        mov al, byte ptr ss : [ebp+0x40]
        lea ecx, ss:[esp+0x20]
        push ecx
        add edx, 0x10
        push edx
        mov dword ptr ss : [esp+0x28], 2
        mov byte ptr ss : [esp+0x2C], al
        call dword ptr ds : [public_6fb33c0]
        add esp, 8
        lea ecx, ss:[esp+0x14]
        call public_6f1fa00
        mov ecx, dword ptr ss : [ebp+4]
        lea eax, ss:[esp+0x18]
        add ecx, 0xEC
        push eax
        call public_6ed1670
        mov ecx, dword ptr ss : [esp+0x14]
        cmp ecx, eax
        jne public_6ec5750
        pop edi
        pop esi
        pop ebx
        public_6ec588f : nop
        mov al, 1
        pop ebp
        add esp, 0x50
        ret 
        UNREACHABLE_TRAP(0x6ec5700)
    }
}

#undef public_6ec5750
#undef public_6ec5780
#undef public_6ec5787
#undef public_6ec57a7
#undef public_6ec57ab
#undef public_6ec57b0
#undef public_6ec57c5
#undef public_6ec57c7
#undef public_6ec57cb
#undef public_6ec57f7
#undef public_6ec5816
#undef public_6ec5839
#undef public_6ec583f
#undef public_6ec588f
