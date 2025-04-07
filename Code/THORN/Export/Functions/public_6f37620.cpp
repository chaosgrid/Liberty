#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f34ff0);
CLANG_FORWARD_PROC_SYMBOL(public_6f35560);
CLANG_FORWARD_PROC_SYMBOL(public_6f37570);
CLANG_FORWARD_PROC_SYMBOL(public_6f37790);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e26);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e9c);
CLANG_FORWARD_JUMP_SYMBOL(public_6f58b0b);

#define public_6f37657 _public_6f37657
#define public_6f37677 _public_6f37677
#define public_6f3767b _public_6f3767b
#define public_6f37680 _public_6f37680
#define public_6f3770b _public_6f3770b
#define public_6f37712 _public_6f37712
#define public_6f37714 _public_6f37714
#define public_6f3772d _public_6f3772d
#define public_6f37744 _public_6f37744
#define public_6f3775e _public_6f3775e
#define public_6f3776b _public_6f3776b
#define public_6f37771 _public_6f37771
#define public_6f37773 _public_6f37773

PROC_DECLARE(0x6f37620, internal_6f37620, public_6f37620);
extern "C" NAKED register_t __cdecl internal_6f37620()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6f58b0b @0x6f37628*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6f58b0b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ss : [ebp]
        push esi
        push edi
        xor ebx, ebx
        xor edi, edi
        cmp eax, 0x14
        jne public_6f3775e
        mov eax, dword ptr ss : [esp+0x20]
        mov esi, dword ptr ds : [eax+8]
        mov eax, dword ptr ss : [ebp+4]
        public_6f37657 : nop
        mov dl, byte ptr ds : [eax]
        mov cl, dl
        cmp dl, byte ptr ds : [esi]
        jne public_6f3767b
        cmp cl, bl
        je public_6f37677
        mov dl, byte ptr ds : [eax+1]
        mov cl, dl
        cmp dl, byte ptr ds : [esi+1]
        jne public_6f3767b
        add eax, 2
        add esi, 2
        cmp cl, bl
        jne public_6f37657
        public_6f37677 : nop
        xor eax, eax
        jmp public_6f37680
        public_6f3767b : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_6f37680 : nop
        cmp eax, ebx
        jne public_6f3775e
        push 0x80
        call public_6f57e9c
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x24], esi
        cmp esi, ebx
        mov dword ptr ss : [esp+0x18], ebx
        je public_6f37712
        mov dword ptr ds : [esi], offset public_6f5ac10
        mov dword ptr ds : [esi+4], offset public_6f5abec
        lea edi, ds:[esi+0x10]
        mov dword ptr ds : [esi+8], offset public_6f5abd4
        mov ecx, edi
        mov dword ptr ds : [esi+0xC], ebx
        call public_6f37570
        lea ecx, ds:[esi+0x40]
        mov dword ptr ds : [edi+0x2C], ebx
        mov dword ptr ds : [edi+0x28], ebx
        mov dword ptr ds : [edi+0x24], ebx
        call public_6f37790
        lea eax, ds:[esi+0x74]
        mov dword ptr ds : [eax], offset public_6f5acc8
        mov dword ptr ds : [eax+4], 1
        mov dword ptr ds : [eax+8], esi
        mov dword ptr ds : [esi], offset public_6f5ac88
        mov dword ptr ds : [esi+4], offset public_6f5ac68
        mov dword ptr ds : [esi+8], offset public_6f5ac50
        mov ecx, dword ptr ss : [ebp+8]
        cmp ecx, ebx
        mov dword ptr ds : [esi+0x70], ecx
        jne public_6f3770b
        mov dword ptr ds : [esi+0x70], eax
        jmp public_6f37714
        public_6f3770b : nop
        mov ecx, dword ptr ss : [ebp+0xC]
        mov dword ptr ds : [ecx], eax
        jmp public_6f37714
        public_6f37712 : nop
        xor esi, esi
        public_6f37714 : nop
        cmp esi, ebx
        mov dword ptr ss : [esp+0x18], 0xFFFFFFFF
        jne public_6f3772d
        mov edx, dword ptr ss : [esp+0x28]
        mov eax, 0xFFFFFFFC
        mov dword ptr ds : [edx], esi
        jmp public_6f37773
        public_6f3772d : nop
        push ebp
        mov ecx, esi
        call public_6f35560
        mov edi, eax
        cmp edi, ebx
        je public_6f3776b
        mov eax, dword ptr ss : [ebp+0xC]
        cmp eax, ebx
        je public_6f37744
        mov dword ptr ds : [eax], ebx
        public_6f37744 : nop
        mov ecx, esi
        call public_6f34ff0
        push esi
        call public_6f57e26
        mov ecx, dword ptr ss : [esp+0x2C]
        add esp, 4
        xor eax, eax
        mov dword ptr ds : [ecx], eax
        jmp public_6f37771
        public_6f3775e : nop
        mov edx, dword ptr ss : [esp+0x28]
        mov eax, 0xFFFFFFFD
        mov dword ptr ds : [edx], edi
        jmp public_6f37773
        public_6f3776b : nop
        mov eax, dword ptr ss : [esp+0x28]
        mov dword ptr ds : [eax], esi
        public_6f37771 : nop
        mov eax, edi
        public_6f37773 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs : [0], ecx
        pop ebx
        add esp, 0xC
        ret 0xC
        UNREACHABLE_TRAP(0x6f37620)
    }
}

#undef public_6f37657
#undef public_6f37677
#undef public_6f3767b
#undef public_6f37680
#undef public_6f3770b
#undef public_6f37712
#undef public_6f37714
#undef public_6f3772d
#undef public_6f37744
#undef public_6f3775e
#undef public_6f3776b
#undef public_6f37771
#undef public_6f37773
