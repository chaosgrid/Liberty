#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6343f70);
CLANG_FORWARD_PROC_SYMBOL(public_6343fb0);
CLANG_FORWARD_PROC_SYMBOL(public_63441a0);
CLANG_FORWARD_PROC_SYMBOL(public_63449d0);
CLANG_FORWARD_PROC_SYMBOL(public_6347e00);
CLANG_FORWARD_PROC_SYMBOL(public_6347e60);
CLANG_FORWARD_PROC_SYMBOL(public_636a720);
CLANG_FORWARD_PROC_SYMBOL(public_636a860);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);
CLANG_FORWARD_PROC_SYMBOL(public_6391dae);
CLANG_FORWARD_JUMP_SYMBOL(public_639878a);

#define public_636a89d _public_636a89d
#define public_636a932 _public_636a932
#define public_636a934 _public_636a934
#define public_636a955 _public_636a955
#define public_636aa58 _public_636aa58
#define public_636aabe _public_636aabe
#define public_636ab01 _public_636ab01
#define public_636ab06 _public_636ab06
#define public_636ab08 _public_636ab08
#define public_636ab5f _public_636ab5f
#define public_636ab64 _public_636ab64
#define public_636ab66 _public_636ab66
#define public_636abb6 _public_636abb6
#define public_636abbb _public_636abbb
#define public_636abbd _public_636abbd
#define public_636ac11 _public_636ac11
#define public_636ac16 _public_636ac16
#define public_636ac18 _public_636ac18
#define public_636ac6c _public_636ac6c
#define public_636ac71 _public_636ac71
#define public_636ac73 _public_636ac73
#define public_636acc3 _public_636acc3
#define public_636acc8 _public_636acc8
#define public_636acca _public_636acca
#define public_636ace8 _public_636ace8
#define public_636ad01 _public_636ad01
#define public_636ad11 _public_636ad11
#define public_636ad3f _public_636ad3f
#define public_636ad68 _public_636ad68
#define public_636ad7d _public_636ad7d
#define public_636adc3 _public_636adc3
#define public_636adce _public_636adce
#define public_636add2 _public_636add2
#define public_636ae0e _public_636ae0e
#define public_636ae4a _public_636ae4a
#define public_636ae65 _public_636ae65
#define public_636ae7a _public_636ae7a
#define public_636ae95 _public_636ae95
#define public_636aea7 _public_636aea7
#define public_636aebf _public_636aebf
#define public_636aed9 _public_636aed9
#define public_636aee9 _public_636aee9
#define public_636af01 _public_636af01
#define public_636af05 _public_636af05
#define public_636af27 _public_636af27
#define public_636afef _public_636afef
#define public_636b012 _public_636b012
#define public_636b016 _public_636b016
#define public_636b05f _public_636b05f
#define public_636b065 _public_636b065
#define public_636b072 _public_636b072
#define public_636b091 _public_636b091
#define public_636b097 _public_636b097
#define public_636b0a4 _public_636b0a4
#define public_636b0c3 _public_636b0c3
#define public_636b0c9 _public_636b0c9
#define public_636b0d6 _public_636b0d6
#define public_636b0f5 _public_636b0f5
#define public_636b0fb _public_636b0fb
#define public_636b108 _public_636b108
#define public_636b127 _public_636b127
#define public_636b12d _public_636b12d
#define public_636b13a _public_636b13a
#define public_636b159 _public_636b159
#define public_636b15f _public_636b15f
#define public_636b16c _public_636b16c
#define public_636b171 _public_636b171

