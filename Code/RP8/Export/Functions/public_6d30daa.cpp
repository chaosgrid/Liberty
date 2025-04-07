#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d2f2a0);
CLANG_FORWARD_PROC_SYMBOL(public_6d30daa);

#define public_6d30dc6 _public_6d30dc6
#define public_6d30dd2 _public_6d30dd2
#define public_6d30ddc _public_6d30ddc
#define public_6d30deb _public_6d30deb
#define public_6d30e04 _public_6d30e04
#define public_6d30e29 _public_6d30e29
#define public_6d30e54 _public_6d30e54
#define public_6d30e63 _public_6d30e63
#define public_6d30ec7 _public_6d30ec7
#define public_6d30eff _public_6d30eff
#define public_6d30f33 _public_6d30f33
#define public_6d30f60 _public_6d30f60
#define public_6d30f6c _public_6d30f6c
#define public_6d30f9e _public_6d30f9e
#define public_6d30fcc _public_6d30fcc
#define public_6d31006 _public_6d31006
#define public_6d31037 _public_6d31037
#define public_6d3106a _public_6d3106a
#define public_6d3107d _public_6d3107d
#define public_6d310a7 _public_6d310a7
#define public_6d310b0 _public_6d310b0
#define public_6d310b9 _public_6d310b9
#define public_6d310c0 _public_6d310c0
#define public_6d310e7 _public_6d310e7
#define public_6d31100 _public_6d31100
#define public_6d3110a _public_6d3110a
#define public_6d31116 _public_6d31116
#define public_6d3114e _public_6d3114e
#define public_6d31159 _public_6d31159
#define public_6d31182 _public_6d31182
#define public_6d3119e _public_6d3119e
#define public_6d311a5 _public_6d311a5
#define public_6d311ab _public_6d311ab
#define public_6d311b0 _public_6d311b0
#define public_6d311f8 _public_6d311f8
#define public_6d311ff _public_6d311ff
#define public_6d31237 _public_6d31237
#define public_6d31247 _public_6d31247
#define public_6d31269 _public_6d31269
#define public_6d31286 _public_6d31286
#define public_6d31299 _public_6d31299
#define public_6d3129c _public_6d3129c
#define public_6d312ab _public_6d312ab
#define public_6d312bb _public_6d312bb
#define public_6d312d1 _public_6d312d1
#define public_6d312d9 _public_6d312d9
#define public_6d312e4 _public_6d312e4
#define public_6d312ea _public_6d312ea
#define public_6d312f9 _public_6d312f9
#define public_6d31300 _public_6d31300
#define public_6d3130e _public_6d3130e
#define public_6d31313 _public_6d31313
#define public_6d31323 _public_6d31323
#define public_6d31334 _public_6d31334
#define public_6d3136c _public_6d3136c
#define public_6d31382 _public_6d31382
#define public_6d3138a _public_6d3138a
#define public_6d31395 _public_6d31395
#define public_6d313c0 _public_6d313c0
#define public_6d313c3 _public_6d313c3
#define public_6d313d6 _public_6d313d6
#define public_6d313f2 _public_6d313f2
#define public_6d31402 _public_6d31402
#define public_6d31414 _public_6d31414
#define public_6d31427 _public_6d31427
#define public_6d3144f _public_6d3144f
#define public_6d31455 _public_6d31455
#define public_6d3145e _public_6d3145e
#define public_6d31461 _public_6d31461
#define public_6d3146a _public_6d3146a
#define public_6d3147e _public_6d3147e
#define public_6d31486 _public_6d31486
#define public_6d314b4 _public_6d314b4
#define public_6d314b9 _public_6d314b9
#define public_6d314bb _public_6d314bb

