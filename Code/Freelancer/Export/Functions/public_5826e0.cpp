#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_421ed0);
CLANG_FORWARD_PROC_SYMBOL(public_434630);
CLANG_FORWARD_PROC_SYMBOL(public_5792b0);
CLANG_FORWARD_PROC_SYMBOL(public_59e5c0);
CLANG_FORWARD_PROC_SYMBOL(public_59efa0);

#define public_582801 _public_582801
#define public_58282f _public_58282f
#define public_582853 _public_582853
#define public_582857 _public_582857
#define public_5828da _public_5828da
#define public_5828e7 _public_5828e7
#define public_58290b _public_58290b
#define public_58290f _public_58290f
#define public_582992 _public_582992
#define public_58299f _public_58299f
#define public_582a41 _public_582a41
#define public_582a59 _public_582a59
#define public_582a5d _public_582a5d
#define public_582a91 _public_582a91

PROC_DECLARE(0x5826e0, internal_5826e0, public_5826e0);
extern "C" NAKED register_t __cdecl internal_5826e0()
{
    __asm
    {
        sub esp, 0x14
        push ebx
        push esi
        push edi
        push 6
        mov esi, ecx
        call public_5792b0
        add esp, 4
        test eax, eax
        je public_582a91
        push 9
        call public_5792b0
        add esp, 4
        test eax, eax
        je public_582a91
        mov ecx, esi
        call public_59e5c0
        mov al, byte ptr ds : [esi+0x66D]
        test al, al
        je public_582a91
        mov eax, dword ptr ds : [public_679bb0]
        mov dl, 0x52
        mov cl, 0xFF
        mov byte ptr ss : [esp+0xC], 0xF5
        mov byte ptr ss : [esp+0xD], 0xEA
        mov byte ptr ss : [esp+0xE], dl
        mov byte ptr ss : [esp+0xF], cl
        mov edi, dword ptr ss : [esp+0xC]
        mov ebx, eax
        mov dword ptr ss : [esp+0x18], eax
        mov byte ptr ss : [esp+0xC], 0xF5
        mov byte ptr ss : [esp+0xD], 0xEA
        mov byte ptr ss : [esp+0xE], dl
        mov byte ptr ss : [esp+0xF], cl
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ss : [esp+0x14], edi
        mov dword ptr ss : [esp+0x1C], eax
        mov eax, dword ptr ds : [esi+0x330]
        or edi, 0xFFFFFFFF
        cmp eax, edi
        mov dword ptr ss : [esp+0x10], ebx
        je public_58282f
        mov al, byte ptr ds : [esi+0x39C]
        test al, al
        jne public_582801
        xor edx, edx
        mov dl, bl
        xor eax, eax
        mov al, bh
        lea ecx, ds:[esi+0x32C]
        push 0
        push 0x3F800000
        push 0
        mov dword ptr ss : [esp+0x18], edx
        fild dword ptr ss : [esp+0x18]
        xor edx, edx
        mov dword ptr ss : [esp+0x18], eax
        fmul dword ptr ds : [public_5c7f68]
        mov ax, word ptr ss : [esp+0x1E]
        mov dl, al
        movzx eax, ah
        fstp dword ptr ds : [ecx+0x14]
/*FIXUP push offset public_67dbf8 @0x5827bb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67dbf8
        fild dword ptr ss : [esp+0x1C]
        fmul dword ptr ds : [public_5c7f68]
        mov dword ptr ss : [esp+0x1C], edx
        fstp dword ptr ds : [ecx+0x18]
        fild dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0x1C], eax
        fmul dword ptr ds : [public_5c7f68]
        fstp dword ptr ds : [ecx+0x1C]
        fild dword ptr ss : [esp+0x1C]
        fmul dword ptr ds : [public_5c7f68]
        fstp dword ptr ds : [ecx+0x24]
        call public_59efa0
        push 0xB71
        call public_421ed0
        add esp, 4
        public_582801 : nop
        push 0xB71
        call public_421ed0
        mov edx, dword ptr ds : [esi+0x330]
        push 0
        push 0x3F800000
        push 1
        lea ecx, ss:[esp+0x28]
        push ecx
        push 1
        push edx
/*FIXUP push offset public_67dbf8 @0x582822*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67dbf8
        call public_434630
        add esp, 0x20
        public_58282f : nop
        cmp dword ptr ds : [esi+0x3D4], edi
        je public_5828e7
        mov al, byte ptr ds : [esi+0x676]
        test al, al
        jne public_582853
        mov al, byte ptr ds : [esi+0x679]
        test al, al
        lea eax, ss:[esp+0x10]
        je public_582857
        public_582853 : nop
        lea eax, ss:[esp+0x14]
        public_582857 : nop
        mov cl, byte ptr ds : [esi+0x440]
        test cl, cl
        jne public_5828da
        movzx edx, byte ptr ds : [eax]
        mov dword ptr ss : [esp+0xC], edx
        movzx edx, byte ptr ds : [eax+1]
        fild dword ptr ss : [esp+0xC]
        lea ecx, ds:[esi+0x3D0]
        fmul dword ptr ds : [public_5c7f68]
        mov dword ptr ss : [esp+0xC], edx
        movzx edx, byte ptr ds : [eax+2]
        fstp dword ptr ds : [ecx+0x14]
        fild dword ptr ss : [esp+0xC]
        movzx eax, byte ptr ds : [eax+3]
        fmul dword ptr ds : [public_5c7f68]
        mov dword ptr ss : [esp+0xC], edx
        push 0
        push 0x3F800000
        fstp dword ptr ds : [ecx+0x18]
        push 0
        fild dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x18], eax
/*FIXUP push offset public_67dbf8 @0x5828ad*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67dbf8
        fmul dword ptr ds : [public_5c7f68]
        fstp dword ptr ds : [ecx+0x1C]
        fild dword ptr ss : [esp+0x1C]
        fmul dword ptr ds : [public_5c7f68]
        fstp dword ptr ds : [ecx+0x24]
        call public_59efa0
        push 0xB71
        call public_421ed0
        add esp, 4
        public_5828da : nop
        push 0xB71
        call public_421ed0
        add esp, 4
        public_5828e7 : nop
        cmp dword ptr ds : [esi+0x478], edi
        je public_58299f
        mov al, byte ptr ds : [esi+0x677]
        test al, al
        jne public_58290b
        mov al, byte ptr ds : [esi+0x67A]
        test al, al
        lea eax, ss:[esp+0x10]
        je public_58290f
        public_58290b : nop
        lea eax, ss:[esp+0x14]
        public_58290f : nop
        mov cl, byte ptr ds : [esi+0x4E4]
        test cl, cl
        jne public_582992
        movzx edx, byte ptr ds : [eax]
        mov dword ptr ss : [esp+0xC], edx
        movzx edx, byte ptr ds : [eax+1]
        fild dword ptr ss : [esp+0xC]
        lea ecx, ds:[esi+0x474]
        fmul dword ptr ds : [public_5c7f68]
        mov dword ptr ss : [esp+0xC], edx
        movzx edx, byte ptr ds : [eax+2]
        fstp dword ptr ds : [ecx+0x14]
        fild dword ptr ss : [esp+0xC]
        movzx eax, byte ptr ds : [eax+3]
        fmul dword ptr ds : [public_5c7f68]
        mov dword ptr ss : [esp+0xC], edx
        mov dword ptr ss : [esp+0x14], eax
        push 0
        fstp dword ptr ds : [ecx+0x18]
        push 0x3F800000
        fild dword ptr ss : [esp+0x14]
        push 0
/*FIXUP push offset public_67dbf8 @0x582965*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67dbf8
        fmul dword ptr ds : [public_5c7f68]
        fstp dword ptr ds : [ecx+0x1C]
        fild dword ptr ss : [esp+0x24]
        fmul dword ptr ds : [public_5c7f68]
        fstp dword ptr ds : [ecx+0x24]
        call public_59efa0
        push 0xB71
        call public_421ed0
        add esp, 4
        public_582992 : nop
        push 0xB71
        call public_421ed0
        add esp, 4
        public_58299f : nop
        mov al, byte ptr ds : [esi+0x66D]
        test al, al
        je public_582a91
        cmp dword ptr ds : [esi+0x51C], edi
        je public_582a91
        mov al, byte ptr ds : [esi+0x5F4]
        test al, al
        jne public_582a41
        xor edx, edx
        mov dl, bl
        xor eax, eax
        mov al, bh
        lea ecx, ds:[esi+0x518]
        push 0
        push 0x3F800000
        push 0
        mov dword ptr ss : [esp+0x20], edx
        fild dword ptr ss : [esp+0x20]
        xor edx, edx
        mov dword ptr ss : [esp+0x20], eax
        fmul dword ptr ds : [public_5c7f68]
        mov ax, word ptr ss : [esp+0x1E]
        mov dl, al
        movzx eax, ah
        fstp dword ptr ds : [ecx+0x14]
/*FIXUP push offset public_67dbf8 @0x5829fb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67dbf8
        fild dword ptr ss : [esp+0x24]
        fmul dword ptr ds : [public_5c7f68]
        mov dword ptr ss : [esp+0x24], edx
        fstp dword ptr ds : [ecx+0x18]
        fild dword ptr ss : [esp+0x24]
        mov dword ptr ss : [esp+0x24], eax
        fmul dword ptr ds : [public_5c7f68]
        fstp dword ptr ds : [ecx+0x1C]
        fild dword ptr ss : [esp+0x24]
        fmul dword ptr ds : [public_5c7f68]
        fstp dword ptr ds : [ecx+0x24]
        call public_59efa0
        push 0xB71
        call public_421ed0
        add esp, 4
        public_582a41 : nop
        mov al, byte ptr ds : [esi+0x674]
        test al, al
        jne public_582a59
        mov al, byte ptr ds : [esi+0x678]
        test al, al
        lea eax, ss:[esp+0x18]
        je public_582a5d
        public_582a59 : nop
        lea eax, ss:[esp+0x1C]
        public_582a5d : nop
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ds : [esi+0x51C]
        push 0
        push 0x3F800000
        push 1
        lea edx, ss:[esp+0x20]
        push edx
        push 1
        push eax
/*FIXUP push offset public_67dbf8 @0x582a76*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67dbf8
        mov dword ptr ss : [esp+0x30], ecx
        call public_434630
        push 0xB71
        call public_421ed0
        add esp, 0x20
        public_582a91 : nop
        pop edi
        pop esi
        pop ebx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x5826e0)
    }
}

#undef public_582801
#undef public_58282f
#undef public_582853
#undef public_582857
#undef public_5828da
#undef public_5828e7
#undef public_58290b
#undef public_58290f
#undef public_582992
#undef public_58299f
#undef public_582a41
#undef public_582a59
#undef public_582a5d
#undef public_582a91
