#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6206020);
CLANG_FORWARD_PROC_SYMBOL(public_6206ab0);
CLANG_FORWARD_PROC_SYMBOL(public_6206be0);
CLANG_FORWARD_PROC_SYMBOL(public_6206c10);
CLANG_FORWARD_PROC_SYMBOL(public_6206c40);
CLANG_FORWARD_PROC_SYMBOL(public_6208a40);
CLANG_FORWARD_PROC_SYMBOL(public_6208b00);
CLANG_FORWARD_PROC_SYMBOL(public_6208b50);
CLANG_FORWARD_PROC_SYMBOL(public_6246188);

#define public_6206103 _public_6206103
#define public_620610d _public_620610d
#define public_620622f _public_620622f
#define public_620623b _public_620623b
#define public_62062c7 _public_62062c7
#define public_62062d5 _public_62062d5
#define public_62062de _public_62062de
#define public_62063a0 _public_62063a0
#define public_62063ac _public_62063ac
#define public_6206438 _public_6206438
#define public_6206446 _public_6206446
#define public_620644b _public_620644b
#define public_6206515 _public_6206515
#define public_620658f _public_620658f
#define public_6206599 _public_6206599
#define public_62065ef _public_62065ef
#define public_6206641 _public_6206641
#define public_620669b _public_620669b
#define public_6206703 _public_6206703
#define public_6206756 _public_6206756
#define public_62067aa _public_62067aa
#define public_62067c1 _public_62067c1
#define public_62067e5 _public_62067e5
#define public_620680c _public_620680c

