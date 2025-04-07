#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce7c10);
CLANG_FORWARD_PROC_SYMBOL(public_6cf3330);
CLANG_FORWARD_PROC_SYMBOL(public_6cf3560);
CLANG_FORWARD_PROC_SYMBOL(public_6cf6d60);
CLANG_FORWARD_PROC_SYMBOL(public_6d08e20);
CLANG_FORWARD_PROC_SYMBOL(public_6d08ef0);
CLANG_FORWARD_PROC_SYMBOL(public_6d11850);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ff70);
CLANG_FORWARD_PROC_SYMBOL(public_6d60012);
CLANG_FORWARD_JUMP_SYMBOL(public_6d6135e);

#define public_6d08f30 _public_6d08f30
#define public_6d08f57 _public_6d08f57
#define public_6d08f59 _public_6d08f59
#define public_6d08fa8 _public_6d08fa8
#define public_6d08fac _public_6d08fac
#define public_6d08fdf _public_6d08fdf
#define public_6d08ffe _public_6d08ffe
#define public_6d09109 _public_6d09109
#define public_6d0910c _public_6d0910c
#define public_6d091a9 _public_6d091a9
#define public_6d09237 _public_6d09237
#define public_6d0924c _public_6d0924c

PROC_DECLARE(0x6d08ef0, internal_6d08ef0, public_6d08ef0);
extern "C" NAKED register_t __cdecl internal_6d08ef0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6d6135e @0x6d08ef2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d6135e
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xCC
        push ebx
        push ebp
        push esi
        push edi
        mov dword ptr ss : [esp+0x14], ecx
        call dword ptr ds : [public_6d642ec]
        mov edi, eax
        xor esi, esi
        cmp edi, esi
        jne public_6d08f30
/*FIXUP push offset public_6d67fdc @0x6d08f21*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d67fdc
        push 0x3AA
        jmp public_6d08fdf
        public_6d08f30 : nop
        push 0xA0
        call public_6d60012
        add esp, 4
        mov dword ptr ss : [esp+0x10], eax
        cmp eax, esi
        mov dword ptr ss : [esp+0xE4], esi
        je public_6d08f57
        mov ecx, eax
        call public_6cf3330
        mov ebp, eax
        jmp public_6d08f59
        public_6d08f57 : nop
        xor ebp, ebp
        public_6d08f59 : nop
        mov ebx, dword ptr ss : [esp+0xEC]
        mov ecx, dword ptr ds : [ebx+0xC]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0xE4], 0xFFFFFFFF
        call dword ptr ds : [edx+0xC]
        mov ecx, dword ptr ds : [ebx+0xC]
        mov eax, dword ptr ss : [ebp]
        push ecx
        mov ecx, ebp
        call dword ptr ds : [eax+0x164]
        mov ecx, dword ptr ds : [ebx+0xC]
        call dword ptr ds : [public_6d6439c]
        lea eax, ss:[ebp+0xC]
        cmp eax, esi
        je public_6d08fa8
        mov eax, dword ptr ds : [eax+4]
        cmp eax, esi
        je public_6d08fa8
        mov edx, dword ptr ds : [eax+0x4C]
        and edx, 0xF
        cmp dl, 0xF
        mov dword ptr ss : [esp+0x10], eax
        je public_6d08fac
        public_6d08fa8 : nop
        mov dword ptr ss : [esp+0x10], esi
        public_6d08fac : nop
        lea ecx, ss:[esp+0x70]
        call public_6d08e20
        mov dword ptr ss : [esp+0xCC], esi
        mov ecx, dword ptr ds : [edi+4]
        mov eax, ecx
        and eax, 0x3FFFFFFF
        inc ecx
        test eax, 0x3FFFFFFF
        mov dword ptr ds : [edi+4], ecx
        mov dword ptr ss : [esp+0x70], eax
        jne public_6d08ffe
/*FIXUP push offset public_6d67fb0 @0x6d08fd5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d67fb0
        push 0x3C2
/*FIXUP public_6d08fdf : nop
        push offset public_6d67d10 @0x6d08fdf*/
  FIXUP public_6d08fdf : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d67d10
        mov eax, 0x100001
