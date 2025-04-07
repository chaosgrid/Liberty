#include "zlib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_10005f90);

#define public_10006000 _public_10006000
#define public_10006021 _public_10006021
#define public_1000602e _public_1000602e
#define public_10006040 _public_10006040
#define public_10006068 _public_10006068
#define public_1000606b _public_1000606b
#define public_10006070 _public_10006070
#define public_10006075 _public_10006075
#define public_10006078 _public_10006078
#define public_10006086 _public_10006086
#define public_10006090 _public_10006090
#define public_10006099 _public_10006099
#define public_100060a7 _public_100060a7
#define public_100060b4 _public_100060b4
#define public_100060c5 _public_100060c5
#define public_100060f4 _public_100060f4
#define public_10006105 _public_10006105
#define public_10006110 _public_10006110
#define public_1000613c _public_1000613c
#define public_100061b0 _public_100061b0
#define public_100061c2 _public_100061c2
#define public_100061e4 _public_100061e4
#define public_100061f0 _public_100061f0
#define public_10006217 _public_10006217
#define public_10006243 _public_10006243
#define public_10006256 _public_10006256
#define public_100062e2 _public_100062e2
#define public_100062eb _public_100062eb
#define public_100062fd _public_100062fd
#define public_10006329 _public_10006329
#define public_1000634a _public_1000634a
#define public_1000636a _public_1000636a
#define public_10006371 _public_10006371
#define public_10006390 _public_10006390
#define public_100063ac _public_100063ac
#define public_100063c0 _public_100063c0
#define public_100063c8 _public_100063c8
#define public_100063f0 _public_100063f0
#define public_10006410 _public_10006410
#define public_10006424 _public_10006424
#define public_10006445 _public_10006445
#define public_10006468 _public_10006468

