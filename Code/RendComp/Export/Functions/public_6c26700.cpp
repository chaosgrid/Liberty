#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c26700);
CLANG_FORWARD_PROC_SYMBOL(public_6c26c40);
CLANG_FORWARD_PROC_SYMBOL(public_6c26c70);
CLANG_FORWARD_PROC_SYMBOL(public_6c279a0);
CLANG_FORWARD_PROC_SYMBOL(public_6c27a20);
CLANG_FORWARD_PROC_SYMBOL(public_6c34ea0);
CLANG_FORWARD_PROC_SYMBOL(public_6c34eac);

#define public_6c2677c _public_6c2677c
#define public_6c267b4 _public_6c267b4
#define public_6c267f7 _public_6c267f7
#define public_6c2683a _public_6c2683a
#define public_6c26872 _public_6c26872
#define public_6c268a0 _public_6c268a0
#define public_6c268c0 _public_6c268c0
#define public_6c268fe _public_6c268fe
#define public_6c2691e _public_6c2691e
#define public_6c2693e _public_6c2693e
#define public_6c2695e _public_6c2695e
#define public_6c26985 _public_6c26985
#define public_6c26991 _public_6c26991
#define public_6c269a6 _public_6c269a6
#define public_6c26a30 _public_6c26a30
#define public_6c26a41 _public_6c26a41
#define public_6c26a4c _public_6c26a4c
#define public_6c26ad0 _public_6c26ad0
#define public_6c26ae0 _public_6c26ae0
#define public_6c26afe _public_6c26afe
#define public_6c26b07 _public_6c26b07
#define public_6c26b2d _public_6c26b2d
#define public_6c26b3b _public_6c26b3b
#define public_6c26b66 _public_6c26b66
#define public_6c26b8a _public_6c26b8a
#define public_6c26bae _public_6c26bae
#define public_6c26bd2 _public_6c26bd2
#define public_6c26bf7 _public_6c26bf7

