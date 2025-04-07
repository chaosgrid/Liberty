#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c22440);
CLANG_FORWARD_PROC_SYMBOL(public_6c22550);
CLANG_FORWARD_PROC_SYMBOL(public_6c24d00);
CLANG_FORWARD_PROC_SYMBOL(public_6c25140);
CLANG_FORWARD_PROC_SYMBOL(public_6c26fa0);
CLANG_FORWARD_PROC_SYMBOL(public_6c276a0);
CLANG_FORWARD_PROC_SYMBOL(public_6c27720);
CLANG_FORWARD_PROC_SYMBOL(public_6c27a50);
CLANG_FORWARD_PROC_SYMBOL(public_6c27b00);
CLANG_FORWARD_PROC_SYMBOL(public_6c27ba0);
CLANG_FORWARD_PROC_SYMBOL(public_6c27cc0);
CLANG_FORWARD_PROC_SYMBOL(public_6c34ea0);
CLANG_FORWARD_PROC_SYMBOL(public_6c34eac);

#define public_6c24d25 _public_6c24d25
#define public_6c24d27 _public_6c24d27
#define public_6c24d48 _public_6c24d48
#define public_6c24d4a _public_6c24d4a
#define public_6c24d66 _public_6c24d66
#define public_6c24dc0 _public_6c24dc0
#define public_6c24df7 _public_6c24df7
#define public_6c24e03 _public_6c24e03
#define public_6c24e0f _public_6c24e0f
#define public_6c24e20 _public_6c24e20
#define public_6c24e26 _public_6c24e26
#define public_6c24e50 _public_6c24e50
#define public_6c24e71 _public_6c24e71
#define public_6c24e8e _public_6c24e8e
#define public_6c24ea8 _public_6c24ea8
#define public_6c24eb0 _public_6c24eb0
#define public_6c24eb4 _public_6c24eb4
#define public_6c24eb9 _public_6c24eb9
#define public_6c24ed0 _public_6c24ed0
#define public_6c24ed2 _public_6c24ed2
#define public_6c24f0f _public_6c24f0f
#define public_6c24f11 _public_6c24f11
#define public_6c24f6d _public_6c24f6d
#define public_6c24fa3 _public_6c24fa3
#define public_6c24fbe _public_6c24fbe
#define public_6c24feb _public_6c24feb
#define public_6c24ffb _public_6c24ffb
#define public_6c25028 _public_6c25028
#define public_6c25038 _public_6c25038
#define public_6c25069 _public_6c25069
#define public_6c2508a _public_6c2508a
#define public_6c250fb _public_6c250fb
#define public_6c2510f _public_6c2510f
#define public_6c25128 _public_6c25128

