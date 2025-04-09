#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_413df0);
CLANG_FORWARD_PROC_SYMBOL(public_414280);
CLANG_FORWARD_PROC_SYMBOL(public_4142a0);
CLANG_FORWARD_PROC_SYMBOL(public_4145d0);
CLANG_FORWARD_PROC_SYMBOL(public_415860);
CLANG_FORWARD_PROC_SYMBOL(public_423b30);
CLANG_FORWARD_PROC_SYMBOL(public_444e20);
CLANG_FORWARD_PROC_SYMBOL(public_58a530);
CLANG_FORWARD_JUMP_SYMBOL(public_5c45f8);

#define public_58b84a _public_58b84a
#define public_58b856 _public_58b856
#define public_58b86d _public_58b86d
#define public_58b896 _public_58b896
#define public_58b89d _public_58b89d
#define public_58b8b6 _public_58b8b6
#define public_58b90b _public_58b90b
#define public_58b917 _public_58b917
#define public_58b92e _public_58b92e
#define public_58b97c _public_58b97c
#define public_58b9b7 _public_58b9b7
#define public_58b9d4 _public_58b9d4
#define public_58b9d8 _public_58b9d8
#define public_58b9de _public_58b9de
#define public_58b9ea _public_58b9ea
#define public_58ba03 _public_58ba03
#define public_58ba14 _public_58ba14
#define public_58ba2e _public_58ba2e
#define public_58ba3a _public_58ba3a
#define public_58ba90 _public_58ba90
#define public_58ba9e _public_58ba9e
#define public_58baa2 _public_58baa2
#define public_58bb2c _public_58bb2c
#define public_58bb38 _public_58bb38
#define public_58bb4f _public_58bb4f
#define public_58bba4 _public_58bba4
#define public_58bbad _public_58bbad
#define public_58bbc7 _public_58bbc7
#define public_58bbc9 _public_58bbc9
#define public_58bbed _public_58bbed
#define public_58bc06 _public_58bc06
#define public_58bc0a _public_58bc0a
#define public_58bc7d _public_58bc7d
#define public_58bc8f _public_58bc8f
#define public_58bc93 _public_58bc93
#define public_58bc95 _public_58bc95

