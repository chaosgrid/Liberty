#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_412050);
CLANG_FORWARD_PROC_SYMBOL(public_412070);
CLANG_FORWARD_PROC_SYMBOL(public_41dda0);
CLANG_FORWARD_PROC_SYMBOL(public_41dde0);
CLANG_FORWARD_PROC_SYMBOL(public_428030);
CLANG_FORWARD_PROC_SYMBOL(public_439200);
CLANG_FORWARD_PROC_SYMBOL(public_43b290);
CLANG_FORWARD_PROC_SYMBOL(public_442130);
CLANG_FORWARD_PROC_SYMBOL(public_4564d0);
CLANG_FORWARD_PROC_SYMBOL(public_4c55b0);
CLANG_FORWARD_PROC_SYMBOL(public_5739c0);
CLANG_FORWARD_PROC_SYMBOL(public_5a8260);
CLANG_FORWARD_PROC_SYMBOL(public_5a9300);

#define public_5738aa _public_5738aa
#define public_5738b8 _public_5738b8
#define public_5738c6 _public_5738c6
#define public_5738cd _public_5738cd
#define public_5738df _public_5738df
#define public_57392c _public_57392c
#define public_573933 _public_573933
#define public_573938 _public_573938
#define public_5739b6 _public_5739b6

PROC_DECLARE(0x573860, internal_573860, public_573860);
extern "C" NAKED register_t __cdecl internal_573860()
{
    __asm
    {
        push ebx
        push esi
        mov esi, ecx
        call public_5a8260
        call public_4c55b0
        mov ecx, offset public_67e7b8
        call public_5a9300
        xor ebx, ebx
        mov byte ptr ds : [esi+0x20C], bl
        mov dword ptr ds : [esi+8], ebx
        mov eax, dword ptr ds : [public_67c200]
        cmp eax, ebx
        mov dword ptr ds : [public_67c1fc], eax
        mov dword ptr ds : [public_67c200], ebx
        je public_5738c6
        cmp eax, 1
        je public_5738c6
        cmp eax, 2
        jne public_5738aa
        mov dword ptr ds : [esi+4], 0x13
        jmp public_5738df
        public_5738aa : nop
        cmp eax, 3
        jne public_5738b8
        mov dword ptr ds : [esi+4], 5
        jmp public_5738df
        public_5738b8 : nop
        cmp eax, 4
        jne public_5738cd
        mov dword ptr ds : [esi+4], 0x13
        jmp public_5738df
        public_5738c6 : nop
        mov dword ptr ds : [esi+4], 1
        public_5738cd : nop
        mov ecx, esi
        call public_5739c0
        test al, al
        jne public_5738df
        mov dword ptr ds : [esi+4], 0xD
        public_5738df : nop
        mov eax, dword ptr ds : [esi+0x210]
        lea ecx, ds:[esi+0x210]
/*FIXUP push offset public_67bf4c @0x5738eb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67bf4c
        mov dword ptr ds : [esi+0x228], ebx
        call dword ptr ds : [eax+4]
        cmp byte ptr ds : [public_614a9c], bl
        je public_5739b6
        cmp dword ptr ds : [public_67c1fc], 4
        je public_5739b6
        mov eax, dword ptr ds : [public_67bf40]
        dec eax
        push edi
        mov byte ptr ds : [public_668762], 1
        je public_573933
        dec eax
        je public_57392c
/*FIXUP push offset public_5e3088 @0x573925*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e3088
        jmp public_573938
/*FIXUP public_57392c : nop
        push offset public_5e307c @0x57392c*/
  FIXUP public_57392c : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e307c
        jmp public_573938
/*FIXUP public_573933 : nop
        push offset public_5e3070 @0x573933*/
  FIXUP public_573933 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e3070
        public_573938 : nop
        call dword ptr ds : [public_5c6be4]
        push 1
/*FIXUP push offset public_5c95fc @0x573940*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c95fc
        mov edi, eax
        call public_41dde0
        push 1
        call public_41dda0
        push 3
        mov byte ptr ds : [esi+0x22C], bl
        mov dword ptr ds : [esi+0x230], ebx
        call public_428030
        push 0x3F800000
        call public_412070
        fld dword ptr ds : [public_61650c]
        fdivr qword ptr ds : [public_5c89b8]
        add esp, 0x14
        fstp dword ptr ss : [esp]
        push ebx
        call public_412050
        mov ecx, offset public_66d2d0
        add esp, 8
        call public_4564d0
        mov ecx, offset public_668708
        mov dword ptr ds : [esi+0x230], ebx
        call public_439200
        mov ecx, offset public_668708
        push edi
        call public_43b290
        call public_442130
        pop edi
        public_5739b6 : nop
        pop esi
        mov al, 1
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x573860)
    }
}

#undef public_5738aa
#undef public_5738b8
#undef public_5738c6
#undef public_5738cd
#undef public_5738df
#undef public_57392c
#undef public_573933
#undef public_573938
#undef public_5739b6