PROC_DECLARE(0x6c26700, internal_6c26700, public_6c26700);
extern "C" NAKED register_t __cdecl internal_6c26700()
{
    __asm
    {
        sub esp, 0x38
        push ebx
        mov ebx, dword ptr ss : [esp+0x48]
        mov eax, dword ptr ds : [ebx+0x6C]
        push ebp
        push esi
        shl eax, 2
        push edi
        lea esi, ds:[ebx+0x2C]
        push eax
        mov dword ptr ss : [esp+0x40], esi
        call public_6c34eac
        mov ecx, dword ptr ds : [ebx+0x6C]
        shl ecx, 2
        mov edx, ecx
        mov ebp, eax
        shr ecx, 2
        or eax, 0xFFFFFFFF
        mov edi, ebp
        rep stosd
        mov ecx, edx
        and ecx, 3
        rep stosb
        mov cl, byte ptr ds : [ebx+0x68]
        xor eax, eax
        add esp, 4
        test cl, 2
        mov dword ptr ss : [esp+0x44], ebp
        mov dword ptr ss : [esp+0x10], eax
        je public_6c2677c
        mov eax, dword ptr ds : [ebx+0x14]
        shl eax, 2
        push eax
        call public_6c34eac
        mov ecx, dword ptr ds : [ebx+0x14]
        shl ecx, 2
        mov edx, ecx
        mov edi, eax
        shr ecx, 2
        or eax, 0xFFFFFFFF
        mov dword ptr ss : [esp+0x14], edi
        rep stosd
        mov ecx, edx
        and ecx, 3
        add esp, 4
        rep stosb
        xor eax, eax
        public_6c2677c : nop
        test byte ptr ds : [ebx+0x68], 0x10
        mov dword ptr ss : [esp+0x18], eax
        je public_6c267b4
        mov eax, dword ptr ds : [ebx+0x28]
        shl eax, 2
        push eax
        call public_6c34eac
        mov ecx, dword ptr ds : [ebx+0x28]
        shl ecx, 2
        mov edx, ecx
        mov edi, eax
        shr ecx, 2
        or eax, 0xFFFFFFFF
        mov dword ptr ss : [esp+0x1C], edi
        rep stosd
        mov ecx, edx
        and ecx, 3
        add esp, 4
        rep stosb
        xor eax, eax
        public_6c267b4 : nop
        mov ecx, dword ptr ds : [ebx+0x68]
        and ecx, 0xF00
        cmp ecx, 0x100
        mov dword ptr ss : [esp+0x1C], eax
        jb public_6c267f7
        mov edx, dword ptr ds : [ebx+0x50]
        shl edx, 2
        push edx
        call public_6c34eac
        mov ecx, dword ptr ds : [ebx+0x50]
        shl ecx, 2
        mov edx, ecx
        mov edi, eax
        shr ecx, 2
        or eax, 0xFFFFFFFF
        mov dword ptr ss : [esp+0x20], edi
        rep stosd
        mov ecx, edx
        and ecx, 3
        add esp, 4
        rep stosb
        xor eax, eax
        public_6c267f7 : nop
        mov ecx, dword ptr ds : [ebx+0x68]
        and ecx, 0xF00
        cmp ecx, 0x200
        mov dword ptr ss : [esp+0x20], eax
        jb public_6c2683a
        mov edx, dword ptr ds : [ebx+0x64]
        shl edx, 2
        push edx
        call public_6c34eac
        mov ecx, dword ptr ds : [ebx+0x64]
        shl ecx, 2
        mov edx, ecx
        mov edi, eax
        shr ecx, 2
        or eax, 0xFFFFFFFF
        mov dword ptr ss : [esp+0x24], edi
        rep stosd
        mov ecx, edx
        and ecx, 3
        add esp, 4
        rep stosb
        xor eax, eax
        public_6c2683a : nop
        test byte ptr ds : [ebx+0x68], 0x40
        mov dword ptr ss : [esp+0x14], eax
        je public_6c26872
        mov eax, dword ptr ds : [esi+0x10]
        shl eax, 2
        push eax
        call public_6c34eac
        mov ecx, dword ptr ds : [esi+0x10]
        shl ecx, 2
        mov edx, ecx
        mov edi, eax
        shr ecx, 2
        or eax, 0xFFFFFFFF
        mov dword ptr ss : [esp+0x18], edi
        rep stosd
        mov ecx, edx
        and ecx, 3
        add esp, 4
        rep stosb
        xor eax, eax
        public_6c26872 : nop
        cmp dword ptr ss : [esp+0x50], eax
        mov esi, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x24], eax
        mov dword ptr ss : [esp+0x28], eax
        mov dword ptr ss : [esp+0x2C], eax
        mov dword ptr ss : [esp+0x30], eax
        mov dword ptr ss : [esp+0x34], eax
        mov dword ptr ss : [esp+0x38], eax
        mov dword ptr ss : [esp+0x40], eax
        jle public_6c269a6
        lea esp, ss:[esp]
        public_6c268a0 : nop
        mov eax, dword ptr ss : [esp+0x4C]
        mov ecx, dword ptr ss : [esp+0x40]
        mov edi, dword ptr ds : [eax+ecx*4]
        mov ecx, edi
        call public_6c27a20
        mov eax, dword ptr ds : [edi+0x1C]
        xor edx, edx
        test eax, eax
        jbe public_6c26991
        nop 
        public_6c268c0 : nop
        mov eax, dword ptr ds : [edi+0x18]
        movzx eax, word ptr ds : [eax+edx*2]
        cmp dword ptr ss : [ebp+eax*4], 0xFFFFFFFF
        jne public_6c26985
        inc dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ss : [esp+0x10]
        test ecx, ecx
        mov dword ptr ss : [ebp+eax*4], 0xFFFFFFFE
        je public_6c268fe
        mov esi, dword ptr ds : [ebx+0x10]
        mov esi, dword ptr ds : [esi+eax*4]
        lea ecx, ds:[ecx+esi*4]
        cmp dword ptr ds : [ecx], 0xFFFFFFFF
        jne public_6c268fe
        mov dword ptr ds : [ecx], 0xFFFFFFFE
        inc dword ptr ss : [esp+0x28]
        public_6c268fe : nop
        mov ecx, dword ptr ss : [esp+0x18]
        test ecx, ecx
        je public_6c2691e
        mov esi, dword ptr ds : [ebx+0x24]
        mov esi, dword ptr ds : [esi+eax*4]
        lea ecx, ds:[ecx+esi*4]
        cmp dword ptr ds : [ecx], 0xFFFFFFFF
        jne public_6c2691e
        mov dword ptr ds : [ecx], 0xFFFFFFFE
        inc dword ptr ss : [esp+0x2C]
        public_6c2691e : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        test ecx, ecx
        je public_6c2693e
        mov esi, dword ptr ds : [ebx+0x4C]
        mov esi, dword ptr ds : [esi+eax*4]
        lea ecx, ds:[ecx+esi*4]
        cmp dword ptr ds : [ecx], 0xFFFFFFFF
        jne public_6c2693e
        mov dword ptr ds : [ecx], 0xFFFFFFFE
        inc dword ptr ss : [esp+0x30]
        public_6c2693e : nop
        mov ecx, dword ptr ss : [esp+0x20]
        test ecx, ecx
        je public_6c2695e
        mov esi, dword ptr ds : [ebx+0x60]
        mov esi, dword ptr ds : [esi+eax*4]
        lea ecx, ds:[ecx+esi*4]
        cmp dword ptr ds : [ecx], 0xFFFFFFFF
        jne public_6c2695e
        mov dword ptr ds : [ecx], 0xFFFFFFFE
        inc dword ptr ss : [esp+0x34]
        public_6c2695e : nop
        mov esi, dword ptr ss : [esp+0x14]
        test esi, esi
        je public_6c26985
        mov ecx, dword ptr ss : [esp+0x3C]
        mov ecx, dword ptr ds : [ecx+0xC]
        mov eax, dword ptr ds : [ecx+eax*4]
        mov ecx, dword ptr ds : [esi+eax*4]
        cmp ecx, 0xFFFFFFFF
        lea eax, ds:[esi+eax*4]
        jne public_6c26985
        mov dword ptr ds : [eax], 0xFFFFFFFE
        inc dword ptr ss : [esp+0x38]
        public_6c26985 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        inc edx
        cmp edx, eax
        jb public_6c268c0
        public_6c26991 : nop
        mov eax, dword ptr ss : [esp+0x40]
        mov ecx, dword ptr ss : [esp+0x50]
        inc eax
        cmp eax, ecx
        mov dword ptr ss : [esp+0x40], eax
        jl public_6c268a0
        public_6c269a6 : nop
        mov ecx, dword ptr ss : [esp+0x24]
        cmp ecx, dword ptr ds : [ebx+0x6C]
        jne public_6c26a4c
        mov edx, dword ptr ss : [esp+0x28]
        cmp edx, dword ptr ds : [ebx+0x14]
        jne public_6c26a4c
        mov eax, dword ptr ss : [esp+0x2C]
        cmp eax, dword ptr ds : [ebx+0x28]
        jne public_6c26a4c
        mov ecx, dword ptr ss : [esp+0x30]
        cmp ecx, dword ptr ds : [ebx+0x50]
        jne public_6c26a4c
        mov edx, dword ptr ss : [esp+0x34]
        cmp edx, dword ptr ds : [ebx+0x64]
        jne public_6c26a4c
        mov eax, dword ptr ss : [esp+0x3C]
        mov ecx, dword ptr ss : [esp+0x38]
        cmp ecx, dword ptr ds : [eax+0x10]
        jne public_6c26a4c
        push ebp
        call public_6c34ea0
        mov edx, dword ptr ss : [esp+0x14]
        push edx
        call public_6c34ea0
        mov eax, dword ptr ss : [esp+0x20]
        push eax
        call public_6c34ea0
        mov ecx, dword ptr ss : [esp+0x28]
        push ecx
        call public_6c34ea0
        mov edx, dword ptr ss : [esp+0x30]
        push edx
        call public_6c34ea0
        push esi
        call public_6c34ea0
        mov edi, dword ptr ss : [esp+0x68]
        add esp, 0x18
        xor esi, esi
        test edi, edi
        jle public_6c26a41
        lea ecx, ds:[ecx]
        public_6c26a30 : nop
        mov eax, dword ptr ss : [esp+0x4C]
        mov ecx, dword ptr ds : [eax+esi*4]
        call public_6c279a0
        inc esi
        cmp esi, edi
        jl public_6c26a30
        public_6c26a41 : nop
        pop edi
        pop esi
        pop ebp
        or eax, 0xFFFFFFFF
        pop ebx
        add esp, 0x38
        ret 
        public_6c26a4c : nop
        mov ecx, dword ptr ds : [ebx]
        mov esi, dword ptr ss : [esp+0x58]
        mov dword ptr ds : [esi], ecx
        mov edx, dword ptr ds : [ebx+0x68]
        mov dword ptr ds : [esi+0x68], edx
        mov eax, dword ptr ds : [ebx+0x6C]
        push 0xFFFFFFFE
        push eax
        push ebp
        call public_6c26c40
        mov ecx, dword ptr ds : [ebx+0x14]
        mov edx, dword ptr ss : [esp+0x1C]
        push 0xFFFFFFFE
        push ecx
        push edx
        call public_6c26c40
        mov eax, dword ptr ds : [ebx+0x28]
        mov ecx, dword ptr ss : [esp+0x30]
        push 0xFFFFFFFE
        push eax
        push ecx
        call public_6c26c40
        mov edx, dword ptr ds : [ebx+0x50]
        mov eax, dword ptr ss : [esp+0x40]
        push 0xFFFFFFFE
        push edx
        push eax
        call public_6c26c40
        mov ecx, dword ptr ds : [ebx+0x64]
        mov edx, dword ptr ss : [esp+0x50]
        push 0xFFFFFFFE
        push ecx
        push edx
        call public_6c26c40
        mov eax, dword ptr ss : [esp+0x78]
        mov ecx, dword ptr ds : [eax+0x10]
        mov edx, dword ptr ss : [esp+0x50]
        push 0xFFFFFFFE
        push ecx
        push edx
        call public_6c26c40
        mov eax, dword ptr ss : [esp+0x98]
        add esp, 0x48
        xor edi, edi
        test eax, eax
        jle public_6c26b3b
        lea ebx, ds:[ebx]
        public_6c26ad0 : nop
        mov eax, dword ptr ss : [esp+0x4C]
        mov ecx, dword ptr ds : [eax+edi*4]
        mov edx, dword ptr ds : [ecx+0x1C]
        xor eax, eax
        test edx, edx
        jbe public_6c26afe
        public_6c26ae0 : nop
        mov edx, dword ptr ds : [ecx+0x18]
        movzx ebx, word ptr ds : [edx+eax*2]
        mov bx, word ptr ss : [ebp+ebx*4]
        lea edx, ds:[edx+eax*2]
        mov word ptr ds : [edx], bx
        mov edx, dword ptr ds : [ecx+0x1C]
        inc eax
        cmp eax, edx
        jb public_6c26ae0
        mov ebx, dword ptr ss : [esp+0x54]
        public_6c26afe : nop
        mov edx, dword ptr ds : [ecx+0x28]
        xor eax, eax
        test edx, edx
        jbe public_6c26b2d
        public_6c26b07 : nop
        mov edx, dword ptr ds : [ecx+0x20]
        movzx ebx, word ptr ds : [edx+eax*2]
        mov ebp, dword ptr ss : [esp+0x10]
        mov bx, word ptr ss : [ebp+ebx*4]
        lea edx, ds:[edx+eax*2]
        mov word ptr ds : [edx], bx
        mov edx, dword ptr ds : [ecx+0x28]
        inc eax
        cmp eax, edx
        jb public_6c26b07
        mov ebp, dword ptr ss : [esp+0x44]
        mov ebx, dword ptr ss : [esp+0x54]
        public_6c26b2d : nop
        call public_6c279a0
        mov eax, dword ptr ss : [esp+0x50]
        inc edi
        cmp edi, eax
        jl public_6c26ad0
        public_6c26b3b : nop
        mov eax, dword ptr ss : [esp+0x10]
        test eax, eax
        mov edi, dword ptr ss : [esp+0x24]
        mov dword ptr ds : [esi+0x6C], edi
        je public_6c26b66
        mov edx, dword ptr ds : [ebx+0x6C]
        push eax
        mov eax, dword ptr ss : [esp+0x2C]
        push ebp
        push eax
        push edi
        lea ecx, ds:[esi+4]
        push ecx
        push edx
        lea eax, ds:[ebx+4]
        push eax
        call public_6c26c70
        add esp, 0x1C
        public_6c26b66 : nop
        mov eax, dword ptr ss : [esp+0x18]
        test eax, eax
        je public_6c26b8a
        mov edx, dword ptr ds : [ebx+0x6C]
        push eax
        mov eax, dword ptr ss : [esp+0x30]
        push ebp
        push eax
        push edi
        lea ecx, ds:[esi+0x18]
        push ecx
        push edx
        lea eax, ds:[ebx+0x18]
        push eax
        call public_6c26c70
        add esp, 0x1C
        public_6c26b8a : nop
        mov eax, dword ptr ss : [esp+0x1C]
        test eax, eax
        je public_6c26bae
        mov edx, dword ptr ds : [ebx+0x6C]
        push eax
        mov eax, dword ptr ss : [esp+0x34]
        push ebp
        push eax
        push edi
        lea ecx, ds:[esi+0x40]
        push ecx
        push edx
        lea eax, ds:[ebx+0x40]
        push eax
        call public_6c26c70
        add esp, 0x1C
        public_6c26bae : nop
        mov eax, dword ptr ss : [esp+0x20]
        test eax, eax
        je public_6c26bd2
        mov edx, dword ptr ds : [ebx+0x6C]
        push eax
        mov eax, dword ptr ss : [esp+0x38]
        push ebp
        push eax
        push edi
        lea ecx, ds:[esi+0x54]
        push ecx
        push edx
        lea eax, ds:[ebx+0x54]
        push eax
        call public_6c26c70
        add esp, 0x1C
        public_6c26bd2 : nop
        mov eax, dword ptr ss : [esp+0x14]
        test eax, eax
        je public_6c26bf7
        mov ecx, dword ptr ds : [ebx+0x6C]
        mov edx, dword ptr ss : [esp+0x3C]
        push eax
        mov eax, dword ptr ss : [esp+0x3C]
        push ebp
        push eax
        push edi
        add esi, 0x2C
        push esi
        push ecx
        push edx
        call public_6c26c70
        add esp, 0x1C
        public_6c26bf7 : nop
        push ebp
        call public_6c34ea0
        mov eax, dword ptr ss : [esp+0x14]
        push eax
        call public_6c34ea0
        mov ecx, dword ptr ss : [esp+0x20]
        push ecx
        call public_6c34ea0
        mov edx, dword ptr ss : [esp+0x28]
        push edx
        call public_6c34ea0
        mov eax, dword ptr ss : [esp+0x30]
        push eax
        call public_6c34ea0
        mov ecx, dword ptr ss : [esp+0x28]
        push ecx
        call public_6c34ea0
        add esp, 0x18
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 0x38
        ret 
        UNREACHABLE_TRAP(0x6c26700)
    }
}

#undef public_6c2677c
#undef public_6c267b4
#undef public_6c267f7
#undef public_6c2683a
#undef public_6c26872
#undef public_6c268a0
#undef public_6c268c0
#undef public_6c268fe
#undef public_6c2691e
#undef public_6c2693e
#undef public_6c2695e
#undef public_6c26985
#undef public_6c26991
#undef public_6c269a6
#undef public_6c26a30
#undef public_6c26a41
#undef public_6c26a4c
#undef public_6c26ad0
#undef public_6c26ae0
#undef public_6c26afe
#undef public_6c26b07
#undef public_6c26b2d
#undef public_6c26b3b
#undef public_6c26b66
#undef public_6c26b8a
#undef public_6c26bae
#undef public_6c26bd2
#undef public_6c26bf7
