#include "zlib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_10001cf0);
CLANG_FORWARD_PROC_SYMBOL(public_10002350);
CLANG_FORWARD_PROC_SYMBOL(public_10003180);
CLANG_FORWARD_PROC_SYMBOL(public_10008140);

#define public_100028c0 _public_100028c0
#define public_100028e5 _public_100028e5
#define public_100028ed _public_100028ed
#define public_10002930 _public_10002930
#define public_10002977 _public_10002977
#define public_1000299b _public_1000299b
#define public_1000299e _public_1000299e
#define public_10002a29 _public_10002a29
#define public_10002a36 _public_10002a36
#define public_10002a70 _public_10002a70
#define public_10002ab8 _public_10002ab8
#define public_10002ae8 _public_10002ae8
#define public_10002aea _public_10002aea
#define public_10002b0d _public_10002b0d
#define public_10002b13 _public_10002b13
#define public_10002b1a _public_10002b1a
#define public_10002b89 _public_10002b89
#define public_10002b8b _public_10002b8b
#define public_10002baa _public_10002baa
#define public_10002bc4 _public_10002bc4
#define public_10002bde _public_10002bde
#define public_10002c31 _public_10002c31
#define public_10002c3f _public_10002c3f
#define public_10002c41 _public_10002c41
#define public_10002c81 _public_10002c81

