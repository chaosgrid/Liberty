#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cecbd0);
CLANG_FORWARD_PROC_SYMBOL(public_6cf3ce0);
CLANG_FORWARD_PROC_SYMBOL(public_6cf6cf0);
CLANG_FORWARD_PROC_SYMBOL(public_6d08e20);
CLANG_FORWARD_PROC_SYMBOL(public_6d09640);
CLANG_FORWARD_PROC_SYMBOL(public_6d0c840);
CLANG_FORWARD_PROC_SYMBOL(public_6d11850);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ff70);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);
CLANG_FORWARD_PROC_SYMBOL(public_6d60012);
CLANG_FORWARD_JUMP_SYMBOL(public_6d61389);

#define public_6d09699 _public_6d09699
#define public_6d096da _public_6d096da
#define public_6d09716 _public_6d09716
#define public_6d09763 _public_6d09763
#define public_6d09767 _public_6d09767
#define public_6d0982f _public_6d0982f
#define public_6d09832 _public_6d09832
#define public_6d098ce _public_6d098ce
#define public_6d09930 _public_6d09930
#define public_6d09949 _public_6d09949
#define public_6d099b0 _public_6d099b0
#define public_6d099be _public_6d099be

PROC_DECLARE(0x6d09640, internal_6d09640, public_6d09640);
extern "C" NAKED register_t __cdecl internal_6d09640()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6d61389 @0x6d09642*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d61389
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xD4
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov dword ptr ss : [esp+0xC], edi
        call dword ptr ds : [public_6d642ec]
        xor ebp, ebp
        cmp eax, ebp
        jne public_6d09699