/*FIXUP push offset public_6d655d8 @0x6d08fe9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d655d8
        push eax
        mov eax, dword ptr ds : [public_6d64a44]
        call dword ptr ds : [eax]
        add esp, 0x14
        jmp public_6d0924c
        public_6d08ffe : nop
        fld dword ptr ds : [ebx+0x48]
        lea edx, ds:[ebx+0x10]
        mov eax, dword ptr ds : [edx]
        fld dword ptr ds : [ebx+0x44]
        fld dword ptr ds : [ebx+0x40]
        mov dword ptr ss : [esp+0x80], eax
        fld st(0)
        lea eax, ds:[ebx+0x40]
        fmul st, st(1)
        mov ecx, dword ptr ss : [esp+0x14]
        fld st(2)
        mov dword ptr ss : [esp+0x74], ecx
        fmul st, st(3)
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ss : [esp+0x84], ecx
        faddp 
        mov dword ptr ss : [esp+0x78], esi
        fld st(3)
        mov dword ptr ss : [esp+0x88], edx
        fmul st, st(4)
        lea esi, ds:[ebx+0x1C]
        mov ecx, 9
        lea edi, ss:[esp+0x8C]
        faddp 
        rep movsd
        fsqrt 
        mov ecx, eax
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0xB0], edx
        mov edx, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ds : [ecx+8]
        push ecx
        mov dword ptr ss : [esp+0xB8], edx
        lea edx, ss:[esp+0xD4]
        mov dword ptr ss : [esp+0xBC], ecx
        fstp st(3)
        fstp st(0)
        fstp st(0)
        fstp dword ptr ss : [esp]
        push edx
        call dword ptr ds : [public_6d6469c]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0xC4], ecx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ebx+4]
        mov dword ptr ss : [esp+0xC8], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0xCC], eax
        mov dword ptr ss : [esp+0xD4], ecx
        mov ecx, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ds : [ecx]
        add esp, 8
        lea eax, ss:[esp+0x70]
        push eax
        call dword ptr ds : [edx+0xA0]
        mov edi, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [ebp]
        push 0
        push edi
        mov ecx, ebp
        call dword ptr ds : [edx+0x170]
        mov ecx, ebp
        call public_6cf3560
        lea esi, ds:[edi+0x98]
        mov ecx, esi
        call public_6d11850
        mov ecx, dword ptr ds : [esi+8]
        xor edx, edx
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ds : [eax], edx
        mov dword ptr ds : [eax+8], ebp
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, edx
        je public_6d09109
        mov dword ptr ds : [ecx], eax
        jmp public_6d0910c
        public_6d09109 : nop
        mov dword ptr ds : [esi+4], eax
        public_6d0910c : nop
        mov dword ptr ds : [esi+8], eax
        mov eax, dword ptr ds : [public_6d6402c]
        push edx
        mov dword ptr ss : [esp+0x1C], edx
        mov dword ptr ss : [esp+0x20], edx
        mov dword ptr ss : [esp+0x24], edx
        mov cx, word ptr ds : [eax]
        push edx
        mov word ptr ss : [esp+0x2C], cx
        push edx
        lea ecx, ss:[esp+0x50]
        mov dword ptr ss : [esp+0x34], 0
        mov dword ptr ss : [esp+0x38], 0
        mov dword ptr ss : [esp+0x3C], 0
        call public_6ce7c10
        push 0
        push 0
        push 0
        lea ecx, ss:[esp+0x5C]
        call public_6ce7c10
        mov edx, dword ptr ss : [esp+0x70]
        mov eax, dword ptr ds : [ebx+0xC]
        mov dword ptr ss : [esp+0x18], edx
        mov edx, dword ptr ss : [esp+0x80]
        mov dword ptr ss : [esp+0x5C], 0
        mov ecx, dword ptr ds : [eax+8]
        mov eax, dword ptr ss : [esp+0x84]
        mov dword ptr ss : [esp+0x2C], eax
        mov eax, dword ptr ds : [public_6d8da08]
        test eax, eax
        mov dword ptr ss : [esp+0x1C], ecx
        mov ecx, dword ptr ss : [esp+0x88]
        mov dword ptr ss : [esp+0x28], edx
        mov dword ptr ss : [esp+0x30], ecx
        jne public_6d091a9
        call public_6d5ff70
        mov dword ptr ds : [public_6d8da08], eax
        public_6d091a9 : nop
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x8C]
        push ecx
        lea ecx, ss:[esp+0x64]
        push ecx
        push eax
        call dword ptr ds : [edx+0x50]
        mov eax, dword ptr ss : [esp+0x64]
        mov edx, dword ptr ss : [esp+0x60]
        mov ecx, dword ptr ss : [esp+0x68]
        mov dword ptr ss : [esp+0x38], eax
        mov eax, dword ptr ss : [esp+0xB0]
        mov dword ptr ss : [esp+0x34], edx
        mov edx, dword ptr ss : [esp+0x6C]
        mov dword ptr ss : [esp+0x3C], ecx
        mov ecx, dword ptr ss : [esp+0xB4]
        mov dword ptr ss : [esp+0x44], eax
        mov eax, dword ptr ss : [esp+0xBC]
        mov dword ptr ss : [esp+0x40], edx
        mov edx, dword ptr ss : [esp+0xB8]
        mov dword ptr ss : [esp+0x48], ecx
        mov ecx, dword ptr ss : [esp+0xC0]
        mov dword ptr ss : [esp+0x50], eax
        mov eax, dword ptr ds : [ebx+4]
        mov dword ptr ss : [esp+0x4C], edx
        mov edx, dword ptr ss : [esp+0xC4]
        mov dword ptr ss : [esp+0x54], ecx
        mov cx, word ptr ds : [ebx+8]
        mov dword ptr ss : [esp+0x20], eax
        mov eax, dword ptr ds : [edi+0xC]
        mov dword ptr ss : [esp+0x58], edx
        mov word ptr ss : [esp+0x24], cx
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        je public_6d0924c
        public_6d09237 : nop
        push ebp
        lea edx, ss:[esp+0x1C]
        push edx
        lea ecx, ds:[esi+8]
        call public_6cf6d60
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ds : [edi+0xC]
        jne public_6d09237
        public_6d0924c : nop
        mov ecx, dword ptr ss : [esp+0xDC]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0xD8
        ret 4
        UNREACHABLE_TRAP(0x6d08ef0)
    }
}

#undef public_6d08f30
#undef public_6d08f57
#undef public_6d08f59
#undef public_6d08fa8
#undef public_6d08fac
#undef public_6d08fdf
#undef public_6d08ffe
#undef public_6d09109
#undef public_6d0910c
#undef public_6d091a9
#undef public_6d09237
#undef public_6d0924c
