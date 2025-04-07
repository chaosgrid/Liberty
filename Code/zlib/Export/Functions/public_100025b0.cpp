#include "zlib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_10001cf0);
CLANG_FORWARD_PROC_SYMBOL(public_10002350);
CLANG_FORWARD_PROC_SYMBOL(public_10003180);
CLANG_FORWARD_PROC_SYMBOL(public_10008140);

#define public_100025c0 _public_100025c0
#define public_100025e5 _public_100025e5
#define public_100025ed _public_100025ed
#define public_10002630 _public_10002630
#define public_1000265b _public_1000265b
#define public_100026d0 _public_100026d0
#define public_100026dd _public_100026dd
#define public_10002716 _public_10002716
#define public_10002760 _public_10002760
#define public_1000278d _public_1000278d
#define public_100027f3 _public_100027f3
#define public_100027f6 _public_100027f6
#define public_1000280c _public_1000280c
#define public_1000280e _public_1000280e
#define public_1000283a _public_1000283a
#define public_10002840 _public_10002840
#define public_1000284e _public_1000284e
#define public_10002850 _public_10002850
#define public_10002898 _public_10002898

PROC_DECLARE(0x100025b0, internal_100025b0, public_100025b0);
extern "C" NAKED register_t __cdecl internal_100025b0()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        push esi
        push edi
        xor edi, edi
        lea esp, ss:[esp]
        public_100025c0 : nop
        mov eax, dword ptr ds : [ebx+0x6C]
        cmp eax, 0x106
        jae public_100025ed
        call public_10002350
        mov eax, dword ptr ds : [ebx+0x6C]
        cmp eax, 0x106
        jae public_100025e5
        mov ecx, dword ptr ss : [esp+0x14]
        test ecx, ecx
        je public_1000283a
        public_100025e5 : nop
        test eax, eax
        je public_10002840
        public_100025ed : nop
        cmp eax, 3
        jb public_10002630
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
        movzx edi, word ptr ds : [ecx+eax*2]
        mov eax, dword ptr ds : [ebx+0x2C]
        mov ecx, dword ptr ds : [ebx+0x38]
        and eax, edx
        mov word ptr ds : [ecx+eax*2], di
        mov edx, dword ptr ds : [ebx+0x40]
        mov eax, dword ptr ds : [ebx+0x3C]
        mov cx, word ptr ds : [ebx+0x64]
        mov word ptr ds : [eax+edx*2], cx
        public_10002630 : nop
        test edi, edi
        je public_1000265b
        mov edx, dword ptr ds : [ebx+0x64]
        mov eax, dword ptr ds : [ebx+0x24]
        sub edx, edi
        sub eax, 0x106
        cmp edx, eax
        ja public_1000265b
        cmp dword ptr ds : [ebx+0x80], 2
        je public_1000265b
        push edi
        push ebx
        call public_10003180
        add esp, 8
        mov dword ptr ds : [ebx+0x58], eax
        public_1000265b : nop
        mov eax, dword ptr ds : [ebx+0x58]
        cmp eax, 3
        jb public_1000278d
        mov edx, dword ptr ds : [ebx+0x1698]
        mov esi, dword ptr ds : [ebx+0x169C]
        mov cl, al
        mov ax, word ptr ds : [ebx+0x64]
        sub ax, word ptr ds : [ebx+0x68]
        sub cl, 3
        mov word ptr ds : [esi+edx*2], ax
        mov edx, dword ptr ds : [ebx+0x1690]
        mov esi, dword ptr ds : [ebx+0x1698]
        mov byte ptr ds : [edx+esi], cl
        mov edx, dword ptr ds : [ebx+0x1698]
        inc edx
        movzx ecx, cl
        mov dword ptr ds : [ebx+0x1698], edx
        movzx edx, byte ptr ds : [ecx+public_1000be28]
        add eax, 0xFFFF
        inc word ptr ds : [ebx+edx*4+0x490]
        cmp ax, 0x100
        lea ecx, ds:[ebx+edx*4+0x490]
        jae public_100026d0
        movzx eax, ax
        movzx eax, byte ptr ds : [eax+public_1000bc28]
        jmp public_100026dd
        public_100026d0 : nop
        movzx ecx, ax
        shr ecx, 7
        movzx eax, byte ptr ds : [ecx+public_1000bd28]
        public_100026dd : nop
        inc word ptr ds : [ebx+eax*4+0x980]
        mov edx, dword ptr ds : [ebx+0x1694]
        mov esi, dword ptr ds : [ebx+0x1698]
        mov ecx, dword ptr ds : [ebx+0x6C]
        xor eax, eax
        dec edx
        cmp esi, edx
        mov edx, dword ptr ds : [ebx+0x78]
        sete al
        mov esi, eax
        mov eax, dword ptr ds : [ebx+0x58]
        sub ecx, eax
        cmp eax, edx
        mov dword ptr ds : [ebx+0x6C], ecx
        ja public_10002760
        cmp ecx, 3
        jb public_10002760
        dec eax
        mov dword ptr ds : [ebx+0x58], eax
        public_10002716 : nop
        mov edx, dword ptr ds : [ebx+0x64]
        mov ecx, dword ptr ds : [ebx+0x30]
        mov edi, dword ptr ds : [ebx+0x40]
        inc edx
        mov dword ptr ds : [ebx+0x64], edx
        movzx eax, byte ptr ds : [edx+ecx+2]
        mov ecx, dword ptr ds : [ebx+0x50]
        shl edi, cl
        mov ecx, dword ptr ds : [ebx+0x3C]
        xor eax, edi
        and eax, dword ptr ds : [ebx+0x4C]
        mov dword ptr ds : [ebx+0x40], eax
        movzx edi, word ptr ds : [ecx+eax*2]
        mov ecx, dword ptr ds : [ebx+0x2C]
        mov eax, dword ptr ds : [ebx+0x38]
        and edx, ecx
        mov word ptr ds : [eax+edx*2], di
        mov ax, word ptr ds : [ebx+0x64]
        mov ecx, dword ptr ds : [ebx+0x40]
        mov edx, dword ptr ds : [ebx+0x3C]
        mov word ptr ds : [edx+ecx*2], ax
        dec dword ptr ds : [ebx+0x58]
        jne public_10002716
        jmp public_100027f3
        public_10002760 : nop
        mov ecx, dword ptr ds : [ebx+0x64]
        mov edx, dword ptr ds : [ebx+0x30]
        add ecx, eax
        add edx, ecx
        mov dword ptr ds : [ebx+0x64], ecx
        mov ecx, dword ptr ds : [ebx+0x50]
        mov dword ptr ds : [ebx+0x58], 0
        movzx eax, byte ptr ds : [edx]
        mov dword ptr ds : [ebx+0x40], eax
        shl eax, cl
        movzx ecx, byte ptr ds : [edx+1]
        xor eax, ecx
        and eax, dword ptr ds : [ebx+0x4C]
        mov dword ptr ds : [ebx+0x40], eax
        jmp public_100027f6
        public_1000278d : nop
        mov edx, dword ptr ds : [ebx+0x64]
        mov eax, dword ptr ds : [ebx+0x30]
        mov al, byte ptr ds : [edx+eax]
        mov ecx, dword ptr ds : [ebx+0x1698]
        mov edx, dword ptr ds : [ebx+0x169C]
        mov word ptr ds : [edx+ecx*2], 0
        mov edx, dword ptr ds : [ebx+0x1698]
        mov ecx, dword ptr ds : [ebx+0x1690]
        mov byte ptr ds : [ecx+edx], al
        mov edx, dword ptr ds : [ebx+0x1698]
        inc edx
        movzx eax, al
        mov dword ptr ds : [ebx+0x1698], edx
        inc word ptr ds : [ebx+eax*4+0x8C]
        mov ecx, dword ptr ds : [ebx+0x1694]
        mov esi, dword ptr ds : [ebx+0x1698]
        lea eax, ds:[ebx+eax*4+0x8C]
        dec ecx
        xor edx, edx
        cmp esi, ecx
        mov ecx, dword ptr ds : [ebx+0x6C]
        sete dl
        dec ecx
        mov dword ptr ds : [ebx+0x6C], ecx
        mov esi, edx
        public_100027f3 : nop
        inc dword ptr ds : [ebx+0x64]
        public_100027f6 : nop
        test esi, esi
        je public_100025c0
        mov ecx, dword ptr ds : [ebx+0x54]
        test ecx, ecx
        jl public_1000280c
        mov eax, dword ptr ds : [ebx+0x30]
        add eax, ecx
        jmp public_1000280e
        public_1000280c : nop
        xor eax, eax
        public_1000280e : nop
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
        mov ecx, dword ptr ds : [ebx]
        mov eax, dword ptr ds : [ecx+0x10]
        test eax, eax
        jne public_100025c0
        public_1000283a : nop
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        ret 
        public_10002840 : nop
        mov esi, dword ptr ds : [ebx+0x54]
        test esi, esi
        jl public_1000284e
        mov eax, dword ptr ds : [ebx+0x30]
        add eax, esi
        jmp public_10002850
        public_1000284e : nop
        xor eax, eax
        public_10002850 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        xor edx, edx
        mov edi, 4
        cmp ecx, edi
        mov ecx, dword ptr ds : [ebx+0x64]
        sete dl
        sub ecx, esi
        push edx
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
        xor eax, eax
        test ecx, ecx
        jne public_10002898
        cmp dword ptr ss : [esp+0x14], edi
        setne al
        pop edi
        pop esi
        pop ebx
        dec eax
        and eax, 2
        ret 
        public_10002898 : nop
        cmp dword ptr ss : [esp+0x14], edi
        sete al
        pop edi
        pop esi
        pop ebx
        lea eax, ds:[eax+eax+1]
        ret 
        UNREACHABLE_TRAP(0x100025b0)
    }
}

#undef public_100025c0
#undef public_100025e5
#undef public_100025ed
#undef public_10002630
#undef public_1000265b
#undef public_100026d0
#undef public_100026dd
#undef public_10002716
#undef public_10002760
#undef public_1000278d
#undef public_100027f3
#undef public_100027f6
#undef public_1000280c
#undef public_1000280e
#undef public_1000283a
#undef public_10002840
#undef public_1000284e
#undef public_10002850
#undef public_10002898
