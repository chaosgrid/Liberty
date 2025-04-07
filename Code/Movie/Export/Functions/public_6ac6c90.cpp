#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ac30a0);
CLANG_FORWARD_PROC_SYMBOL(public_6ac3140);
CLANG_FORWARD_PROC_SYMBOL(public_6ac31d0);
CLANG_FORWARD_PROC_SYMBOL(public_6ac3450);
CLANG_FORWARD_PROC_SYMBOL(public_6ac3490);
CLANG_FORWARD_PROC_SYMBOL(public_6ac3660);
CLANG_FORWARD_PROC_SYMBOL(public_6ac6c90);
CLANG_FORWARD_PROC_SYMBOL(public_6ac7210);
CLANG_FORWARD_PROC_SYMBOL(public_6ac7570);

#define public_6ac6d29 _public_6ac6d29
#define public_6ac6d5a _public_6ac6d5a
#define public_6ac6de8 _public_6ac6de8
#define public_6ac6e32 _public_6ac6e32
#define public_6ac6e34 _public_6ac6e34
#define public_6ac6e77 _public_6ac6e77
#define public_6ac6eca _public_6ac6eca
#define public_6ac6ecc _public_6ac6ecc
#define public_6ac6f28 _public_6ac6f28
#define public_6ac6f57 _public_6ac6f57
#define public_6ac6f94 _public_6ac6f94
#define public_6ac6f98 _public_6ac6f98
#define public_6ac6f9a _public_6ac6f9a
#define public_6ac6fbb _public_6ac6fbb
#define public_6ac6fd3 _public_6ac6fd3
#define public_6ac6fd5 _public_6ac6fd5
#define public_6ac6ff3 _public_6ac6ff3
#define public_6ac6ffd _public_6ac6ffd
#define public_6ac7016 _public_6ac7016
#define public_6ac7059 _public_6ac7059
#define public_6ac705d _public_6ac705d
#define public_6ac705f _public_6ac705f
#define public_6ac7168 _public_6ac7168
#define public_6ac71f6 _public_6ac71f6

