#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea9f40);
CLANG_FORWARD_PROC_SYMBOL(public_6ed1670);
CLANG_FORWARD_PROC_SYMBOL(public_6f156b0);
CLANG_FORWARD_PROC_SYMBOL(public_6f159c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f15ae0);
CLANG_FORWARD_PROC_SYMBOL(public_6f15b90);
CLANG_FORWARD_PROC_SYMBOL(public_6f199f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f1fa00);
CLANG_FORWARD_PROC_SYMBOL(public_6fa7200);

#define public_6ec6124 _public_6ec6124
#define public_6ec6152 _public_6ec6152
#define public_6ec6167 _public_6ec6167
#define public_6ec618e _public_6ec618e
#define public_6ec61a0 _public_6ec61a0
#define public_6ec61c5 _public_6ec61c5
#define public_6ec61dd _public_6ec61dd
#define public_6ec61f5 _public_6ec61f5
#define public_6ec61f9 _public_6ec61f9
#define public_6ec6226 _public_6ec6226
#define public_6ec622a _public_6ec622a
#define public_6ec625e _public_6ec625e
#define public_6ec628d _public_6ec628d
#define public_6ec6297 _public_6ec6297

PROC_DECLARE(0x6ec60c0, internal_6ec60c0, public_6ec60c0);
extern "C" NAKED register_t __cdecl internal_6ec60c0()
{
    __asm
    {
        sub esp, 0x40
        push ebx
        push ebp
        push esi
        mov ebp, ecx
        lea eax, ss:[ebp+0x10]
        push edi
        mov bl, 1
        push eax
        mov byte ptr ss : [esp+0x17], bl
        call dword ptr ds : [public_6fb3000]
        mov ecx, dword ptr ss : [ebp+4]
        add esp, 4
        lea edx, ss:[esp+0x18]
        add ecx, 0xEC
        push edx
        mov dword ptr ss : [esp+0x1C], eax
        call public_6fa7200
        mov ecx, dword ptr ss : [ebp+4]
        mov dword ptr ss : [esp+0x14], eax
        cmp eax, dword ptr ds : [ecx+0xF0]
        je public_6ec625e
        lea eax, ss:[esp+0x18]
        add ecx, 0xEC
        push eax
        call public_6ed1670
        mov ecx, dword ptr ss : [esp+0x14]
        cmp ecx, eax
        je public_6ec628d
        xor ebx, ebx
        public_6ec6124 : nop
        add ecx, 0x10
        push ecx
        mov ecx, dword ptr ss : [ebp+4]
        mov dword ptr ss : [esp+0x20], ebx
        mov byte ptr ss : [esp+0x24], bl
        call public_6f156b0
        cmp eax, ebx
        je public_6ec6167
        add eax, 0xD8
        cmp eax, ebx
        jne public_6ec6152
        mov dword ptr ss : [esp+0x1C], ebx
        mov byte ptr ss : [esp+0x20], bl
        jmp public_6ec61f9
        public_6ec6152 : nop
        push eax
        lea ecx, ss:[esp+0x24]
        push 0x30
        push ecx
        call public_6ea9f40
        add esp, 0xC
        jmp public_6ec61f5
        public_6ec6167 : nop
        mov edx, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [ebp+4]
        add edx, 0x10
        push edx
        call public_6f159c0
        cmp eax, ebx
        je public_6ec61a0
        add eax, 0x3EC
        cmp eax, ebx
        jne public_6ec618e
        mov dword ptr ss : [esp+0x1C], ebx
        mov byte ptr ss : [esp+0x20], bl
        jmp public_6ec61f9
        public_6ec618e : nop
        push eax
        lea eax, ss:[esp+0x24]
        push 0x30
        push eax
        call public_6ea9f40
        add esp, 0xC
        jmp public_6ec61f5
        public_6ec61a0 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        add ecx, 0x10
        push ecx
        mov ecx, dword ptr ss : [ebp+4]
        call public_6f15ae0
        cmp eax, ebx
        je public_6ec61f9
        lea esi, ds:[eax+4]
        cmp esi, ebx
        jne public_6ec61c5
        mov dword ptr ss : [esp+0x1C], ebx
        mov byte ptr ss : [esp+0x20], bl
        jmp public_6ec61f9
        public_6ec61c5 : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x30
        jb public_6ec61dd
        mov eax, 0x2F
        public_6ec61dd : nop
        mov ecx, eax
        mov edx, ecx
        shr ecx, 2
        lea edi, ss:[esp+0x20]
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov byte ptr ss : [esp+eax+0x20], bl
        public_6ec61f5 : nop
        mov dword ptr ss : [esp+0x1C], eax
        public_6ec61f9 : nop
        mov eax, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [eax+0x10]
        test eax, 0x3FFFFFFF
        je public_6ec6226
        sub esp, 0x34
        mov edi, esp
        mov ecx, 0xD
        lea esi, ss:[esp+0x50]
        rep movsd
        mov ecx, dword ptr ss : [ebp+0x40]
        push ecx
        mov ecx, dword ptr ss : [ebp+4]
        push eax
        call public_6f199f0
        jmp public_6ec622a
        public_6ec6226 : nop
        mov byte ptr ss : [esp+0x13], bl
        public_6ec622a : nop
        lea ecx, ss:[esp+0x14]
        call public_6f1fa00
        mov ecx, dword ptr ss : [ebp+4]
        lea edx, ss:[esp+0x18]
        add ecx, 0xEC
        push edx
        call public_6ed1670
        mov ecx, dword ptr ss : [esp+0x14]
        cmp ecx, eax
        jne public_6ec6124
        mov al, byte ptr ss : [esp+0x13]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x40
        ret 
        public_6ec625e : nop
        lea esi, ss:[ebp+0xC]
        push esi
        call public_6f15b90
        mov ecx, dword ptr ss : [esp+0x14]
        test dword ptr ds : [ecx+0x10], 0x3FFFFFFF
        je public_6ec6297
        mov edx, dword ptr ss : [ebp+0x40]
        sub esp, 0x34
        mov edi, esp
        mov ecx, 0xD
        push edx
        rep movsd
        mov ecx, dword ptr ss : [ebp+4]
        push eax
        call public_6f199f0
        public_6ec628d : nop
        mov al, bl
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x40
        ret 
        public_6ec6297 : nop
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        add esp, 0x40
        ret 
        UNREACHABLE_TRAP(0x6ec60c0)
    }
}

#undef public_6ec6124
#undef public_6ec6152
#undef public_6ec6167
#undef public_6ec618e
#undef public_6ec61a0
#undef public_6ec61c5
#undef public_6ec61dd
#undef public_6ec61f5
#undef public_6ec61f9
#undef public_6ec6226
#undef public_6ec622a
#undef public_6ec625e
#undef public_6ec628d
#undef public_6ec6297