PROC_DECLARE(0x58b7a0, internal_58b7a0, public_58b7a0);
extern "C" NAKED register_t __cdecl internal_58b7a0()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_5c45f8 @0x58b7a8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c45f8
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x1C
        push ebx
        push ebp
        push esi
        mov esi, ecx
        test byte ptr ds : [esi+0x6C], 1
        push edi
        je public_58bc93
        mov al, byte ptr ds : [esi+0x3AC]
        xor ebx, ebx
        cmp al, bl
        je public_58bc93
        mov eax, dword ptr ss : [esp+0x3C]
        cmp eax, 0xD
        mov ecx, dword ptr ss : [esp+0x40]
        jne public_58b89d
        test byte ptr ds : [ecx], 1
        je public_58ba14
        cmp dword ptr ds : [esi+4], ebx
        je public_58b896
        cmp byte ptr ds : [esi+0x3A4], bl
        je public_58b86d
        mov dword ptr ss : [esp+0x20], ebx
        mov dword ptr ss : [esp+0x24], ebx
        mov eax, dword ptr ds : [esi+0x334]
        mov eax, dword ptr ds : [eax]
        push 0xFFFFFFFF
        push eax
        lea ecx, ss:[esp+0x28]
        mov dword ptr ss : [esp+0x3C], ebx
        call public_413df0
        mov eax, dword ptr ss : [esp+0x20]
        cmp eax, ebx
        je public_58b856
        push eax
        call dword ptr ds : [public_5c71c8]
        add esp, 4
        cmp eax, ebx
        jle public_58b856
        mov ecx, dword ptr ss : [esp+0x24]
        dec eax
        cmp ecx, eax
        jbe public_58b84a
        mov ecx, dword ptr ss : [esp+0x20]
        mov word ptr ds : [ecx+eax*2], bx
        public_58b84a : nop
        mov edx, dword ptr ss : [esp+0x20]
        push edx
        mov ecx, esi
        call public_58a530
        public_58b856 : nop
        lea ecx, ss:[esp+0x20]
        mov byte ptr ds : [esi+0x3A4], bl
        mov dword ptr ss : [esp+0x34], 0xFFFFFFFF
        call public_444e20
        public_58b86d : nop
        mov ecx, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x3A0], ebx
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+8]
        cmp eax, ebx
        je public_58b896
        mov ecx, dword ptr ds : [esi+0x334]
        mov ecx, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax]
        push 1
        push ecx
        push 0x45
        mov ecx, eax
        call dword ptr ds : [edx+0xA8]
        public_58b896 : nop
        mov al, 1
        jmp public_58bc95
        public_58b89d : nop
        cmp eax, 8
        jne public_58ba03
        mov edx, dword ptr ss : [esp+0x40]
        test byte ptr ds : [edx], 2
        je public_58b8b6
        mov al, 1
        jmp public_58bc95
        public_58b8b6 : nop
        cmp byte ptr ds : [esi+0x3A4], bl
        mov edi, dword ptr ds : [public_5c71c8]
        je public_58b92e
        mov dword ptr ss : [esp+0x20], ebx
        mov dword ptr ss : [esp+0x24], ebx
        mov eax, dword ptr ds : [esi+0x334]
        mov eax, dword ptr ds : [eax]
        push 0xFFFFFFFF
        push eax
        lea ecx, ss:[esp+0x28]
        mov dword ptr ss : [esp+0x3C], 1
        call public_413df0
        mov eax, dword ptr ss : [esp+0x20]
        cmp eax, ebx
        je public_58b917
        push eax
        call edi
        add esp, 4
        cmp eax, ebx
        jle public_58b917
        mov ecx, dword ptr ss : [esp+0x24]
        dec eax
        cmp ecx, eax
        jbe public_58b90b
        mov ecx, dword ptr ss : [esp+0x20]
        mov word ptr ds : [ecx+eax*2], bx
        public_58b90b : nop
        mov edx, dword ptr ss : [esp+0x20]
        push edx
        mov ecx, esi
        call public_58a530
        public_58b917 : nop
        lea ecx, ss:[esp+0x20]
        mov byte ptr ds : [esi+0x3A4], bl
        mov dword ptr ss : [esp+0x34], 0xFFFFFFFF
        call public_444e20
        public_58b92e : nop
        mov dword ptr ds : [esi+0x3A0], ebx
        mov dword ptr ss : [esp+0x20], ebx
        mov dword ptr ss : [esp+0x24], ebx
        mov eax, dword ptr ds : [esi+0x334]
        mov ecx, dword ptr ds : [eax]
        push 0xFFFFFFFF
        push ecx
        lea ecx, ss:[esp+0x28]
        mov dword ptr ss : [esp+0x3C], 2
        call public_413df0
        mov ebp, dword ptr ss : [esp+0x20]
        cmp ebp, ebx
        je public_58b9d4
        push ebp
        call edi
        mov edi, eax
        add esp, 4
        cmp edi, ebx
        jle public_58b9b7
        mov ecx, dword ptr ss : [esp+0x24]
        lea eax, ds:[edi-1]
        cmp ecx, eax
        jbe public_58b97c
        mov word ptr ss : [ebp+eax*2], bx
        public_58b97c : nop
        lea edx, ds:[esi+0xA8]
        push edx
        lea eax, ds:[esi+0x60]
        push eax
        lea ecx, ss:[esp+0x1C]
        push ecx
        call public_423b30
        mov edx, dword ptr ss : [esp+0x28]
        mov eax, dword ptr ds : [esi+0x32C]
        mov ecx, dword ptr ds : [esi+0x334]
        add esp, 0xC
        push edx
        push eax
        call public_4145d0
        mov ecx, dword ptr ds : [esi+0x334]
        push ebp
        call public_415860
        public_58b9b7 : nop
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx]
        dec edi
        call dword ptr ds : [edx+8]
        test edi, edi
        jle public_58b9d8
        cmp eax, ebx
        je public_58b9ea
        mov ecx, dword ptr ds : [esi+0x334]
        mov ecx, dword ptr ds : [ecx]
        push ebx
        push ecx
        jmp public_58b9de
        public_58b9d4 : nop
        xor edi, edi
        jmp public_58b9b7
        public_58b9d8 : nop
        cmp eax, ebx
        je public_58b9ea
        push ebx
        push ebx
        public_58b9de : nop
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        push 0x45
        call dword ptr ds : [edx+0xA8]
        public_58b9ea : nop
        cmp ebp, ebx
        je public_58bc8f
        push ebp
        call dword ptr ds : [public_5c71d8]
        add esp, 4
        mov al, 1
        jmp public_58bc95
        public_58ba03 : nop
        cmp eax, 0x60
        jl public_58ba14
        cmp eax, 0x69
        jg public_58ba14
        sub eax, 0x30
        mov dword ptr ss : [esp+0x3C], eax
        public_58ba14 : nop
        cmp byte ptr ds : [esi+0x3AD], bl
        je public_58ba2e
        cmp eax, 0x30
        jl public_58bc93
        cmp eax, 0x39
        jg public_58bc93
        public_58ba2e : nop
        test byte ptr ds : [ecx], 2
        je public_58ba3a
        mov al, 1
        jmp public_58bc95
        public_58ba3a : nop
        cmp dword ptr ds : [esi+0x3A8], ebx
        jle public_58baa2
        mov eax, dword ptr ds : [esi+0x334]
        mov eax, dword ptr ds : [eax]
        push 0xFFFFFFFF
        push eax
        lea ecx, ss:[esp+0x28]
        mov dword ptr ss : [esp+0x28], ebx
        mov dword ptr ss : [esp+0x2C], ebx
        call public_413df0
        mov edi, dword ptr ss : [esp+0x20]
        push edi
        call dword ptr ds : [public_5c71c8]
        mov ecx, dword ptr ds : [esi+0x3A8]
        add esp, 4
        inc eax
        cmp eax, ecx
        jle public_58ba90
        cmp edi, ebx
        je public_58bc8f
        push edi
        call dword ptr ds : [public_5c71d8]
        add esp, 4
        mov al, 1
        jmp public_58bc95
        public_58ba90 : nop
        cmp edi, ebx
        je public_58ba9e
        push edi
        call dword ptr ds : [public_5c71d8]
        add esp, 4
        public_58ba9e : nop
        mov eax, dword ptr ss : [esp+0x3C]
        public_58baa2 : nop
        push 2
        lea ecx, ss:[esp+0x14]
        push ecx
        mov byte ptr ss : [esp+0x48], al
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov byte ptr ss : [esp+0x49], bl
        lea edi, ss:[esp+0x48]
        repne scasb
        not ecx
        dec ecx
        push ecx
        lea edx, ss:[esp+0x4C]
        push edx
        push ebx
        push 0xFDE9
        call dword ptr ds : [public_61641c]
        test eax, eax
        jle public_58bc8f
        cmp byte ptr ds : [esi+0x3A4], bl
        je public_58bb4f
        mov dword ptr ss : [esp+0x20], ebx
        mov dword ptr ss : [esp+0x24], ebx
        mov eax, dword ptr ds : [esi+0x334]
        mov eax, dword ptr ds : [eax]
        push 0xFFFFFFFF
        push eax
        lea ecx, ss:[esp+0x28]
        mov dword ptr ss : [esp+0x3C], 3
        call public_413df0
        mov eax, dword ptr ss : [esp+0x20]
        cmp eax, ebx
        je public_58bb38
        push eax
        call dword ptr ds : [public_5c71c8]
        add esp, 4
        cmp eax, ebx
        jle public_58bb38
        mov ecx, dword ptr ss : [esp+0x24]
        dec eax
        cmp ecx, eax
        jbe public_58bb2c
        mov ecx, dword ptr ss : [esp+0x20]
        mov word ptr ds : [ecx+eax*2], bx
        public_58bb2c : nop
        mov edx, dword ptr ss : [esp+0x20]
        push edx
        mov ecx, esi
        call public_58a530
        public_58bb38 : nop
        lea ecx, ss:[esp+0x20]
        mov byte ptr ds : [esi+0x3A4], bl
        mov dword ptr ss : [esp+0x34], 0xFFFFFFFF
        call public_444e20
        public_58bb4f : nop
        mov dword ptr ds : [esi+0x3A0], ebx
        mov dword ptr ss : [esp+0x14], ebx
        mov dword ptr ss : [esp+0x18], ebx
        mov eax, dword ptr ds : [esi+0x334]
        mov ebp, dword ptr ds : [eax]
        cmp ebp, ebx
        mov dword ptr ss : [esp+0x34], 4
        je public_58bba4
        push ebp
        call dword ptr ds : [public_5c71c8]
        mov edi, eax
        add esp, 4
        lea ecx, ds:[edi+1]
        push ecx
        lea ecx, ss:[esp+0x18]
        call public_4142a0
        mov edx, dword ptr ss : [esp+0x14]
        push edi
        push ebp
        push edx
        call dword ptr ds : [public_5c71c0]
        mov eax, dword ptr ss : [esp+0x20]
        add esp, 0xC
        mov word ptr ds : [eax+edi*2], bx
        jmp public_58bbad
        public_58bba4 : nop
        lea ecx, ss:[esp+0x14]
        call public_414280
        public_58bbad : nop
        mov eax, dword ptr ss : [esp+0x14]
        cmp eax, ebx
        je public_58bbc7
        push eax
        call dword ptr ds : [public_5c71c8]
        mov edi, eax
        mov eax, dword ptr ss : [esp+0x18]
        add esp, 4
        jmp public_58bbc9
        public_58bbc7 : nop
        xor edi, edi
        public_58bbc9 : nop
        mov ecx, dword ptr ss : [esp+0x18]
        lea ebp, ds:[edi+2]
        cmp ebp, ecx
        jbe public_58bc0a
        cmp eax, ebx
        je public_58bbed
        lea ecx, ss:[ebp+ebp]
        push ecx
        push eax
        call dword ptr ds : [public_5c71bc]
        add esp, 8
        mov dword ptr ss : [esp+0x14], eax
        jmp public_58bc06
        public_58bbed : nop
        lea edx, ss:[ebp+ebp]
        push edx
        call dword ptr ds : [public_5c71cc]
        mov dword ptr ss : [esp+0x18], eax
        mov word ptr ds : [eax], bx
        mov eax, dword ptr ss : [esp+0x18]
        add esp, 4
        public_58bc06 : nop
        mov dword ptr ss : [esp+0x18], ebp
        public_58bc0a : nop
        push 1
        lea ecx, ss:[esp+0x14]
        push ecx
        lea edx, ds:[eax+edi*2]
        push edx
        call dword ptr ds : [public_5c71c0]
        mov eax, dword ptr ss : [esp+0x20]
        mov word ptr ds : [eax+edi*2+2], bx
        fld dword ptr ds : [esi+0xB0]
        fadd dword ptr ds : [esi+0x68]
        mov edx, dword ptr ds : [esi+0x32C]
        mov edi, dword ptr ss : [esp+0x20]
        add esp, 0xC
        fstp dword ptr ss : [esp+0x28]
        mov ecx, dword ptr ss : [esp+0x28]
        push ecx
        mov ecx, dword ptr ds : [esi+0x334]
        push edx
        call public_4145d0
        mov ecx, dword ptr ds : [esi+0x334]
        push edi
        call public_415860
        mov ecx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+8]
        cmp eax, ebx
        je public_58bc7d
        mov ecx, dword ptr ds : [esi+0x334]
        mov ecx, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax]
        push ebx
        push ecx
        push 0x45
        mov ecx, eax
        call dword ptr ds : [edx+0xA8]
        public_58bc7d : nop
        mov eax, dword ptr ss : [esp+0x14]
        cmp eax, ebx
        je public_58bc8f
        push eax
        call dword ptr ds : [public_5c71d8]
        add esp, 4
        public_58bc8f : nop
        mov al, 1
        jmp public_58bc95
        public_58bc93 : nop
        xor al, al
        public_58bc95 : nop
        mov ecx, dword ptr ss : [esp+0x2C]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x28
        ret 8
        UNREACHABLE_TRAP(0x58b7a0)
    }
}

#undef public_58b84a
#undef public_58b856
#undef public_58b86d
#undef public_58b896
#undef public_58b89d
#undef public_58b8b6
#undef public_58b90b
#undef public_58b917
#undef public_58b92e
#undef public_58b97c
#undef public_58b9b7
#undef public_58b9d4
#undef public_58b9d8
#undef public_58b9de
#undef public_58b9ea
#undef public_58ba03
#undef public_58ba14
#undef public_58ba2e
#undef public_58ba3a
#undef public_58ba90
#undef public_58ba9e
#undef public_58baa2
#undef public_58bb2c
#undef public_58bb38
#undef public_58bb4f
#undef public_58bba4
#undef public_58bbad
#undef public_58bbc7
#undef public_58bbc9
#undef public_58bbed
#undef public_58bc06
#undef public_58bc0a
#undef public_58bc7d
#undef public_58bc8f
#undef public_58bc93
#undef public_58bc95