PROC_DECLARE(0x6d30daa, internal_6d30daa, public_6d30daa);
extern "C" NAKED register_t __cdecl internal_6d30daa()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x1C
        cmp dword ptr ss : [ebp+0xC], 0x28
        push esi
        mov esi, ecx
        mov dword ptr ss : [ebp-0x14], esi
        jae public_6d30dc6
        mov eax, 0x80004005
        jmp public_6d314bb
        public_6d30dc6 : nop
        push ebx
        push edi
        mov edi, dword ptr ss : [ebp+8]
        mov ebx, dword ptr ds : [edi]
        cmp ebx, 0x28
        jae public_6d30ddc
        public_6d30dd2 : nop
        mov eax, 0x80004005
        jmp public_6d314b9
        public_6d30ddc : nop
        mov eax, dword ptr ds : [edi+4]
        mov dword ptr ss : [ebp-4], eax
        mov eax, dword ptr ds : [edi+8]
        test eax, eax
        jg public_6d30deb
        neg eax
        public_6d30deb : nop
        mov dx, word ptr ds : [edi+0xE]
        cmp dx, 8
        mov dword ptr ss : [ebp-8], eax
        mov eax, dword ptr ds : [edi+0x20]
        ja public_6d30e04
        test eax, eax
        jne public_6d30e04
        inc eax
        mov cl, dl
        shl eax, cl
        public_6d30e04 : nop
        lea eax, ds:[ebx+eax*4]
        cmp eax, dword ptr ss : [ebp+0xC]
        mov dword ptr ss : [ebp-0x18], eax
        ja public_6d30dd2
        cmp word ptr ds : [edi+0xC], 1
        jne public_6d30dd2
        mov eax, dword ptr ds : [edi+8]
        test eax, eax
        jge public_6d30e29
        mov eax, dword ptr ds : [edi+0x10]
        test eax, eax
        je public_6d30e29
        cmp eax, 3
        jne public_6d30dd2
        public_6d30e29 : nop
        mov eax, dword ptr ds : [edi+0x10]
        cmp eax, 2
        jbe public_6d3107d
        cmp eax, 3
        jne public_6d314b4
        cmp ebx, 0x6C
        jae public_6d30e54
        and dword ptr ss : [ebp+0xC], 0
        lea eax, ds:[ebx+edi]
        mov edx, dword ptr ds : [eax+8]
        mov ecx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax]
        jmp public_6d30e63
        public_6d30e54 : nop
        mov ebx, dword ptr ds : [edi+0x34]
        mov edx, dword ptr ds : [edi+0x30]
        mov ecx, dword ptr ds : [edi+0x2C]
        mov eax, dword ptr ds : [edi+0x28]
        mov dword ptr ss : [ebp+0xC], ebx
        public_6d30e63 : nop
        movzx ebx, word ptr ds : [edi+0xE]
        cmp ebx, 0x10
        mov dword ptr ss : [ebp+8], ebx
        je public_6d30f6c
        cmp ebx, 0x18
        je public_6d30f33
        cmp ebx, 0x20
        jne public_6d30dd2
        cmp edx, 0xFF
        jne public_6d30ec7
        cmp ecx, 0xFF00
        jne public_6d30dd2
        cmp eax, 0xFF0000
        jne public_6d30dd2
        cmp dword ptr ss : [ebp+0xC], 0
        je public_6d310a7
        cmp dword ptr ss : [ebp+0xC], 0xFF000000
        jne public_6d30dd2
        mov dword ptr ss : [ebp+0xC], 0x15
        jmp public_6d310c0
        public_6d30ec7 : nop
        cmp edx, 0x3FF00000
        jne public_6d30eff
        cmp ecx, 0xFFC00
        jne public_6d30dd2
        cmp eax, 0x3FF
        jne public_6d30dd2
        cmp dword ptr ss : [ebp+0xC], 0xC0000000
        jne public_6d30dd2
        mov dword ptr ss : [ebp+0xC], 0x1F
        jmp public_6d310c0
        public_6d30eff : nop
        test edx, edx
        jne public_6d30dd2
        cmp ecx, 0xFFFF0000
        jne public_6d30dd2
        cmp eax, 0xFFFF
        jne public_6d30dd2
        cmp dword ptr ss : [ebp+0xC], edx
        jne public_6d30dd2
        mov dword ptr ss : [ebp+0xC], 0x22
        jmp public_6d310c0
        public_6d30f33 : nop
        cmp edx, 0xFF
        jne public_6d30dd2
        cmp ecx, 0xFF00
        jne public_6d30dd2
        cmp eax, 0xFF0000
        jne public_6d30dd2
        cmp dword ptr ss : [ebp+0xC], 0
        jne public_6d30dd2
        public_6d30f60 : nop
        mov dword ptr ss : [ebp+0xC], 0x14
        jmp public_6d310c0
        public_6d30f6c : nop
        mov ebx, 0xFF
        cmp edx, ebx
        jne public_6d30f9e
        cmp ecx, ebx
        jne public_6d30dd2
        cmp eax, ebx
        jne public_6d30dd2
        cmp dword ptr ss : [ebp+0xC], 0xFF00
        jne public_6d30dd2
        mov dword ptr ss : [ebp+0xC], 0x33
        jmp public_6d310c0
        public_6d30f9e : nop
        cmp edx, 0x1F
        jne public_6d31006
        cmp ecx, 0x7E0
        jne public_6d30fcc
        cmp eax, 0xF800
        jne public_6d30dd2
        cmp dword ptr ss : [ebp+0xC], 0
        jne public_6d30dd2
        mov dword ptr ss : [ebp+0xC], 0x17
        jmp public_6d310c0
        public_6d30fcc : nop
        cmp ecx, 0x3E0
        jne public_6d30dd2
        cmp eax, 0x7C00
        jne public_6d30dd2
        cmp dword ptr ss : [ebp+0xC], 0
        je public_6d310b0
        cmp dword ptr ss : [ebp+0xC], 0x8000
        jne public_6d30dd2
        mov dword ptr ss : [ebp+0xC], 0x19
        jmp public_6d310c0
        public_6d31006 : nop
        cmp edx, 0xF
        jne public_6d31037
        cmp ecx, 0xF0
        jne public_6d30dd2
        cmp eax, 0xF00
        jne public_6d30dd2
        cmp dword ptr ss : [ebp+0xC], 0xF000
        jne public_6d3106a
        mov dword ptr ss : [ebp+0xC], 0x1A
        jmp public_6d310c0
        public_6d31037 : nop
        cmp edx, 3
        jne public_6d30dd2
        cmp ecx, 0x1C
        jne public_6d30dd2
        cmp eax, 0xE0
        jne public_6d30dd2
        cmp dword ptr ss : [ebp+0xC], 0xFF00
        jne public_6d30dd2
        mov dword ptr ss : [ebp+0xC], 0x1D
        jmp public_6d310c0
        public_6d3106a : nop
        cmp dword ptr ss : [ebp+0xC], 0
        jne public_6d30dd2
        mov dword ptr ss : [ebp+0xC], 0x1E
        jmp public_6d310c0
        public_6d3107d : nop
        movzx ecx, dx
        mov dword ptr ss : [ebp+8], ecx
        dec ecx
        je public_6d310b9
        sub ecx, 3
        je public_6d310b9
        sub ecx, 4
        je public_6d310b9
        sub ecx, 8
        je public_6d310b0
        sub ecx, 8
        je public_6d30f60
        sub ecx, 8
        jne public_6d30dd2
        public_6d310a7 : nop
        mov dword ptr ss : [ebp+0xC], 0x16
        jmp public_6d310c0
        public_6d310b0 : nop
        mov dword ptr ss : [ebp+0xC], 0x18
        jmp public_6d310c0
        public_6d310b9 : nop
        mov dword ptr ss : [ebp+0xC], 0x29
        public_6d310c0 : nop
        cmp dword ptr ds : [esi+0x40], 0
        je public_6d31182
        cmp dword ptr ss : [ebp+0xC], 0x29
        jne public_6d31182
        mov ebx, dword ptr ds : [edi+0x20]
        test ebx, ebx
        mov dword ptr ss : [ebp-0x1C], ebx
        jne public_6d310e7
        mov ecx, dword ptr ss : [ebp+8]
        inc ebx
        shl ebx, cl
        mov dword ptr ss : [ebp-0x1C], ebx
        public_6d310e7 : nop
        push 0x400
        mov dword ptr ds : [esi+0x3C], 1
        call public_6d2f2a0
        test eax, eax
        pop ecx
        mov dword ptr ds : [esi+8], eax
        jne public_6d3110a
        public_6d31100 : nop
        mov eax, 0x8007000E
        jmp public_6d314b9
        public_6d3110a : nop
        mov eax, dword ptr ds : [edi]
        and dword ptr ss : [ebp+8], 0
        add eax, edi
        test ebx, ebx
        jbe public_6d3114e
        public_6d31116 : nop
        mov bl, byte ptr ds : [eax+2]
        mov edx, dword ptr ds : [esi+8]
        mov ecx, dword ptr ss : [ebp+8]
        shl ecx, 2
        mov byte ptr ds : [ecx+edx], bl
        mov bl, byte ptr ds : [eax+1]
        mov edx, dword ptr ds : [esi+8]
        mov byte ptr ds : [ecx+edx+1], bl
        mov bl, byte ptr ds : [eax]
        mov edx, dword ptr ds : [esi+8]
        mov byte ptr ds : [ecx+edx+2], bl
        mov edx, dword ptr ds : [esi+8]
        or byte ptr ds : [ecx+edx+3], 0xFF
        inc dword ptr ss : [ebp+8]
        mov ebx, dword ptr ss : [ebp-0x1C]
        add eax, 4
        cmp dword ptr ss : [ebp+8], ebx
        jb public_6d31116
        public_6d3114e : nop
        mov ecx, 0x100
        cmp ebx, ecx
        mov edx, ebx
        jae public_6d31182
        public_6d31159 : nop
        mov ebx, dword ptr ds : [esi+8]
        mov eax, edx
        shl eax, 2
        or byte ptr ds : [eax+ebx], 0xFF
        mov ebx, dword ptr ds : [esi+8]
        or byte ptr ds : [eax+ebx+1], 0xFF
        mov ebx, dword ptr ds : [esi+8]
        or byte ptr ds : [eax+ebx+2], 0xFF
        mov ebx, dword ptr ds : [esi+8]
        or byte ptr ds : [eax+ebx+3], 0xFF
        inc edx
        cmp edx, ecx
        jb public_6d31159
        public_6d31182 : nop
        movzx eax, word ptr ds : [edi+0xE]
        mov edx, dword ptr ss : [ebp-4]
        mov ecx, eax
        dec ecx
        je public_6d311a5
        sub ecx, 3
        je public_6d3119e
        shr eax, 3
        imul eax, edx
        lea ecx, ds:[eax+3]
        jmp public_6d311b0
        public_6d3119e : nop
        lea ecx, ds:[edx+1]
        shr ecx, 1
        jmp public_6d311ab
        public_6d311a5 : nop
        lea ecx, ds:[edx+7]
        shr ecx, 3
        public_6d311ab : nop
        mov eax, edx
        add ecx, 3
        public_6d311b0 : nop
        and ecx, 0xFFFFFFFC
        mov dword ptr ss : [ebp-0xC], ecx
        mov ecx, dword ptr ss : [ebp+0xC]
        mov dword ptr ss : [ebp-0x1C], eax
        add eax, 3
        mov dword ptr ds : [esi], ecx
        xor ecx, ecx
        and eax, 0xFFFFFFFC
        cmp dword ptr ds : [esi+0x40], ecx
        mov dword ptr ds : [esi+0xC], edx
        mov edx, dword ptr ss : [ebp-8]
        mov dword ptr ds : [esi+0x30], eax
        mov dword ptr ds : [esi+0x34], ecx
        mov dword ptr ds : [esi+0x10], edx
        mov dword ptr ds : [esi+0x14], 1
        je public_6d311f8
        cmp dword ptr ds : [edi+8], ecx
        jge public_6d311ff
        cmp word ptr ds : [edi+0xE], 8
        jb public_6d311ff
        mov eax, dword ptr ss : [ebp-0x18]
        add eax, edi
        mov dword ptr ds : [esi+0x38], ecx
        mov dword ptr ds : [esi+4], eax
        public_6d311f8 : nop
        xor eax, eax
        jmp public_6d314b9
        public_6d311ff : nop
        imul eax, dword ptr ss : [ebp-8]
        push eax
        mov dword ptr ds : [esi+0x38], 1
        call public_6d2f2a0
        pop ecx
        mov ecx, eax
        test ecx, ecx
        mov dword ptr ss : [ebp+0xC], ecx
        mov dword ptr ds : [esi+4], ecx
        je public_6d31100
        cmp dword ptr ds : [edi+8], 0
        mov eax, dword ptr ss : [ebp-0x18]
        lea edx, ds:[eax+edi]
        mov eax, dword ptr ds : [esi+0x30]
        jge public_6d31237
        mov dword ptr ss : [ebp-0x18], eax
        mov ebx, ecx
        jmp public_6d31247
        public_6d31237 : nop
        mov ebx, eax
        neg ebx
        mov dword ptr ss : [ebp-0x18], ebx
        mov ebx, dword ptr ss : [ebp-8]
        dec ebx
        imul ebx, eax
        add ebx, ecx
        public_6d31247 : nop
        imul eax, dword ptr ss : [ebp-8]
        mov ecx, dword ptr ss : [ebp+0xC]
        add eax, ecx
        mov dword ptr ss : [ebp-8], eax
        mov eax, dword ptr ds : [edi+0x10]
        cmp eax, 2
        mov dword ptr ss : [ebp+8], ebx
        mov dword ptr ss : [ebp-0x10], ebx
        jne public_6d31323
        cmp ebx, ecx
        jb public_6d311f8
        public_6d31269 : nop
        mov al, byte ptr ds : [edx]
        test al, al
        jne public_6d312e4
        movzx eax, byte ptr ds : [edx+1]
        mov ecx, eax
        sub ecx, 0
        je public_6d312d9
        dec ecx
        je public_6d312d1
        dec ecx
        je public_6d312bb
        xor ecx, ecx
        test eax, eax
        jle public_6d312ab
        public_6d31286 : nop
        mov eax, ecx
        sar eax, 1
        test cl, 1
        movzx eax, byte ptr ds : [eax+edx+2]
        je public_6d31299
        and eax, 0xF
        jmp public_6d3129c
        public_6d31299 : nop
        shr eax, 4
        public_6d3129c : nop
        mov byte ptr ds : [ecx+ebx], al
        movzx eax, byte ptr ds : [edx+1]
        inc ecx
        cmp ecx, eax
        jl public_6d31286
        mov esi, dword ptr ss : [ebp-0x14]
        public_6d312ab : nop
        movzx eax, byte ptr ds : [edx+1]
        add ebx, eax
        shr eax, 1
        inc eax
        and eax, 0xFFFFFFFE
        add edx, eax
        jmp public_6d31313
        public_6d312bb : nop
        movzx ecx, byte ptr ds : [edx+3]
        imul ecx, dword ptr ds : [esi+0x30]
        lea eax, ds:[edx+2]
        movzx edx, byte ptr ds : [eax]
        sub edx, ecx
        add ebx, edx
        mov edx, eax
        jmp public_6d31313
        public_6d312d1 : nop
        mov ebx, dword ptr ss : [ebp+0xC]
        sub ebx, dword ptr ds : [esi+0x30]
        jmp public_6d31313
        public_6d312d9 : nop
        mov ebx, dword ptr ss : [ebp-0x10]
        sub ebx, dword ptr ds : [esi+0x30]
        mov dword ptr ss : [ebp-0x10], ebx
        jmp public_6d31313
        public_6d312e4 : nop
        xor ecx, ecx
        test al, al
        jbe public_6d3130e
        public_6d312ea : nop
        test cl, 1
        je public_6d312f9
        xor eax, eax
        mov al, byte ptr ds : [edx+1]
        and eax, 0xF
        jmp public_6d31300
        public_6d312f9 : nop
        movzx eax, byte ptr ds : [edx+1]
        shr eax, 4
        public_6d31300 : nop
        mov byte ptr ds : [ecx+ebx], al
        movzx eax, byte ptr ds : [edx]
        inc ecx
        cmp ecx, eax
        jl public_6d312ea
        mov esi, dword ptr ss : [ebp-0x14]
        public_6d3130e : nop
        movzx eax, byte ptr ds : [edx]
        add ebx, eax
        public_6d31313 : nop
        inc edx
        inc edx
        cmp ebx, dword ptr ss : [ebp+0xC]
        jae public_6d31269
        jmp public_6d311f8
        public_6d31323 : nop
        cmp eax, 1
        jne public_6d313d6
        cmp ebx, ecx
        jb public_6d311f8
        public_6d31334 : nop
        mov al, byte ptr ds : [edx]
        test al, al
        jne public_6d31395
        movzx ecx, byte ptr ds : [edx+1]
        mov eax, ecx
        sub eax, 0
        je public_6d3138a
        dec eax
        je public_6d31382
        dec eax
        je public_6d3136c
        mov eax, ecx
        shr ecx, 2
        lea esi, ds:[edx+2]
        mov edi, ebx
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        movzx eax, byte ptr ds : [edx+1]
        add ebx, eax
        inc eax
        and eax, 0xFFFFFFFE
        add edx, eax
        jmp public_6d313c0
        public_6d3136c : nop
        movzx ecx, byte ptr ds : [edx+3]
        imul ecx, dword ptr ds : [esi+0x30]
        lea eax, ds:[edx+2]
        movzx edx, byte ptr ds : [eax]
        sub edx, ecx
        add ebx, edx
        mov edx, eax
        jmp public_6d313c3
        public_6d31382 : nop
        mov ebx, dword ptr ss : [ebp+0xC]
        sub ebx, dword ptr ds : [esi+0x30]
        jmp public_6d313c3
        public_6d3138a : nop
        mov ebx, dword ptr ss : [ebp-0x10]
        sub ebx, dword ptr ds : [esi+0x30]
        mov dword ptr ss : [ebp-0x10], ebx
        jmp public_6d313c3
        public_6d31395 : nop
        movzx ecx, al
        movzx eax, byte ptr ds : [edx+1]
        mov edi, ebx
        mov bl, al
        mov bh, bl
        mov esi, ecx
        shr ecx, 2
        mov eax, ebx
        shl eax, 0x10
        mov ax, bx
        mov ebx, dword ptr ss : [ebp+8]
        rep stosd
        mov ecx, esi
        and ecx, 3
        rep stosb
        movzx eax, byte ptr ds : [edx]
        add ebx, eax
        public_6d313c0 : nop
        mov esi, dword ptr ss : [ebp-0x14]
        public_6d313c3 : nop
        inc edx
        inc edx
        cmp ebx, dword ptr ss : [ebp+0xC]
        mov dword ptr ss : [ebp+8], ebx
        jae public_6d31334
        jmp public_6d311f8
        public_6d313d6 : nop
        mov di, word ptr ds : [edi+0xE]
        cmp di, 1
        je public_6d31455
        cmp di, 4
        jne public_6d3147e
        cmp ebx, ecx
        jb public_6d311f8
        public_6d313f2 : nop
        cmp ebx, dword ptr ss : [ebp-8]
        jae public_6d311f8
        xor ecx, ecx
        cmp dword ptr ss : [ebp-4], ecx
        jbe public_6d3146a
        public_6d31402 : nop
        mov eax, ecx
        shr eax, 1
        test cl, 1
        movzx eax, byte ptr ds : [eax+edx]
        je public_6d3145e
        and eax, 0xF
        jmp public_6d31461
        public_6d31414 : nop
        cmp ebx, dword ptr ss : [ebp-8]
        jae public_6d311f8
        and dword ptr ss : [ebp+8], 0
        cmp dword ptr ss : [ebp-4], 0
        jbe public_6d3144f
        public_6d31427 : nop
        mov al, byte ptr ss : [ebp+8]
        mov esi, dword ptr ss : [ebp+8]
        and al, 7
        mov cl, 7
        sub cl, al
        mov eax, dword ptr ss : [ebp+8]
        shr eax, 3
        mov al, byte ptr ds : [eax+edx]
        shr al, cl
        and al, 1
        mov byte ptr ds : [esi+ebx], al
        inc esi
        cmp esi, dword ptr ss : [ebp-4]
        mov dword ptr ss : [ebp+8], esi
        jb public_6d31427
        mov ecx, dword ptr ss : [ebp+0xC]
        public_6d3144f : nop
        add ebx, dword ptr ss : [ebp-0x18]
        add edx, dword ptr ss : [ebp-0xC]
        public_6d31455 : nop
        cmp ebx, ecx
        jae public_6d31414
        jmp public_6d311f8
        public_6d3145e : nop
        shr eax, 4
        public_6d31461 : nop
        mov byte ptr ds : [ecx+ebx], al
        inc ecx
        cmp ecx, dword ptr ss : [ebp-4]
        jb public_6d31402
        public_6d3146a : nop
        add ebx, dword ptr ss : [ebp-0x18]
        add edx, dword ptr ss : [ebp-0xC]
        cmp ebx, dword ptr ss : [ebp+0xC]
        jae public_6d313f2
        jmp public_6d311f8
        public_6d3147e : nop
        cmp ebx, ecx
        jb public_6d311f8
        public_6d31486 : nop
        cmp ebx, dword ptr ss : [ebp-8]
        jae public_6d311f8
        mov ecx, dword ptr ss : [ebp-0x1C]
        mov eax, ecx
        shr ecx, 2
        mov esi, edx
        add edx, dword ptr ss : [ebp-0xC]
        mov edi, ebx
        add ebx, dword ptr ss : [ebp-0x18]
        rep movsd
        mov ecx, eax
        and ecx, 3
        cmp ebx, dword ptr ss : [ebp+0xC]
        rep movsb
        jae public_6d31486
        jmp public_6d311f8
        public_6d314b4 : nop
        mov eax, 0x80004001
        public_6d314b9 : nop
        pop edi
        pop ebx
        public_6d314bb : nop
        pop esi
        leave 
        ret 8
        UNREACHABLE_TRAP(0x6d30daa)
    }
}

