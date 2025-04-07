#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f319d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f51370);
CLANG_FORWARD_PROC_SYMBOL(public_6f51520);
CLANG_FORWARD_PROC_SYMBOL(public_6f51920);
CLANG_FORWARD_PROC_SYMBOL(public_6f51b80);
CLANG_FORWARD_PROC_SYMBOL(public_6f51db0);
CLANG_FORWARD_PROC_SYMBOL(public_6f521d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f521e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f521f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f52200);

#define public_6f31a3f _public_6f31a3f
#define public_6f31a46 _public_6f31a46
#define public_6f31a58 _public_6f31a58
#define public_6f31a5f _public_6f31a5f
#define public_6f31a64 _public_6f31a64
#define public_6f31aa8 _public_6f31aa8
#define public_6f31abb _public_6f31abb
#define public_6f31af4 _public_6f31af4
#define public_6f31b02 _public_6f31b02
#define public_6f31b07 _public_6f31b07
#define public_6f31b74 _public_6f31b74
#define public_6f31bd5 _public_6f31bd5
#define public_6f31be6 _public_6f31be6
#define public_6f31beb _public_6f31beb
#define public_6f31c42 _public_6f31c42
#define public_6f31c86 _public_6f31c86
#define public_6f31c99 _public_6f31c99
#define public_6f31cb7 _public_6f31cb7
#define public_6f31ce6 _public_6f31ce6
#define public_6f31cf7 _public_6f31cf7