PROC_DECLARE(0x636a860, internal_636a860, public_636a860);
extern "C" NAKED register_t __cdecl internal_636a860()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_639878a @0x636a862*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_639878a
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xC0
        mov eax, dword ptr ss : [esp+0xD0]
        cmp word ptr ds : [eax+2], 1
        push ebx
        push ebp
        push esi
        mov ebx, ecx
        push edi
        mov dword ptr ss : [esp+0x2C], ebx
        jne public_636a89d
        mov eax, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax]
        jmp public_636b171
        public_636a89d : nop
        lea ebp, ds:[ebx+0x40]
        push ebp
        lea esi, ds:[ebx+0x30]
        push esi
        push eax
        mov ecx, ebx
        call public_636a720
        push 0x3F000000
        push esi
        push ebp
        lea ecx, ss:[esp+0x70]
        call public_6347e00
        fld dword ptr ss : [ebp]
        fsub dword ptr ss : [esp+0x64]
        fld dword ptr ss : [ebp+4]
        fsub dword ptr ss : [esp+0x68]
        fstp dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0x10]
        fld dword ptr ss : [ebp+8]
        mov dword ptr ss : [esp+0xA4], ecx
        fsub dword ptr ss : [esp+0x6C]
        lea ecx, ss:[esp+0xA0]
        fstp dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0xA8], edx
        fstp dword ptr ss : [esp+0xA0]
        call public_6347e60
        fstp dword ptr ss : [esp+0x24]
        push 0x28
        fld dword ptr ds : [public_63ee788]
        fmul dword ptr ss : [esp+0x28]
        fstp dword ptr ss : [esp+0x1C]
        call public_6391d9c
        mov esi, eax
        add esp, 4
        test esi, esi
        je public_636a932
        mov ecx, 0xA
        xor eax, eax
        mov edi, esi
        rep stosd
        jmp public_636a934
        public_636a932 : nop
        xor esi, esi
        public_636a934 : nop
        mov ax, word ptr ds : [ebx+0x8E]
        cmp ax, word ptr ds : [ebx+0x8C]
        lea edi, ds:[ebx+0x8C]
        mov dword ptr ss : [esp+0x58], esi
        jb public_636a955
        mov ecx, edi
        call public_63441a0
        public_636a955 : nop
        mov edx, dword ptr ds : [edi+4]
        mov eax, dword ptr ss : [esp+0x24]
        xor ecx, ecx
        mov cx, word ptr ds : [edi+2]
        mov dword ptr ds : [edx+ecx*4], esi
        inc word ptr ds : [edi+2]
        mov dword ptr ds : [esi+0x14], eax
        mov dword ptr ds : [esi], 0
        mov edx, dword ptr ss : [esp+0x64]
        lea ecx, ds:[esi+4]
        mov dword ptr ds : [ecx], edx
        mov eax, dword ptr ss : [esp+0x68]
        mov dword ptr ds : [ecx+4], eax
        mov edx, dword ptr ss : [esp+0x6C]
        mov dword ptr ds : [ecx+8], edx
        mov eax, dword ptr ss : [esp+0x70]
        mov dword ptr ds : [ecx+0xC], eax
        mov dword ptr ds : [esi+0x1C], 0
        fld dword ptr ss : [ebp]
        fsub dword ptr ss : [esp+0x64]
        fdiv dword ptr ss : [esp+0x18]
        call public_6391dae
        inc al
        mov byte ptr ds : [esi+0x18], al
        fld dword ptr ds : [ebx+0x44]
        fsub dword ptr ss : [esp+0x68]
        fdiv dword ptr ss : [esp+0x18]
        call public_6391dae
        inc al
        mov byte ptr ds : [esi+0x19], al
        fld dword ptr ds : [ebx+0x48]
        fsub dword ptr ss : [esp+0x6C]
        fdiv dword ptr ss : [esp+0x18]
        call public_6391dae
        mov ebp, dword ptr ss : [esp+0xE0]
        inc al
        mov edi, 2
        mov byte ptr ds : [esi+0x1A], al
        cmp word ptr ss : [ebp+2], di
        jne public_636aabe
        xor eax, eax
        mov word ptr ss : [esp+0x1C], ax
        mov word ptr ss : [esp+0x1E], ax
        mov dword ptr ss : [esp+0x20], eax
        mov dword ptr ss : [esp+0xD8], eax
        mov word ptr ss : [esp+0x10], ax
        mov word ptr ss : [esp+0x12], ax
        mov dword ptr ss : [esp+0x14], eax
        mov ecx, dword ptr ss : [ebp+4]
        mov edi, dword ptr ds : [ecx]
        lea ecx, ss:[esp+0x1C]
        mov byte ptr ss : [esp+0xD8], 1
        call public_63441a0
        mov edx, dword ptr ss : [esp+0x1E]
        mov eax, dword ptr ss : [esp+0x20]
        and edx, 0xFFFF
        mov dword ptr ds : [eax+edx*4], edi
        inc word ptr ss : [esp+0x1E]
        mov dx, word ptr ss : [esp+0x12]
        cmp dx, word ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [ebp+4]
        mov edi, dword ptr ds : [ecx+4]
        jb public_636aa58
        lea ecx, ss:[esp+0x10]
        call public_63441a0
        public_636aa58 : nop
        mov eax, dword ptr ss : [esp+0x12]
        mov ecx, dword ptr ss : [esp+0x14]
        and eax, 0xFFFF
        mov dword ptr ds : [ecx+eax*4], edi
        inc word ptr ss : [esp+0x12]
        lea edx, ss:[esp+0x1C]
        push edx
        mov ecx, ebx
        call public_636a860
        mov dword ptr ds : [esi+0x20], eax
        lea eax, ss:[esp+0x10]
        push eax
        mov ecx, ebx
        call public_636a860
        mov dword ptr ds : [esi+0x24], eax
        mov eax, dword ptr ds : [ebx+8]
        inc eax
        lea ecx, ss:[esp+0x10]
        mov dword ptr ds : [ebx+8], eax
        mov byte ptr ss : [esp+0xD8], 0
        call public_63449d0
        lea ecx, ss:[esp+0x1C]
        mov dword ptr ss : [esp+0xD8], 0xFFFFFFFF
        call public_63449d0
        mov eax, esi
        jmp public_636b171
        public_636aabe : nop
        push 8
        call public_6391d9c
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x10], esi
        mov dword ptr ss : [esp+0xD8], edi
        xor edi, edi
        cmp esi, edi
        je public_636ab06
        xor eax, eax
        mov ax, word ptr ss : [ebp+2]
        mov word ptr ds : [esi], ax
        mov word ptr ds : [esi+2], di
        cmp eax, edi
        je public_636ab01
        lea ecx, ds:[eax*4]
        push ecx
        call public_6343f70
        add esp, 4
        mov dword ptr ds : [esi+4], eax
        jmp public_636ab08
        public_636ab01 : nop
        mov dword ptr ds : [esi+4], edi
        jmp public_636ab08
        public_636ab06 : nop
        xor esi, esi
        public_636ab08 : nop
        or ebx, 0xFFFFFFFF
        push 8
        mov dword ptr ss : [esp+0x44], esi
        mov dword ptr ss : [esp+0xDC], ebx
        mov dword ptr ss : [esp+0x38], esi
        call public_6391d9c
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x10], esi
        cmp esi, edi
        mov dword ptr ss : [esp+0xD8], 3
        je public_636ab64
        xor eax, eax
        mov ax, word ptr ss : [ebp+2]
        mov word ptr ds : [esi], ax
        mov word ptr ds : [esi+2], di
        cmp eax, edi
        je public_636ab5f
        lea edx, ds:[eax*4]
        push edx
        call public_6343f70
        add esp, 4
        mov dword ptr ds : [esi+4], eax
        jmp public_636ab66
        public_636ab5f : nop
        mov dword ptr ds : [esi+4], edi
        jmp public_636ab66
        public_636ab64 : nop
        xor esi, esi
        public_636ab66 : nop
        push 8
        mov dword ptr ss : [esp+0x58], esi
        mov dword ptr ss : [esp+0xDC], ebx
        mov dword ptr ss : [esp+0x3C], esi
        call public_6391d9c
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x10], esi
        cmp esi, edi
        mov dword ptr ss : [esp+0xD8], 4
        je public_636abbb
        xor eax, eax
        mov ax, word ptr ss : [ebp+2]
        mov word ptr ds : [esi], ax
        mov word ptr ds : [esi+2], di
        cmp eax, edi
        je public_636abb6
        shl eax, 2
        push eax
        call public_6343f70
        add esp, 4
        mov dword ptr ds : [esi+4], eax
        jmp public_636abbd
        public_636abb6 : nop
        mov dword ptr ds : [esi+4], edi
        jmp public_636abbd
        public_636abbb : nop
        xor esi, esi
        public_636abbd : nop
        push 8
        mov dword ptr ss : [esp+0x34], esi
        mov dword ptr ss : [esp+0xDC], ebx
        mov dword ptr ss : [esp+0x40], esi
        call public_6391d9c
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x10], esi
        cmp esi, edi
        mov dword ptr ss : [esp+0xD8], 5
        je public_636ac16
        xor eax, eax
        mov ax, word ptr ss : [ebp+2]
        mov word ptr ds : [esi], ax
        mov word ptr ds : [esi+2], di
        cmp eax, edi
        je public_636ac11
        lea ecx, ds:[eax*4]
        push ecx
        call public_6343f70
        add esp, 4
        mov dword ptr ds : [esi+4], eax
        jmp public_636ac18
        public_636ac11 : nop
        mov dword ptr ds : [esi+4], edi
        jmp public_636ac18
        public_636ac16 : nop
        xor esi, esi
        public_636ac18 : nop
        push 8
        mov dword ptr ss : [esp+0x64], esi
        mov dword ptr ss : [esp+0xDC], ebx
        mov dword ptr ss : [esp+0x48], esi
        call public_6391d9c
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x10], esi
        cmp esi, edi
        mov dword ptr ss : [esp+0xD8], 6
        je public_636ac71
        xor eax, eax
        mov ax, word ptr ss : [ebp+2]
        mov word ptr ds : [esi], ax
        mov word ptr ds : [esi+2], di
        cmp eax, edi
        je public_636ac6c
        lea edx, ds:[eax*4]
        push edx
        call public_6343f70
        add esp, 4
        mov dword ptr ds : [esi+4], eax
        jmp public_636ac73
        public_636ac6c : nop
        mov dword ptr ds : [esi+4], edi
        jmp public_636ac73
        public_636ac71 : nop
        xor esi, esi
        public_636ac73 : nop
        push 8
        mov dword ptr ss : [esp+0x20], esi
        mov dword ptr ss : [esp+0xDC], ebx
        mov dword ptr ss : [esp+0x4C], esi
        call public_6391d9c
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x10], esi
        cmp esi, edi
        mov dword ptr ss : [esp+0xD8], 7
        je public_636acc8
        xor eax, eax
        mov ax, word ptr ss : [ebp+2]
        mov word ptr ds : [esi], ax
        mov word ptr ds : [esi+2], di
        cmp eax, edi
        je public_636acc3
        shl eax, 2
        push eax
        call public_6343f70
        add esp, 4
        mov dword ptr ds : [esi+4], eax
        jmp public_636acca
        public_636acc3 : nop
        mov dword ptr ds : [esi+4], edi
        jmp public_636acca
        public_636acc8 : nop
        xor esi, esi
        public_636acca : nop
        mov dword ptr ss : [esp+0x10], esi
        mov dword ptr ss : [esp+0xD8], ebx
        mov ebx, dword ptr ss : [esp+0x2C]
        mov dword ptr ss : [esp+0x4C], esi
        mov esi, dword ptr ss : [esp+0xE0]
        xor ebp, ebp
        xor edi, edi
        public_636ace8 : nop
        fld dword ptr ds : [public_63a53d4]
        xor ecx, ecx
        mov cx, word ptr ds : [esi+2]
        cmp ecx, edi
        mov dword ptr ss : [esp+0x28], ecx
        jle public_636ad11
        mov eax, dword ptr ds : [esi+4]
        mov edx, ecx
        public_636ad01 : nop
        mov ebx, dword ptr ds : [eax]
        fadd dword ptr ds : [ebx+ebp*4+4]
        add eax, 4
        dec edx
        jne public_636ad01
        mov ebx, dword ptr ss : [esp+0x2C]
        public_636ad11 : nop
        cmp ecx, edi
        fild dword ptr ss : [esp+0x28]
        mov dword ptr ss : [esp+0x24], 1
        mov dword ptr ss : [esp+0x18], edi
        fdivr st, st(1)
        fstp dword ptr ss : [esp+0x5C]
        fstp st(0)
        jle public_636af27
        fld dword ptr ss : [esp+0x5C]
        fsub dword ptr ds : [public_63a5610]
        fstp dword ptr ss : [esp+0x50]
        public_636ad3f : nop
        mov edx, dword ptr ds : [esi+4]
        mov ebx, dword ptr ds : [edx+edi*4]
        fld dword ptr ds : [ebx+ebp*4+4]
        fcomp dword ptr ss : [esp+0x50]
        fnstsw ax
        test ah, 1
        je public_636ad7d
        mov esi, dword ptr ss : [esp+ebp*4+0x34]
        mov cx, word ptr ds : [esi+2]
        cmp cx, word ptr ds : [esi]
        jb public_636ad68
        mov ecx, esi
        call public_63441a0
        public_636ad68 : nop
        mov eax, dword ptr ds : [esi+4]
        xor edx, edx
        mov dx, word ptr ds : [esi+2]
        mov dword ptr ds : [eax+edx*4], ebx
        inc word ptr ds : [esi+2]
        jmp public_636af05
        public_636ad7d : nop
        fld dword ptr ss : [esp+0x5C]
        fadd dword ptr ds : [public_63a5610]
        fstp dword ptr ss : [esp+0x28]
        fld dword ptr ds : [ebx+ebp*4+4]
        fcomp dword ptr ss : [esp+0x28]
        fnstsw ax
        test ah, 0x41
        jne public_636adc3
        mov esi, dword ptr ss : [esp+ebp*4+0x44]
        mov cx, word ptr ds : [esi+2]
        cmp cx, word ptr ds : [esi]
        jb public_636ad68
        mov ecx, esi
        call public_63441a0
        mov eax, dword ptr ds : [esi+4]
        xor edx, edx
        mov dx, word ptr ds : [esi+2]
        mov dword ptr ds : [eax+edx*4], ebx
        inc word ptr ds : [esi+2]
        jmp public_636af05
        public_636adc3 : nop
        dec ecx
        cmp edi, ecx
        jne public_636adce
        mov edx, dword ptr ds : [edx+edi*4-4]
        jmp public_636add2
        public_636adce : nop
        mov edx, dword ptr ds : [edx+edi*4+4]
        public_636add2 : nop
        fld dword ptr ds : [edx+ebp*4+4]
        fcomp dword ptr ss : [esp+0x50]
        fnstsw ax
        test ah, 1
        je public_636ae0e
        mov esi, dword ptr ss : [esp+ebp*4+0x44]
        mov cx, word ptr ds : [esi+2]
        cmp cx, word ptr ds : [esi]
        jb public_636ad68
        mov ecx, esi
        call public_63441a0
        mov eax, dword ptr ds : [esi+4]
        xor edx, edx
        mov dx, word ptr ds : [esi+2]
        mov dword ptr ds : [eax+edx*4], ebx
        inc word ptr ds : [esi+2]
        jmp public_636af05
        public_636ae0e : nop
        fld dword ptr ds : [edx+ebp*4+4]
        fcomp dword ptr ss : [esp+0x28]
        fnstsw ax
        test ah, 0x41
        jne public_636ae4a
        mov esi, dword ptr ss : [esp+ebp*4+0x34]
        mov cx, word ptr ds : [esi+2]
        cmp cx, word ptr ds : [esi]
        jb public_636ad68
        mov ecx, esi
        call public_63441a0
        mov eax, dword ptr ds : [esi+4]
        xor edx, edx
        mov dx, word ptr ds : [esi+2]
        mov dword ptr ds : [eax+edx*4], ebx
        inc word ptr ds : [esi+2]
        jmp public_636af05
        public_636ae4a : nop
        mov edi, dword ptr ss : [esp+ebp*4+0x34]
        cmp word ptr ds : [edi+2], 0
        jne public_636ae7a
        mov cx, word ptr ds : [edi+2]
        cmp cx, word ptr ds : [edi]
        jb public_636ae65
        mov ecx, edi
        call public_63441a0
        public_636ae65 : nop
        mov eax, dword ptr ds : [edi+4]
        xor edx, edx
        mov dx, word ptr ds : [edi+2]
        mov dword ptr ds : [eax+edx*4], ebx
        inc word ptr ds : [edi+2]
        jmp public_636af01
        public_636ae7a : nop
        mov esi, dword ptr ss : [esp+ebp*4+0x44]
        cmp word ptr ds : [esi+2], 0
        jne public_636aea7
        mov cx, word ptr ds : [esi+2]
        cmp cx, word ptr ds : [esi]
        jb public_636ae95
        mov ecx, esi
        call public_63441a0
        public_636ae95 : nop
        mov eax, dword ptr ds : [esi+4]
        xor edx, edx
        mov dx, word ptr ds : [esi+2]
        mov dword ptr ds : [eax+edx*4], ebx
        inc word ptr ds : [esi+2]
        jmp public_636af01
        public_636aea7 : nop
        mov eax, dword ptr ss : [esp+0x24]
        test eax, eax
        je public_636aed9
        mov cx, word ptr ds : [edi+2]
        cmp cx, word ptr ds : [edi]
        jb public_636aebf
        mov ecx, edi
        call public_63441a0
        public_636aebf : nop
        mov eax, dword ptr ds : [edi+4]
        xor edx, edx
        mov dx, word ptr ds : [edi+2]
        mov dword ptr ss : [esp+0x24], 0
        mov dword ptr ds : [eax+edx*4], ebx
        inc word ptr ds : [edi+2]
        jmp public_636af01
        public_636aed9 : nop
        mov cx, word ptr ds : [esi+2]
        cmp cx, word ptr ds : [esi]
        jb public_636aee9
        mov ecx, esi
        call public_63441a0
        public_636aee9 : nop
        mov eax, dword ptr ds : [esi+4]
        xor edx, edx
        mov dx, word ptr ds : [esi+2]
        mov dword ptr ss : [esp+0x24], 1
        mov dword ptr ds : [eax+edx*4], ebx
        inc word ptr ds : [esi+2]
        public_636af01 : nop
        mov edi, dword ptr ss : [esp+0x18]
        public_636af05 : nop
        mov edx, dword ptr ss : [esp+0xE0]
        xor ecx, ecx
        mov cx, word ptr ds : [edx+2]
        inc edi
        mov dword ptr ss : [esp+0x18], edi
        mov esi, edx
        cmp edi, ecx
        jl public_636ad3f
        mov ebx, dword ptr ss : [esp+0x2C]
        xor edi, edi
        public_636af27 : nop
        mov edx, dword ptr ss : [esp+ebp*4+0x34]
        lea eax, ss:[esp+0x80]
        push eax
        lea ecx, ss:[esp+0xB4]
        push ecx
        push edx
        mov ecx, ebx
        call public_636a720
        mov edx, dword ptr ss : [esp+ebp*4+0x44]
        lea eax, ss:[esp+0x90]
        push eax
        lea ecx, ss:[esp+0xC4]
        push ecx
        push edx
        mov ecx, ebx
        call public_636a720
        fld dword ptr ss : [esp+0x80]
        fsub dword ptr ss : [esp+0xB0]
        inc ebp
        cmp ebp, 3
        fabs 
        fld dword ptr ss : [esp+0x84]
        fsub dword ptr ss : [esp+0xB4]
        fabs 
        fld dword ptr ss : [esp+0x88]
        fsub dword ptr ss : [esp+0xB8]
        fabs 
        fld dword ptr ss : [esp+0x90]
        fsub dword ptr ss : [esp+0xC0]
        fabs 
        fld dword ptr ss : [esp+0x94]
        fsub dword ptr ss : [esp+0xC4]
        fabs 
        fld dword ptr ss : [esp+0x98]
        fsub dword ptr ss : [esp+0xC8]
        fabs 
        fmul st, st(1)
        fmul st, st(2)
        fxch st(3)
        fmul st, st(4)
        fmul st, st(5)
        faddp st(3), st
        fxch st(2)
        fstp dword ptr ss : [esp+ebp*4+0x70]
        fxch 
        fstp st(0)
        fstp st(0)
        fstp st(0)
        fstp st(0)
        jl public_636ace8
        fld dword ptr ds : [public_63a58cc]
        xor esi, esi
        xor ecx, ecx
        public_636afef : nop
        fcom dword ptr ss : [esp+ecx*4+0x74]
        fnstsw ax
        test ah, 0x41
        jne public_636b016
        mov eax, dword ptr ss : [esp+ecx*4+0x34]
        fstp st(0)
        cmp word ptr ds : [eax+2], di
        je public_636b012
        mov edx, dword ptr ss : [esp+ecx*4+0x44]
        cmp word ptr ds : [edx+2], di
        je public_636b012
        mov esi, ecx
        public_636b012 : nop
        fld dword ptr ss : [esp+ecx*4+0x74]
        public_636b016 : nop
        inc ecx
        cmp ecx, 3
        jl public_636afef
        mov eax, dword ptr ss : [esp+esi*4+0x34]
        fstp st(0)
        push eax
        mov ecx, ebx
        call public_636a860
        mov ecx, dword ptr ss : [esp+esi*4+0x44]
        mov ebp, dword ptr ss : [esp+0x58]
        push ecx
        mov ecx, ebx
        mov dword ptr ss : [ebp+0x20], eax
        call public_636a860
        mov esi, dword ptr ss : [esp+0x40]
        cmp esi, edi
        mov dword ptr ss : [ebp+0x24], eax
        je public_636b072
        mov eax, dword ptr ds : [esi+4]
        lea edx, ds:[esi+8]
        cmp eax, edx
        je public_636b065
        cmp eax, edi
        je public_636b05f
        push eax
        call public_6343fb0
        add esp, 4
        public_636b05f : nop
        mov dword ptr ds : [esi+4], edi
        mov word ptr ds : [esi], di
        public_636b065 : nop
        push esi
        mov word ptr ds : [esi+2], di
        call public_6391d5a
        add esp, 4
        public_636b072 : nop
        mov esi, dword ptr ss : [esp+0x54]
        cmp esi, edi
        je public_636b0a4
        mov eax, dword ptr ds : [esi+4]
        lea ecx, ds:[esi+8]
        cmp eax, ecx
        je public_636b097
        cmp eax, edi
        je public_636b091
        push eax
        call public_6343fb0
        add esp, 4
        public_636b091 : nop
        mov dword ptr ds : [esi+4], edi
        mov word ptr ds : [esi], di
        public_636b097 : nop
        push esi
        mov word ptr ds : [esi+2], di
        call public_6391d5a
        add esp, 4
        public_636b0a4 : nop
        mov esi, dword ptr ss : [esp+0x30]
        cmp esi, edi
        je public_636b0d6
        mov eax, dword ptr ds : [esi+4]
        lea edx, ds:[esi+8]
        cmp eax, edx
        je public_636b0c9
        cmp eax, edi
        je public_636b0c3
        push eax
        call public_6343fb0
        add esp, 4
        public_636b0c3 : nop
        mov dword ptr ds : [esi+4], edi
        mov word ptr ds : [esi], di
        public_636b0c9 : nop
        push esi
        mov word ptr ds : [esi+2], di
        call public_6391d5a
        add esp, 4
        public_636b0d6 : nop
        mov esi, dword ptr ss : [esp+0x60]
        cmp esi, edi
        je public_636b108
        mov eax, dword ptr ds : [esi+4]
        lea ecx, ds:[esi+8]
        cmp eax, ecx
        je public_636b0fb
        cmp eax, edi
        je public_636b0f5
        push eax
        call public_6343fb0
        add esp, 4
        public_636b0f5 : nop
        mov dword ptr ds : [esi+4], edi
        mov word ptr ds : [esi], di
        public_636b0fb : nop
        push esi
        mov word ptr ds : [esi+2], di
        call public_6391d5a
        add esp, 4
        public_636b108 : nop
        mov esi, dword ptr ss : [esp+0x1C]
        cmp esi, edi
        je public_636b13a
        mov eax, dword ptr ds : [esi+4]
        lea edx, ds:[esi+8]
        cmp eax, edx
        je public_636b12d
        cmp eax, edi
        je public_636b127
        push eax
        call public_6343fb0
        add esp, 4
        public_636b127 : nop
        mov dword ptr ds : [esi+4], edi
        mov word ptr ds : [esi], di
        public_636b12d : nop
        push esi
        mov word ptr ds : [esi+2], di
        call public_6391d5a
        add esp, 4
        public_636b13a : nop
        mov esi, dword ptr ss : [esp+0x10]
        cmp esi, edi
        je public_636b16c
        mov eax, dword ptr ds : [esi+4]
        lea ecx, ds:[esi+8]
        cmp eax, ecx
        je public_636b15f
        cmp eax, edi
        je public_636b159
        push eax
        call public_6343fb0
        add esp, 4
        public_636b159 : nop
        mov dword ptr ds : [esi+4], edi
        mov word ptr ds : [esi], di
        public_636b15f : nop
        push esi
        mov word ptr ds : [esi+2], di
        call public_6391d5a
        add esp, 4
        public_636b16c : nop
        inc dword ptr ds : [ebx+8]
        mov eax, ebp
        public_636b171 : nop
        mov ecx, dword ptr ss : [esp+0xD0]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0xCC
        ret 4
        UNREACHABLE_TRAP(0x636a860)
    }
}