#undef public_6d30dc6
#undef public_6d30dd2
#undef public_6d30ddc
#undef public_6d30deb
#undef public_6d30e04
#undef public_6d30e29
#undef public_6d30e54
#undef public_6d30e63
#undef public_6d30ec7
#undef public_6d30eff
#undef public_6d30f33
#undef public_6d30f60
#undef public_6d30f6c
#undef public_6d30f9e
#undef public_6d30fcc
#undef public_6d31006
#undef public_6d31037
#undef public_6d3106a
#undef public_6d3107d
#undef public_6d310a7
#undef public_6d310b0
#undef public_6d310b9
#undef public_6d310c0
#undef public_6d310e7
#undef public_6d31100
#undef public_6d3110a
#undef public_6d31116
#undef public_6d3114e
#undef public_6d31159
#undef public_6d31182
#undef public_6d3119e
#undef public_6d311a5
#undef public_6d311ab
#undef public_6d311b0
#undef public_6d311f8
#undef public_6d311ff
#undef public_6d31237
#undef public_6d31247
#undef public_6d31269
#undef public_6d31286
#undef public_6d31299
#undef public_6d3129c
#undef public_6d312ab
#undef public_6d312bb
#undef public_6d312d1
#undef public_6d312d9
#undef public_6d312e4
#undef public_6d312ea
#undef public_6d312f9
#undef public_6d31300
#undef public_6d3130e
#undef public_6d31313
#undef public_6d31323
#undef public_6d31334
#undef public_6d3136c
#undef public_6d31382
#undef public_6d3138a
#undef public_6d31395
#undef public_6d313c0
#undef public_6d313c3
#undef public_6d313d6
#undef public_6d313f2
#undef public_6d31402
#undef public_6d31414
#undef public_6d31427
#undef public_6d3144f
#undef public_6d31455
#undef public_6d3145e
#undef public_6d31461
#undef public_6d3146a
#undef public_6d3147e
#undef public_6d31486
#undef public_6d314b4
#undef public_6d314b9
#undef public_6d314bb