PROC_DECLARE(0x6f319d0, internal_6f319d0, public_6f319d0);
extern "C" NAKED register_t __cdecl internal_6f319d0()
{
    __asm
    {
        sub esp, 0x10
        mov eax, dword ptr ss : [esp+0x14]
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x28]
        lea ecx, ss:[esp+0x20]
        push edi
        push ecx
        mov dword ptr ds : [esi+0x34], eax
        call public_6f51370
        mov ebx, dword ptr ss : [esp+0x2C]
        mov edi, eax
        mov eax, dword ptr ds : [ebx]
        add esp, 4
        test eax, eax
        mov dword ptr ss : [esp+0x10], edi
        je public_6f31c42
        lea edx, ss:[esp+0x14]
        lea eax, ds:[ebx+0x1C]
        push edx
        push eax
        mov dword ptr ss : [esp+0x20], eax
        call dword ptr ds : [public_6fb3504]
        mov edx, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ds : [ebx+0xC]
        add esp, 8
        test edx, 0x30000
        setne al
        cmp ecx, 1
        mov byte ptr ss : [esp+0x30], al
        mov ecx, esi
        jne public_6f31a46
        test al, al
        je public_6f31a3f
        push 0x3F17
        jmp public_6f31a64
        public_6f31a3f : nop
        push 0x3F19
        jmp public_6f31a64
        public_6f31a46 : nop
        test al, al
        je public_6f31a5f
        mov eax, dword ptr ds : [ebx+0x10]
        test eax, eax
        jne public_6f31a58
        push 0x3F20
        jmp public_6f31a64
        public_6f31a58 : nop
        push 0x3F1D
        jmp public_6f31a64
        public_6f31a5f : nop
        push 0x3F1B
        public_6f31a64 : nop
        call dword ptr ds : [public_6fb303c]
        mov ecx, edi
        call public_6f521e0
        mov ebp, dword ptr ds : [public_6fb307c]
        push eax
        mov ecx, esi
        call ebp
        mov eax, dword ptr ds : [ebx]
        push eax
        mov ecx, edi
        call public_6f521f0
        push eax
        mov ecx, esi
        call ebp
        mov eax, dword ptr ds : [ebx+4]
        test eax, eax
        mov ecx, dword ptr ds : [ebx+8]
        mov dword ptr ss : [esp+0x2C], eax
        mov dword ptr ss : [esp+0x28], ecx
        je public_6f31aa8
        push ecx
        push eax
        mov ecx, edi
        call public_6f51db0
        jmp public_6f31abb
        public_6f31aa8 : nop
        push 1
        lea ecx, ss:[esp+0x2C]
        push ecx
        lea edx, ss:[esp+0x34]
        push edx
        mov ecx, edi
        call public_6f51920
        public_6f31abb : nop
        mov eax, dword ptr ss : [esp+0x2C]
        push eax
        mov ecx, esi
        call ebp
        mov ecx, dword ptr ss : [esp+0x28]
        push ecx
        mov ecx, esi
        call dword ptr ds : [public_6fb3148]
        mov ecx, esi
        call dword ptr ds : [public_6fb3038]
        mov al, byte ptr ss : [esp+0x30]
        test al, al
        mov eax, dword ptr ds : [ebx+0xC]
        je public_6f31bd5
        cmp eax, 1
        jne public_6f31af4
        push 0x3F18
        jmp public_6f31b07
        public_6f31af4 : nop
        mov eax, dword ptr ds : [ebx+0x10]
        test eax, eax
        jne public_6f31b02
        push 0x3F21
        jmp public_6f31b07
        public_6f31b02 : nop
        push 0x3F1E
        public_6f31b07 : nop
        lea edi, ds:[esi+0x18]
        mov ecx, edi
        call dword ptr ds : [public_6fb303c]
        cmp dword ptr ds : [esi+0x1C], 0x3F1E
        je public_6f31b74
        add ebx, 0x18
        push ebx
        mov ebx, dword ptr ss : [esp+0x14]
        mov ecx, ebx
        call public_6f52200
        push eax
        mov ecx, edi
        call ebp
        mov edx, dword ptr ds : [esi+0x30]
        xor eax, eax
        push 1
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ss : [esp+0x20], eax
        push edx
        lea eax, ss:[esp+0x24]
        push eax
        lea ecx, ss:[esp+0x24]
        push ecx
        mov ecx, ebx
        call public_6f51520
        mov edx, dword ptr ss : [esp+0x18]
        push edx
        mov ecx, edi
        call ebp
        mov eax, dword ptr ss : [esp+0x1C]
        push eax
        mov ecx, edi
        call ebp
        mov ecx, edi
        call dword ptr ds : [public_6fb3038]
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 0x10
        ret 
        public_6f31b74 : nop
        push 0x3F1F
        mov ecx, edi
        call ebp
        mov ecx, dword ptr ds : [ebx+0x10]
        push ecx
        mov ecx, edi
        call dword ptr ds : [public_6fb3148]
        add ebx, 0x18
        push ebx
        mov ebx, dword ptr ss : [esp+0x14]
        mov ecx, ebx
        call public_6f52200
        push eax
        mov ecx, edi
        call ebp
        mov edx, dword ptr ds : [esi+0x30]
        push 1
        push edx
        xor eax, eax
        lea ecx, ss:[esp+0x24]
        push ecx
        push eax
        mov ecx, ebx
        mov dword ptr ss : [esp+0x28], eax
        mov dword ptr ss : [esp+0x2C], eax
        call public_6f51520
        mov edx, dword ptr ss : [esp+0x1C]
        push edx
        mov ecx, edi
        call ebp
        mov ecx, edi
        call dword ptr ds : [public_6fb3038]
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 0x10
        ret 
        public_6f31bd5 : nop
        add esi, 0x18
        cmp eax, 1
        mov ecx, esi
        jne public_6f31be6
        push 0x3F1A
        jmp public_6f31beb
        public_6f31be6 : nop
        push 0x3F1C
        public_6f31beb : nop
        call dword ptr ds : [public_6fb303c]
        mov ecx, dword ptr ss : [esp+0x18]
        lea eax, ss:[esp+0x30]
        push eax
        push ecx
        call dword ptr ds : [public_6fb3500]
        mov edx, dword ptr ss : [esp+0x38]
        add esp, 8
        push edx
        mov ecx, esi
        call ebp
        mov ecx, edi
        call public_6f521d0
        push eax
        mov ecx, esi
        call ebp
        push 1
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, edi
        call public_6f51b80
        mov ecx, dword ptr ss : [esp+0x10]
        push ecx
        mov ecx, esi
        call ebp
        mov ecx, esi
        call dword ptr ds : [public_6fb3038]
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 0x10
        ret 
        public_6f31c42 : nop
        mov al, byte ptr ss : [esp+0x30]
        test al, al
        je public_6f31cb7
        push 0x3F24
        mov ecx, esi
        call dword ptr ds : [public_6fb303c]
        mov ecx, edi
        call public_6f521e0
        mov ebp, dword ptr ds : [public_6fb307c]
        push eax
        mov ecx, esi
        call ebp
        mov eax, dword ptr ds : [ebx+4]
        test eax, eax
        mov ecx, dword ptr ds : [ebx+8]
        mov dword ptr ss : [esp+0x30], eax
        mov dword ptr ss : [esp+0x2C], ecx
        je public_6f31c86
        push ecx
        push eax
        mov ecx, edi
        call public_6f51db0
        jmp public_6f31c99
        public_6f31c86 : nop
        push 1
        lea edx, ss:[esp+0x30]
        push edx
        lea eax, ss:[esp+0x38]
        push eax
        mov ecx, edi
        call public_6f51920
        public_6f31c99 : nop
        mov ecx, dword ptr ss : [esp+0x30]
        push ecx
        mov ecx, esi
        call ebp
        mov edx, dword ptr ss : [esp+0x2C]
        push edx
        mov ecx, esi
        call dword ptr ds : [public_6fb3148]
        mov ecx, esi
        call dword ptr ds : [public_6fb3038]
        public_6f31cb7 : nop
        mov eax, dword ptr ds : [ebx+0x18]
        add ebx, 0x18
        test eax, eax
        lea ebp, ds:[esi+0x18]
        mov ecx, ebp
        je public_6f31ce6
        push 0x3F22
        call dword ptr ds : [public_6fb303c]
        push ebx
        mov ecx, edi
        call public_6f52200
        mov ebx, dword ptr ds : [public_6fb307c]
        push eax
        mov ecx, ebp
        call ebx
        jmp public_6f31cf7
        public_6f31ce6 : nop
        push 0x3F23
        call dword ptr ds : [public_6fb303c]
        mov ebx, dword ptr ds : [public_6fb307c]
        public_6f31cf7 : nop
        xor eax, eax
        push 1
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ss : [esp+0x20], eax
        mov eax, dword ptr ds : [esi+0x30]
        push eax
        lea ecx, ss:[esp+0x24]
        push ecx
        lea edx, ss:[esp+0x24]
        push edx
        mov ecx, edi
        call public_6f51520
        mov eax, dword ptr ss : [esp+0x18]
        push eax
        mov ecx, ebp
        call ebx
        mov ecx, dword ptr ss : [esp+0x1C]
        push ecx
        mov ecx, ebp
        call ebx
        mov ecx, ebp
        call dword ptr ds : [public_6fb3038]
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6f319d0)
    }
}

#undef public_6f31a3f
#undef public_6f31a46
#undef public_6f31a58
#undef public_6f31a5f
#undef public_6f31a64
#undef public_6f31aa8
#undef public_6f31abb
#undef public_6f31af4
#undef public_6f31b02
#undef public_6f31b07
#undef public_6f31b74
#undef public_6f31bd5
#undef public_6f31be6
#undef public_6f31beb
#undef public_6f31c42
#undef public_6f31c86
#undef public_6f31c99
#undef public_6f31cb7
#undef public_6f31ce6
#undef public_6f31cf7