PROC_DECLARE(0x100028b0, internal_100028b0, public_100028b0);
extern "C" NAKED register_t __cdecl internal_100028b0()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        push ebp
        push esi
        push edi
        xor ebp, ebp
        lea ebx, ds:[ebx]
        public_100028c0 : nop
        mov eax, dword ptr ds : [ebx+0x6C]
        cmp eax, 0x106
        jae public_100028ed
        call public_10002350
        mov eax, dword ptr ds : [ebx+0x6C]
        cmp eax, 0x106
        mov edi, dword ptr ss : [esp+0x18]
        jae public_100028e5
        test edi, edi
        je public_10002b13
        public_100028e5 : nop
        test eax, eax
        je public_10002bde
        public_100028ed : nop
        cmp eax, 3
        jb public_10002930
        mov eax, dword ptr ds : [ebx+0x40]
        mov ecx, dword ptr ds : [ebx+0x50]
        mov edx, dword ptr ds : [ebx+0x64]
        mov esi, dword ptr ds : [ebx+0x4C]
        shl eax, cl
        mov ecx, dword ptr ds : [ebx+0x30]
        movzx ecx, byte ptr ds : [ecx+edx+2]
        xor eax, ecx
        mov ecx, dword ptr ds : [ebx+0x3C]
        and eax, esi
        mov dword ptr ds : [ebx+0x40], eax
        movzx ebp, word ptr ds : [ecx+eax*2]
        mov eax, dword ptr ds : [ebx+0x2C]
        mov ecx, dword ptr ds : [ebx+0x38]
        and eax, edx
        mov word ptr ds : [ecx+eax*2], bp
        mov edx, dword ptr ds : [ebx+0x40]
        mov eax, dword ptr ds : [ebx+0x3C]
        mov cx, word ptr ds : [ebx+0x64]
        mov word ptr ds : [eax+edx*2], cx
        public_10002930 : nop
        test ebp, ebp
        mov edx, dword ptr ds : [ebx+0x58]
        mov eax, dword ptr ds : [ebx+0x68]
        mov esi, 2
        mov dword ptr ds : [ebx+0x70], edx
        mov dword ptr ds : [ebx+0x5C], eax
        mov dword ptr ds : [ebx+0x58], esi
        je public_1000299e
        mov eax, dword ptr ds : [ebx+0x78]
        mov ecx, edx
        cmp ecx, eax
        jae public_1000299e
        mov edx, dword ptr ds : [ebx+0x64]
        mov eax, dword ptr ds : [ebx+0x24]
        sub edx, ebp
        sub eax, 0x106
        cmp edx, eax
        ja public_1000299e
        cmp dword ptr ds : [ebx+0x80], esi
        je public_10002977
        push ebp
        push ebx
        call public_10003180
        add esp, 8
        mov dword ptr ds : [ebx+0x58], eax
        public_10002977 : nop
        mov eax, dword ptr ds : [ebx+0x58]
        cmp eax, 5
        ja public_1000299e
        cmp dword ptr ds : [ebx+0x80], 1
        je public_1000299b
        cmp eax, 3
        jne public_1000299e
        mov ecx, dword ptr ds : [ebx+0x64]
        sub ecx, dword ptr ds : [ebx+0x68]
        cmp ecx, 0x1000
        jbe public_1000299e
        public_1000299b : nop
        mov dword ptr ds : [ebx+0x58], esi
        public_1000299e : nop
        mov eax, dword ptr ds : [ebx+0x70]
        cmp eax, 3
        jb public_10002b1a
        cmp dword ptr ds : [ebx+0x58], eax
        ja public_10002b1a
        mov edx, dword ptr ds : [ebx+0x64]
        mov eax, dword ptr ds : [ebx+0x6C]
        mov cl, byte ptr ds : [ebx+0x70]
        mov edi, dword ptr ds : [ebx+0x169C]
        lea esi, ds:[edx+eax-3]
        xor eax, eax
        mov ax, dx
        sub ax, word ptr ds : [ebx+0x5C]
        mov edx, dword ptr ds : [ebx+0x1698]
        sub cl, 3
        dec eax
        mov word ptr ds : [edi+edx*2], ax
        mov edx, dword ptr ds : [ebx+0x1690]
        mov edi, dword ptr ds : [ebx+0x1698]
        mov byte ptr ds : [edx+edi], cl
        mov edx, dword ptr ds : [ebx+0x1698]
        inc edx
        movzx ecx, cl
        mov dword ptr ds : [ebx+0x1698], edx
        movzx edx, byte ptr ds : [ecx+public_1000be28]
        add eax, 0xFFFF
        inc word ptr ds : [ebx+edx*4+0x490]
        cmp ax, 0x100
        lea ecx, ds:[ebx+edx*4+0x490]
        jae public_10002a29
        movzx eax, ax
        movzx eax, byte ptr ds : [eax+public_1000bc28]
        jmp public_10002a36
        public_10002a29 : nop
        movzx ecx, ax
        shr ecx, 7
        movzx eax, byte ptr ds : [ecx+public_1000bd28]
        public_10002a36 : nop
        inc word ptr ds : [ebx+eax*4+0x980]
        mov edx, dword ptr ds : [ebx+0x1694]
        mov edi, dword ptr ds : [ebx+0x1698]
        dec edx
        xor eax, eax
        cmp edi, edx
        mov edx, dword ptr ds : [ebx+0x6C]
        sete al
        mov ecx, 1
        mov edi, eax
        mov eax, dword ptr ds : [ebx+0x70]
        sub ecx, eax
        add edx, ecx
        add eax, 0xFFFFFFFE
        mov dword ptr ds : [ebx+0x6C], edx
        mov dword ptr ds : [ebx+0x70], eax
        lea esp, ss:[esp]
        public_10002a70 : nop
        mov ecx, dword ptr ds : [ebx+0x64]
        inc ecx
        mov edx, ecx
        cmp edx, esi
        mov dword ptr ds : [ebx+0x64], ecx
        ja public_10002ab8
        mov eax, dword ptr ds : [ebx+0x40]
        mov ecx, dword ptr ds : [ebx+0x50]
        mov ebp, dword ptr ds : [ebx+0x4C]
        shl eax, cl
        mov ecx, dword ptr ds : [ebx+0x30]
        movzx ecx, byte ptr ds : [ecx+edx+2]
        xor eax, ecx
        mov ecx, dword ptr ds : [ebx+0x3C]
        and eax, ebp
        mov dword ptr ds : [ebx+0x40], eax
        movzx ebp, word ptr ds : [ecx+eax*2]
        mov eax, dword ptr ds : [ebx+0x2C]
        mov ecx, dword ptr ds : [ebx+0x38]
        and eax, edx
        mov word ptr ds : [ecx+eax*2], bp
        mov edx, dword ptr ds : [ebx+0x40]
        mov eax, dword ptr ds : [ebx+0x3C]
        mov cx, word ptr ds : [ebx+0x64]
        mov word ptr ds : [eax+edx*2], cx
        public_10002ab8 : nop
        dec dword ptr ds : [ebx+0x70]
        jne public_10002a70
        mov ecx, dword ptr ds : [ebx+0x64]
        inc ecx
        test edi, edi
        mov dword ptr ds : [ebx+0x60], 0
        mov dword ptr ds : [ebx+0x58], 2
        mov dword ptr ds : [ebx+0x64], ecx
        je public_100028c0
        mov edx, dword ptr ds : [ebx+0x54]
        test edx, edx
        jl public_10002ae8
        mov eax, dword ptr ds : [ebx+0x30]
        add eax, edx
        jmp public_10002aea
        public_10002ae8 : nop
        xor eax, eax
        public_10002aea : nop
        push 0
        sub ecx, edx
        push ecx
        push eax
        push ebx
        call public_10008140
        mov edx, dword ptr ds : [ebx+0x64]
        mov eax, dword ptr ds : [ebx]
        add esp, 0x10
        mov dword ptr ds : [ebx+0x54], edx
        call public_10001cf0
        mov eax, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [eax+0x10]
        test ecx, ecx
        public_10002b0d : nop
        jne public_100028c0
        public_10002b13 : nop
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 
        public_10002b1a : nop
        mov eax, dword ptr ds : [ebx+0x60]
        test eax, eax
        je public_10002bc4
        mov ecx, dword ptr ds : [ebx+0x64]
        mov edx, dword ptr ds : [ebx+0x30]
        mov al, byte ptr ds : [ecx+edx-1]
        mov ecx, dword ptr ds : [ebx+0x1698]
        mov edx, dword ptr ds : [ebx+0x169C]
        mov word ptr ds : [edx+ecx*2], 0
        mov ecx, dword ptr ds : [ebx+0x1690]
        mov edx, dword ptr ds : [ebx+0x1698]
        mov byte ptr ds : [ecx+edx], al
        mov edi, dword ptr ds : [ebx+0x1698]
        movzx eax, al
        inc edi
        lea eax, ds:[ebx+eax*4+0x8C]
        mov dword ptr ds : [ebx+0x1698], edi
        inc word ptr ds : [eax]
        mov ecx, dword ptr ds : [ebx+0x1694]
        mov eax, dword ptr ds : [ebx+0x1698]
        dec ecx
        cmp eax, ecx
        jne public_10002baa
        mov ecx, dword ptr ds : [ebx+0x54]
        test ecx, ecx
        jl public_10002b89
        mov eax, dword ptr ds : [ebx+0x30]
        add eax, ecx
        jmp public_10002b8b
        public_10002b89 : nop
        xor eax, eax
        public_10002b8b : nop
        mov edx, dword ptr ds : [ebx+0x64]
        push 0
        sub edx, ecx
        push edx
        push eax
        push ebx
        call public_10008140
        mov eax, dword ptr ds : [ebx+0x64]
        mov dword ptr ds : [ebx+0x54], eax
        mov eax, dword ptr ds : [ebx]
        add esp, 0x10
        call public_10001cf0
        public_10002baa : nop
        mov edx, dword ptr ds : [ebx+0x64]
        mov ecx, dword ptr ds : [ebx+0x6C]
        inc edx
        dec ecx
        mov dword ptr ds : [ebx+0x6C], ecx
        mov ecx, dword ptr ds : [ebx]
        mov dword ptr ds : [ebx+0x64], edx
        mov eax, dword ptr ds : [ecx+0x10]
        test eax, eax
        jmp public_10002b0d
        public_10002bc4 : nop
        mov ecx, dword ptr ds : [ebx+0x64]
        mov eax, dword ptr ds : [ebx+0x6C]
        inc ecx
        dec eax
        mov dword ptr ds : [ebx+0x60], 1
        mov dword ptr ds : [ebx+0x64], ecx
        mov dword ptr ds : [ebx+0x6C], eax
        jmp public_100028c0
        public_10002bde : nop
        mov eax, dword ptr ds : [ebx+0x60]
        test eax, eax
        je public_10002c31
        mov edx, dword ptr ds : [ebx+0x64]
        mov eax, dword ptr ds : [ebx+0x30]
        mov al, byte ptr ds : [edx+eax-1]
        mov ecx, dword ptr ds : [ebx+0x1698]
        mov edx, dword ptr ds : [ebx+0x169C]
        mov word ptr ds : [edx+ecx*2], 0
        mov edx, dword ptr ds : [ebx+0x1698]
        mov ecx, dword ptr ds : [ebx+0x1690]
        mov byte ptr ds : [ecx+edx], al
        mov edx, dword ptr ds : [ebx+0x1698]
        movzx eax, al
        inc edx
        lea eax, ds:[ebx+eax*4+0x8C]
        mov dword ptr ds : [ebx+0x1698], edx
        inc word ptr ds : [eax]
        mov dword ptr ds : [ebx+0x60], 0
        public_10002c31 : nop
        mov esi, dword ptr ds : [ebx+0x54]
        test esi, esi
        jl public_10002c3f
        mov eax, dword ptr ds : [ebx+0x30]
        add eax, esi
        jmp public_10002c41
        public_10002c3f : nop
        xor eax, eax
        public_10002c41 : nop
        mov edx, dword ptr ds : [ebx+0x64]
        xor ecx, ecx
        cmp edi, 4
        sete cl
        sub edx, esi
        push ecx
        push edx
        push eax
        push ebx
        call public_10008140
        mov eax, dword ptr ds : [ebx+0x64]
        mov dword ptr ds : [ebx+0x54], eax
        mov eax, dword ptr ds : [ebx]
        add esp, 0x10
        call public_10001cf0
        mov ecx, dword ptr ds : [ebx]
        mov eax, dword ptr ds : [ecx+0x10]
        test eax, eax
        jne public_10002c81
        xor eax, eax
        cmp edi, 4
        setne al
        pop edi
        pop esi
        pop ebp
        pop ebx
        dec eax
        and eax, 2
        ret 
        public_10002c81 : nop
        xor eax, eax
        cmp edi, 4
        sete al
        pop edi
        pop esi
        pop ebp
        pop ebx
        lea eax, ds:[eax+eax+1]
        ret 
        UNREACHABLE_TRAP(0x100028b0)
    }
}

#undef public_100028c0
#undef public_100028e5
#undef public_100028ed
#undef public_10002930
#undef public_10002977
#undef public_1000299b
#undef public_1000299e
#undef public_10002a29
#undef public_10002a36
#undef public_10002a70
#undef public_10002ab8
#undef public_10002ae8
#undef public_10002aea
#undef public_10002b0d
#undef public_10002b13
#undef public_10002b1a
#undef public_10002b89
#undef public_10002b8b
#undef public_10002baa
#undef public_10002bc4
#undef public_10002bde
#undef public_10002c31
#undef public_10002c3f
#undef public_10002c41
#undef public_10002c81
