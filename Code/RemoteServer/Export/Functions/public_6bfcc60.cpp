#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bda4c0);
CLANG_FORWARD_PROC_SYMBOL(public_6bebe90);
CLANG_FORWARD_PROC_SYMBOL(public_6bebeb0);
CLANG_FORWARD_PROC_SYMBOL(public_6bec3b0);
CLANG_FORWARD_PROC_SYMBOL(public_6c09aaa);
CLANG_FORWARD_PROC_SYMBOL(public_6c09d26);

#define public_6bfccab _public_6bfccab
#define public_6bfccc4 _public_6bfccc4
#define public_6bfcd02 _public_6bfcd02
#define public_6bfcd34 _public_6bfcd34
#define public_6bfcd50 _public_6bfcd50
#define public_6bfcd69 _public_6bfcd69
#define public_6bfcda2 _public_6bfcda2
#define public_6bfcdcd _public_6bfcdcd
#define public_6bfcddf _public_6bfcddf
#define public_6bfce07 _public_6bfce07
#define public_6bfce2d _public_6bfce2d
#define public_6bfce3f _public_6bfce3f
#define public_6bfce6a _public_6bfce6a
#define public_6bfce77 _public_6bfce77
#define public_6bfce8c _public_6bfce8c
#define public_6bfce8e _public_6bfce8e
#define public_6bfcea4 _public_6bfcea4
#define public_6bfcecc _public_6bfcecc
#define public_6bfcede _public_6bfcede
#define public_6bfcf07 _public_6bfcf07
#define public_6bfcf14 _public_6bfcf14
#define public_6bfcf29 _public_6bfcf29
#define public_6bfcf2b _public_6bfcf2b
#define public_6bfcf41 _public_6bfcf41
#define public_6bfcf69 _public_6bfcf69
#define public_6bfcf7b _public_6bfcf7b
#define public_6bfcfa4 _public_6bfcfa4
#define public_6bfcfb1 _public_6bfcfb1
#define public_6bfcfc6 _public_6bfcfc6
#define public_6bfcfc8 _public_6bfcfc8
#define public_6bfcfd4 _public_6bfcfd4
#define public_6bfcfe7 _public_6bfcfe7
#define public_6bfcffd _public_6bfcffd
#define public_6bfd010 _public_6bfd010
#define public_6bfd029 _public_6bfd029
#define public_6bfd06d _public_6bfd06d
#define public_6bfd072 _public_6bfd072
#define public_6bfd07a _public_6bfd07a
#define public_6bfd07e _public_6bfd07e
#define public_6bfd08a _public_6bfd08a
#define public_6bfd0a3 _public_6bfd0a3
#define public_6bfd0ad _public_6bfd0ad
#define public_6bfd0b7 _public_6bfd0b7
#define public_6bfd0c3 _public_6bfd0c3
#define public_6bfd0d5 _public_6bfd0d5
#define public_6bfd0df _public_6bfd0df
#define public_6bfd0ed _public_6bfd0ed
#define public_6bfd11b _public_6bfd11b
#define public_6bfd131 _public_6bfd131
#define public_6bfd146 _public_6bfd146
#define public_6bfd154 _public_6bfd154
#define public_6bfd15e _public_6bfd15e
#define public_6bfd170 _public_6bfd170
#define public_6bfd177 _public_6bfd177
#define public_6bfd17d _public_6bfd17d
#define public_6bfd186 _public_6bfd186
#define public_6bfd192 _public_6bfd192
#define public_6bfd1a0 _public_6bfd1a0
#define public_6bfd1ae _public_6bfd1ae
#define public_6bfd1b8 _public_6bfd1b8
#define public_6bfd1c2 _public_6bfd1c2
#define public_6bfd1d3 _public_6bfd1d3
#define public_6bfd1e0 _public_6bfd1e0
#define public_6bfd1ea _public_6bfd1ea
#define public_6bfd1ee _public_6bfd1ee
#define public_6bfd209 _public_6bfd209
#define public_6bfd216 _public_6bfd216
#define public_6bfd257 _public_6bfd257
#define public_6bfd263 _public_6bfd263