PROC_DECLARE(0x10005f90, internal_10005f90, public_10005f90);
extern "C" NAKED register_t __cdecl internal_10005f90()
{
    __asm
    {
        sub esp, 0xFC
        push ebx
        push ebp
        xor ebp, ebp
        push esi
        mov esi, dword ptr ss : [esp+0x10C]
        push edi
        mov ebx, ecx
        mov edi, eax
        mov dword ptr ss : [esp+0x50], ebp
        mov dword ptr ss : [esp+0x54], ebp
        mov dword ptr ss : [esp+0x58], ebp
        mov dword ptr ss : [esp+0x5C], ebp
        mov dword ptr ss : [esp+0x60], ebp
        mov dword ptr ss : [esp+0x64], ebp
        mov dword ptr ss : [esp+0x68], ebp
        mov dword ptr ss : [esp+0x6C], ebp
        mov dword ptr ss : [esp+0x70], ebp
        mov dword ptr ss : [esp+0x74], ebp
        mov dword ptr ss : [esp+0x78], ebp
        mov dword ptr ss : [esp+0x7C], ebp
        mov dword ptr ss : [esp+0x80], ebp
        mov dword ptr ss : [esp+0x84], ebp
        mov dword ptr ss : [esp+0x88], ebp
        mov dword ptr ss : [esp+0x8C], ebp
        mov eax, ebx
        mov edx, esi
        jmp public_10006000
        lea esp, ss:[esp]
        public_10006000 : nop
        mov ecx, dword ptr ds : [eax]
        inc dword ptr ss : [esp+ecx*4+0x50]
        lea ecx, ss:[esp+ecx*4+0x50]
        add eax, 4
        dec edx
        jne public_10006000
        cmp dword ptr ss : [esp+0x50], esi
        jne public_1000602e
        mov eax, dword ptr ss : [esp+0x120]
        mov dword ptr ds : [eax], ebp
        mov dword ptr ds : [edi], ebp
        public_10006021 : nop
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 0xFC
        ret 
        public_1000602e : nop
        mov eax, dword ptr ds : [edi]
        mov dword ptr ss : [esp+0x10], eax
        mov ecx, 1
        lea esp, ss:[esp]
        public_10006040 : nop
        cmp dword ptr ss : [esp+ecx*4+0x50], ebp
        jne public_10006078
        cmp dword ptr ss : [esp+ecx*4+0x54], ebp
        jne public_10006068
        cmp dword ptr ss : [esp+ecx*4+0x58], ebp
        jne public_1000606b
        cmp dword ptr ss : [esp+ecx*4+0x5C], ebp
        jne public_10006070
        cmp dword ptr ss : [esp+ecx*4+0x60], ebp
        jne public_10006075
        add ecx, 5
        cmp ecx, 0xF
        jbe public_10006040
        jmp public_10006078
        public_10006068 : nop
        inc ecx
        jmp public_10006078
        public_1000606b : nop
        add ecx, 2
        jmp public_10006078
        public_10006070 : nop
        add ecx, 3
        jmp public_10006078
        public_10006075 : nop
        add ecx, 4
        public_10006078 : nop
        cmp eax, ecx
        mov dword ptr ss : [esp+0x14], ecx
        jae public_10006086
        mov dword ptr ss : [esp+0x10], ecx
        mov eax, ecx
        public_10006086 : nop
        mov esi, 0xF
        jmp public_10006090
        lea ecx, ds:[ecx]
        public_10006090 : nop
        cmp dword ptr ss : [esp+esi*4+0x50], ebp
        jne public_10006099
        dec esi
        jne public_10006090
        public_10006099 : nop
        cmp eax, esi
        mov dword ptr ss : [esp+0x28], esi
        jbe public_100060a7
        mov dword ptr ss : [esp+0x10], esi
        mov eax, esi
        public_100060a7 : nop
        mov edx, 1
        shl edx, cl
        cmp ecx, esi
        mov dword ptr ds : [edi], eax
        jae public_100060c5
        public_100060b4 : nop
        sub edx, dword ptr ss : [esp+ecx*4+0x50]
        js public_10006468
        inc ecx
        shl edx, 1
        cmp ecx, esi
        jb public_100060b4
        public_100060c5 : nop
        lea ecx, ds:[esi*4]
        lea edi, ss:[esp+ecx+0x50]
        mov dword ptr ss : [esp+0x30], ecx
        mov ecx, dword ptr ds : [edi]
        sub edx, ecx
        mov dword ptr ss : [esp+0x4C], edx
        js public_10006468
        add ecx, edx
        mov dword ptr ds : [edi], ecx
        xor ecx, ecx
        dec esi
        mov dword ptr ss : [esp+0x94], ebp
        je public_10006105
        xor edi, edi
        public_100060f4 : nop
        add ecx, dword ptr ss : [esp+edi+0x54]
        add edi, 4
        dec esi
        mov dword ptr ss : [esp+edi+0x94], ecx
        jne public_100060f4
        public_10006105 : nop
        mov esi, ebx
        xor edi, edi
        lea esp, ss:[esp]
        public_10006110 : nop
        mov ecx, dword ptr ds : [esi]
        add esi, 4
        cmp ecx, ebp
        mov dword ptr ss : [esp+0x20], esi
        je public_1000613c
        mov esi, dword ptr ss : [esp+ecx*4+0x90]
        mov ebx, dword ptr ss : [esp+0x12C]
        lea ecx, ss:[esp+ecx*4+0x90]
        mov dword ptr ds : [ebx+esi*4], edi
        inc esi
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ss : [esp+0x20]
        public_1000613c : nop
        mov ecx, dword ptr ss : [esp+0x110]
        inc edi
        cmp edi, ecx
        jb public_10006110
        mov ecx, dword ptr ss : [esp+0x30]
        mov ecx, dword ptr ss : [esp+ecx+0x90]
        mov esi, dword ptr ss : [esp+0x28]
        mov dword ptr ss : [esp+0x110], ecx
        mov ecx, dword ptr ss : [esp+0x12C]
        mov dword ptr ss : [esp+0x20], ecx
        mov ecx, dword ptr ss : [esp+0x14]
        mov ebx, eax
        xor edi, edi
        neg ebx
        cmp ecx, esi
        mov dword ptr ss : [esp+0x2C], ebp
        mov dword ptr ss : [esp+0x90], ebp
        mov dword ptr ss : [esp+0x18], 0xFFFFFFFF
        mov dword ptr ss : [esp+0xD0], edi
        mov dword ptr ss : [esp+0x30], edi
        jg public_10006445
        mov esi, dword ptr ss : [esp+0x38]
        lea edx, ds:[ecx-1]
        mov dword ptr ss : [esp+0x40], edx
        lea edx, ss:[esp+ecx*4+0x50]
        mov dword ptr ss : [esp+0x24], edx
        lea esp, ss:[esp]
        public_100061b0 : nop
        mov edx, dword ptr ss : [esp+0x24]
        mov edx, dword ptr ds : [edx]
        test edx, edx
        mov dword ptr ss : [esp+0x1C], edx
        je public_10006424
        public_100061c2 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ss : [esp+0x14]
        dec ecx
        mov dword ptr ss : [esp+0x1C], ecx
        lea ecx, ds:[ebx+eax]
        cmp edx, ecx
        jle public_100062fd
        mov dword ptr ss : [esp+0x3C], ecx
        mov ecx, ebx
        sub ecx, eax
        jmp public_100061f0
        public_100061e4 : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0x44]
        lea esp, ss:[esp]
        public_100061f0 : nop
        mov ebp, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ss : [esp+0x28]
        inc ebp
        mov dword ptr ss : [esp+0x18], ebp
        mov ebp, dword ptr ss : [esp+0x3C]
        add ebx, eax
        add ecx, eax
        add ebp, eax
        sub edx, ebx
        cmp edx, eax
        mov dword ptr ss : [esp+0x44], ecx
        mov dword ptr ss : [esp+0x3C], ebp
        jbe public_10006217
        mov edx, eax
        public_10006217 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        mov ebp, dword ptr ss : [esp+0x1C]
        sub ecx, ebx
        mov eax, 1
        shl eax, cl
        lea edi, ss:[ebp+1]
        cmp eax, edi
        jbe public_10006256
        or edi, 0xFFFFFFFF
        sub edi, ebp
        mov ebp, dword ptr ss : [esp+0x24]
        add eax, edi
        cmp ecx, edx
        jae public_10006256
        inc ecx
        cmp ecx, edx
        jae public_10006256
        public_10006243 : nop
        mov edi, dword ptr ss : [ebp+4]
        add ebp, 4
        shl eax, 1
        cmp eax, edi
        jbe public_10006256
        sub eax, edi
        inc ecx
        cmp ecx, edx
        jb public_10006243
        public_10006256 : nop
        mov eax, dword ptr ss : [esp+0x128]
        mov eax, dword ptr ds : [eax]
        mov edi, 1
        shl edi, cl
        lea edx, ds:[eax+edi]
        cmp edx, 0x5A0
        ja public_10006468
        mov ebp, dword ptr ss : [esp+0x124]
        lea ebp, ss:[ebp+eax*8]
        mov eax, dword ptr ss : [esp+0x18]
        lea eax, ss:[esp+eax*4+0xD0]
        mov dword ptr ss : [esp+0x48], eax
        mov dword ptr ds : [eax], ebp
        mov eax, dword ptr ss : [esp+0x128]
        mov dword ptr ds : [eax], edx
        mov eax, dword ptr ss : [esp+0x18]
        test eax, eax
        mov dword ptr ss : [esp+0x30], ebp
        je public_100062e2
        mov esi, dword ptr ss : [esp+0x2C]
        mov dl, byte ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+eax*4+0x90], esi
        mov byte ptr ss : [esp+0x34], cl
        mov ecx, dword ptr ss : [esp+0x44]
        mov eax, esi
        shr eax, cl
        mov ecx, dword ptr ss : [esp+0x48]
        mov ecx, dword ptr ds : [ecx-4]
        mov esi, ebp
        sub esi, ecx
        mov byte ptr ss : [esp+0x35], dl
        mov edx, dword ptr ss : [esp+0x34]
        sar esi, 3
        sub esi, eax
        mov dword ptr ds : [ecx+eax*8], edx
        mov dword ptr ds : [ecx+eax*8+4], esi
        jmp public_100062eb
        public_100062e2 : nop
        mov eax, dword ptr ss : [esp+0x120]
        mov dword ptr ds : [eax], ebp
        public_100062eb : nop
        mov ecx, dword ptr ss : [esp+0x3C]
        cmp dword ptr ss : [esp+0x14], ecx
        jg public_100061e4
        mov ebp, dword ptr ss : [esp+0x2C]
        public_100062fd : nop
        mov edx, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [esp+0x12C]
        mov al, dl
        sub al, bl
        mov byte ptr ss : [esp+0x35], al
        mov eax, dword ptr ss : [esp+0x110]
        lea ecx, ds:[ecx+eax*4]
        mov eax, dword ptr ss : [esp+0x20]
        cmp eax, ecx
        jb public_10006329
        mov byte ptr ss : [esp+0x34], 0xC0
        jmp public_10006371
        public_10006329 : nop
        mov esi, dword ptr ds : [eax]
        mov ecx, dword ptr ss : [esp+0x114]
        cmp esi, ecx
        jae public_1000634a
        cmp esi, 0x100
        setb cl
        dec cl
        and ecx, 0x60
        mov byte ptr ss : [esp+0x34], cl
        jmp public_1000636a
        public_1000634a : nop
        sub esi, ecx
        mov ecx, dword ptr ss : [esp+0x11C]
        shl esi, 2
        mov cl, byte ptr ds : [esi+ecx]
        add cl, 0x50
        mov byte ptr ss : [esp+0x34], cl
        mov ecx, dword ptr ss : [esp+0x118]
        mov esi, dword ptr ds : [esi+ecx]
        public_1000636a : nop
        add eax, 4
        mov dword ptr ss : [esp+0x20], eax
        public_10006371 : nop
        mov ecx, edx
        sub ecx, ebx
        mov edx, 1
        shl edx, cl
        mov eax, ebp
        mov ecx, ebx
        shr eax, cl
        cmp eax, edi
        jae public_100063ac
        mov ecx, dword ptr ss : [esp+0x30]
        lea ecx, ds:[ecx+eax*8]
        lea ecx, ds:[ecx]
        public_10006390 : nop
        mov ebp, dword ptr ss : [esp+0x34]
        mov dword ptr ds : [ecx], ebp
        lea ebp, ds:[edx*8]
        mov dword ptr ds : [ecx+4], esi
        add eax, edx
        add ecx, ebp
        cmp eax, edi
        jb public_10006390
        mov ebp, dword ptr ss : [esp+0x2C]
        public_100063ac : nop
        mov ecx, dword ptr ss : [esp+0x40]
        mov eax, 1
        shl eax, cl
        test ebp, eax
        je public_100063c8
        jmp public_100063c0
        lea ecx, ds:[ecx]
        public_100063c0 : nop
        xor ebp, eax
        shr eax, 1
        test ebp, eax
        jne public_100063c0
        public_100063c8 : nop
        mov ecx, ebx
        mov edx, 1
        shl edx, cl
        xor ebp, eax
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+eax*4+0x90]
        dec edx
        and edx, ebp
        cmp edx, ecx
        mov dword ptr ss : [esp+0x2C], ebp
        je public_10006410
        lea esp, ss:[esp]
        public_100063f0 : nop
        sub ebx, dword ptr ss : [esp+0x10]
        mov ecx, ebx
        mov edx, 1
        shl edx, cl
        mov ecx, dword ptr ss : [esp+eax*4+0x8C]
        dec eax
        dec edx
        and edx, ebp
        cmp edx, ecx
        jne public_100063f0
        mov dword ptr ss : [esp+0x18], eax
        public_10006410 : nop
        mov eax, dword ptr ss : [esp+0x1C]
        test eax, eax
        mov eax, dword ptr ss : [esp+0x10]
        jne public_100061c2
        mov ecx, dword ptr ss : [esp+0x14]
        public_10006424 : nop
        add dword ptr ss : [esp+0x24], 4
        mov edx, dword ptr ss : [esp+0x40]
        inc ecx
        inc edx
        mov dword ptr ss : [esp+0x40], edx
        cmp ecx, dword ptr ss : [esp+0x28]
        mov dword ptr ss : [esp+0x14], ecx
        jle public_100061b0
        mov edx, dword ptr ss : [esp+0x4C]
        public_10006445 : nop
        test edx, edx
        je public_10006021
        cmp dword ptr ss : [esp+0x28], 1
        je public_10006021
        pop edi
        pop esi
        pop ebp
        mov eax, 0xFFFFFFFB
        pop ebx
        add esp, 0xFC
        ret 
        public_10006468 : nop
        pop edi
        pop esi
        pop ebp
        mov eax, 0xFFFFFFFD
        pop ebx
        add esp, 0xFC
        ret 
        UNREACHABLE_TRAP(0x10005f90)
    }
}

#undef public_10006000
#undef public_10006021
#undef public_1000602e
#undef public_10006040
#undef public_10006068
#undef public_1000606b
#undef public_10006070
#undef public_10006075
#undef public_10006078
#undef public_10006086
#undef public_10006090
#undef public_10006099
#undef public_100060a7
#undef public_100060b4
#undef public_100060c5
#undef public_100060f4
#undef public_10006105
#undef public_10006110
#undef public_1000613c
#undef public_100061b0
#undef public_100061c2
#undef public_100061e4
#undef public_100061f0
#undef public_10006217
#undef public_10006243
#undef public_10006256
#undef public_100062e2
#undef public_100062eb
#undef public_100062fd
#undef public_10006329
#undef public_1000634a
#undef public_1000636a
#undef public_10006371
#undef public_10006390
#undef public_100063ac
#undef public_100063c0
#undef public_100063c8
#undef public_100063f0
#undef public_10006410
#undef public_10006424
#undef public_10006445
#undef public_10006468