#undef public_636a89d
#undef public_636a932
#undef public_636a934
#undef public_636a955
#undef public_636aa58
#undef public_636aabe
#undef public_636ab01
#undef public_636ab06
#undef public_636ab08
#undef public_636ab5f
#undef public_636ab64
#undef public_636ab66
#undef public_636abb6
#undef public_636abbb
#undef public_636abbd
#undef public_636ac11
#undef public_636ac16
#undef public_636ac18
#undef public_636ac6c
#undef public_636ac71
#undef public_636ac73
#undef public_636acc3
#undef public_636acc8
#undef public_636acca
#undef public_636ace8
#undef public_636ad01
#undef public_636ad11
#undef public_636ad3f
#undef public_636ad68
#undef public_636ad7d
#undef public_636adc3
#undef public_636adce
#undef public_636add2
#undef public_636ae0e
#undef public_636ae4a
#undef public_636ae65
#undef public_636ae7a
#undef public_636ae95
#undef public_636aea7
#undef public_636aebf
#undef public_636aed9
#undef public_636aee9
#undef public_636af01
#undef public_636af05
#undef public_636af27
#undef public_636afef
#undef public_636b012
#undef public_636b016
#undef public_636b05f
#undef public_636b065
#undef public_636b072
#undef public_636b091
#undef public_636b097
#undef public_636b0a4
#undef public_636b0c3
#undef public_636b0c9
#undef public_636b0d6
#undef public_636b0f5
#undef public_636b0fb
#undef public_636b108
#undef public_636b127
#undef public_636b12d
#undef public_636b13a
#undef public_636b159
#undef public_636b15f
#undef public_636b16c
#undef public_636b171