PROC_DECLARE(0x6bfcc60, internal_6bfcc60, public_6bfcc60);
extern "C" NAKED register_t __cdecl internal_6bfcc60()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        sub esp, 0x10
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov ecx, dword ptr ss : [esp+0x20]
        push edi
        lea ebp, ds:[esi+0x10]
        push ebp
        push eax
        mov dword ptr ss : [ebp+8], ecx
        lea edi, ds:[esi+0x18]
        push edi
        mov ecx, esi
        mov dword ptr ss : [ebp+4], eax
        mov dword ptr ss : [ebp], 0
        mov dword ptr ss : [ebp+0xC], 0
        call public_6bebe90
        test eax, eax
        mov dword ptr ds : [esi+0x1C], eax
        je public_6bfccab
        pop edi
        pop esi
        pop ebp
        mov eax, 0x17
        pop ebx
        add esp, 0x10
        ret 0xC
        public_6bfccab : nop
        mov edx, dword ptr ss : [ebp]
        mov ecx, dword ptr ss : [ebp+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ss : [ebp], edx
        jbe public_6bfccc4
        mov dword ptr ss : [ebp+0xC], 0x17
        public_6bfccc4 : nop
        mov eax, dword ptr ds : [esi+0x1C]
        test eax, eax
        jne public_6bfd263
        mov eax, dword ptr ds : [edi]
        mov edx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ds : [esi+0x20], edx
        mov dword ptr ds : [edi], eax
        call dword ptr ds : [public_6c0b080]
        test al, al
        mov ecx, dword ptr ss : [ebp+4]
        mov edx, dword ptr ss : [ebp]
        je public_6bfcdcd
        add edx, 0xC
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ss : [ebp], edx
        jbe public_6bfcd02
        mov dword ptr ss : [ebp+0xC], 0x17
        public_6bfcd02 : nop
        mov eax, dword ptr ds : [esi+0x1C]
        test eax, eax
        jne public_6bfd263
        mov ebx, dword ptr ds : [edi]
        push ebx
        lea ecx, ds:[esi+0x24]
        call public_6bda4c0
        add ebx, 0xC
        mov dword ptr ds : [edi], ebx
        mov edx, dword ptr ss : [ebp]
        mov ecx, dword ptr ss : [ebp+4]
        inc edx
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ss : [ebp], edx
        jbe public_6bfcd34
        mov dword ptr ss : [ebp+0xC], 0x17
        public_6bfcd34 : nop
        mov eax, dword ptr ds : [esi+0x1C]
        test eax, eax
        jne public_6bfd263
        mov eax, dword ptr ds : [edi]
        mov cl, byte ptr ds : [eax]
        inc eax
        xor bl, bl
        test cl, cl
        mov byte ptr ss : [esp+0x24], cl
        mov dword ptr ds : [edi], eax
        jbe public_6bfcda2
        public_6bfcd50 : nop
        mov edx, dword ptr ss : [ebp]
        mov ecx, dword ptr ss : [ebp+4]
        add edx, 2
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ss : [ebp], edx
        jbe public_6bfcd69
        mov dword ptr ss : [ebp+0xC], 0x17
        public_6bfcd69 : nop
        mov eax, dword ptr ds : [esi+0x1C]
        test eax, eax
        jne public_6bfd209
        mov eax, dword ptr ds : [edi]
        xor ecx, ecx
        mov cx, word ptr ds : [eax]
        add eax, 2
        lea edx, ss:[esp+0x14]
        push edx
        mov dword ptr ds : [edi], eax
        mov eax, dword ptr ds : [esi+0x38]
        push 1
        mov dword ptr ss : [esp+0x1C], ecx
        lea ecx, ds:[esi+0x30]
        push eax
        call dword ptr ds : [public_6c0b028]
        mov al, byte ptr ss : [esp+0x24]
        inc bl
        cmp bl, al
        jb public_6bfcd50
        public_6bfcda2 : nop
        mov eax, dword ptr ss : [esp+0x28]
        push ebp
        push eax
        lea eax, ds:[esi+0x18]
        push eax
        mov ecx, esi
        call public_6bebeb0
        test eax, eax
        mov dword ptr ds : [esi+0x1C], eax
        je public_6bfd216
        pop edi
        pop esi
        pop ebp
        mov eax, 0x17
        pop ebx
        add esp, 0x10
        ret 0xC
        public_6bfcdcd : nop
        inc edx
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ss : [ebp], edx
        mov ebx, 0x17
        jbe public_6bfcddf
        mov dword ptr ss : [ebp+0xC], ebx
        public_6bfcddf : nop
        mov eax, dword ptr ds : [esi+0x1C]
        test eax, eax
        jne public_6bfd263
        mov eax, dword ptr ds : [edi]
        mov dl, byte ptr ds : [eax]
        inc eax
        test dl, 1
        mov dword ptr ds : [edi], eax
        mov ecx, dword ptr ss : [ebp+4]
        mov eax, dword ptr ss : [ebp]
        je public_6bfce2d
        inc eax
        cmp eax, ecx
        mov dword ptr ss : [ebp], eax
        jbe public_6bfce07
        mov dword ptr ss : [ebp+0xC], ebx
        public_6bfce07 : nop
        mov eax, dword ptr ds : [esi+0x1C]
        test eax, eax
        jne public_6bfd263
        mov eax, dword ptr ds : [edi]
        mov cl, byte ptr ds : [eax]
        movsx ecx, cl
        mov dword ptr ss : [esp+0x24], ecx
        inc eax
        fild dword ptr ss : [esp+0x24]
        fmul qword ptr ds : [public_6c0e348]
        fstp dword ptr ds : [esi+0x24]
        jmp public_6bfce8c
        public_6bfce2d : nop
        test dl, 2
        je public_6bfce6a
        add eax, 2
        cmp eax, ecx
        mov dword ptr ss : [ebp], eax
        jbe public_6bfce3f
        mov dword ptr ss : [ebp+0xC], ebx
        public_6bfce3f : nop
        mov eax, dword ptr ds : [esi+0x1C]
        test eax, eax
        jne public_6bfd263
        mov eax, dword ptr ds : [edi]
        mov cx, word ptr ds : [eax]
        add eax, 2
        mov dword ptr ds : [edi], eax
        movsx eax, cx
        mov dword ptr ss : [esp+0x24], eax
        fild dword ptr ss : [esp+0x24]
        fmul qword ptr ds : [public_6c0e340]
        fstp dword ptr ds : [esi+0x24]
        jmp public_6bfce8e
        public_6bfce6a : nop
        add eax, 4
        cmp eax, ecx
        mov dword ptr ss : [ebp], eax
        jbe public_6bfce77
        mov dword ptr ss : [ebp+0xC], ebx
        public_6bfce77 : nop
        mov eax, dword ptr ds : [esi+0x1C]
        test eax, eax
        jne public_6bfd263
        mov eax, dword ptr ds : [edi]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [esi+0x24], ecx
        add eax, 4
        public_6bfce8c : nop
        mov dword ptr ds : [edi], eax
        public_6bfce8e : nop
        test dl, 4
        mov ecx, dword ptr ss : [ebp+4]
        mov eax, dword ptr ss : [ebp]
        je public_6bfcecc
        inc eax
        cmp eax, ecx
        mov dword ptr ss : [ebp], eax
        jbe public_6bfcea4
        mov dword ptr ss : [ebp+0xC], ebx
        public_6bfcea4 : nop
        mov eax, dword ptr ds : [esi+0x1C]
        test eax, eax
        jne public_6bfd263
        mov eax, dword ptr ds : [edi]
        mov cl, byte ptr ds : [eax]
        inc eax
        mov dword ptr ds : [edi], eax
        movsx eax, cl
        mov dword ptr ss : [esp+0x24], eax
        fild dword ptr ss : [esp+0x24]
        fmul qword ptr ds : [public_6c0e348]
        fstp dword ptr ds : [esi+0x28]
        jmp public_6bfcf2b
        public_6bfcecc : nop
        test dl, 8
        je public_6bfcf07
        add eax, 2
        cmp eax, ecx
        mov dword ptr ss : [ebp], eax
        jbe public_6bfcede
        mov dword ptr ss : [ebp+0xC], ebx
        public_6bfcede : nop
        mov eax, dword ptr ds : [esi+0x1C]
        test eax, eax
        jne public_6bfd263
        mov eax, dword ptr ds : [edi]
        mov cx, word ptr ds : [eax]
        movsx ecx, cx
        mov dword ptr ss : [esp+0x24], ecx
        add eax, 2
        fild dword ptr ss : [esp+0x24]
        fmul qword ptr ds : [public_6c0e340]
        fstp dword ptr ds : [esi+0x28]
        jmp public_6bfcf29
        public_6bfcf07 : nop
        add eax, 4
        cmp eax, ecx
        mov dword ptr ss : [ebp], eax
        jbe public_6bfcf14
        mov dword ptr ss : [ebp+0xC], ebx
        public_6bfcf14 : nop
        mov eax, dword ptr ds : [esi+0x1C]
        test eax, eax
        jne public_6bfd263
        mov eax, dword ptr ds : [edi]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [esi+0x28], ecx
        add eax, 4
        public_6bfcf29 : nop
        mov dword ptr ds : [edi], eax
        public_6bfcf2b : nop
        test dl, 0x10
        mov ecx, dword ptr ss : [ebp+4]
        mov eax, dword ptr ss : [ebp]
        je public_6bfcf69
        inc eax
        cmp eax, ecx
        mov dword ptr ss : [ebp], eax
        jbe public_6bfcf41
        mov dword ptr ss : [ebp+0xC], ebx
        public_6bfcf41 : nop
        mov eax, dword ptr ds : [esi+0x1C]
        test eax, eax
        jne public_6bfd263
        mov eax, dword ptr ds : [edi]
        mov cl, byte ptr ds : [eax]
        inc eax
        mov dword ptr ds : [edi], eax
        movsx eax, cl
        mov dword ptr ss : [esp+0x24], eax
        fild dword ptr ss : [esp+0x24]
        fmul qword ptr ds : [public_6c0e348]
        fstp dword ptr ds : [esi+0x2C]
        jmp public_6bfcfc8
        public_6bfcf69 : nop
        test dl, 0x20
        je public_6bfcfa4
        add eax, 2
        cmp eax, ecx
        mov dword ptr ss : [ebp], eax
        jbe public_6bfcf7b
        mov dword ptr ss : [ebp+0xC], ebx
        public_6bfcf7b : nop
        mov eax, dword ptr ds : [esi+0x1C]
        test eax, eax
        jne public_6bfd263
        mov eax, dword ptr ds : [edi]
        mov cx, word ptr ds : [eax]
        movsx ecx, cx
        mov dword ptr ss : [esp+0x24], ecx
        add eax, 2
        fild dword ptr ss : [esp+0x24]
        fmul qword ptr ds : [public_6c0e340]
        fstp dword ptr ds : [esi+0x2C]
        jmp public_6bfcfc6
        public_6bfcfa4 : nop
        add eax, 4
        cmp eax, ecx
        mov dword ptr ss : [ebp], eax
        jbe public_6bfcfb1
        mov dword ptr ss : [ebp+0xC], ebx
        public_6bfcfb1 : nop
        mov eax, dword ptr ds : [esi+0x1C]
        test eax, eax
        jne public_6bfd263
        mov eax, dword ptr ds : [edi]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [esi+0x2C], ecx
        add eax, 4
        public_6bfcfc6 : nop
        mov dword ptr ds : [edi], eax
        public_6bfcfc8 : nop
        test dl, 0x40
        je public_6bfcfd4
        mov byte ptr ss : [esp+0x24], 1
        jmp public_6bfcffd
        public_6bfcfd4 : nop
        mov edx, dword ptr ss : [ebp]
        mov ecx, dword ptr ss : [ebp+4]
        inc edx
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ss : [ebp], edx
        jbe public_6bfcfe7
        mov dword ptr ss : [ebp+0xC], ebx
        public_6bfcfe7 : nop
        mov eax, dword ptr ds : [esi+0x1C]
        test eax, eax
        jne public_6bfd263
        mov eax, dword ptr ds : [edi]
        mov dl, byte ptr ds : [eax]
        inc eax
        mov byte ptr ss : [esp+0x24], dl
        mov dword ptr ds : [edi], eax
        public_6bfcffd : nop
        mov al, byte ptr ss : [esp+0x24]
        test al, al
        mov byte ptr ss : [esp+0x13], 0
        jbe public_6bfcda2
        mov edi, edi
        public_6bfd010 : nop
        mov edx, dword ptr ss : [ebp]
        mov ecx, dword ptr ss : [ebp+4]
        add edx, 2
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ss : [ebp], edx
        jbe public_6bfd029
        mov dword ptr ss : [ebp+0xC], 0x17
        public_6bfd029 : nop
        mov eax, dword ptr ds : [esi+0x1C]
        test eax, eax
        jne public_6bfd209
        mov eax, dword ptr ds : [esi+0x18]
        xor ebx, ebx
        mov bx, word ptr ds : [eax]
        add eax, 2
        mov dword ptr ds : [esi+0x18], eax
        mov eax, dword ptr ds : [esi+0x38]
        mov ecx, dword ptr ds : [esi+0x3C]
        sub ecx, eax
        sar ecx, 1
        cmp ecx, 1
        mov dword ptr ss : [esp+0x14], ebx
        mov edi, eax
        jae public_6bfd131
        mov edx, dword ptr ds : [esi+0x34]
        test edx, edx
        je public_6bfd06d
        mov ecx, eax
        sub ecx, edx
        sar ecx, 1
        cmp ecx, 1
        ja public_6bfd072
        public_6bfd06d : nop
        mov ecx, 1
        public_6bfd072 : nop
        test edx, edx
        jne public_6bfd07a
        xor eax, eax
        jmp public_6bfd07e
        public_6bfd07a : nop
        sub eax, edx
        sar eax, 1
        public_6bfd07e : nop
        add eax, ecx
        test eax, eax
        mov dword ptr ss : [esp+0x1C], eax
        jge public_6bfd08a
        xor eax, eax
        public_6bfd08a : nop
        lea edx, ds:[eax+eax]
        push edx
        call public_6c09d26
        mov ecx, dword ptr ds : [esi+0x34]
        add esp, 4
        cmp ecx, edi
        mov ebx, eax
        mov dword ptr ss : [esp+0x18], ebx
        je public_6bfd0b7
        public_6bfd0a3 : nop
        test eax, eax
        je public_6bfd0ad
        mov dx, word ptr ds : [ecx]
        mov word ptr ds : [eax], dx
        public_6bfd0ad : nop
        add ecx, 2
        add eax, 2
        cmp ecx, edi
        jne public_6bfd0a3
        public_6bfd0b7 : nop
        test eax, eax
        je public_6bfd0c3
        mov cx, word ptr ss : [esp+0x14]
        mov word ptr ds : [eax], cx
        public_6bfd0c3 : nop
        mov edx, dword ptr ds : [esi+0x38]
        cmp edi, edx
        lea ecx, ds:[eax+2]
        je public_6bfd0ed
        mov ebx, ecx
        sub ebx, eax
        lea eax, ds:[ebx+edi-2]
        public_6bfd0d5 : nop
        test ecx, ecx
        je public_6bfd0df
        mov di, word ptr ds : [eax]
        mov word ptr ds : [ecx], di
        public_6bfd0df : nop
        add eax, 2
        add ecx, 2
        cmp eax, edx
        jne public_6bfd0d5
        mov ebx, dword ptr ss : [esp+0x18]
        public_6bfd0ed : nop
        mov edx, dword ptr ds : [esi+0x34]
        push edx
        call public_6c09aaa
        mov eax, dword ptr ss : [esp+0x20]
        lea ecx, ds:[ebx+eax*2]
        mov dword ptr ds : [esi+0x3C], ecx
        mov ecx, dword ptr ds : [esi+0x34]
        add esp, 4
        test ecx, ecx
        jne public_6bfd11b
        xor eax, eax
        lea edx, ds:[ebx+eax*2+2]
        mov dword ptr ds : [esi+0x38], edx
        mov dword ptr ds : [esi+0x34], ebx
        jmp public_6bfd1ee
        public_6bfd11b : nop
        mov eax, dword ptr ds : [esi+0x38]
        sub eax, ecx
        sar eax, 1
        lea edx, ds:[ebx+eax*2+2]
        mov dword ptr ds : [esi+0x38], edx
        mov dword ptr ds : [esi+0x34], ebx
        jmp public_6bfd1ee
        public_6bfd131 : nop
        mov ecx, eax
        sub ecx, edi
        sar ecx, 1
        cmp ecx, 1
        jae public_6bfd192
        cmp edi, eax
        lea ecx, ds:[edi+2]
        je public_6bfd15e
        lea edx, ds:[ecx-2]
        public_6bfd146 : nop
        test ecx, ecx
        je public_6bfd154
        mov bx, word ptr ds : [edx]
        mov word ptr ds : [ecx], bx
        mov ebx, dword ptr ss : [esp+0x14]
        public_6bfd154 : nop
        add edx, 2
        add ecx, 2
        cmp edx, eax
        jne public_6bfd146
        public_6bfd15e : nop
        mov ecx, dword ptr ds : [esi+0x38]
        mov edx, ecx
        sub edx, edi
        sar edx, 1
        mov eax, 1
        sub eax, edx
        je public_6bfd17d
        public_6bfd170 : nop
        test ecx, ecx
        je public_6bfd177
        mov word ptr ds : [ecx], bx
        public_6bfd177 : nop
        add ecx, 2
        dec eax
        jne public_6bfd170
        public_6bfd17d : nop
        mov ecx, dword ptr ds : [esi+0x38]
        cmp edi, ecx
        mov eax, edi
        je public_6bfd1ea
        public_6bfd186 : nop
        mov word ptr ds : [eax], bx
        add eax, 2
        cmp eax, ecx
        jne public_6bfd186
        jmp public_6bfd1ea
        public_6bfd192 : nop
        lea ecx, ds:[eax-2]
        cmp ecx, eax
        mov edx, eax
        je public_6bfd1b8
        nop 
        lea esp, ss:[esp]
        public_6bfd1a0 : nop
        test edx, edx
        je public_6bfd1ae
        mov bx, word ptr ds : [ecx]
        mov word ptr ds : [edx], bx
        mov ebx, dword ptr ss : [esp+0x14]
        public_6bfd1ae : nop
        add ecx, 2
        add edx, 2
        cmp ecx, eax
        jne public_6bfd1a0
        public_6bfd1b8 : nop
        mov ecx, dword ptr ds : [esi+0x38]
        lea eax, ds:[ecx-2]
        cmp edi, eax
        je public_6bfd1d3
        public_6bfd1c2 : nop
        mov dx, word ptr ds : [eax-2]
        sub eax, 2
        sub ecx, 2
        cmp eax, edi
        mov word ptr ds : [ecx], dx
        jne public_6bfd1c2
        public_6bfd1d3 : nop
        lea ecx, ds:[edi+2]
        cmp edi, ecx
        mov eax, edi
        je public_6bfd1ea
        lea esp, ss:[esp]
        public_6bfd1e0 : nop
        mov word ptr ds : [eax], bx
        add eax, 2
        cmp eax, ecx
        jne public_6bfd1e0
        public_6bfd1ea : nop
        add dword ptr ds : [esi+0x38], 2
        public_6bfd1ee : nop
        mov al, byte ptr ss : [esp+0x13]
        mov cl, byte ptr ss : [esp+0x24]
        inc al
        cmp al, cl
        mov byte ptr ss : [esp+0x13], al
        jb public_6bfd010
        jmp public_6bfcda2
        public_6bfd209 : nop
        mov eax, dword ptr ds : [esi+0x1C]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x10
        ret 0xC
        public_6bfd216 : nop
        mov ecx, dword ptr ss : [ebp]
        mov edx, dword ptr ss : [esp+0x2C]
        mov dword ptr ds : [edx], ecx
        mov eax, dword ptr ds : [esi+0xC]
        push eax
        call public_6bec3b0
        mov ecx, eax
        mov edx, dword ptr ds : [ecx+4]
        mov ebx, dword ptr ds : [ecx+0x1C]
        mov eax, dword ptr ds : [ecx+0x14]
        add esp, 4
        inc edx
        mov dword ptr ds : [ecx+4], edx
        mov esi, edx
        mov edx, dword ptr ss : [ebp]
        add edx, 2
        add ebx, edx
        mov dword ptr ds : [ecx+0x1C], ebx
        mov ebp, dword ptr ss : [ebp]
        add eax, 2
        cmp ebp, eax
        jbe public_6bfd257
        add ebp, 2
        mov dword ptr ds : [ecx+0x14], ebp
        public_6bfd257 : nop
        mov eax, dword ptr ds : [ecx+0x1C]
        xor edx, edx
        div esi
        mov dword ptr ds : [ecx+0xC], eax
        xor eax, eax
        public_6bfd263 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x10
        ret 0xC
        UNREACHABLE_TRAP(0x6bfcc60)
    }
}

