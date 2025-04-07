#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea9f40);

#define public_6ecb589 _public_6ecb589
#define public_6ecb59b _public_6ecb59b
#define public_6ecb5ad _public_6ecb5ad
#define public_6ecb5bf _public_6ecb5bf
#define public_6ecb64f _public_6ecb64f
#define public_6ecb686 _public_6ecb686
#define public_6ecb6ca _public_6ecb6ca
#define public_6ecb6f6 _public_6ecb6f6
#define public_6ecb702 _public_6ecb702
#define public_6ecb71e _public_6ecb71e
#define public_6ecb755 _public_6ecb755
#define public_6ecb799 _public_6ecb799
#define public_6ecb7c5 _public_6ecb7c5
#define public_6ecb7cc _public_6ecb7cc
#define public_6ecb7e8 _public_6ecb7e8

PROC_DECLARE(0x6ecb550, internal_6ecb550, public_6ecb550);
extern "C" NAKED register_t __cdecl internal_6ecb550()
{
    __asm
    {
        sub esp, 0x10
        push ebx
        push ebp
        mov ebp, dword ptr ds : [public_6fb3048]
        push esi
        mov esi, dword ptr ss : [esp+0x20]
        push edi
        mov edi, ecx
        xor ebx, ebx
        push ebx
        mov ecx, esi
        call ebp
        push eax
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        push 1
        mov ecx, esi
        mov dword ptr ds : [edi+0xC], eax
        call ebp
        cmp eax, ebx
        jne public_6ecb589
        mov dword ptr ds : [edi+0x10], ebx
        mov byte ptr ds : [edi+0x14], bl
        jmp public_6ecb59b
        public_6ecb589 : nop
        push eax
        lea eax, ds:[edi+0x14]
        push 0x30
        push eax
        call public_6ea9f40
        add esp, 0xC
        mov dword ptr ds : [edi+0x10], eax
        public_6ecb59b : nop
        push 2
        mov ecx, esi
        call ebp
        cmp eax, ebx
        jne public_6ecb5ad
        mov dword ptr ds : [edi+0x44], ebx
        mov byte ptr ds : [edi+0x48], bl
        jmp public_6ecb5bf
        public_6ecb5ad : nop
        push eax
        lea ecx, ds:[edi+0x48]
        push 0x30
        push ecx
        call public_6ea9f40
        add esp, 0xC
        mov dword ptr ds : [edi+0x44], eax
        public_6ecb5bf : nop
        lea edx, ds:[edi+0x48]
/*FIXUP push offset public_6fb4678 @0x6ecb5c2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb4678
        push edx
        call dword ptr ds : [public_6fb3294]
        add esp, 8
        test eax, eax
        mov ecx, esi
        jne public_6ecb702
        push 5
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ss : [esp+0x10]
        push 4
        mov ecx, esi
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ss : [esp+0x24]
        push 3
        mov ecx, esi
        call dword ptr ds : [public_6fb3044]
        mov eax, dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x18], eax
        fstp dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x1C], ecx
        mov ecx, dword ptr ss : [esp+0x18]
        lea edx, ds:[edi+0x78]
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [edx+4], ecx
        push 6
        mov ecx, esi
        mov dword ptr ds : [edx+8], eax
        mov byte ptr ds : [edi+0x84], 1
        call dword ptr ds : [public_6fb306c]
        test al, al
        jne public_6ecb64f
        push 6
        mov ecx, esi
        call dword ptr ds : [public_6fb3020]
        mov dword ptr ds : [edi+0x8C], eax
        public_6ecb64f : nop
        push 7
        mov ecx, esi
        call dword ptr ds : [public_6fb306c]
        test al, al
        jne public_6ecb686
        push 7
        mov ecx, esi
        call dword ptr ds : [public_6fb3044]
        fst dword ptr ds : [edi+0x88]
        fcomp dword ptr ds : [public_6fb5e84]
        fnstsw ax
        test ah, 0x44
        jp public_6ecb686
        mov ecx, dword ptr ds : [public_6fb4674]
        mov dword ptr ds : [edi+0x88], ecx
        public_6ecb686 : nop
        push 8
        mov ecx, esi
        call dword ptr ds : [public_6fb306c]
        test al, al
        jne public_6ecb7e8
/*FIXUP push offset public_6fb5e74 @0x6ecb698*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb5e74
        push 8
        mov ecx, esi
        call ebp
        mov ebx, dword ptr ds : [public_6fb3294]
        push eax
        call ebx
        add esp, 8
        test eax, eax
        jne public_6ecb6ca
        mov byte ptr ds : [edi+0x90], 1
        mov byte ptr ds : [edi+0x91], al
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x10
        ret 4
/*FIXUP public_6ecb6ca : nop
        push offset public_6fb5e60 @0x6ecb6ca*/
  FIXUP public_6ecb6ca : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb5e60
        push 8
        mov ecx, esi
        call ebp
        push eax
        call ebx
        add esp, 8
        test eax, eax
        jne public_6ecb6f6
        mov byte ptr ds : [edi+0x90], al
        mov byte ptr ds : [edi+0x91], 1
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x10
        ret 4
/*FIXUP public_6ecb6f6 : nop
        push offset public_6fb5e54 @0x6ecb6f6*/
  FIXUP public_6ecb6f6 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb5e54
        push 8
        jmp public_6ecb7cc
        public_6ecb702 : nop
        push 3
        call dword ptr ds : [public_6fb306c]
        test al, al
        jne public_6ecb71e
        push 3
        mov ecx, esi
        call dword ptr ds : [public_6fb3020]
        mov dword ptr ds : [edi+0x8C], eax
        public_6ecb71e : nop
        push 4
        mov ecx, esi
        call dword ptr ds : [public_6fb306c]
        test al, al
        jne public_6ecb755
        push 4
        mov ecx, esi
        call dword ptr ds : [public_6fb3044]
        fst dword ptr ds : [edi+0x88]
        fcomp dword ptr ds : [public_6fb5e84]
        fnstsw ax
        test ah, 0x44
        jp public_6ecb755
        mov edx, dword ptr ds : [public_6fb4674]
        mov dword ptr ds : [edi+0x88], edx
        public_6ecb755 : nop
        push 5
        mov ecx, esi
        call dword ptr ds : [public_6fb306c]
        test al, al
        jne public_6ecb7e8
/*FIXUP push offset public_6fb5e74 @0x6ecb767*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb5e74
        push 5
        mov ecx, esi
        call ebp
        mov ebx, dword ptr ds : [public_6fb3294]
        push eax
        call ebx
        add esp, 8
        test eax, eax
        jne public_6ecb799
        mov byte ptr ds : [edi+0x90], 1
        mov byte ptr ds : [edi+0x91], al
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x10
        ret 4
/*FIXUP public_6ecb799 : nop
        push offset public_6fb5e60 @0x6ecb799*/
  FIXUP public_6ecb799 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb5e60
        push 5
        mov ecx, esi
        call ebp
        push eax
        call ebx
        add esp, 8
        test eax, eax
        jne public_6ecb7c5
        mov byte ptr ds : [edi+0x90], al
        mov byte ptr ds : [edi+0x91], 1
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x10
        ret 4
/*FIXUP public_6ecb7c5 : nop
        push offset public_6fb5e54 @0x6ecb7c5*/
  FIXUP public_6ecb7c5 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb5e54
        push 5
        public_6ecb7cc : nop
        mov ecx, esi
        call ebp
        push eax
        call ebx
        add esp, 8
        test eax, eax
        jne public_6ecb7e8
        mov al, 1
        mov byte ptr ds : [edi+0x90], al
        mov byte ptr ds : [edi+0x91], al
        public_6ecb7e8 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x6ecb550)
    }
}

#undef public_6ecb589
#undef public_6ecb59b
#undef public_6ecb5ad
#undef public_6ecb5bf
#undef public_6ecb64f
#undef public_6ecb686
#undef public_6ecb6ca
#undef public_6ecb6f6
#undef public_6ecb702
#undef public_6ecb71e
#undef public_6ecb755
#undef public_6ecb799
#undef public_6ecb7c5
#undef public_6ecb7cc
#undef public_6ecb7e8
