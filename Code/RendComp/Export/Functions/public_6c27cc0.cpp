#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c27cc0);
CLANG_FORWARD_PROC_SYMBOL(public_6c28ed0);
CLANG_FORWARD_PROC_SYMBOL(public_6c34ea0);
CLANG_FORWARD_PROC_SYMBOL(public_6c34eac);

#define public_6c27e20 _public_6c27e20
#define public_6c27e24 _public_6c27e24
#define public_6c27ed6 _public_6c27ed6
#define public_6c27f75 _public_6c27f75
#define public_6c27fa2 _public_6c27fa2
#define public_6c27fcf _public_6c27fcf
#define public_6c27ffc _public_6c27ffc
#define public_6c28018 _public_6c28018
#define public_6c28206 _public_6c28206
#define public_6c2829a _public_6c2829a
#define public_6c2832d _public_6c2832d
#define public_6c283ad _public_6c283ad
#define public_6c283b9 _public_6c283b9
#define public_6c284f3 _public_6c284f3
#define public_6c28587 _public_6c28587
#define public_6c2861a _public_6c2861a
#define public_6c2869a _public_6c2869a
#define public_6c286a6 _public_6c286a6
#define public_6c287d2 _public_6c287d2
#define public_6c28865 _public_6c28865
#define public_6c288f8 _public_6c288f8
#define public_6c28978 _public_6c28978
#define public_6c2897f _public_6c2897f
#define public_6c28990 _public_6c28990
#define public_6c28a19 _public_6c28a19
#define public_6c28a5c _public_6c28a5c
#define public_6c28a9f _public_6c28a9f
#define public_6c28ab7 _public_6c28ab7
#define public_6c28b32 _public_6c28b32
#define public_6c28b75 _public_6c28b75
#define public_6c28bb8 _public_6c28bb8
#define public_6c28bc7 _public_6c28bc7
#define public_6c28bfb _public_6c28bfb
#define public_6c28ca6 _public_6c28ca6
#define public_6c28ce9 _public_6c28ce9
#define public_6c28d2c _public_6c28d2c
#define public_6c28d44 _public_6c28d44
#define public_6c28dab _public_6c28dab
#define public_6c28dee _public_6c28dee
#define public_6c28e31 _public_6c28e31
#define public_6c28e40 _public_6c28e40
#define public_6c28e74 _public_6c28e74
#define public_6c28ea7 _public_6c28ea7
#define public_6c28ec3 _public_6c28ec3