#undef public_6bfccab
#undef public_6bfccc4
#undef public_6bfcd02
#undef public_6bfcd34
#undef public_6bfcd50
#undef public_6bfcd69
#undef public_6bfcda2
#undef public_6bfcdcd
#undef public_6bfcddf
#undef public_6bfce07
#undef public_6bfce2d
#undef public_6bfce3f
#undef public_6bfce6a
#undef public_6bfce77
#undef public_6bfce8c
#undef public_6bfce8e
#undef public_6bfcea4
#undef public_6bfcecc
#undef public_6bfcede
#undef public_6bfcf07
#undef public_6bfcf14
#undef public_6bfcf29
#undef public_6bfcf2b
#undef public_6bfcf41
#undef public_6bfcf69
#undef public_6bfcf7b
#undef public_6bfcfa4
#undef public_6bfcfb1
#undef public_6bfcfc6
#undef public_6bfcfc8
#undef public_6bfcfd4
#undef public_6bfcfe7
#undef public_6bfcffd
#undef public_6bfd010
#undef public_6bfd029
#undef public_6bfd06d
#undef public_6bfd072
#undef public_6bfd07a
#undef public_6bfd07e
#undef public_6bfd08a
#undef public_6bfd0a3
#undef public_6bfd0ad
#undef public_6bfd0b7
#undef public_6bfd0c3
#undef public_6bfd0d5
#undef public_6bfd0df
#undef public_6bfd0ed
#undef public_6bfd11b
#undef public_6bfd131
#undef public_6bfd146
#undef public_6bfd154
#undef public_6bfd15e
#undef public_6bfd170
#undef public_6bfd177
#undef public_6bfd17d
#undef public_6bfd186
#undef public_6bfd192
#undef public_6bfd1a0
#undef public_6bfd1ae
#undef public_6bfd1b8
#undef public_6bfd1c2
#undef public_6bfd1d3
#undef public_6bfd1e0
#undef public_6bfd1ea
#undef public_6bfd1ee
#undef public_6bfd209
#undef public_6bfd216
#undef public_6bfd257
#undef public_6bfd263
