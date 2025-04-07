#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce6170);
CLANG_FORWARD_PROC_SYMBOL(public_6ce6300);
CLANG_FORWARD_PROC_SYMBOL(public_6ce7c10);
CLANG_FORWARD_PROC_SYMBOL(public_6cf6bc0);
CLANG_FORWARD_PROC_SYMBOL(public_6d08e20);
CLANG_FORWARD_PROC_SYMBOL(public_6d092c0);
CLANG_FORWARD_PROC_SYMBOL(public_6d11850);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ff70);
CLANG_FORWARD_PROC_SYMBOL(public_6d60012);
CLANG_FORWARD_JUMP_SYMBOL(public_6d6135e);

#define public_6d09300 _public_6d09300
#define public_6d09324 _public_6d09324
#define public_6d09326 _public_6d09326
#define public_6d09375 _public_6d09375
#define public_6d09379 _public_6d09379
#define public_6d093ac _public_6d093ac
#define public_6d093cb _public_6d093cb
#define public_6d094d6 _public_6d094d6
#define public_6d094d9 _public_6d094d9
#define public_6d09576 _public_6d09576
#define public_6d09604 _public_6d09604
#define public_6d09619 _public_6d09619

PROC_DECLARE(0x6d092c0, internal_6d092c0, public_6d092c0);
extern "C" NAKED register_t __cdecl internal_6d092c0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6d6135e @0x6d092c2*/
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
        jne public_6d09300
/*FIXUP push offset public_6d67fdc @0x6d092f1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d67fdc
        push 0x401
        jmp public_6d093ac
        public_6d09300 : nop
        push 0x60
        call public_6d60012
        add esp, 4
        mov dword ptr ss : [esp+0x10], eax
        cmp eax, esi
        mov dword ptr ss : [esp+0xE4], esi
        je public_6d09324
        mov ecx, eax
        call public_6ce6170
        mov ebp, eax
        jmp public_6d09326
        public_6d09324 : nop
        xor ebp, ebp
        public_6d09326 : nop
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
        je public_6d09375
        mov eax, dword ptr ds : [eax+4]
        cmp eax, esi
        je public_6d09375
        mov edx, dword ptr ds : [eax+0x4C]
        and edx, 0x17
        cmp dl, 0x17
        mov dword ptr ss : [esp+0x10], eax
        je public_6d09379
        public_6d09375 : nop
        mov dword ptr ss : [esp+0x10], esi
        public_6d09379 : nop
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
        jne public_6d093cb
/*FIXUP push offset public_6d67fb0 @0x6d093a2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d67fb0
        push 0x419
/*FIXUP public_6d093ac : nop
        push offset public_6d67d10 @0x6d093ac*/
  FIXUP public_6d093ac : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d67d10
        mov eax, 0x100001
/*FIXUP push offset public_6d655d8 @0x6d093b6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d655d8
        push eax
        mov eax, dword ptr ds : [public_6d64a44]
        call dword ptr ds : [eax]
        add esp, 0x14
        jmp public_6d09619
        public_6d093cb : nop
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
        call public_6ce6300
        lea esi, ds:[edi+0xAC]
        mov ecx, esi
        call public_6d11850
        mov ecx, dword ptr ds : [esi+8]
        xor edx, edx
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ds : [eax], edx
        mov dword ptr ds : [eax+8], ebp
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, edx
        je public_6d094d6
        mov dword ptr ds : [ecx], eax
        jmp public_6d094d9
        public_6d094d6 : nop
        mov dword ptr ds : [esi+4], eax
        public_6d094d9 : nop
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
        jne public_6d09576
        call public_6d5ff70
        mov dword ptr ds : [public_6d8da08], eax
        public_6d09576 : nop
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
        je public_6d09619
        public_6d09604 : nop
        push ebp
        lea edx, ss:[esp+0x1C]
        push edx
        lea ecx, ds:[esi+8]
        call public_6cf6bc0
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ds : [edi+0xC]
        jne public_6d09604
        public_6d09619 : nop
        mov ecx, dword ptr ss : [esp+0xDC]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0xD8
        ret 4
        UNREACHABLE_TRAP(0x6d092c0)
    }
}

#undef public_6d09300
#undef public_6d09324
#undef public_6d09326
#undef public_6d09375
#undef public_6d09379
#undef public_6d093ac
#undef public_6d093cb
#undef public_6d094d6
#undef public_6d094d9
#undef public_6d09576
#undef public_6d09604
#undef public_6d09619