PROC_DECLARE(0x6c27cc0, internal_6c27cc0, public_6c27cc0);
extern "C" NAKED register_t __cdecl internal_6c27cc0()
{
    __asm
    {
        sub esp, 0x130
        mov eax, dword ptr ss : [esp+0x140]
        cmp eax, 1
        push ebx
        push ebp
        push esi
        push edi
        mov dword ptr ss : [esp+0x6C], ecx
        jl public_6c28ec3
        mov ebx, dword ptr ss : [esp+0x144]
        mov ecx, dword ptr ds : [ebx+0x1C]
        lea eax, ds:[eax+eax*2]
        add ecx, eax
        shl ecx, 1
        push ecx
        mov dword ptr ss : [esp+0x34], eax
        call public_6c34eac
        mov ecx, dword ptr ds : [ebx+0x1C]
        mov esi, dword ptr ds : [ebx+0x18]
        shl ecx, 1
        mov edx, ecx
        mov ebp, eax
        shr ecx, 2
        mov edi, ebp
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov eax, dword ptr ds : [ebx+0x18]
        push eax
        call public_6c34ea0
        mov edx, dword ptr ss : [esp+0x38]
        mov dword ptr ds : [ebx+0x18], ebp
        mov ebp, dword ptr ss : [esp+0x150]
        mov ecx, dword ptr ss : [ebp+0x1C]
        add ecx, edx
        shl ecx, 1
        push ecx
        call public_6c34eac
        mov ecx, dword ptr ss : [ebp+0x1C]
        mov esi, dword ptr ss : [ebp+0x18]
        shl ecx, 1
        mov edx, ecx
        shr ecx, 2
        mov edi, eax
        rep movsd
        mov ecx, edx
        and ecx, 3
        mov dword ptr ss : [esp+0x70], eax
        rep movsb
        mov eax, dword ptr ss : [ebp+0x18]
        push eax
        call public_6c34ea0
        mov ecx, dword ptr ss : [esp+0x74]
        mov dword ptr ss : [ebp+0x18], ecx
        mov edx, dword ptr ds : [ebx+0x30]
        mov eax, dword ptr ds : [ebx+0x2C]
        add esp, 0x10
        cmp edx, eax
        jne public_6c27e20
        push 0x70
        call public_6c34eac
        mov esi, dword ptr ss : [esp+0x70]
        mov edi, eax
        mov dword ptr ds : [ebx+0x2C], edi
        add esp, 4
        xor eax, eax
        mov ecx, 0x1C
        rep stosd
        mov eax, dword ptr ds : [esi+0x2C]
        mov edx, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [ebx+0x2C]
        mov dword ptr ds : [ecx], edx
        mov eax, dword ptr ds : [esi+0x2C]
        mov edx, dword ptr ds : [eax+0x68]
        mov ecx, dword ptr ds : [ebx+0x2C]
        mov dword ptr ds : [ecx+0x68], edx
        mov eax, dword ptr ds : [esi+0x2C]
        mov edx, dword ptr ds : [eax+8]
        mov ecx, dword ptr ds : [ebx+0x2C]
        mov dword ptr ds : [ecx+8], edx
        mov eax, dword ptr ds : [esi+0x2C]
        mov edx, dword ptr ds : [eax+0xC]
        mov ecx, dword ptr ds : [ebx+0x2C]
        mov dword ptr ds : [ecx+0xC], edx
        mov eax, dword ptr ds : [esi+0x2C]
        mov edx, dword ptr ds : [eax+0x1C]
        mov ecx, dword ptr ds : [ebx+0x2C]
        mov dword ptr ds : [ecx+0x1C], edx
        mov eax, dword ptr ds : [esi+0x2C]
        mov edx, dword ptr ds : [eax+0x20]
        mov ecx, dword ptr ds : [ebx+0x2C]
        mov dword ptr ds : [ecx+0x20], edx
        mov eax, dword ptr ds : [esi+0x2C]
        mov edx, dword ptr ds : [eax+0x44]
        mov ecx, dword ptr ds : [ebx+0x2C]
        mov dword ptr ds : [ecx+0x44], edx
        mov eax, dword ptr ds : [esi+0x2C]
        mov edx, dword ptr ds : [eax+0x48]
        mov ecx, dword ptr ds : [ebx+0x2C]
        mov dword ptr ds : [ecx+0x48], edx
        mov eax, dword ptr ds : [esi+0x2C]
        mov edx, dword ptr ds : [eax+0x58]
        mov ecx, dword ptr ds : [ebx+0x2C]
        mov dword ptr ds : [ecx+0x58], edx
        mov eax, dword ptr ds : [esi+0x2C]
        mov edx, dword ptr ds : [eax+0x5C]
        mov ecx, dword ptr ds : [ebx+0x2C]
        mov dword ptr ds : [ecx+0x5C], edx
        mov eax, dword ptr ds : [esi+0x2C]
        mov edx, dword ptr ds : [eax+0x30]
        mov ecx, dword ptr ds : [ebx+0x2C]
        mov dword ptr ds : [ecx+0x30], edx
        mov eax, dword ptr ds : [esi+0x2C]
        mov ecx, dword ptr ds : [ebx+0x2C]
        mov edx, dword ptr ds : [eax+0x34]
        mov dword ptr ds : [ecx+0x34], edx
        jmp public_6c27e24
        public_6c27e20 : nop
        mov esi, dword ptr ss : [esp+0x6C]
        public_6c27e24 : nop
        mov eax, dword ptr ss : [ebp+0x30]
        cmp eax, dword ptr ss : [ebp+0x2C]
        jne public_6c27ed6
        push 0x70
        call public_6c34eac
        mov edi, eax
        mov dword ptr ss : [ebp+0x2C], edi
        add esp, 4
        xor eax, eax
        mov ecx, 0x1C
        rep stosd
        mov ecx, dword ptr ds : [esi+0x2C]
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ss : [ebp+0x2C]
        mov dword ptr ds : [edx], eax
        mov ecx, dword ptr ds : [esi+0x2C]
        mov eax, dword ptr ds : [ecx+0x68]
        mov edx, dword ptr ss : [ebp+0x2C]
        mov dword ptr ds : [edx+0x68], eax
        mov ecx, dword ptr ds : [esi+0x2C]
        mov eax, dword ptr ds : [ecx+8]
        mov edx, dword ptr ss : [ebp+0x2C]
        mov dword ptr ds : [edx+8], eax
        mov ecx, dword ptr ds : [esi+0x2C]
        mov eax, dword ptr ds : [ecx+0xC]
        mov edx, dword ptr ss : [ebp+0x2C]
        mov dword ptr ds : [edx+0xC], eax
        mov ecx, dword ptr ds : [esi+0x2C]
        mov eax, dword ptr ds : [ecx+0x1C]
        mov edx, dword ptr ss : [ebp+0x2C]
        mov dword ptr ds : [edx+0x1C], eax
        mov ecx, dword ptr ds : [esi+0x2C]
        mov eax, dword ptr ds : [ecx+0x20]
        mov edx, dword ptr ss : [ebp+0x2C]
        mov dword ptr ds : [edx+0x20], eax
        mov ecx, dword ptr ds : [esi+0x2C]
        mov eax, dword ptr ds : [ecx+0x44]
        mov edx, dword ptr ss : [ebp+0x2C]
        mov dword ptr ds : [edx+0x44], eax
        mov ecx, dword ptr ds : [esi+0x2C]
        mov eax, dword ptr ds : [ecx+0x48]
        mov edx, dword ptr ss : [ebp+0x2C]
        mov dword ptr ds : [edx+0x48], eax
        mov ecx, dword ptr ds : [esi+0x2C]
        mov eax, dword ptr ds : [ecx+0x58]
        mov edx, dword ptr ss : [ebp+0x2C]
        mov dword ptr ds : [edx+0x58], eax
        mov ecx, dword ptr ds : [esi+0x2C]
        mov eax, dword ptr ds : [ecx+0x5C]
        mov edx, dword ptr ss : [ebp+0x2C]
        mov dword ptr ds : [edx+0x5C], eax
        mov ecx, dword ptr ds : [esi+0x2C]
        mov eax, dword ptr ds : [ecx+0x30]
        mov edx, dword ptr ss : [ebp+0x2C]
        mov dword ptr ds : [edx+0x30], eax
        mov ecx, dword ptr ds : [esi+0x2C]
        mov edx, dword ptr ss : [ebp+0x2C]
        mov eax, dword ptr ds : [ecx+0x34]
        mov dword ptr ds : [edx+0x34], eax
        public_6c27ed6 : nop
        mov edi, dword ptr ss : [esp+0x6C]
        mov ecx, dword ptr ds : [edi+0x2C]
        mov eax, dword ptr ds : [ecx+0x68]
        mov ebx, dword ptr ds : [ebx+0x2C]
        mov ebp, dword ptr ss : [ebp+0x2C]
        mov ecx, eax
        shr ecx, 4
        and cl, 1
        mov esi, eax
        and esi, 0xF00
        mov byte ptr ss : [esp+0x1A], cl
        cmp esi, 0x100
        sbb cl, cl
        inc cl
        mov byte ptr ss : [esp+0x19], cl
        cmp esi, 0x200
        mov esi, dword ptr ss : [esp+0x30]
        sbb cl, cl
        shr eax, 6
        and al, 1
        mov byte ptr ss : [esp+0x18], al
        mov eax, dword ptr ds : [ebx+0x6C]
        inc cl
        lea edx, ds:[eax+esi]
        push edx
        mov byte ptr ss : [esp+0x1B], cl
        lea ecx, ds:[ebx+4]
        push eax
        push ecx
        call public_6c28ed0
        mov eax, dword ptr ss : [ebp+0x6C]
        lea edx, ds:[eax+esi]
        push edx
        lea ecx, ss:[ebp+4]
        push eax
        push ecx
        call public_6c28ed0
        mov al, byte ptr ss : [esp+0x32]
        add esp, 0x18
        test al, al
        je public_6c27f75
        mov eax, dword ptr ds : [ebx+0x6C]
        lea ecx, ds:[eax+esi]
        push ecx
        push eax
        lea edx, ds:[ebx+0x18]
        push edx
        call public_6c28ed0
        mov eax, dword ptr ss : [ebp+0x6C]
        lea ecx, ds:[eax+esi]
        push ecx
        push eax
        lea edx, ss:[ebp+0x18]
        push edx
        call public_6c28ed0
        add esp, 0x18
        public_6c27f75 : nop
        mov al, byte ptr ss : [esp+0x19]
        test al, al
        je public_6c27fa2
        mov eax, dword ptr ds : [ebx+0x6C]
        lea ecx, ds:[eax+esi]
        push ecx
        push eax
        lea edx, ds:[ebx+0x40]
        push edx
        call public_6c28ed0
        mov eax, dword ptr ss : [ebp+0x6C]
        lea ecx, ds:[eax+esi]
        push ecx
        push eax
        lea edx, ss:[ebp+0x40]
        push edx
        call public_6c28ed0
        add esp, 0x18
        public_6c27fa2 : nop
        mov al, byte ptr ss : [esp+0x17]
        test al, al
        je public_6c27fcf
        mov eax, dword ptr ds : [ebx+0x6C]
        lea ecx, ds:[eax+esi]
        push ecx
        push eax
        lea edx, ds:[ebx+0x54]
        push edx
        call public_6c28ed0
        mov eax, dword ptr ss : [ebp+0x6C]
        lea ecx, ds:[eax+esi]
        push ecx
        push eax
        lea edx, ss:[ebp+0x54]
        push edx
        call public_6c28ed0
        add esp, 0x18
        public_6c27fcf : nop
        mov al, byte ptr ss : [esp+0x18]
        test al, al
        je public_6c27ffc
        mov eax, dword ptr ds : [ebx+0x6C]
        lea ecx, ds:[eax+esi]
        push ecx
        push eax
        lea edx, ds:[ebx+0x2C]
        push edx
        call public_6c28ed0
        mov eax, dword ptr ss : [ebp+0x6C]
        lea ecx, ds:[eax+esi]
        push ecx
        push eax
        lea edx, ss:[ebp+0x2C]
        push edx
        call public_6c28ed0
        add esp, 0x18
        public_6c27ffc : nop
        mov eax, 0xAAAAAAAB
        mul dword ptr ds : [edi+0x1C]
        xor ecx, ecx
        shr edx, 1
        test edx, edx
        mov dword ptr ss : [esp+0x64], ecx
        jbe public_6c28ec3
        mov dword ptr ss : [esp+0x30], ecx
        public_6c28018 : nop
        mov eax, dword ptr ss : [esp+0x14C]
        mov eax, dword ptr ds : [eax+ecx*4]
        test al, 8
        mov dword ptr ss : [esp+0x68], eax
        je public_6c28ea7
        mov edx, dword ptr ds : [edi+0x2C]
        mov ecx, dword ptr ds : [edx+4]
        mov dword ptr ss : [esp+0x34], ecx
        mov ecx, dword ptr ds : [edx+0x20]
        mov dword ptr ss : [esp+0x7C], ecx
        mov ecx, dword ptr ds : [edx+0x24]
        mov dword ptr ss : [esp+0x50], ecx
        mov ecx, dword ptr ds : [edx+0x18]
        mov eax, dword ptr ds : [edi+0x18]
        mov esi, dword ptr ss : [esp+0x30]
        mov dword ptr ss : [esp+0x28], ecx
        mov ecx, dword ptr ds : [edx+0x48]
        mov edi, dword ptr ds : [edx+0x10]
        mov dword ptr ss : [esp+0x1C], ecx
        mov ecx, dword ptr ds : [edx+0x4C]
        mov dword ptr ss : [esp+0x80], ecx
        mov ecx, dword ptr ds : [edx+0x40]
        mov dword ptr ss : [esp+0x40], ecx
        mov ecx, dword ptr ds : [edx+0x5C]
        mov dword ptr ss : [esp+0x20], ecx
        mov ecx, dword ptr ds : [edx+0x60]
        mov dword ptr ss : [esp+0x88], ecx
        mov ecx, dword ptr ds : [edx+0x54]
        mov dword ptr ss : [esp+0x38], ecx
        mov ecx, dword ptr ds : [edx+0x34]
        mov dword ptr ss : [esp+0x84], ecx
        mov ecx, dword ptr ds : [edx+0x38]
        add eax, esi
        mov esi, dword ptr ds : [edx+0xC]
        mov edx, dword ptr ds : [edx+0x2C]
        mov dword ptr ss : [esp+0x3C], ecx
        mov ecx, dword ptr ss : [esp+0x68]
        test cl, 0x10
        mov dword ptr ss : [esp+0x24], edx
        jne public_6c286a6
        test ch, 2
        jne public_6c286a6
        test cl, 0x20
        jne public_6c283b9
        test ch, 1
        jne public_6c283b9
        movzx ecx, word ptr ds : [eax+2]
        mov ecx, dword ptr ds : [edi+ecx*4]
        mov edx, dword ptr ss : [esp+0x34]
        imul ecx, esi
        add ecx, edx
        mov dword ptr ss : [esp+0x10], ecx
        mov dword ptr ss : [esp+0x70], ecx
        movzx ecx, word ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edi+ecx*4]
        imul ecx, esi
        add ecx, edx
        lea edx, ss:[esp+0x44]
        mov dword ptr ss : [esp+0x78], edx
        lea edx, ss:[esp+0x44]
        mov dword ptr ss : [esp+0xE0], edx
        movzx edx, word ptr ds : [eax]
        mov edi, dword ptr ds : [edi+edx*4]
        mov edx, dword ptr ss : [esp+0x34]
        imul edi, esi
        fld dword ptr ds : [edi+edx]
        fadd dword ptr ds : [ecx]
        fld dword ptr ds : [edi+edx+4]
        fadd dword ptr ds : [ecx+4]
        fld dword ptr ds : [edi+edx+8]
        fadd dword ptr ds : [ecx+8]
        add edi, edx
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x74], ecx
        fstp dword ptr ss : [esp+0x124]
        mov dword ptr ss : [esp+0xE8], edx
        fxch 
        mov dword ptr ss : [esp+0xE4], edi
        fmul dword ptr ds : [public_6c361f0]
        fstp dword ptr ss : [esp+0xF8]
        mov ecx, dword ptr ss : [esp+0xF8]
        fmul dword ptr ds : [public_6c361f0]
        mov dword ptr ss : [esp+0x44], ecx
        fstp dword ptr ss : [esp+0xFC]
        fld dword ptr ss : [esp+0x124]
        mov edx, dword ptr ss : [esp+0xFC]
        fmul dword ptr ds : [public_6c361f0]
        mov dword ptr ss : [esp+0x48], edx
        fstp dword ptr ss : [esp+0x100]
        mov ecx, dword ptr ss : [esp+0x100]
        mov dword ptr ss : [esp+0x4C], ecx
        mov cl, byte ptr ss : [esp+0x1A]
        test cl, cl
        je public_6c28206
        movzx edx, word ptr ds : [eax+2]
        mov esi, dword ptr ss : [esp+0x50]
        mov ecx, dword ptr ds : [esi+edx*4]
        mov edx, dword ptr ss : [esp+0x7C]
        mov edi, dword ptr ss : [esp+0x28]
        imul ecx, edx
        add ecx, edi
        movzx edi, word ptr ds : [eax+4]
        mov esi, dword ptr ds : [esi+edi*4]
        mov edi, dword ptr ss : [esp+0x28]
        imul esi, edx
        add esi, edi
        mov edi, dword ptr ss : [esp+0x50]
        mov dword ptr ss : [esp+0x90], esi
        lea esi, ss:[esp+0x44]
        mov dword ptr ss : [esp+0x94], esi
        lea esi, ss:[esp+0x44]
        mov dword ptr ss : [esp+0xD4], esi
        movzx esi, word ptr ds : [eax]
        mov esi, dword ptr ds : [edi+esi*4]
        imul esi, edx
        add esi, dword ptr ss : [esp+0x28]
        mov dword ptr ss : [esp+0x8C], ecx
        mov dword ptr ss : [esp+0xD8], esi
        mov dword ptr ss : [esp+0xDC], ecx
        public_6c28206 : nop
        mov cl, byte ptr ss : [esp+0x19]
        test cl, cl
        je public_6c2829a
        movzx ecx, word ptr ds : [eax+2]
        mov edx, dword ptr ss : [esp+0x80]
        mov ecx, dword ptr ds : [edx+ecx*4]
        imul ecx, dword ptr ss : [esp+0x1C]
        mov edi, dword ptr ss : [esp+0x40]
        lea esi, ds:[ecx+edi]
        movzx ecx, word ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+ecx*4]
        imul ecx, dword ptr ss : [esp+0x1C]
        fld dword ptr ds : [ecx+edi]
        add ecx, edi
        lea edi, ss:[esp+0x54]
        mov dword ptr ss : [esp+0xC4], edi
        lea edi, ss:[esp+0x54]
        mov dword ptr ss : [esp+0xB0], edi
        movzx edi, word ptr ds : [eax]
        mov edx, dword ptr ds : [edx+edi*4]
        imul edx, dword ptr ss : [esp+0x1C]
        add edx, dword ptr ss : [esp+0x40]
        mov dword ptr ss : [esp+0xBC], esi
        mov dword ptr ss : [esp+0xC0], ecx
        fadd dword ptr ds : [edx]
        mov dword ptr ss : [esp+0xB4], edx
        mov dword ptr ss : [esp+0xB8], esi
        fmul dword ptr ds : [public_6c361f0]
        fstp dword ptr ss : [esp+0x54]
        fld dword ptr ds : [edx+8]
        fadd dword ptr ds : [ecx+8]
        fmul dword ptr ds : [public_6c361f0]
        fstp dword ptr ss : [esp+0x58]
        public_6c2829a : nop
        mov cl, byte ptr ss : [esp+0x17]
        test cl, cl
        je public_6c2832d
        movzx ecx, word ptr ds : [eax+2]
        mov edx, dword ptr ss : [esp+0x88]
        mov ecx, dword ptr ds : [edx+ecx*4]
        imul ecx, dword ptr ss : [esp+0x20]
        mov edi, dword ptr ss : [esp+0x38]
        lea esi, ds:[ecx+edi]
        movzx ecx, word ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+ecx*4]
        imul ecx, dword ptr ss : [esp+0x20]
        add ecx, edi
        lea edi, ss:[esp+0x5C]
        mov dword ptr ss : [esp+0xA0], edi
        lea edi, ss:[esp+0x5C]
        mov dword ptr ss : [esp+0xEC], edi
        movzx edi, word ptr ds : [eax]
        mov edx, dword ptr ds : [edx+edi*4]
        imul edx, dword ptr ss : [esp+0x20]
        add edx, dword ptr ss : [esp+0x38]
        mov dword ptr ss : [esp+0x98], esi
        mov dword ptr ss : [esp+0x9C], ecx
        fld dword ptr ds : [edx]
        mov dword ptr ss : [esp+0xF0], edx
        fadd dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0xF4], esi
        fmul dword ptr ds : [public_6c361f0]
        fstp dword ptr ss : [esp+0x5C]
        fld dword ptr ds : [edx+8]
        fadd dword ptr ds : [ecx+8]
        fmul dword ptr ds : [public_6c361f0]
        fstp dword ptr ss : [esp+0x60]
        public_6c2832d : nop
        mov cl, byte ptr ss : [esp+0x18]
        test cl, cl
        je public_6c283ad
        movzx edx, word ptr ds : [eax+2]
        mov ecx, dword ptr ss : [esp+0x3C]
        mov edx, dword ptr ds : [ecx+edx*4]
        mov esi, dword ptr ss : [esp+0x84]
        mov edi, dword ptr ss : [esp+0x24]
        imul edx, esi
        add edx, edi
        movzx edi, word ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+edi*4]
        mov edi, dword ptr ss : [esp+0x24]
        imul ecx, esi
        movzx eax, word ptr ds : [eax]
        add ecx, edi
        lea edi, ss:[esp+0x2C]
        mov dword ptr ss : [esp+0xAC], edi
        lea edi, ss:[esp+0x2C]
        mov dword ptr ss : [esp+0xC8], edi
        mov edi, dword ptr ss : [esp+0x3C]
        mov eax, dword ptr ds : [edi+eax*4]
        imul eax, esi
        add eax, dword ptr ss : [esp+0x24]
        mov dword ptr ss : [esp+0xA8], ecx
        mov ecx, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0xA4], edx
        mov dword ptr ss : [esp+0xD0], edx
        add ecx, dword ptr ds : [eax]
        shr ecx, 1
        mov dword ptr ss : [esp+0xCC], eax
        mov dword ptr ss : [esp+0x2C], ecx
        public_6c283ad : nop
        mov eax, dword ptr ss : [esp+0x68]
        shr eax, 6
        jmp public_6c2897f
        public_6c283b9 : nop
        movzx edx, word ptr ds : [eax]
        mov ecx, dword ptr ds : [edi+edx*4]
        mov edx, dword ptr ss : [esp+0x34]
        imul ecx, esi
        add ecx, edx
        mov dword ptr ss : [esp+0x10], ecx
        mov dword ptr ss : [esp+0x70], ecx
        movzx ecx, word ptr ds : [eax+2]
        mov ecx, dword ptr ds : [edi+ecx*4]
        imul ecx, esi
        add ecx, edx
        lea edx, ss:[esp+0x44]
        mov dword ptr ss : [esp+0x78], edx
        lea edx, ss:[esp+0x44]
        mov dword ptr ss : [esp+0xE0], edx
        movzx edx, word ptr ds : [eax+4]
        mov edi, dword ptr ds : [edi+edx*4]
        mov edx, dword ptr ss : [esp+0x34]
        imul edi, esi
        fld dword ptr ds : [edi+edx]
        fadd dword ptr ds : [ecx]
        fld dword ptr ds : [edi+edx+4]
        fadd dword ptr ds : [ecx+4]
        fld dword ptr ds : [edi+edx+8]
        fadd dword ptr ds : [ecx+8]
        add edi, edx
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x74], ecx
        fstp dword ptr ss : [esp+0x130]
        mov dword ptr ss : [esp+0xE8], edx
        fxch 
        mov dword ptr ss : [esp+0xE4], edi
        fmul dword ptr ds : [public_6c361f0]
        fstp dword ptr ss : [esp+0x104]
        mov ecx, dword ptr ss : [esp+0x104]
        fmul dword ptr ds : [public_6c361f0]
        mov dword ptr ss : [esp+0x44], ecx
        fstp dword ptr ss : [esp+0x108]
        fld dword ptr ss : [esp+0x130]
        mov edx, dword ptr ss : [esp+0x108]
        fmul dword ptr ds : [public_6c361f0]
        mov dword ptr ss : [esp+0x48], edx
        fstp dword ptr ss : [esp+0x10C]
        mov ecx, dword ptr ss : [esp+0x10C]
        mov dword ptr ss : [esp+0x4C], ecx
        mov cl, byte ptr ss : [esp+0x1A]
        test cl, cl
        je public_6c284f3
        movzx edx, word ptr ds : [eax]
        mov esi, dword ptr ss : [esp+0x50]
        mov ecx, dword ptr ds : [esi+edx*4]
        mov edx, dword ptr ss : [esp+0x7C]
        mov edi, dword ptr ss : [esp+0x28]
        imul ecx, edx
        add ecx, edi
        movzx edi, word ptr ds : [eax+2]
        mov esi, dword ptr ds : [esi+edi*4]
        mov edi, dword ptr ss : [esp+0x28]
        imul esi, edx
        add esi, edi
        mov edi, dword ptr ss : [esp+0x50]
        mov dword ptr ss : [esp+0x90], esi
        lea esi, ss:[esp+0x44]
        mov dword ptr ss : [esp+0x94], esi
        lea esi, ss:[esp+0x44]
        mov dword ptr ss : [esp+0xD4], esi
        movzx esi, word ptr ds : [eax+4]
        mov esi, dword ptr ds : [edi+esi*4]
        imul esi, edx
        add esi, dword ptr ss : [esp+0x28]
        mov dword ptr ss : [esp+0x8C], ecx
        mov dword ptr ss : [esp+0xD8], esi
        mov dword ptr ss : [esp+0xDC], ecx
        public_6c284f3 : nop
        mov cl, byte ptr ss : [esp+0x19]
        test cl, cl
        je public_6c28587
        movzx ecx, word ptr ds : [eax]
        mov edx, dword ptr ss : [esp+0x80]
        mov ecx, dword ptr ds : [edx+ecx*4]
        imul ecx, dword ptr ss : [esp+0x1C]
        mov edi, dword ptr ss : [esp+0x40]
        lea esi, ds:[ecx+edi]
        movzx ecx, word ptr ds : [eax+2]
        mov ecx, dword ptr ds : [edx+ecx*4]
        imul ecx, dword ptr ss : [esp+0x1C]
        fld dword ptr ds : [ecx+edi]
        add ecx, edi
        lea edi, ss:[esp+0x54]
        mov dword ptr ss : [esp+0xC4], edi
        lea edi, ss:[esp+0x54]
        mov dword ptr ss : [esp+0xB0], edi
        movzx edi, word ptr ds : [eax+4]
        mov edx, dword ptr ds : [edx+edi*4]
        imul edx, dword ptr ss : [esp+0x1C]
        add edx, dword ptr ss : [esp+0x40]
        mov dword ptr ss : [esp+0xBC], esi
        mov dword ptr ss : [esp+0xC0], ecx
        fadd dword ptr ds : [edx]
        mov dword ptr ss : [esp+0xB4], edx
        mov dword ptr ss : [esp+0xB8], esi
        fmul dword ptr ds : [public_6c361f0]
        fstp dword ptr ss : [esp+0x54]
        fld dword ptr ds : [edx+8]
        fadd dword ptr ds : [ecx+8]
        fmul dword ptr ds : [public_6c361f0]
        fstp dword ptr ss : [esp+0x58]
        public_6c28587 : nop
        mov cl, byte ptr ss : [esp+0x17]
        test cl, cl
        je public_6c2861a
        movzx ecx, word ptr ds : [eax]
        mov edx, dword ptr ss : [esp+0x88]
        mov ecx, dword ptr ds : [edx+ecx*4]
        imul ecx, dword ptr ss : [esp+0x20]
        mov edi, dword ptr ss : [esp+0x38]
        lea esi, ds:[ecx+edi]
        movzx ecx, word ptr ds : [eax+2]
        mov ecx, dword ptr ds : [edx+ecx*4]
        imul ecx, dword ptr ss : [esp+0x20]
        add ecx, edi
        lea edi, ss:[esp+0x5C]
        mov dword ptr ss : [esp+0xA0], edi
        lea edi, ss:[esp+0x5C]
        mov dword ptr ss : [esp+0xEC], edi
        movzx edi, word ptr ds : [eax+4]
        mov edx, dword ptr ds : [edx+edi*4]
        imul edx, dword ptr ss : [esp+0x20]
        add edx, dword ptr ss : [esp+0x38]
        mov dword ptr ss : [esp+0x98], esi
        mov dword ptr ss : [esp+0x9C], ecx
        fld dword ptr ds : [edx]
        mov dword ptr ss : [esp+0xF0], edx
        fadd dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0xF4], esi
        fmul dword ptr ds : [public_6c361f0]
        fstp dword ptr ss : [esp+0x5C]
        fld dword ptr ds : [edx+8]
        fadd dword ptr ds : [ecx+8]
        fmul dword ptr ds : [public_6c361f0]
        fstp dword ptr ss : [esp+0x60]
        public_6c2861a : nop
        mov cl, byte ptr ss : [esp+0x18]
        test cl, cl
        je public_6c2869a
        movzx edx, word ptr ds : [eax]
        mov ecx, dword ptr ss : [esp+0x3C]
        mov edx, dword ptr ds : [ecx+edx*4]
        mov esi, dword ptr ss : [esp+0x84]
        mov edi, dword ptr ss : [esp+0x24]
        imul edx, esi
        add edx, edi
        movzx edi, word ptr ds : [eax+2]
        mov ecx, dword ptr ds : [ecx+edi*4]
        mov edi, dword ptr ss : [esp+0x24]
        imul ecx, esi
        movzx eax, word ptr ds : [eax+4]
        add ecx, edi
        lea edi, ss:[esp+0x2C]
        mov dword ptr ss : [esp+0xAC], edi
        lea edi, ss:[esp+0x2C]
        mov dword ptr ss : [esp+0xC8], edi
        mov edi, dword ptr ss : [esp+0x3C]
        mov eax, dword ptr ds : [edi+eax*4]
        imul eax, esi
        add eax, dword ptr ss : [esp+0x24]
        mov dword ptr ss : [esp+0xA8], ecx
        mov ecx, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0xA4], edx
        mov dword ptr ss : [esp+0xD0], edx
        add ecx, dword ptr ds : [eax]
        shr ecx, 1
        mov dword ptr ss : [esp+0xCC], eax
        mov dword ptr ss : [esp+0x2C], ecx
        public_6c2869a : nop
        mov eax, dword ptr ss : [esp+0x68]
        shr eax, 5
        jmp public_6c2897f
        public_6c286a6 : nop
        movzx edx, word ptr ds : [eax]
        mov ecx, dword ptr ds : [edi+edx*4]
        mov edx, dword ptr ss : [esp+0x34]
        imul ecx, esi
        add ecx, edx
        mov dword ptr ss : [esp+0x70], ecx
        lea ecx, ss:[esp+0x44]
        mov dword ptr ss : [esp+0x74], ecx
        movzx ecx, word ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edi+ecx*4]
        imul ecx, esi
        add ecx, edx
        lea edx, ss:[esp+0x44]
        mov dword ptr ss : [esp+0xE0], edx
        movzx edx, word ptr ds : [eax+2]
        mov edi, dword ptr ds : [edi+edx*4]
        mov edx, dword ptr ss : [esp+0x34]
        imul edi, esi
        fld dword ptr ds : [edi+edx]
        add edi, edx
        mov dword ptr ss : [esp+0x78], ecx
        mov dword ptr ss : [esp+0xE8], ecx
        mov ecx, dword ptr ss : [esp+0x70]
        mov dword ptr ss : [esp+0xE4], edi
        fadd dword ptr ds : [ecx]
        fld dword ptr ds : [edi+4]
        fadd dword ptr ds : [ecx+4]
        fld dword ptr ds : [edi+8]
        fadd dword ptr ds : [ecx+8]
        fstp dword ptr ss : [esp+0x13C]
        fxch 
        fmul dword ptr ds : [public_6c361f0]
        fstp dword ptr ss : [esp+0x110]
        mov ecx, dword ptr ss : [esp+0x110]
        fmul dword ptr ds : [public_6c361f0]
        mov dword ptr ss : [esp+0x44], ecx
        fstp dword ptr ss : [esp+0x114]
        fld dword ptr ss : [esp+0x13C]
        mov edx, dword ptr ss : [esp+0x114]
        fmul dword ptr ds : [public_6c361f0]
        mov dword ptr ss : [esp+0x48], edx
        fstp dword ptr ss : [esp+0x118]
        mov ecx, dword ptr ss : [esp+0x118]
        mov dword ptr ss : [esp+0x4C], ecx
        mov cl, byte ptr ss : [esp+0x1A]
        test cl, cl
        je public_6c287d2
        movzx edx, word ptr ds : [eax]
        mov esi, dword ptr ss : [esp+0x50]
        mov edi, dword ptr ds : [esi+edx*4]
        mov edx, dword ptr ss : [esp+0x7C]
        mov ecx, dword ptr ss : [esp+0x28]
        imul edi, edx
        add edi, ecx
        mov dword ptr ss : [esp+0x8C], edi
        lea edi, ss:[esp+0x44]
        mov dword ptr ss : [esp+0x90], edi
        movzx edi, word ptr ds : [eax+4]
        mov edi, dword ptr ds : [esi+edi*4]
        imul edi, edx
        add ecx, edi
        lea edi, ss:[esp+0x44]
        mov dword ptr ss : [esp+0xD4], edi
        movzx edi, word ptr ds : [eax+2]
        mov esi, dword ptr ds : [esi+edi*4]
        imul esi, edx
        add esi, dword ptr ss : [esp+0x28]
        mov dword ptr ss : [esp+0x94], ecx
        mov dword ptr ss : [esp+0xD8], esi
        mov dword ptr ss : [esp+0xDC], ecx
        public_6c287d2 : nop
        mov cl, byte ptr ss : [esp+0x19]
        test cl, cl
        je public_6c28865
        movzx ecx, word ptr ds : [eax]
        mov edx, dword ptr ss : [esp+0x80]
        mov ecx, dword ptr ds : [edx+ecx*4]
        imul ecx, dword ptr ss : [esp+0x1C]
        mov esi, dword ptr ss : [esp+0x40]
        lea edi, ss:[esp+0x54]
        mov dword ptr ss : [esp+0xC0], edi
        movzx edi, word ptr ds : [eax+4]
        fld dword ptr ds : [ecx+esi]
        mov edi, dword ptr ds : [edx+edi*4]
        imul edi, dword ptr ss : [esp+0x1C]
        add ecx, esi
        add esi, edi
        lea edi, ss:[esp+0x54]
        mov dword ptr ss : [esp+0xB0], edi
        movzx edi, word ptr ds : [eax+2]
        mov edx, dword ptr ds : [edx+edi*4]
        imul edx, dword ptr ss : [esp+0x1C]
        add edx, dword ptr ss : [esp+0x40]
        mov dword ptr ss : [esp+0xBC], ecx
        mov dword ptr ss : [esp+0xC4], esi
        fadd dword ptr ds : [edx]
        mov dword ptr ss : [esp+0xB4], edx
        mov dword ptr ss : [esp+0xB8], esi
        fmul dword ptr ds : [public_6c361f0]
        fstp dword ptr ss : [esp+0x54]
        fld dword ptr ds : [edx+8]
        fadd dword ptr ds : [ecx+8]
        fmul dword ptr ds : [public_6c361f0]
        fstp dword ptr ss : [esp+0x58]
        public_6c28865 : nop
        mov cl, byte ptr ss : [esp+0x17]
        test cl, cl
        je public_6c288f8
        movzx ecx, word ptr ds : [eax]
        mov edx, dword ptr ss : [esp+0x88]
        mov ecx, dword ptr ds : [edx+ecx*4]
        imul ecx, dword ptr ss : [esp+0x20]
        mov esi, dword ptr ss : [esp+0x38]
        lea edi, ss:[esp+0x5C]
        mov dword ptr ss : [esp+0x9C], edi
        movzx edi, word ptr ds : [eax+4]
        fld dword ptr ds : [ecx+esi]
        mov edi, dword ptr ds : [edx+edi*4]
        imul edi, dword ptr ss : [esp+0x20]
        add ecx, esi
        add esi, edi
        lea edi, ss:[esp+0x5C]
        mov dword ptr ss : [esp+0xEC], edi
        movzx edi, word ptr ds : [eax+2]
        mov edx, dword ptr ds : [edx+edi*4]
        imul edx, dword ptr ss : [esp+0x20]
        add edx, dword ptr ss : [esp+0x38]
        mov dword ptr ss : [esp+0x98], ecx
        mov dword ptr ss : [esp+0xA0], esi
        fadd dword ptr ds : [edx]
        mov dword ptr ss : [esp+0xF0], edx
        mov dword ptr ss : [esp+0xF4], esi
        fmul dword ptr ds : [public_6c361f0]
        fstp dword ptr ss : [esp+0x5C]
        fld dword ptr ds : [edx+8]
        fadd dword ptr ds : [ecx+8]
        fmul dword ptr ds : [public_6c361f0]
        fstp dword ptr ss : [esp+0x60]
        public_6c288f8 : nop
        mov cl, byte ptr ss : [esp+0x18]
        test cl, cl
        je public_6c28978
        movzx ecx, word ptr ds : [eax]
        mov edx, dword ptr ss : [esp+0x3C]
        mov ecx, dword ptr ds : [edx+ecx*4]
        mov esi, dword ptr ss : [esp+0x84]
        mov edi, dword ptr ss : [esp+0x24]
        imul ecx, esi
        add ecx, edi
        lea edi, ss:[esp+0x2C]
        mov dword ptr ss : [esp+0xA8], edi
        movzx edi, word ptr ds : [eax+4]
        mov edx, dword ptr ds : [edx+edi*4]
        mov edi, dword ptr ss : [esp+0x24]
        imul edx, esi
        movzx eax, word ptr ds : [eax+2]
        add edx, edi
        lea edi, ss:[esp+0x2C]
        mov dword ptr ss : [esp+0xC8], edi
        mov edi, dword ptr ss : [esp+0x3C]
        mov eax, dword ptr ds : [edi+eax*4]
        imul eax, esi
        add eax, dword ptr ss : [esp+0x24]
        mov dword ptr ss : [esp+0xA4], ecx
        mov ecx, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0xAC], edx
        mov dword ptr ss : [esp+0xD0], edx
        add ecx, dword ptr ds : [eax]
        shr ecx, 1
        mov dword ptr ss : [esp+0xCC], eax
        mov dword ptr ss : [esp+0x2C], ecx
        public_6c28978 : nop
        mov eax, dword ptr ss : [esp+0x68]
        shr eax, 4
        public_6c2897f : nop
        not al
        and al, 1
        mov byte ptr ss : [esp+0x1B], al
        xor eax, eax
        lea esp, ss:[esp]
        public_6c28990 : nop
        mov edi, dword ptr ds : [ebx+0xC]
        mov cl, byte ptr ss : [esp+0x1B]
        imul edi, dword ptr ds : [ebx+0x14]
        test cl, cl
        jne public_6c28ab7
        mov edx, dword ptr ds : [ebx+0x6C]
        mov ecx, dword ptr ds : [ebx+8]
        mov esi, dword ptr ss : [esp+eax+0x70]
        mov dword ptr ss : [esp+0x10], edx
        add edi, dword ptr ds : [ebx+4]
        mov edx, ecx
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov edx, dword ptr ds : [ebx+0x14]
        mov ecx, dword ptr ds : [ebx+0x10]
        mov esi, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ecx+esi*4], edx
        mov edx, dword ptr ds : [ebx+0x14]
        mov cl, byte ptr ss : [esp+0x1A]
        inc edx
        test cl, cl
        mov dword ptr ds : [ebx+0x14], edx
        je public_6c28a19
        mov edi, dword ptr ds : [ebx+0x20]
        imul edi, dword ptr ds : [ebx+0x28]
        mov ecx, dword ptr ds : [ebx+0x6C]
        mov edx, dword ptr ds : [ebx+0x18]
        mov esi, dword ptr ss : [esp+eax+0x8C]
        mov dword ptr ss : [esp+0x10], ecx
        mov ecx, dword ptr ds : [ebx+0x1C]
        add edi, edx
        mov edx, ecx
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ds : [ebx+0x24]
        mov edx, dword ptr ds : [ebx+0x28]
        mov esi, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ecx+esi*4], edx
        inc dword ptr ds : [ebx+0x28]
        public_6c28a19 : nop
        mov cl, byte ptr ss : [esp+0x19]
        test cl, cl
        je public_6c28a5c
        mov edi, dword ptr ds : [ebx+0x48]
        imul edi, dword ptr ds : [ebx+0x50]
        mov ecx, dword ptr ds : [ebx+0x6C]
        mov edx, dword ptr ds : [ebx+0x40]
        mov esi, dword ptr ss : [esp+eax+0xBC]
        mov dword ptr ss : [esp+0x10], ecx
        mov ecx, dword ptr ds : [ebx+0x44]
        add edi, edx
        mov edx, ecx
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ds : [ebx+0x4C]
        mov edx, dword ptr ds : [ebx+0x50]
        mov esi, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ecx+esi*4], edx
        inc dword ptr ds : [ebx+0x50]
        public_6c28a5c : nop
        mov cl, byte ptr ss : [esp+0x17]
        test cl, cl
        je public_6c28a9f
        mov edi, dword ptr ds : [ebx+0x5C]
        imul edi, dword ptr ds : [ebx+0x64]
        mov ecx, dword ptr ds : [ebx+0x6C]
        mov edx, dword ptr ds : [ebx+0x54]
        mov esi, dword ptr ss : [esp+eax+0x98]
        mov dword ptr ss : [esp+0x10], ecx
        mov ecx, dword ptr ds : [ebx+0x58]
        add edi, edx
        mov edx, ecx
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ds : [ebx+0x60]
        mov edx, dword ptr ds : [ebx+0x64]
        mov esi, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ecx+esi*4], edx
        inc dword ptr ds : [ebx+0x64]
        public_6c28a9f : nop
        mov cl, byte ptr ss : [esp+0x18]
        test cl, cl
        je public_6c28bfb
        mov esi, dword ptr ss : [esp+eax+0xA4]
        jmp public_6c28bc7
        public_6c28ab7 : nop
        mov ecx, dword ptr ds : [ebx+0x6C]
        mov edx, dword ptr ds : [ebx+4]
        mov esi, dword ptr ss : [esp+eax+0xE0]
        mov dword ptr ss : [esp+0x10], ecx
        mov ecx, dword ptr ds : [ebx+8]
        add edi, edx
        mov edx, ecx
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov edx, dword ptr ds : [ebx+0x14]
        mov ecx, dword ptr ds : [ebx+0x10]
        mov esi, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ecx+esi*4], edx
        mov edx, dword ptr ds : [ebx+0x14]
        mov cl, byte ptr ss : [esp+0x1A]
        inc edx
        test cl, cl
        mov dword ptr ds : [ebx+0x14], edx
        je public_6c28b32
        mov edi, dword ptr ds : [ebx+0x20]
        imul edi, dword ptr ds : [ebx+0x28]
        mov ecx, dword ptr ds : [ebx+0x6C]
        mov edx, dword ptr ds : [ebx+0x18]
        mov esi, dword ptr ss : [esp+eax+0xD4]
        mov dword ptr ss : [esp+0x10], ecx
        mov ecx, dword ptr ds : [ebx+0x1C]
        add edi, edx
        mov edx, ecx
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ds : [ebx+0x24]
        mov edx, dword ptr ds : [ebx+0x28]
        mov esi, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ecx+esi*4], edx
        inc dword ptr ds : [ebx+0x28]
        public_6c28b32 : nop
        mov cl, byte ptr ss : [esp+0x19]
        test cl, cl
        je public_6c28b75
        mov edi, dword ptr ds : [ebx+0x48]
        imul edi, dword ptr ds : [ebx+0x50]
        mov ecx, dword ptr ds : [ebx+0x6C]
        mov edx, dword ptr ds : [ebx+0x40]
        mov esi, dword ptr ss : [esp+eax+0xB0]
        mov dword ptr ss : [esp+0x10], ecx
        mov ecx, dword ptr ds : [ebx+0x44]
        add edi, edx
        mov edx, ecx
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ds : [ebx+0x4C]
        mov edx, dword ptr ds : [ebx+0x50]
        mov esi, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ecx+esi*4], edx
        inc dword ptr ds : [ebx+0x50]
        public_6c28b75 : nop
        mov cl, byte ptr ss : [esp+0x17]
        test cl, cl
        je public_6c28bb8
        mov edi, dword ptr ds : [ebx+0x5C]
        imul edi, dword ptr ds : [ebx+0x64]
        mov ecx, dword ptr ds : [ebx+0x6C]
        mov edx, dword ptr ds : [ebx+0x54]
        mov esi, dword ptr ss : [esp+eax+0xEC]
        mov dword ptr ss : [esp+0x10], ecx
        mov ecx, dword ptr ds : [ebx+0x58]
        add edi, edx
        mov edx, ecx
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ds : [ebx+0x60]
        mov edx, dword ptr ds : [ebx+0x64]
        mov esi, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ecx+esi*4], edx
        inc dword ptr ds : [ebx+0x64]
        public_6c28bb8 : nop
        mov cl, byte ptr ss : [esp+0x18]
        test cl, cl
        je public_6c28bfb
        mov esi, dword ptr ss : [esp+eax+0xC8]
        public_6c28bc7 : nop
        mov edi, dword ptr ds : [ebx+0x34]
        imul edi, dword ptr ds : [ebx+0x3C]
        mov ecx, dword ptr ds : [ebx+0x6C]
        mov edx, dword ptr ds : [ebx+0x2C]
        mov dword ptr ss : [esp+0x10], ecx
        mov ecx, dword ptr ds : [ebx+0x30]
        add edi, edx
        mov edx, ecx
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ds : [ebx+0x38]
        mov edx, dword ptr ds : [ebx+0x3C]
        mov esi, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ecx+esi*4], edx
        inc dword ptr ds : [ebx+0x3C]
        public_6c28bfb : nop
        mov ecx, dword ptr ss : [esp+0x144]
        mov edx, dword ptr ds : [ecx+0x1C]
        mov esi, dword ptr ds : [ecx+0x18]
        mov di, word ptr ds : [ebx+0x6C]
        mov word ptr ds : [esi+edx*2], di
        inc dword ptr ds : [ecx+0x1C]
        mov edx, dword ptr ds : [ebx+0x6C]
        mov cl, byte ptr ss : [esp+0x1B]
        inc edx
        mov dword ptr ds : [ebx+0x6C], edx
        mov edi, dword ptr ss : [ebp+0xC]
        imul edi, dword ptr ss : [ebp+0x14]
        add edi, dword ptr ss : [ebp+4]
        test cl, cl
        mov ecx, dword ptr ss : [ebp+0x6C]
        mov dword ptr ss : [esp+0x10], ecx
        mov ecx, dword ptr ss : [ebp+8]
        mov edx, ecx
        jne public_6c28d44
        mov esi, dword ptr ss : [esp+eax+0xE0]
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov edx, dword ptr ss : [ebp+0x14]
        mov ecx, dword ptr ss : [ebp+0x10]
        mov esi, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ecx+esi*4], edx
        mov edx, dword ptr ss : [ebp+0x14]
        mov cl, byte ptr ss : [esp+0x1A]
        inc edx
        test cl, cl
        mov dword ptr ss : [ebp+0x14], edx
        je public_6c28ca6
        mov edi, dword ptr ss : [ebp+0x20]
        imul edi, dword ptr ss : [ebp+0x28]
        mov ecx, dword ptr ss : [ebp+0x6C]
        mov edx, dword ptr ss : [ebp+0x18]
        mov esi, dword ptr ss : [esp+eax+0xD4]
        mov dword ptr ss : [esp+0x10], ecx
        mov ecx, dword ptr ss : [ebp+0x1C]
        add edi, edx
        mov edx, ecx
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ss : [ebp+0x24]
        mov edx, dword ptr ss : [ebp+0x28]
        mov esi, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ecx+esi*4], edx
        inc dword ptr ss : [ebp+0x28]
        public_6c28ca6 : nop
        mov cl, byte ptr ss : [esp+0x19]
        test cl, cl
        je public_6c28ce9
        mov edi, dword ptr ss : [ebp+0x48]
        imul edi, dword ptr ss : [ebp+0x50]
        mov ecx, dword ptr ss : [ebp+0x6C]
        mov edx, dword ptr ss : [ebp+0x40]
        mov esi, dword ptr ss : [esp+eax+0xB0]
        mov dword ptr ss : [esp+0x10], ecx
        mov ecx, dword ptr ss : [ebp+0x44]
        add edi, edx
        mov edx, ecx
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ss : [ebp+0x4C]
        mov edx, dword ptr ss : [ebp+0x50]
        mov esi, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ecx+esi*4], edx
        inc dword ptr ss : [ebp+0x50]
        public_6c28ce9 : nop
        mov cl, byte ptr ss : [esp+0x17]
        test cl, cl
        je public_6c28d2c
        mov edi, dword ptr ss : [ebp+0x5C]
        imul edi, dword ptr ss : [ebp+0x64]
        mov ecx, dword ptr ss : [ebp+0x6C]
        mov edx, dword ptr ss : [ebp+0x54]
        mov esi, dword ptr ss : [esp+eax+0xEC]
        mov dword ptr ss : [esp+0x10], ecx
        mov ecx, dword ptr ss : [ebp+0x58]
        add edi, edx
        mov edx, ecx
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ss : [ebp+0x60]
        mov edx, dword ptr ss : [ebp+0x64]
        mov esi, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ecx+esi*4], edx
        inc dword ptr ss : [ebp+0x64]
        public_6c28d2c : nop
        mov cl, byte ptr ss : [esp+0x18]
        test cl, cl
        je public_6c28e74
        mov esi, dword ptr ss : [esp+eax+0xC8]
        jmp public_6c28e40
        public_6c28d44 : nop
        mov esi, dword ptr ss : [esp+eax+0x70]
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov edx, dword ptr ss : [ebp+0x14]
        mov ecx, dword ptr ss : [ebp+0x10]
        mov esi, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ecx+esi*4], edx
        mov edx, dword ptr ss : [ebp+0x14]
        mov cl, byte ptr ss : [esp+0x1A]
        inc edx
        test cl, cl
        mov dword ptr ss : [ebp+0x14], edx
        je public_6c28dab
        mov edi, dword ptr ss : [ebp+0x20]
        imul edi, dword ptr ss : [ebp+0x28]
        mov ecx, dword ptr ss : [ebp+0x6C]
        mov edx, dword ptr ss : [ebp+0x18]
        mov esi, dword ptr ss : [esp+eax+0x8C]
        mov dword ptr ss : [esp+0x10], ecx
        mov ecx, dword ptr ss : [ebp+0x1C]
        add edi, edx
        mov edx, ecx
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ss : [ebp+0x24]
        mov edx, dword ptr ss : [ebp+0x28]
        mov esi, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ecx+esi*4], edx
        inc dword ptr ss : [ebp+0x28]
        public_6c28dab : nop
        mov cl, byte ptr ss : [esp+0x19]
        test cl, cl
        je public_6c28dee
        mov edi, dword ptr ss : [ebp+0x48]
        imul edi, dword ptr ss : [ebp+0x50]
        mov ecx, dword ptr ss : [ebp+0x6C]
        mov edx, dword ptr ss : [ebp+0x40]
        mov esi, dword ptr ss : [esp+eax+0xBC]
        mov dword ptr ss : [esp+0x10], ecx
        mov ecx, dword ptr ss : [ebp+0x44]
        add edi, edx
        mov edx, ecx
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ss : [ebp+0x4C]
        mov edx, dword ptr ss : [ebp+0x50]
        mov esi, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ecx+esi*4], edx
        inc dword ptr ss : [ebp+0x50]
        public_6c28dee : nop
        mov cl, byte ptr ss : [esp+0x17]
        test cl, cl
        je public_6c28e31
        mov edi, dword ptr ss : [ebp+0x5C]
        imul edi, dword ptr ss : [ebp+0x64]
        mov ecx, dword ptr ss : [ebp+0x6C]
        mov edx, dword ptr ss : [ebp+0x54]
        mov esi, dword ptr ss : [esp+eax+0x98]
        mov dword ptr ss : [esp+0x10], ecx
        mov ecx, dword ptr ss : [ebp+0x58]
        add edi, edx
        mov edx, ecx
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ss : [ebp+0x60]
        mov edx, dword ptr ss : [ebp+0x64]
        mov esi, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ecx+esi*4], edx
        inc dword ptr ss : [ebp+0x64]
        public_6c28e31 : nop
        mov cl, byte ptr ss : [esp+0x18]
        test cl, cl
        je public_6c28e74
        mov esi, dword ptr ss : [esp+eax+0xA4]
        public_6c28e40 : nop
        mov edi, dword ptr ss : [ebp+0x34]
        imul edi, dword ptr ss : [ebp+0x3C]
        mov ecx, dword ptr ss : [ebp+0x6C]
        mov edx, dword ptr ss : [ebp+0x2C]
        mov dword ptr ss : [esp+0x10], ecx
        mov ecx, dword ptr ss : [ebp+0x30]
        add edi, edx
        mov edx, ecx
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ss : [ebp+0x38]
        mov edx, dword ptr ss : [ebp+0x3C]
        mov esi, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ecx+esi*4], edx
        inc dword ptr ss : [ebp+0x3C]
        public_6c28e74 : nop
        mov ecx, dword ptr ss : [esp+0x148]
        mov di, word ptr ss : [ebp+0x6C]
        mov edx, dword ptr ds : [ecx+0x1C]
        mov esi, dword ptr ds : [ecx+0x18]
        mov word ptr ds : [esi+edx*2], di
        inc dword ptr ds : [ecx+0x1C]
        mov esi, dword ptr ss : [ebp+0x6C]
        inc esi
        add eax, 4
        cmp eax, 0xC
        mov dword ptr ss : [ebp+0x6C], esi
        jl public_6c28990
        mov edi, dword ptr ss : [esp+0x6C]
        mov ecx, dword ptr ss : [esp+0x64]
        public_6c28ea7 : nop
        add dword ptr ss : [esp+0x30], 6
        mov eax, 0xAAAAAAAB
        mul dword ptr ds : [edi+0x1C]
        inc ecx
        shr edx, 1
        cmp ecx, edx
        mov dword ptr ss : [esp+0x64], ecx
        jb public_6c28018
        public_6c28ec3 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x130
        ret 0x10
        UNREACHABLE_TRAP(0x6c27cc0)
    }
}

#undef public_6c27e20
#undef public_6c27e24
#undef public_6c27ed6
#undef public_6c27f75
#undef public_6c27fa2
#undef public_6c27fcf
#undef public_6c27ffc
#undef public_6c28018
#undef public_6c28206
#undef public_6c2829a
#undef public_6c2832d
#undef public_6c283ad
#undef public_6c283b9
#undef public_6c284f3
#undef public_6c28587
#undef public_6c2861a
#undef public_6c2869a
#undef public_6c286a6
#undef public_6c287d2
#undef public_6c28865
#undef public_6c288f8
#undef public_6c28978
#undef public_6c2897f
#undef public_6c28990
#undef public_6c28a19
#undef public_6c28a5c
#undef public_6c28a9f
#undef public_6c28ab7
#undef public_6c28b32
#undef public_6c28b75
#undef public_6c28bb8
#undef public_6c28bc7
#undef public_6c28bfb
#undef public_6c28ca6
#undef public_6c28ce9
#undef public_6c28d2c
#undef public_6c28d44
#undef public_6c28dab
#undef public_6c28dee
#undef public_6c28e31
#undef public_6c28e40
#undef public_6c28e74
#undef public_6c28ea7
#undef public_6c28ec3