PROC_DECLARE(0x6ac6c90, internal_6ac6c90, public_6ac6c90);
extern "C" NAKED register_t __cdecl internal_6ac6c90()
{
    __asm
    {
        sub esp, 0x34
        mov eax, dword ptr ss : [esp+0x44]
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x40]
        push esi
        mov esi, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x48]
        push edi
        mov edi, dword ptr ds : [esi]
        lea ebx, ds:[esi+0x12C]
        push esi
        push ebx
        lea edx, ds:[eax+edi*4]
        lea ecx, ss:[ebp+edi*4]
        mov dword ptr ss : [esp+0x30], edx
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ss : [esp+0x34], ecx
        xor ecx, ecx
        cmp edx, 2
        lea ebp, ss:[ebp+edi*8]
        lea eax, ds:[eax+edi*8]
        push ebp
        setge cl
        mov dword ptr ss : [esp+0x28], eax
        mov dword ptr ss : [esp+0x4C], ecx
        call public_6ac31d0
        push esi
        push ebx
        mov edx, dword ptr ss : [esp+0x24]
        push edx
        call public_6ac31d0
        push esi
        push ebp
        mov eax, dword ptr ss : [esp+0x58]
        lea ecx, ds:[eax+edi*4]
        lea edx, ds:[eax+edi*8]
        mov dword ptr ss : [esp+0x44], ecx
        mov dword ptr ss : [esp+0x2C], edx
        call public_6ac3450
        test eax, eax
        je public_6ac6d29
        mov eax, dword ptr ss : [esp+0x54]
        mov edx, dword ptr ss : [esp+0x50]
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x4C]
        push ecx
        push 5
        push edx
        push eax
        call public_6ac3140
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x34
        ret 0x14
        public_6ac6d29 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        push esi
        push ecx
        call public_6ac3450
        test eax, eax
        je public_6ac6d5a
        mov edx, dword ptr ss : [esp+0x54]
        mov ecx, dword ptr ss : [esp+0x50]
        mov eax, dword ptr ds : [edx]
        mov edx, dword ptr ss : [esp+0x48]
        push eax
        push 5
        push ecx
        push edx
        call public_6ac3140
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x34
        ret 0x14
        public_6ac6d5a : nop
        push esi
        push ebx
        push ebp
        call public_6ac31d0
        push esi
        push ebx
        mov dword ptr ss : [esp+0x3C], eax
        mov eax, dword ptr ss : [esp+0x24]
        push eax
        call public_6ac31d0
        lea edx, ds:[edi+edi*2]
        push esi
        mov ebx, dword ptr ss : [esp+0x5C]
        mov dword ptr ss : [esp+0x3C], eax
        lea eax, ds:[ebx+edx*4]
        lea edx, ds:[edi+edi*4]
        mov dword ptr ss : [esp+0x18], eax
        mov eax, edi
        shl eax, 4
        add eax, ebx
        lea ecx, ds:[ebx+edi*4]
        mov dword ptr ss : [esp+0x24], eax
        lea eax, ds:[ebx+edx*4]
        lea edx, ds:[edi+edi*2]
        mov dword ptr ss : [esp+0x34], eax
        mov dword ptr ss : [esp+0x5C], ecx
        lea ecx, ds:[ebx+edi*8]
        lea eax, ds:[ebx+edx*8]
        mov dword ptr ss : [esp+0x14], ecx
        mov dword ptr ss : [esp+0x1C], eax
        mov eax, dword ptr ss : [esp+0x38]
        test eax, eax
        je public_6ac6de8
        push 1
        push ecx
        mov ecx, dword ptr ss : [esp+0x58]
        push ecx
        call public_6ac3140
        test eax, eax
        je public_6ac6e32
        mov edx, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ss : [esp+0x28]
        push esi
        push 1
        push edx
        push eax
        call public_6ac3140
        test eax, eax
        je public_6ac6e32
        mov eax, 1
        jmp public_6ac6e34
        public_6ac6de8 : nop
        push ebx
        push ebp
        push ebp
        call public_6ac3490
        test eax, eax
        je public_6ac6e32
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+0x4C]
        push esi
        push ecx
        push ebx
        push edx
        call public_6ac3490
        test eax, eax
        je public_6ac6e32
        push esi
        push ebx
        push ebx
        push ebp
        call public_6ac3490
        test eax, eax
        je public_6ac6e32
        mov eax, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ss : [esp+0x28]
        push esi
        push eax
        push ebx
        push ecx
        call public_6ac3490
        test eax, eax
        je public_6ac6e32
        mov eax, 1
        jmp public_6ac6e34
        public_6ac6e32 : nop
        xor eax, eax
        public_6ac6e34 : nop
        mov ecx, dword ptr ss : [esp+0x38]
        test ecx, ecx
        je public_6ac6e77
        test eax, eax
        je public_6ac6eca
        mov edx, dword ptr ss : [esp+0x58]
        mov eax, dword ptr ss : [esp+0x48]
        push esi
        push 1
        push edx
        push eax
        call public_6ac3140
        test eax, eax
        je public_6ac6eca
        mov ecx, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0x2C]
        push esi
        push 1
        push ecx
        push edx
        call public_6ac3140
        test eax, eax
        je public_6ac6eca
        mov edi, 1
        jmp public_6ac6ecc
        public_6ac6e77 : nop
        test eax, eax
        je public_6ac6eca
        mov edi, dword ptr ss : [esp+0x1C]
        push esi
        push ebx
        push edi
        push edi
        call public_6ac3490
        test eax, eax
        je public_6ac6eca
        mov eax, dword ptr ss : [esp+0x58]
        mov ecx, dword ptr ss : [esp+0x48]
        push esi
        push eax
        push ebx
        push ecx
        call public_6ac3490
        test eax, eax
        je public_6ac6eca
        push esi
        push ebx
        push ebx
        push edi
        call public_6ac3490
        test eax, eax
        je public_6ac6eca
        mov edx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [esp+0x2C]
        push esi
        push edx
        push ebx
        push eax
        call public_6ac3490
        test eax, eax
        je public_6ac6eca
        mov edi, 1
        jmp public_6ac6ecc
        public_6ac6eca : nop
        xor edi, edi
        public_6ac6ecc : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+0x58]
        push esi
        push ecx
        push edx
        call public_6ac31d0
        test eax, eax
        je public_6ac6f57
        mov eax, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ss : [esp+0x14]
        push esi
        push eax
        push ecx
        call public_6ac31d0
        test eax, eax
        je public_6ac6f28
        test edi, edi
        je public_6ac71f6
        mov edx, dword ptr ss : [esp+0x54]
        mov eax, dword ptr ss : [esp+0x50]
        mov ecx, dword ptr ss : [esp+0x4C]
        push ebx
        push edx
        push eax
        push ecx
        call public_6ac7210
        test eax, eax
        je public_6ac71f6
        pop edi
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        add esp, 0x34
        ret 0x14
        public_6ac6f28 : nop
        test edi, edi
        je public_6ac71f6
        mov edx, dword ptr ss : [esp+0x54]
        mov eax, dword ptr ss : [esp+0x50]
        push ebx
        push edx
        push eax
        call public_6ac7570
        test eax, eax
        je public_6ac71f6
        pop edi
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        add esp, 0x34
        ret 0x14
        public_6ac6f57 : nop
        test edi, edi
        je public_6ac6f94
        mov edi, dword ptr ss : [esp+0x30]
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+0x58]
        push esi
        push edi
        push ecx
        push edx
        call public_6ac3660
        test eax, eax
        je public_6ac6f98
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0x20]
        mov edx, dword ptr ss : [esp+0x14]
        push esi
        push eax
        push ecx
        push edx
        call public_6ac3660
        test eax, eax
        je public_6ac6f98
        mov eax, 1
        jmp public_6ac6f9a
        public_6ac6f94 : nop
        mov edi, dword ptr ss : [esp+0x30]
        public_6ac6f98 : nop
        xor eax, eax
        public_6ac6f9a : nop
        mov ecx, dword ptr ss : [esp+0x34]
        test ecx, ecx
        je public_6ac6fbb
        test eax, eax
        je public_6ac6fd3
        push esi
        push 1
        push ebx
        push edi
        call public_6ac3140
        test eax, eax
        je public_6ac6fd3
        mov eax, 1
        jmp public_6ac6fd5
        public_6ac6fbb : nop
        test eax, eax
        je public_6ac6fd3
        push esi
        push ebx
        push ebp
        push edi
        call public_6ac3490
        test eax, eax
        je public_6ac6fd3
        mov eax, 1
        jmp public_6ac6fd5
        public_6ac6fd3 : nop
        xor eax, eax
        public_6ac6fd5 : nop
        mov ecx, dword ptr ss : [esp+0x38]
        test ecx, ecx
        je public_6ac6ffd
        test eax, eax
        je public_6ac6ff3
        mov eax, dword ptr ss : [esp+0x24]
        push esi
        push 1
        push eax
        push ebx
        call public_6ac3140
        test eax, eax
        jne public_6ac7016
        public_6ac6ff3 : nop
        mov edi, dword ptr ss : [esp+0x10]
        mov ebp, dword ptr ss : [esp+0x58]
        jmp public_6ac705d
        public_6ac6ffd : nop
        test eax, eax
        je public_6ac6ff3
        mov ecx, dword ptr ss : [esp+0x24]
        mov edx, dword ptr ss : [esp+0x1C]
        push esi
        push ecx
        push edx
        push ebx
        call public_6ac3490
        test eax, eax
        je public_6ac6ff3
        public_6ac7016 : nop
        push esi
        push ebx
        push edi
        push edi
        call public_6ac3490
        test eax, eax
        je public_6ac6ff3
        mov ebp, dword ptr ss : [esp+0x58]
        push esi
        push ebp
        push ebx
        push ebp
        call public_6ac3490
        test eax, eax
        je public_6ac7059
        mov edi, dword ptr ss : [esp+0x10]
        push esi
        push edi
        push ebx
        push edi
        call public_6ac3490
        test eax, eax
        je public_6ac705d
        push esi
        push ebx
        push edi
        push ebp
        call public_6ac30a0
        test eax, eax
        je public_6ac705d
        mov eax, 1
        jmp public_6ac705f
        public_6ac7059 : nop
        mov edi, dword ptr ss : [esp+0x10]
        public_6ac705d : nop
        xor eax, eax
        public_6ac705f : nop
        mov ecx, dword ptr ss : [esp+0x40]
        test ecx, ecx
        je public_6ac7168
        test eax, eax
        je public_6ac71f6
        mov eax, dword ptr ss : [esp+0x20]
        push esi
        push ebp
        push ebp
        push eax
        call public_6ac3490
        test eax, eax
        je public_6ac71f6
        mov ecx, dword ptr ss : [esp+0x14]
        push esi
        push edi
        push edi
        push ecx
        call public_6ac3490
        test eax, eax
        je public_6ac71f6
        push esi
        push edi
        push ebp
        push edi
        call public_6ac3660
        test eax, eax
        je public_6ac71f6
        mov ebp, dword ptr ss : [esp+0x50]
        mov eax, dword ptr ss : [esp+0x24]
        push esi
        push ebp
        push eax
        push eax
        call public_6ac3490
        test eax, eax
        je public_6ac71f6
        mov edx, dword ptr ss : [esp+0x54]
        push esi
        push ebp
        add edx, 4
        push ebp
        push edx
        call public_6ac3490
        test eax, eax
        je public_6ac71f6
        push esi
        push ebp
        push ebx
        push ebp
        call public_6ac30a0
        test eax, eax
        je public_6ac71f6
        mov eax, dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ss : [esp+0x18]
        push esi
        push ebx
        push eax
        push ecx
        call public_6ac30a0
        test eax, eax
        je public_6ac71f6
        mov eax, dword ptr ss : [esp+0x18]
        push esi
        push eax
        push eax
        push ebx
        call public_6ac3490
        test eax, eax
        je public_6ac71f6
        mov edx, dword ptr ss : [esp+0x18]
        push esi
        push ebp
        push ebp
        push edx
        call public_6ac3660
        test eax, eax
        je public_6ac71f6
        push esi
        push ebx
        push ebp
        push ebx
        call public_6ac3490
        test eax, eax
        je public_6ac71f6
        mov eax, dword ptr ss : [esp+0x3C]
        push esi
        push eax
        push ebx
        push edi
        call public_6ac3660
        test eax, eax
        je public_6ac71f6
        pop edi
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        add esp, 0x34
        ret 0x14
        public_6ac7168 : nop
        test eax, eax
        je public_6ac71f6
        mov ebp, dword ptr ss : [esp+0x50]
        mov eax, dword ptr ss : [esp+0x18]
        push esi
        push ebp
        push eax
        push eax
        call public_6ac3490
        test eax, eax
        je public_6ac71f6
        push esi
        push ebp
        push ebx
        push ebp
        call public_6ac3660
        test eax, eax
        je public_6ac71f6
        mov ecx, dword ptr ss : [esp+0x58]
        push esi
        push edi
        push ecx
        push edi
        call public_6ac3660
        test eax, eax
        je public_6ac71f6
        mov edx, dword ptr ss : [esp+0x14]
        push esi
        push edi
        push edi
        push edx
        call public_6ac3490
        test eax, eax
        je public_6ac71f6
        mov eax, dword ptr ss : [esp+0x58]
        push esi
        push ebx
        push eax
        push ebp
        call public_6ac3660
        test eax, eax
        je public_6ac71f6
        mov ecx, dword ptr ss : [esp+0x18]
        push esi
        push ebx
        push ecx
        push ebx
        call public_6ac3490
        test eax, eax
        je public_6ac71f6
        mov edx, dword ptr ss : [esp+0x3C]
        push esi
        push edx
        push ebx
        push edi
        call public_6ac3660
        test eax, eax
        je public_6ac71f6
        pop edi
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        add esp, 0x34
        ret 0x14
        public_6ac71f6 : nop
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 0x34
        ret 0x14
        UNREACHABLE_TRAP(0x6ac6c90)
    }
}

#undef public_6ac6d29
#undef public_6ac6d5a
#undef public_6ac6de8
#undef public_6ac6e32
#undef public_6ac6e34
#undef public_6ac6e77
#undef public_6ac6eca
#undef public_6ac6ecc
#undef public_6ac6f28
#undef public_6ac6f57
#undef public_6ac6f94
#undef public_6ac6f98
#undef public_6ac6f9a
#undef public_6ac6fbb
#undef public_6ac6fd3
#undef public_6ac6fd5
#undef public_6ac6ff3
#undef public_6ac6ffd
#undef public_6ac7016
#undef public_6ac7059
#undef public_6ac705d
#undef public_6ac705f
#undef public_6ac7168
#undef public_6ac71f6
