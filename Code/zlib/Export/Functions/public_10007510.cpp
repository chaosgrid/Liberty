#include "zlib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_10007510);

#define public_10007530 _public_10007530
#define public_100075c6 _public_100075c6
#define public_100075db _public_100075db
#define public_10007667 _public_10007667
#define public_10007685 _public_10007685
#define public_10007704 _public_10007704
#define public_1000770f _public_1000770f
#define public_10007715 _public_10007715
#define public_10007727 _public_10007727
#define public_10007733 _public_10007733
#define public_100077b7 _public_100077b7
#define public_100077d1 _public_100077d1
#define public_10007850 _public_10007850
#define public_1000785b _public_1000785b
#define public_10007861 _public_10007861
#define public_10007871 _public_10007871
#define public_10007901 _public_10007901

PROC_DECLARE(0x10007510, internal_10007510, public_10007510);
extern "C" NAKED register_t __cdecl internal_10007510()
{
    __asm
    {
        mov edx, dword ptr ds : [eax+0x1698]
        sub esp, 0xC
        push ebx
        mov ebx, dword ptr ss : [esp+0x14]
        push ebp
        push esi
        xor ecx, ecx
        test edx, edx
        push edi
        je public_10007871
        jmp public_10007530
        lea ecx, ds:[ecx]
        public_10007530 : nop
        mov edx, dword ptr ds : [eax+0x169C]
        movzx ebp, word ptr ds : [edx+ecx*2]
        mov edx, dword ptr ds : [eax+0x1690]
        movzx esi, byte ptr ds : [ecx+edx]
        inc ecx
        test ebp, ebp
        mov dword ptr ss : [esp+0x18], ecx
        mov ecx, dword ptr ds : [eax+0x16B4]
        jne public_100075db
        movzx edi, word ptr ds : [ebx+esi*4+2]
        mov edx, 0x10
        sub edx, edi
        cmp ecx, edx
        jle public_100075c6
        movzx esi, word ptr ds : [ebx+esi*4]
        mov edx, esi
        shl edx, cl
        mov ecx, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x10], ebx
        or word ptr ds : [eax+0x16B0], dx
        mov edx, dword ptr ds : [eax+0x14]
        mov bl, byte ptr ds : [eax+0x16B0]
        mov byte ptr ds : [ecx+edx], bl
        mov edx, dword ptr ds : [eax+0x14]
        mov bl, byte ptr ds : [eax+0x16B1]
        inc edx
        mov dword ptr ds : [eax+0x14], edx
        mov ecx, edx
        mov edx, dword ptr ds : [eax+8]
        mov byte ptr ds : [ecx+edx], bl
        mov ecx, dword ptr ds : [eax+0x14]
        mov edx, dword ptr ds : [eax+0x16B4]
        mov ebx, dword ptr ss : [esp+0x10]
        inc ecx
        mov dword ptr ds : [eax+0x14], ecx
        mov cl, 0x10
        sub cl, dl
        shr si, cl
        lea ecx, ds:[edx+edi-0x10]
        mov word ptr ds : [eax+0x16B0], si
        jmp public_1000785b
        public_100075c6 : nop
        mov dx, word ptr ds : [ebx+esi*4]
        shl dx, cl
        or word ptr ds : [eax+0x16B0], dx
        add ecx, edi
        jmp public_1000785b
        public_100075db : nop
        movzx edx, byte ptr ds : [esi+public_1000be28]
        movzx edi, word ptr ds : [ebx+edx*4+0x406]
        mov ebx, 0x10
        sub ebx, edi
        cmp ecx, ebx
        mov dword ptr ss : [esp+0x10], edi
        mov edi, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x14], edx
        jle public_10007667
        movzx edi, word ptr ds : [edi+edx*4+0x404]
        mov edx, edi
        shl edx, cl
        mov ecx, dword ptr ds : [eax+8]
        or word ptr ds : [eax+0x16B0], dx
        mov edx, dword ptr ds : [eax+0x14]
        mov bl, byte ptr ds : [eax+0x16B0]
        mov byte ptr ds : [ecx+edx], bl
        mov edx, dword ptr ds : [eax+0x14]
        mov bl, byte ptr ds : [eax+0x16B1]
        inc edx
        mov dword ptr ds : [eax+0x14], edx
        mov ecx, edx
        mov edx, dword ptr ds : [eax+8]
        mov byte ptr ds : [ecx+edx], bl
        mov ecx, dword ptr ds : [eax+0x14]
        mov edx, dword ptr ds : [eax+0x16B4]
        inc ecx
        mov dword ptr ds : [eax+0x14], ecx
        mov cl, 0x10
        sub cl, dl
        shr di, cl
        mov ecx, dword ptr ss : [esp+0x10]
        lea edx, ds:[edx+ecx-0x10]
        mov dword ptr ds : [eax+0x16B4], edx
        mov edx, dword ptr ss : [esp+0x14]
        mov word ptr ds : [eax+0x16B0], di
        jmp public_10007685
        public_10007667 : nop
        mov di, word ptr ds : [edi+edx*4+0x404]
        shl di, cl
        or word ptr ds : [eax+0x16B0], di
        mov edi, dword ptr ss : [esp+0x10]
        add ecx, edi
        mov dword ptr ds : [eax+0x16B4], ecx
        public_10007685 : nop
        mov edi, dword ptr ds : [edx*4+public_1000b5e0]
        test edi, edi
        mov ebx, dword ptr ss : [esp+0x20]
        je public_10007715
        sub esi, dword ptr ds : [edx*4+public_1000bf28]
        mov ecx, dword ptr ds : [eax+0x16B4]
        mov edx, 0x10
        sub edx, edi
        cmp ecx, edx
        jle public_10007704
        mov edx, esi
        shl edx, cl
        mov ecx, dword ptr ds : [eax+8]
        or word ptr ds : [eax+0x16B0], dx
        mov edx, dword ptr ds : [eax+0x14]
        mov bl, byte ptr ds : [eax+0x16B0]
        mov byte ptr ds : [ecx+edx], bl
        mov edx, dword ptr ds : [eax+0x14]
        mov bl, byte ptr ds : [eax+0x16B1]
        inc edx
        mov dword ptr ds : [eax+0x14], edx
        mov ecx, edx
        mov edx, dword ptr ds : [eax+8]
        mov byte ptr ds : [ecx+edx], bl
        mov ecx, dword ptr ds : [eax+0x14]
        mov edx, dword ptr ds : [eax+0x16B4]
        mov ebx, dword ptr ss : [esp+0x20]
        inc ecx
        mov dword ptr ds : [eax+0x14], ecx
        mov cl, 0x10
        sub cl, dl
        shr si, cl
        lea ecx, ds:[edx+edi-0x10]
        mov word ptr ds : [eax+0x16B0], si
        jmp public_1000770f
        public_10007704 : nop
        shl esi, cl
        or word ptr ds : [eax+0x16B0], si
        add ecx, edi
        public_1000770f : nop
        mov dword ptr ds : [eax+0x16B4], ecx
        public_10007715 : nop
        dec ebp
        cmp ebp, 0x100
        jae public_10007727
        movzx edi, byte ptr ss : [ebp+public_1000bc28]
        jmp public_10007733
        public_10007727 : nop
        mov edx, ebp
        shr edx, 7
        movzx edi, byte ptr ds : [edx+public_1000bd28]
        public_10007733 : nop
        mov ecx, dword ptr ss : [esp+0x24]
        movzx edx, word ptr ds : [ecx+edi*4+2]
        mov ecx, dword ptr ds : [eax+0x16B4]
        mov esi, 0x10
        sub esi, edx
        cmp ecx, esi
        mov dword ptr ss : [esp+0x14], edx
        jle public_100077b7
        mov edx, dword ptr ss : [esp+0x24]
        movzx esi, word ptr ds : [edx+edi*4]
        mov edx, esi
        shl edx, cl
        mov ecx, dword ptr ds : [eax+8]
        or word ptr ds : [eax+0x16B0], dx
        mov edx, dword ptr ds : [eax+0x14]
        mov bl, byte ptr ds : [eax+0x16B0]
        mov byte ptr ds : [ecx+edx], bl
        mov edx, dword ptr ds : [eax+0x14]
        mov bl, byte ptr ds : [eax+0x16B1]
        inc edx
        mov dword ptr ds : [eax+0x14], edx
        mov ecx, edx
        mov edx, dword ptr ds : [eax+8]
        mov byte ptr ds : [ecx+edx], bl
        mov ecx, dword ptr ds : [eax+0x14]
        mov edx, dword ptr ds : [eax+0x16B4]
        mov ebx, dword ptr ss : [esp+0x20]
        inc ecx
        mov dword ptr ds : [eax+0x14], ecx
        mov cl, 0x10
        sub cl, dl
        shr si, cl
        mov ecx, dword ptr ss : [esp+0x14]
        lea edx, ds:[edx+ecx-0x10]
        mov dword ptr ds : [eax+0x16B4], edx
        mov word ptr ds : [eax+0x16B0], si
        jmp public_100077d1
        public_100077b7 : nop
        mov esi, dword ptr ss : [esp+0x24]
        mov si, word ptr ds : [esi+edi*4]
        shl si, cl
        or word ptr ds : [eax+0x16B0], si
        add ecx, edx
        mov dword ptr ds : [eax+0x16B4], ecx
        public_100077d1 : nop
        mov esi, dword ptr ds : [edi*4+public_1000b658]
        test esi, esi
        je public_10007861
        sub ebp, dword ptr ds : [edi*4+public_1000bfa0]
        mov ecx, dword ptr ds : [eax+0x16B4]
        mov edx, 0x10
        sub edx, esi
        cmp ecx, edx
        jle public_10007850
        mov edx, ebp
        shl edx, cl
        mov ecx, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x14], ebx
        or word ptr ds : [eax+0x16B0], dx
        mov edx, dword ptr ds : [eax+0x14]
        mov bl, byte ptr ds : [eax+0x16B0]
        mov byte ptr ds : [ecx+edx], bl
        mov edx, dword ptr ds : [eax+0x14]
        mov bl, byte ptr ds : [eax+0x16B1]
        inc edx
        mov dword ptr ds : [eax+0x14], edx
        mov ecx, edx
        mov edx, dword ptr ds : [eax+8]
        mov byte ptr ds : [ecx+edx], bl
        mov ecx, dword ptr ds : [eax+0x14]
        mov edx, dword ptr ds : [eax+0x16B4]
        mov ebx, dword ptr ss : [esp+0x14]
        inc ecx
        mov dword ptr ds : [eax+0x14], ecx
        mov cl, 0x10
        sub cl, dl
        shr bp, cl
        lea ecx, ds:[edx+esi-0x10]
        mov word ptr ds : [eax+0x16B0], bp
        jmp public_1000785b
        public_10007850 : nop
        shl ebp, cl
        or word ptr ds : [eax+0x16B0], bp
        add ecx, esi
        public_1000785b : nop
        mov dword ptr ds : [eax+0x16B4], ecx
        public_10007861 : nop
        mov ecx, dword ptr ss : [esp+0x18]
        cmp ecx, dword ptr ds : [eax+0x1698]
        jb public_10007530
        public_10007871 : nop
        movzx edi, word ptr ds : [ebx+0x402]
        mov ecx, dword ptr ds : [eax+0x16B4]
        mov edx, 0x10
        sub edx, edi
        cmp ecx, edx
        jle public_10007901
        movzx esi, word ptr ds : [ebx+0x400]
        mov edx, esi
        shl edx, cl
        mov ecx, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x20], ebx
        or word ptr ds : [eax+0x16B0], dx
        mov edx, dword ptr ds : [eax+0x14]
        mov bl, byte ptr ds : [eax+0x16B0]
        mov byte ptr ds : [ecx+edx], bl
        mov edx, dword ptr ds : [eax+0x14]
        mov ecx, dword ptr ds : [eax+8]
        mov ebx, dword ptr ss : [esp+0x20]
        inc edx
        mov dword ptr ds : [eax+0x14], edx
        mov ebp, edx
        mov dl, byte ptr ds : [eax+0x16B1]
        mov byte ptr ds : [ecx+ebp], dl
        mov ecx, dword ptr ds : [eax+0x14]
        mov edx, dword ptr ds : [eax+0x16B4]
        inc ecx
        mov dword ptr ds : [eax+0x14], ecx
        mov cl, 0x10
        sub cl, dl
        shr si, cl
        lea ecx, ds:[edx+edi-0x10]
        pop edi
        mov dword ptr ds : [eax+0x16B4], ecx
        mov word ptr ds : [eax+0x16B0], si
        movzx edx, word ptr ds : [ebx+0x402]
        pop esi
        pop ebp
        mov dword ptr ds : [eax+0x16AC], edx
        pop ebx
        add esp, 0xC
        ret 
        public_10007901 : nop
        mov dx, word ptr ds : [ebx+0x400]
        shl dx, cl
        or word ptr ds : [eax+0x16B0], dx
        add ecx, edi
        pop edi
        mov dword ptr ds : [eax+0x16B4], ecx
        movzx ecx, word ptr ds : [ebx+0x402]
        pop esi
        pop ebp
        mov dword ptr ds : [eax+0x16AC], ecx
        pop ebx
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x10007510)
    }
}

#undef public_10007530
#undef public_100075c6
#undef public_100075db
#undef public_10007667
#undef public_10007685
#undef public_10007704
#undef public_1000770f
#undef public_10007715
#undef public_10007727
#undef public_10007733
#undef public_100077b7
#undef public_100077d1
#undef public_10007850
#undef public_1000785b
#undef public_10007861
#undef public_10007871
#undef public_10007901