/*FIXUP push offset public_6d67fdc @0x6d09670*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d67fdc
        push 0x446
/*FIXUP push offset public_6d67d10 @0x6d0967a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d67d10
        mov eax, 0x100001
/*FIXUP push offset public_6d655d8 @0x6d09684*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d655d8
        push eax
        mov eax, dword ptr ds : [public_6d64a44]
        call dword ptr ds : [eax]
        add esp, 0x14
        jmp public_6d099be
        public_6d09699 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov esi, ecx
        and esi, 0x3FFFFFFF
        lea ecx, ds:[ecx+1]
        mov dword ptr ss : [esp+0x28], esi
        mov dword ptr ds : [eax+4], ecx
        jne public_6d096da
        mov ecx, dword ptr ds : [public_6d64a44]
/*FIXUP push offset public_6d68008 @0x6d096b6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d68008
        push 0x44D
/*FIXUP push offset public_6d67d10 @0x6d096c0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d67d10
        mov eax, 0x100001
/*FIXUP push offset public_6d655d8 @0x6d096ca*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d655d8
        push eax
        call dword ptr ds : [ecx]
        add esp, 0x14
        jmp public_6d099be
        public_6d096da : nop
        push ebx
        mov ebx, dword ptr ss : [esp+0xF4]
        mov edx, dword ptr ds : [ebx+0x4C]
        push edx
        mov ecx, edi
        call public_6d0c840
        push 0x80
        mov dword ptr ss : [esp+0x2C], eax
        call public_6d60012
        add esp, 4
        mov dword ptr ss : [esp+0x18], eax
        cmp eax, ebp
        mov dword ptr ss : [esp+0xEC], ebp
        je public_6d09716
        mov ecx, eax
        call public_6cf3ce0
        mov ebp, eax
        public_6d09716 : nop
        mov ecx, dword ptr ds : [ebx+0xC]
        mov eax, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0xEC], 0xFFFFFFFF
        call dword ptr ds : [eax+0xC]
        mov eax, dword ptr ds : [ebx+0xC]
        mov edx, dword ptr ss : [ebp]
        push eax
        mov ecx, ebp
        call dword ptr ds : [edx+0x164]
        mov ecx, dword ptr ds : [ebx+0xC]
        call dword ptr ds : [public_6d6439c]
        lea eax, ss:[ebp+0xC]
        xor ecx, ecx
        cmp eax, ecx
        je public_6d09763
        mov eax, dword ptr ds : [eax+4]
        cmp eax, ecx
        je public_6d09763
        mov edx, dword ptr ds : [eax+0x4C]
        and edx, 0xA7
        cmp dl, 0xA7
        mov dword ptr ss : [esp+0x18], eax
        je public_6d09767
        public_6d09763 : nop
        mov dword ptr ss : [esp+0x18], ecx
        public_6d09767 : nop
        lea ecx, ss:[esp+0x7C]
        call public_6d08e20
        lea eax, ds:[ebx+0x10]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x8C], ecx
        mov dword ptr ss : [esp+0x7C], esi
        mov dword ptr ss : [esp+0x80], edi
        mov dword ptr ss : [esp+0x90], edx
        mov dword ptr ss : [esp+0x94], eax
        mov dword ptr ss : [esp+0x84], 0
        lea esi, ds:[ebx+0x1C]
        mov ecx, 9
        lea edi, ss:[esp+0x98]
        rep movsd
        lea ecx, ds:[ebx+0x40]
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0xBC], edx
        mov edx, dword ptr ds : [ebx+4]
        mov dword ptr ss : [esp+0xC4], ecx
        mov cx, word ptr ds : [ebx+0x50]
        mov dword ptr ss : [esp+0xD8], edx
        mov dword ptr ss : [esp+0xC0], eax
        mov eax, dword ptr ss : [esp+0x28]
        lea edx, ss:[esp+0x7C]
        mov word ptr ss : [esp+0xE0], cx
        mov ecx, dword ptr ss : [esp+0x18]
        push edx
        mov dword ptr ss : [esp+0xE0], eax
        call dword ptr ds : [public_6d646a0]
        mov edi, dword ptr ss : [esp+0x10]
        lea esi, ds:[edi+0x70]
        mov ecx, esi
        call public_6d11850
        mov ecx, dword ptr ds : [esi+8]
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ds : [eax], 0
        mov dword ptr ds : [eax+8], ebp
        mov ecx, dword ptr ds : [esi+8]
        test ecx, ecx
        je public_6d0982f
        mov dword ptr ds : [ecx], eax
        jmp public_6d09832
        public_6d0982f : nop
        mov dword ptr ds : [esi+4], eax
        public_6d09832 : nop
        push 0
        mov dword ptr ds : [esi+8], eax
        mov edx, dword ptr ss : [ebp]
        push edi
        mov ecx, ebp
        call dword ptr ds : [edx+0x170]
        mov eax, dword ptr ss : [ebp]
        mov ecx, ebp
        call dword ptr ds : [eax+0x1BC]
        mov cl, byte ptr ss : [esp+0x17]
        xor esi, esi
        mov byte ptr ss : [esp+0x34], cl
        mov dword ptr ss : [esp+0x38], esi
        mov dword ptr ss : [esp+0x3C], esi
        mov dword ptr ss : [esp+0x40], esi
        lea edx, ss:[esp+0x10]
        push edx
        push 1
        push esi
        lea ecx, ss:[esp+0x40]
        mov dword ptr ss : [esp+0xF8], 1
        mov dword ptr ss : [esp+0x1C], ebp
        call public_6cecbd0
        mov eax, dword ptr ds : [ebx+0xC]
        mov ecx, dword ptr ds : [eax+8]
        mov eax, dword ptr ss : [esp+0x8C]
        mov edx, dword ptr ss : [esp+0x7C]
        mov dword ptr ss : [esp+0x48], eax
        mov eax, dword ptr ds : [public_6d8da08]
        cmp eax, esi
        mov dword ptr ss : [esp+0x6C], ecx
        mov ecx, dword ptr ss : [esp+0x90]
        mov dword ptr ss : [esp+0x44], edx
        mov edx, dword ptr ss : [esp+0x94]
        mov dword ptr ss : [esp+0x70], esi
        mov dword ptr ss : [esp+0x4C], ecx
        mov dword ptr ss : [esp+0x50], edx
        jne public_6d098ce
        call public_6d5ff70
        mov dword ptr ds : [public_6d8da08], eax
        public_6d098ce : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x98]
        push edx
        lea edx, ss:[esp+0x1C]
        push edx
        push eax
        call dword ptr ds : [ecx+0x50]
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x54], eax
        mov eax, dword ptr ss : [esp+0x24]
        mov dword ptr ss : [esp+0x58], ecx
        mov ecx, dword ptr ds : [ebx+4]
        mov dword ptr ss : [esp+0x60], eax
        mov ax, word ptr ds : [ebx+0x50]
        mov dword ptr ss : [esp+0x5C], edx
        mov edx, dword ptr ds : [ebx+0x4C]
        mov dword ptr ss : [esp+0x74], ecx
        mov cx, word ptr ds : [ebx+8]
        mov word ptr ss : [esp+0x68], ax
        mov eax, dword ptr ds : [edi+0xC]
        mov dword ptr ss : [esp+0x64], edx
        mov word ptr ss : [esp+0x78], cx
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        je public_6d09949
        lea ebx, ds:[ebx]
        public_6d09930 : nop
        lea edx, ss:[esp+0x34]
        push edx
        lea eax, ss:[esp+0x48]
        push eax
        lea ecx, ds:[esi+8]
        call public_6cf6cf0
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ds : [edi+0xC]
        jne public_6d09930
        public_6d09949 : nop
        mov esi, dword ptr ss : [esp+0x28]
        test esi, esi
        je public_6d099b0
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x160]
        test al, al
        jne public_6d099b0
        lea eax, ds:[esi+0xC]
        test eax, eax
        je public_6d099b0
        mov ecx, dword ptr ds : [eax+4]
        test ecx, ecx
        je public_6d099b0
        mov eax, dword ptr ds : [ecx+0x4C]
        and eax, 0x103
        cmp eax, 0x103
        jne public_6d099b0
        call dword ptr ds : [public_6d6422c]
        test eax, eax
        je public_6d099b0
        mov ecx, dword ptr ds : [ebx+4]
        mov edx, dword ptr ss : [esp+0x2C]
        mov dword ptr ss : [esp+0x18], ecx
        lea ecx, ss:[esp+0x18]
        mov dword ptr ss : [esp+0x30], ecx
        lea ecx, ss:[esp+0x2C]
        mov dword ptr ss : [esp+0x1C], edx
        mov edx, dword ptr ds : [eax]
        push ecx
        mov ecx, eax
        mov dword ptr ss : [esp+0x30], 6
        call dword ptr ds : [edx]
        public_6d099b0 : nop
        mov edx, dword ptr ss : [esp+0x38]
        push edx
        call public_6d5ffb0
        add esp, 4
        pop ebx
        public_6d099be : nop
        mov ecx, dword ptr ss : [esp+0xE0]
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs : [0], ecx
        add esp, 0xE0
        ret 4
        UNREACHABLE_TRAP(0x6d09640)
    }
}

#undef public_6d09699
#undef public_6d096da
#undef public_6d09716
#undef public_6d09763
#undef public_6d09767
#undef public_6d0982f
#undef public_6d09832
#undef public_6d098ce
#undef public_6d09930
#undef public_6d09949
#undef public_6d099b0
#undef public_6d099be