PROC_DECLARE(0x6206020, internal_6206020, public_6206020);
extern "C" NAKED register_t __cdecl internal_6206020()
{
    __asm
    {
        sub esp, 0x2C
        mov eax, dword ptr ss : [esp+0x30]
        push ebx
        push ebp
        push esi
        fld dword ptr ds : [eax+0x2C]
        fmul dword ptr ds : [eax+0x24]
        mov esi, ecx
        push edi
        mov eax, dword ptr ds : [esi+0xC]
        fstp dword ptr ss : [esp+0x40]
        mov ecx, dword ptr ds : [eax+0xF0]
        mov edi, dword ptr ds : [eax+0x90]
        mov eax, dword ptr ds : [eax+0x8C]
        push edi
        mov ecx, dword ptr ds : [ecx+0x5C]
        push eax
        push ecx
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x1C]
        mov eax, dword ptr ds : [esi+0xC]
        mov edi, dword ptr ss : [esp+0x40]
        fstp dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [eax+0xF0]
        mov eax, dword ptr ds : [eax+0x8C]
        push edi
        push eax
        mov ecx, dword ptr ds : [ecx+0x78]
        push ecx
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x1C]
        mov eax, dword ptr ds : [esi+0xC]
        push edi
        fmul dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [eax+0xF0]
        mov eax, dword ptr ds : [eax+0x8C]
        push eax
        mov ecx, dword ptr ds : [ecx+0x7C]
        fstp dword ptr ss : [esp+0x48]
        mov edx, dword ptr ds : [ecx]
        push ecx
        call dword ptr ds : [edx+0x1C]
        fmul dword ptr ss : [esp+0x40]
        mov eax, dword ptr ds : [esi+0xC]
        push edi
        mov ecx, dword ptr ds : [eax+0xF0]
        mov eax, dword ptr ds : [eax+0x8C]
        fmul dword ptr ds : [public_624bab8]
        mov ecx, dword ptr ds : [ecx+0x70]
        push eax
        push ecx
        mov edx, dword ptr ds : [ecx]
        fstp dword ptr ss : [esp+0x1C]
        call dword ptr ds : [edx+0x1C]
        mov eax, dword ptr ds : [esi+0xC]
        push edi
        fstp dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [eax+0xF0]
        mov eax, dword ptr ds : [eax+0x8C]
        push eax
        lea eax, ss:[esp+0x20]
        mov ecx, dword ptr ds : [ecx+0x74]
        push eax
        push ecx
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x1C]
        mov eax, dword ptr ds : [esi+0xC]
        mov ecx, dword ptr ds : [esi+8]
        and ecx, 1
        cmp cl, byte ptr ds : [eax+0xE1]
        jne public_6206103
        mov edx, dword ptr ds : [eax+0xC8]
        mov dword ptr ss : [esp+0x40], edx
        jmp public_620610d
        public_6206103 : nop
        mov eax, dword ptr ds : [eax+0xD0]
        mov dword ptr ss : [esp+0x40], eax
        public_620610d : nop
        fld dword ptr ss : [esp+0x14]
        fmul dword ptr ds : [public_624babc]
        call public_6246188
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ds : [public_624babc]
        mov edi, eax
        shl edi, 8
        call public_6246188
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ds : [public_624babc]
        and eax, 0xFF
        or edi, eax
        shl edi, 8
        call public_6246188
        fld dword ptr ss : [esp+0x20]
        fmul dword ptr ds : [public_624babc]
        and eax, 0xFF
        or edi, eax
        shl edi, 8
        call public_6246188
        and eax, 0xFF
        or edi, eax
        mov al, byte ptr ds : [public_625580c]
        test al, al
        je public_62062d5
        fld dword ptr ds : [esi+0x10]
        fstp dword ptr ss : [esp+0x18]
        fld dword ptr ds : [esi+0x1C]
        fstp dword ptr ss : [esp+0x1C]
        fld dword ptr ds : [esi+0x28]
        fstp dword ptr ss : [esp+0x20]
        fld dword ptr ss : [esp+0x10]
        push ecx
        lea ecx, ss:[esp+0x1C]
        fstp dword ptr ss : [esp]
        lea edx, ss:[esp+0x34]
        push ecx
        push edx
        call public_6206c40
        mov ebp, dword ptr ss : [esp+0x50]
        lea eax, ss:[esp+0x3C]
        push eax
        lea ecx, ss:[esp+0x28]
        push ebp
        push ecx
        call public_6206c10
        mov edx, dword ptr ds : [public_6257930]
        mov eax, dword ptr ds : [public_6257944]
        and edx, 0xFFFF
        add esp, 0x18
        cmp edx, eax
        jg public_620622f
        fld dword ptr ss : [esp+0x40]
        mov eax, dword ptr ds : [esi+0xC]
        sub esp, 8
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [eax+0xC4]
        fstp dword ptr ss : [esp]
        fld dword ptr ss : [esp+0x28]
        push edi
        mov ecx, dword ptr ds : [public_625793c]
        sub esp, 0xC
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x34]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x30]
        fstp dword ptr ss : [esp]
        call public_6208a40
        mov edx, dword ptr ds : [public_625793c]
        mov ax, word ptr ds : [public_6257930]
        add edx, 0x18
        mov word ptr ss : [esp+0x18], ax
        inc ax
        mov dword ptr ds : [public_625793c], edx
        mov word ptr ds : [public_6257930], ax
        jmp public_620623b
        public_620622f : nop
        mov cx, word ptr ds : [public_6257944]
        mov word ptr ss : [esp+0x18], cx
        public_620623b : nop
        lea edx, ss:[esp+0x30]
        lea eax, ss:[esp+0x24]
        push edx
        push ebp
        push eax
        call public_6206be0
        mov ecx, dword ptr ds : [public_6257930]
        mov eax, dword ptr ds : [public_6257944]
        and ecx, 0xFFFF
        add esp, 0xC
        cmp ecx, eax
        jg public_62062c7
        fld dword ptr ss : [esp+0x40]
        mov edx, dword ptr ds : [esi+0xC]
        sub esp, 8
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [edx+0xCC]
        fstp dword ptr ss : [esp]
        fld dword ptr ss : [esp+0x34]
        push edi
        mov ecx, dword ptr ds : [public_625793c]
        sub esp, 0xC
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x40]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x3C]
        fstp dword ptr ss : [esp]
        call public_6208a40
        mov edx, dword ptr ds : [public_625793c]
        mov ax, word ptr ds : [public_6257930]
        add edx, 0x18
        mov bx, ax
        inc ax
        mov dword ptr ds : [public_625793c], edx
        mov word ptr ss : [esp+0x1A], bx
        mov word ptr ds : [public_6257930], ax
        jmp public_62062de
        public_62062c7 : nop
        mov bx, word ptr ds : [public_6257944]
        mov word ptr ss : [esp+0x1A], bx
        jmp public_62062de
        public_62062d5 : nop
        mov bx, word ptr ss : [esp+0x1A]
        mov ebp, dword ptr ss : [esp+0x44]
        public_62062de : nop
        mov al, byte ptr ds : [public_6255808]
        test al, al
        je public_6206446
        fld dword ptr ds : [esi+0x14]
        fld dword ptr ds : [esi+0x20]
        fld dword ptr ds : [esi+0x2C]
        fmul dword ptr ss : [esp+0x10]
        sub esp, 0xC
        lea ecx, ss:[esp+0x3C]
        fstp dword ptr ss : [esp+8]
        fmul dword ptr ss : [esp+0x1C]
        fstp dword ptr ss : [esp+4]
        fmul dword ptr ss : [esp+0x1C]
        fstp dword ptr ss : [esp]
        call public_6206ab0
        lea eax, ss:[esp+0x30]
        lea ecx, ss:[esp+0x24]
        push eax
        push ebp
        push ecx
        call public_6206c10
        mov edx, dword ptr ds : [public_6257930]
        mov eax, dword ptr ds : [public_6257944]
        and edx, 0xFFFF
        add esp, 0xC
        cmp edx, eax
        jg public_62063a0
        fld dword ptr ss : [esp+0x40]
        mov eax, dword ptr ds : [esi+0xC]
        sub esp, 8
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [eax+0xC4]
        fstp dword ptr ss : [esp]
        fld dword ptr ss : [esp+0x34]
        push edi
        mov ecx, dword ptr ds : [public_625793c]
        sub esp, 0xC
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x40]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x3C]
        fstp dword ptr ss : [esp]
        call public_6208a40
        mov edx, dword ptr ds : [public_625793c]
        mov ax, word ptr ds : [public_6257930]
        add edx, 0x18
        mov word ptr ss : [esp+0x1C], ax
        inc ax
        mov dword ptr ds : [public_625793c], edx
        mov word ptr ds : [public_6257930], ax
        jmp public_62063ac
        public_62063a0 : nop
        mov cx, word ptr ds : [public_6257944]
        mov word ptr ss : [esp+0x1C], cx
        public_62063ac : nop
        lea edx, ss:[esp+0x30]
        lea eax, ss:[esp+0x24]
        push edx
        push ebp
        push eax
        call public_6206be0
        mov ecx, dword ptr ds : [public_6257930]
        mov eax, dword ptr ds : [public_6257944]
        and ecx, 0xFFFF
        add esp, 0xC
        cmp ecx, eax
        jg public_6206438
        fld dword ptr ss : [esp+0x40]
        mov edx, dword ptr ds : [esi+0xC]
        sub esp, 8
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [edx+0xCC]
        fstp dword ptr ss : [esp]
        fld dword ptr ss : [esp+0x34]
        push edi
        mov ecx, dword ptr ds : [public_625793c]
        sub esp, 0xC
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x40]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x3C]
        fstp dword ptr ss : [esp]
        call public_6208a40
        mov edx, dword ptr ds : [public_625793c]
        mov ax, word ptr ds : [public_6257930]
        add edx, 0x18
        mov bp, ax
        inc ax
        mov dword ptr ds : [public_625793c], edx
        mov word ptr ss : [esp+0x1E], bp
        mov word ptr ds : [public_6257930], ax
        jmp public_620644b
        public_6206438 : nop
        mov bp, word ptr ds : [public_6257944]
        mov word ptr ss : [esp+0x1E], bp
        jmp public_620644b
        public_6206446 : nop
        mov bp, word ptr ss : [esp+0x1E]
        public_620644b : nop
        mov ax, word ptr ds : [esi]
        cmp ax, 0xFFFF
        je public_620680c
        mov ecx, dword ptr ds : [esi+0xC]
        mov edx, dword ptr ds : [ecx+0xF0]
        mov ecx, dword ptr ds : [edx+0x60]
        and ecx, 2
        cmp cl, 2
        jne public_62067c1
        mov eax, dword ptr ss : [esp+0x44]
        lea edx, ds:[esi+0x40]
        push edx
        lea ecx, ss:[esp+0x28]
        push eax
        push ecx
        call public_6206be0
        fld dword ptr ss : [esp+0x38]
        fmul dword ptr ds : [public_624bab8]
        lea ecx, ss:[esp+0x3C]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x34]
        fmul dword ptr ds : [public_624bab8]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x30]
        fmul dword ptr ds : [public_624bab8]
        fstp dword ptr ss : [esp]
        call public_6206ab0
        mov edx, dword ptr ds : [public_6257930]
        mov eax, dword ptr ds : [public_6257944]
        and edx, 0xFFFF
        cmp edx, eax
        jg public_6206515
        fld dword ptr ss : [esp+0x38]
        push 0x3F000000
        push 0x3F000000
        push edi
        mov ecx, dword ptr ds : [public_625793c]
        sub esp, 0xC
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x4C]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x48]
        fstp dword ptr ss : [esp]
        call public_6208a40
        mov edx, dword ptr ds : [public_625793c]
        mov eax, dword ptr ds : [public_6257930]
        add edx, 0x18
        inc word ptr ds : [public_6257930]
        mov dword ptr ds : [public_625793c], edx
        public_6206515 : nop
        mov cl, byte ptr ds : [public_625580c]
        mov edx, 6
        test cl, cl
        mov edi, 3
        je public_620669b
        mov edi, dword ptr ds : [public_6257948]
        mov cx, word ptr ds : [esi+2]
        xor edx, edx
        mov dx, word ptr ds : [public_6257932]
        add edx, 2
        cmp edx, edi
        jg public_620658f
        mov edi, dword ptr ds : [public_6257940]
        mov dx, word ptr ds : [esi]
        mov word ptr ds : [edi], dx
        mov edx, dword ptr ds : [public_6257940]
        mov word ptr ds : [edx+2], cx
        mov ecx, dword ptr ds : [public_6257940]
        mov edx, 6
        mov word ptr ds : [ecx+4], ax
        mov edi, dword ptr ds : [public_6257940]
        add edi, edx
        mov dword ptr ds : [public_6257940], edi
        mov edi, 3
        add word ptr ds : [public_6257932], di
        inc word ptr ds : [public_6257938]
        jmp public_6206599
        public_620658f : nop
        mov edi, 3
        mov edx, 6
        public_6206599 : nop
        xor ecx, ecx
        mov cx, word ptr ds : [public_6257932]
        add ecx, 2
        cmp ecx, dword ptr ds : [public_6257948]
        jg public_62065ef
        mov edi, dword ptr ds : [public_6257940]
        mov cx, word ptr ds : [esi+2]
        mov word ptr ds : [edi], cx
        mov ecx, dword ptr ds : [public_6257940]
        mov word ptr ds : [ecx+2], bx
        mov ecx, dword ptr ds : [public_6257940]
        mov word ptr ds : [ecx+4], ax
        mov edi, dword ptr ds : [public_6257940]
        add edi, edx
        mov dword ptr ds : [public_6257940], edi
        mov edi, 3
        add word ptr ds : [public_6257932], di
        inc word ptr ds : [public_6257938]
        public_62065ef : nop
        xor ecx, ecx
        mov cx, word ptr ds : [public_6257932]
        add ecx, 2
        cmp ecx, dword ptr ds : [public_6257948]
        jg public_6206641
        mov ecx, dword ptr ds : [public_6257940]
        mov word ptr ds : [ecx], bx
        mov ecx, dword ptr ds : [public_6257940]
        mov bx, word ptr ss : [esp+0x18]
        mov word ptr ds : [ecx+2], bx
        mov ecx, dword ptr ds : [public_6257940]
        mov word ptr ds : [ecx+4], ax
        mov ecx, dword ptr ds : [public_6257940]
        add word ptr ds : [public_6257932], di
        add ecx, edx
        inc word ptr ds : [public_6257938]
        mov dword ptr ds : [public_6257940], ecx
        public_6206641 : nop
        mov cx, word ptr ds : [esi]
        xor ebx, ebx
        mov bx, word ptr ds : [public_6257932]
        add ebx, 2
        cmp ebx, dword ptr ds : [public_6257948]
        jg public_620669b
        mov ebx, dword ptr ds : [public_6257940]
        mov di, word ptr ss : [esp+0x18]
        mov word ptr ds : [ebx], di
        mov edi, dword ptr ds : [public_6257940]
        mov word ptr ds : [edi+2], cx
        mov ecx, dword ptr ds : [public_6257940]
        mov edi, 3
        mov word ptr ds : [ecx+4], ax
        mov ecx, dword ptr ds : [public_6257940]
        add word ptr ds : [public_6257932], di
        add ecx, edx
        inc word ptr ds : [public_6257938]
        mov dword ptr ds : [public_6257940], ecx
        public_620669b : nop
        mov cl, byte ptr ds : [public_6255808]
        test cl, cl
        je public_620680c
        mov cx, word ptr ds : [esi+6]
        xor ebx, ebx
        mov bx, word ptr ds : [public_6257932]
        add ebx, 2
        cmp ebx, dword ptr ds : [public_6257948]
        jg public_6206703
        mov ebx, dword ptr ds : [public_6257940]
        mov di, word ptr ds : [esi+4]
        mov word ptr ds : [ebx], di
        mov edi, dword ptr ds : [public_6257940]
        mov word ptr ds : [edi+2], cx
        mov ecx, dword ptr ds : [public_6257940]
        mov edi, 3
        mov word ptr ds : [ecx+4], ax
        mov ecx, dword ptr ds : [public_6257940]
        add word ptr ds : [public_6257932], di
        add ecx, edx
        inc word ptr ds : [public_6257938]
        mov dword ptr ds : [public_6257940], ecx
        public_6206703 : nop
        mov ebx, dword ptr ds : [public_6257948]
        xor ecx, ecx
        mov cx, word ptr ds : [public_6257932]
        add ecx, 2
        cmp ecx, ebx
        jg public_6206756
        mov ebx, dword ptr ds : [public_6257940]
        mov cx, word ptr ds : [esi+6]
        mov word ptr ds : [ebx], cx
        mov ecx, dword ptr ds : [public_6257940]
        mov word ptr ds : [ecx+2], bp
        mov ecx, dword ptr ds : [public_6257940]
        mov word ptr ds : [ecx+4], ax
        mov ecx, dword ptr ds : [public_6257940]
        add word ptr ds : [public_6257932], di
        add ecx, edx
        inc word ptr ds : [public_6257938]
        mov dword ptr ds : [public_6257940], ecx
        public_6206756 : nop
        mov ebx, dword ptr ds : [public_6257948]
        xor ecx, ecx
        mov cx, word ptr ds : [public_6257932]
        add ecx, 2
        cmp ecx, ebx
        jg public_62067aa
        mov ecx, dword ptr ds : [public_6257940]
        mov bx, word ptr ss : [esp+0x1C]
        mov word ptr ds : [ecx], bp
        mov ecx, dword ptr ds : [public_6257940]
        mov word ptr ds : [ecx+2], bx
        mov ecx, dword ptr ds : [public_6257940]
        mov word ptr ds : [ecx+4], ax
        mov ebx, dword ptr ds : [public_6257940]
        add word ptr ds : [public_6257932], di
        add ebx, edx
        inc word ptr ds : [public_6257938]
        mov dword ptr ds : [public_6257940], ebx
        public_62067aa : nop
        mov dx, word ptr ds : [esi+4]
        push eax
        mov eax, dword ptr ss : [esp+0x20]
        push edx
        push eax
        mov ecx, offset public_625792c
        call public_6208b00
        jmp public_620680c
        public_62067c1 : nop
        mov cl, byte ptr ds : [public_625580c]
        test cl, cl
        je public_62067e5
        mov ecx, dword ptr ss : [esp+0x1A]
        mov edx, dword ptr ss : [esp+0x18]
        push ecx
        mov cx, word ptr ds : [esi+2]
        push edx
        push ecx
        push eax
        mov ecx, offset public_625792c
        call public_6208b50
        public_62067e5 : nop
        mov al, byte ptr ds : [public_6255808]
        test al, al
        je public_620680c
        mov edx, dword ptr ss : [esp+0x1E]
        mov eax, dword ptr ss : [esp+0x1C]
        mov cx, word ptr ds : [esi+6]
        push edx
        mov dx, word ptr ds : [esi+4]
        push eax
        push ecx
        push edx
        mov ecx, offset public_625792c
        call public_6208b50
        public_620680c : nop
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi], eax
        mov eax, dword ptr ss : [esp+0x44]
        mov dword ptr ds : [esi+4], ecx
        lea edx, ds:[esi+0x40]
        mov ecx, dword ptr ds : [eax]
        pop edi
        mov dword ptr ds : [edx], ecx
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx+4], ecx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [edx+8], eax
        mov eax, dword ptr ds : [esi+8]
        inc eax
        mov dword ptr ds : [esi+8], eax
        pop esi
        pop ebp
        pop ebx
        add esp, 0x2C
        ret 8
        UNREACHABLE_TRAP(0x6206020)
    }
}

#undef public_6206103
#undef public_620610d
#undef public_620622f
#undef public_620623b
#undef public_62062c7
#undef public_62062d5
#undef public_62062de
#undef public_62063a0
#undef public_62063ac
#undef public_6206438
#undef public_6206446
#undef public_620644b
#undef public_6206515
#undef public_620658f
#undef public_6206599
#undef public_62065ef
#undef public_6206641
#undef public_620669b
#undef public_6206703
#undef public_6206756
#undef public_62067aa
#undef public_62067c1
#undef public_62067e5
#undef public_620680c