PROC_DECLARE(0x6c24d00, internal_6c24d00, public_6c24d00);
extern "C" NAKED register_t __cdecl internal_6c24d00()
{
    __asm
    {
        sub esp, 0x2C
        push ebx
        push ebp
        push esi
        push edi
        push 0x228
        mov edi, ecx
        call public_6c34eac
        xor ebx, ebx
        add esp, 4
        cmp eax, ebx
        je public_6c24d25
        mov ecx, eax
        call public_6c22440
        jmp public_6c24d27
        public_6c24d25 : nop
        xor eax, eax
        public_6c24d27 : nop
        mov ebp, dword ptr ss : [esp+0x4C]
        push 0x228
        mov dword ptr ss : [ebp], eax
        call public_6c34eac
        add esp, 4
        cmp eax, ebx
        je public_6c24d48
        mov ecx, eax
        call public_6c22440
        jmp public_6c24d4a
        public_6c24d48 : nop
        xor eax, eax
        public_6c24d4a : nop
        mov esi, dword ptr ss : [esp+0x50]
        mov dword ptr ds : [esi], eax
        mov eax, dword ptr ds : [edi+0x10]
        mov edi, dword ptr ds : [edi+0x14]
        cmp eax, edi
        mov dword ptr ss : [esp+0x38], edi
        mov dword ptr ss : [esp+0x2C], eax
        je public_6c2508a
        public_6c24d66 : nop
        mov eax, dword ptr ss : [esp+0x2C]
        mov esi, dword ptr ds : [eax]
        cmp dword ptr ds : [esi], 5
        sete al
        test al, al
        mov dword ptr ss : [esp+0x1C], ebx
        mov dword ptr ss : [esp+0x20], ebx
        mov dword ptr ss : [esp+0x24], ebx
        mov byte ptr ss : [esp+0x13], al
        mov dword ptr ss : [esp+0x30], ebx
        mov dword ptr ss : [esp+0x28], ebx
        je public_6c24e26
        mov ebp, dword ptr ds : [esi+0x1C]
        mov edi, dword ptr ds : [esi+0x18]
        mov dword ptr ss : [esp+0x28], ebp
        add ebp, 0xFFFFFFFE
        lea ecx, ss:[ebp+ebp]
        push ecx
        mov dword ptr ss : [esp+0x34], edi
        call public_6c34eac
        add esp, 4
        cmp ebp, ebx
        mov dword ptr ds : [esi+0x18], eax
        mov dword ptr ds : [esi+0x1C], ebx
        jbe public_6c24e20
        lea ecx, ds:[edi+4]
        lea ecx, ds:[ecx]
        public_6c24dc0 : nop
        mov dx, word ptr ds : [ecx-4]
        mov di, word ptr ds : [ecx-2]
        cmp dx, di
        je public_6c24e0f
        mov bp, word ptr ds : [ecx]
        cmp di, bp
        je public_6c24e0f
        cmp bp, dx
        je public_6c24e0f
        test bl, 1
        mov edi, dword ptr ds : [esi+0x1C]
        mov word ptr ds : [eax+edi*2], dx
        mov edx, dword ptr ds : [esi+0x1C]
        je public_6c24df7
        mov di, word ptr ds : [ecx]
        mov word ptr ds : [eax+edx*2+2], di
        mov di, word ptr ds : [ecx-2]
        jmp public_6c24e03
        public_6c24df7 : nop
        mov di, word ptr ds : [ecx-2]
        mov word ptr ds : [eax+edx*2+2], di
        mov di, word ptr ds : [ecx]
        public_6c24e03 : nop
        mov edx, dword ptr ds : [esi+0x1C]
        mov word ptr ds : [eax+edx*2+4], di
        add dword ptr ds : [esi+0x1C], 3
        public_6c24e0f : nop
        mov edx, dword ptr ss : [esp+0x28]
        inc ebx
        add edx, 0xFFFFFFFE
        add ecx, 2
        cmp ebx, edx
        jb public_6c24dc0
        xor ebx, ebx
        public_6c24e20 : nop
        mov dword ptr ds : [esi], 4
        public_6c24e26 : nop
        mov eax, 0xAAAAAAAB
        mul dword ptr ds : [esi+0x1C]
        shr edx, 1
        lea eax, ds:[edx*4]
        push eax
        mov dword ptr ss : [esp+0x38], edx
        call public_6c34eac
        mov ebx, dword ptr ss : [esp+0x38]
        add esp, 4
        xor edi, edi
        test ebx, ebx
        mov ebp, eax
        jle public_6c24eb9
        public_6c24e50 : nop
        mov ecx, dword ptr ss : [esp+0x44]
        mov edx, dword ptr ss : [esp+0x40]
        push ecx
        push edx
        push edi
        mov ecx, esi
        call public_6c27ba0
        cmp eax, 1
        mov dword ptr ss : [ebp+edi*4], eax
        jne public_6c24e71
        inc dword ptr ss : [esp+0x1C]
        jmp public_6c24eb4
        public_6c24e71 : nop
        cmp eax, 2
        je public_6c24eb0
        mov cl, byte ptr ss : [esp+0x48]
        test cl, 1
        jne public_6c24eb4
        test al, 8
        je public_6c24eb4
        test cl, 0xC
        je public_6c24e8e
        inc dword ptr ss : [esp+0x24]
        jmp public_6c24eb4
        public_6c24e8e : nop
        test eax, 0x380
        je public_6c24ea8
        mov eax, dword ptr ss : [esp+0x1C]
        inc eax
        mov dword ptr ss : [ebp+edi*4], 1
        mov dword ptr ss : [esp+0x1C], eax
        jmp public_6c24eb4
        public_6c24ea8 : nop
        mov dword ptr ss : [ebp+edi*4], 2
        public_6c24eb0 : nop
        inc dword ptr ss : [esp+0x20]
        public_6c24eb4 : nop
        inc edi
        cmp edi, ebx
        jl public_6c24e50
        public_6c24eb9 : nop
        push 0x40
        call public_6c34eac
        add esp, 4
        test eax, eax
        je public_6c24ed0
        mov ecx, eax
        call public_6c276a0
        jmp public_6c24ed2
        public_6c24ed0 : nop
        xor eax, eax
        public_6c24ed2 : nop
        push esi
        mov ecx, eax
        mov dword ptr ss : [esp+0x18], eax
        call public_6c27a50
        mov edi, dword ptr ss : [esp+0x4C]
        mov eax, dword ptr ds : [edi]
        mov ecx, dword ptr ss : [esp+0x14]
        add eax, 0x1C
        mov dword ptr ds : [ecx+0x2C], eax
        mov eax, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ds : [eax+0x2C]
        push 0x40
        mov dword ptr ds : [eax+0x30], edx
        call public_6c34eac
        add esp, 4
        test eax, eax
        je public_6c24f0f
        mov ecx, eax
        call public_6c276a0
        jmp public_6c24f11
        public_6c24f0f : nop
        xor eax, eax
        public_6c24f11 : nop
        push esi
        mov ecx, eax
        mov dword ptr ss : [esp+0x1C], eax
        call public_6c27a50
        mov ebx, dword ptr ss : [esp+0x50]
        mov eax, dword ptr ds : [ebx]
        mov ecx, dword ptr ss : [esp+0x18]
        add eax, 0x1C
        mov dword ptr ds : [ecx+0x2C], eax
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0x1C]
        test ecx, ecx
        mov edx, dword ptr ds : [eax+0x2C]
        mov dword ptr ds : [eax+0x30], edx
        jle public_6c24f6d
        mov eax, dword ptr ds : [esi+0x2C]
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [edx+0x2C], eax
        mov eax, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ds : [eax+0x2C]
        push ecx
        push 1
        push ebp
        mov dword ptr ds : [eax+0x30], edx
        mov ecx, dword ptr ss : [esp+0x20]
        push esi
        call public_6c27b00
        mov eax, dword ptr ds : [edi]
        mov ecx, dword ptr ss : [esp+0x14]
        add eax, 0x1C
        mov dword ptr ds : [ecx+0x30], eax
        public_6c24f6d : nop
        mov ecx, dword ptr ss : [esp+0x20]
        test ecx, ecx
        jle public_6c24fa3
        mov edx, dword ptr ds : [esi+0x2C]
        mov eax, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [eax+0x2C], edx
        mov eax, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ds : [eax+0x2C]
        push ecx
        push 2
        push ebp
        mov dword ptr ds : [eax+0x30], edx
        mov ecx, dword ptr ss : [esp+0x24]
        push esi
        call public_6c27b00
        mov eax, dword ptr ds : [ebx]
        mov ecx, dword ptr ss : [esp+0x18]
        add eax, 0x1C
        mov dword ptr ds : [ecx+0x30], eax
        public_6c24fa3 : nop
        mov eax, dword ptr ss : [esp+0x24]
        test eax, eax
        jle public_6c24fbe
        mov edx, dword ptr ss : [esp+0x18]
        push eax
        mov eax, dword ptr ss : [esp+0x18]
        push ebp
        push edx
        push eax
        mov ecx, esi
        call public_6c27cc0
        public_6c24fbe : nop
        mov ecx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [ecx+0x1C]
        test eax, eax
        jbe public_6c24feb
        mov ecx, dword ptr ds : [edi]
        mov eax, dword ptr ds : [ecx+0x14]
        lea edx, ss:[esp+0x14]
        push edx
        add ecx, 0xC
        push 1
        push eax
        call public_6c26fa0
        mov eax, dword ptr ds : [edi]
        mov ecx, dword ptr ds : [eax+0x14]
        mov dword ptr ds : [eax+0x1E8], ecx
        jmp public_6c24ffb
        public_6c24feb : nop
        mov edi, ecx
        call public_6c27720
        push edi
        call public_6c34ea0
        add esp, 4
        public_6c24ffb : nop
        mov ecx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [ecx+0x1C]
        test eax, eax
        jbe public_6c25028
        mov ecx, dword ptr ds : [ebx]
        mov eax, dword ptr ds : [ecx+0x14]
        lea edx, ss:[esp+0x18]
        push edx
        add ecx, 0xC
        push 1
        push eax
        call public_6c26fa0
        mov eax, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [eax+0x14]
        mov dword ptr ds : [eax+0x1E8], ecx
        jmp public_6c25038
        public_6c25028 : nop
        mov edi, ecx
        call public_6c27720
        push edi
        call public_6c34ea0
        add esp, 4
        public_6c25038 : nop
        push ebp
        call public_6c34ea0
        mov al, byte ptr ss : [esp+0x17]
        add esp, 4
        test al, al
        je public_6c25069
        mov edx, dword ptr ds : [esi+0x18]
        push edx
        call public_6c34ea0
        mov eax, dword ptr ss : [esp+0x34]
        mov ecx, dword ptr ss : [esp+0x2C]
        add esp, 4
        mov dword ptr ds : [esi+0x18], eax
        mov dword ptr ds : [esi+0x1C], ecx
        mov dword ptr ds : [esi], 5
        public_6c25069 : nop
        mov eax, dword ptr ss : [esp+0x2C]
        mov ecx, dword ptr ss : [esp+0x38]
        add eax, 4
        xor ebx, ebx
        cmp eax, ecx
        mov dword ptr ss : [esp+0x2C], eax
        jne public_6c24d66
        mov esi, dword ptr ss : [esp+0x50]
        mov ebp, dword ptr ss : [esp+0x4C]
        public_6c2508a : nop
        mov edi, dword ptr ss : [ebp]
        mov ecx, dword ptr ds : [edi+0x10]
        cmp ecx, ebx
        je public_6c250fb
        mov eax, dword ptr ds : [edi+0x14]
        sub eax, ecx
        sar eax, 2
        cmp eax, ebx
        je public_6c250fb
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [eax+0x10]
        add eax, 0xC
        cmp ecx, ebx
        je public_6c250fb
        mov eax, dword ptr ds : [eax+8]
        sub eax, ecx
        sar eax, 2
        cmp eax, ebx
        je public_6c250fb
        mov ecx, edi
        call public_6c25140
        mov ecx, dword ptr ds : [esi]
        call public_6c25140
        mov edx, dword ptr ss : [ebp]
        mov eax, 1
        mov dword ptr ds : [edx+0xA8], eax
        mov ecx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx+0xA8], eax
        mov edx, dword ptr ss : [ebp]
        pop edi
        mov byte ptr ds : [edx+0xAC], 0
        mov eax, dword ptr ds : [esi]
        pop esi
        pop ebp
        mov byte ptr ds : [eax+0xAC], 0
        xor eax, eax
        pop ebx
        add esp, 0x2C
        ret 0x14
        public_6c250fb : nop
        cmp edi, ebx
        je public_6c2510f
        mov ecx, edi
        call public_6c22550
        push edi
        call public_6c34ea0
        add esp, 4
        public_6c2510f : nop
        mov dword ptr ss : [ebp], ebx
        mov edi, dword ptr ds : [esi]
        cmp edi, ebx
        je public_6c25128
        mov ecx, edi
        call public_6c22550
        push edi
        call public_6c34ea0
        add esp, 4
        public_6c25128 : nop
        pop edi
        mov dword ptr ds : [esi], ebx
        pop esi
        pop ebp
        or eax, 0xFFFFFFFF
        pop ebx
        add esp, 0x2C
        ret 0x14
        UNREACHABLE_TRAP(0x6c24d00)
    }
}

#undef public_6c24d25
#undef public_6c24d27
#undef public_6c24d48
#undef public_6c24d4a
#undef public_6c24d66
#undef public_6c24dc0
#undef public_6c24df7
#undef public_6c24e03
#undef public_6c24e0f
#undef public_6c24e20
#undef public_6c24e26
#undef public_6c24e50
#undef public_6c24e71
#undef public_6c24e8e
#undef public_6c24ea8
#undef public_6c24eb0
#undef public_6c24eb4
#undef public_6c24eb9
#undef public_6c24ed0
#undef public_6c24ed2
#undef public_6c24f0f
#undef public_6c24f11
#undef public_6c24f6d
#undef public_6c24fa3
#undef public_6c24fbe
#undef public_6c24feb
#undef public_6c24ffb
#undef public_6c25028
#undef public_6c25038
#undef public_6c25069
#undef public_6c2508a
#undef public_6c250fb
#undef public_6c2510f
#undef public_6c25128
