#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cec4d0);
CLANG_FORWARD_PROC_SYMBOL(public_6cecdf0);
CLANG_FORWARD_PROC_SYMBOL(public_6cfd1e0);
CLANG_FORWARD_PROC_SYMBOL(public_6cfd390);
CLANG_FORWARD_PROC_SYMBOL(public_6d06cd0);
CLANG_FORWARD_PROC_SYMBOL(public_6d0e750);
CLANG_FORWARD_PROC_SYMBOL(public_6d15d10);
CLANG_FORWARD_PROC_SYMBOL(public_6d43650);
CLANG_FORWARD_JUMP_SYMBOL(public_6d60618);

#define public_6cec504 _public_6cec504
#define public_6cec560 _public_6cec560
#define public_6cec570 _public_6cec570
#define public_6cec690 _public_6cec690
#define public_6cec6ac _public_6cec6ac
#define public_6cec6b4 _public_6cec6b4
#define public_6cec6d6 _public_6cec6d6
#define public_6cec705 _public_6cec705
#define public_6cec707 _public_6cec707
#define public_6cec7a3 _public_6cec7a3

PROC_DECLARE(0x6cec4d0, internal_6cec4d0, public_6cec4d0);
extern "C" NAKED register_t __cdecl internal_6cec4d0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6d60618 @0x6cec4d2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d60618
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x70
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x80]
        push edi
        mov edi, dword ptr ds : [eax]
        xor bl, bl
        cmp edi, eax
        mov byte ptr ss : [esp+0x13], bl
        mov dword ptr ss : [esp+0x14], eax
        je public_6cec570
        public_6cec504 : nop
        test bl, bl
        jne public_6cec705
        mov ecx, dword ptr ss : [esp+0x94]
        mov eax, dword ptr ds : [edi+0xC]
        cmp eax, dword ptr ds : [ecx]
        jne public_6cec560
        mov edx, dword ptr ss : [esp+0x9C]
        mov eax, dword ptr ss : [esp+0x98]
        mov ecx, dword ptr ss : [esp+0x90]
        push edx
        push eax
        push ecx
        lea ecx, ds:[edi+8]
        mov bl, 1
        call dword ptr ds : [public_6d6431c]
        fld dword ptr ss : [esp+0xA0]
        fcomp dword ptr ds : [public_6d6572c]
        mov byte ptr ss : [esp+0x13], al
        fnstsw ax
        test ah, 0x44
        jnp public_6cec560
        mov dword ptr ss : [esp+0xA0], 0xBF800000
        public_6cec560 : nop
        mov edi, dword ptr ds : [edi]
        cmp edi, dword ptr ss : [esp+0x14]
        jne public_6cec504
        test bl, bl
        jne public_6cec705
        public_6cec570 : nop
        call public_6cfd390
        mov edx, dword ptr ss : [esp+0x94]
        push edx
        lea ecx, ss:[esp+0x18]
        push ecx
        mov ecx, eax
        call public_6d15d10
        mov edx, dword ptr ss : [esp+0x14]
        mov edi, dword ptr ds : [edx+0x10]
        xor ebp, ebp
        cmp edi, ebp
        je public_6cec6d6
        mov bl, 1
        push edi
        lea ecx, ss:[esp+0x48]
        mov byte ptr ss : [esp+0x17], bl
        call dword ptr ds : [public_6d64318]
        mov eax, dword ptr ds : [edi+0x34]
        mov cl, byte ptr ds : [edi+0x38]
        mov dword ptr ss : [esp+0x78], eax
        mov byte ptr ss : [esp+0x7C], cl
        mov dword ptr ss : [esp+0x44], offset public_6d65724
        mov eax, dword ptr ds : [esi+0x80]
        lea ecx, ds:[esi+0x7C]
        lea edx, ss:[esp+0x44]
        push edx
        push eax
        lea eax, ss:[esp+0x1C]
        push eax
        mov dword ptr ss : [esp+0x94], ebp
        call public_6cecdf0
        lea ecx, ss:[esp+0x44]
        mov dword ptr ss : [esp+0x88], 0xFFFFFFFF
        call dword ptr ds : [public_6d64314]
        mov ecx, dword ptr ds : [esi+0x80]
        mov edi, dword ptr ds : [ecx+4]
        add edi, 8
        push esi
        mov ecx, edi
        call public_6cfd1e0
        mov ecx, edi
        call dword ptr ds : [public_6d64310]
        mov al, byte ptr ds : [esi+0x88]
        test al, al
        jne public_6cec690
        mov al, byte ptr ds : [edi+0x38]
        test al, al
        je public_6cec690
        mov ecx, dword ptr ds : [esi+0x28]
        mov byte ptr ds : [esi+0x88], bl
        mov dword ptr ss : [esp+0x18], ebp
        mov dword ptr ss : [esp+0x1C], ebp
        mov dword ptr ss : [esp+0x20], ebp
        mov dword ptr ss : [esp+0x24], ebp
        call public_6d06cd0
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        mov dword ptr ss : [esp+0x18], eax
        call dword ptr ds : [edx+0x20]
        lea ecx, ss:[esp+0x20]
        mov dword ptr ss : [esp+0x1C], eax
        mov eax, dword ptr ds : [esi]
        push ecx
        mov ecx, esi
        call dword ptr ds : [eax+0x88]
        lea edx, ss:[esp+0x18]
        push edx
        push 0x38
        mov dword ptr ss : [esp+0x2C], ebp
        call public_6d43650
        fld dword ptr ds : [edi+8]
        fcomp dword ptr ss : [esp+0x2C]
        add esp, 8
        fnstsw ax
        test ah, 5
        jp public_6cec6b4
        mov eax, dword ptr ss : [esp+0x24]
        mov ecx, eax
        mov dword ptr ss : [esp+0xA0], eax
        push ecx
        jmp public_6cec6ac
        public_6cec690 : nop
        fld dword ptr ss : [esp+0xA0]
        fcomp dword ptr ds : [public_6d6572c]
        fnstsw ax
        test ah, 0x44
        jnp public_6cec6b4
        mov edx, dword ptr ss : [esp+0xA0]
        push edx
        public_6cec6ac : nop
        mov ecx, edi
        call dword ptr ds : [public_6d6430c]
        public_6cec6b4 : nop
        mov eax, dword ptr ss : [esp+0x9C]
        mov ecx, dword ptr ss : [esp+0x98]
        mov edx, dword ptr ss : [esp+0x90]
        push eax
        push ecx
        push edx
        mov ecx, edi
        call dword ptr ds : [public_6d6431c]
        jmp public_6cec707
        public_6cec6d6 : nop
        mov ecx, dword ptr ss : [esp+0x94]
        mov edi, 0x100002
        call dword ptr ds : [public_6d642d4]
        push eax
        mov eax, dword ptr ds : [public_6d64a44]
        push 0xC73
/*FIXUP push offset public_6d654b0 @0x6cec6f3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d654b0
/*FIXUP push offset public_6d656e0 @0x6cec6f8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d656e0
        push edi
        call dword ptr ds : [eax]
        add esp, 0x14
        jmp public_6cec707
        public_6cec705 : nop
        xor ebp, ebp
        public_6cec707 : nop
        cmp dword ptr ds : [esi+0x28], ebp
        je public_6cec7a3
        mov al, byte ptr ss : [esp+0x13]
        test al, al
        je public_6cec7a3
        mov ecx, dword ptr ds : [public_6d6402c]
        mov eax, dword ptr ss : [esp+0x90]
        mov dword ptr ss : [esp+0x28], ebp
        mov dword ptr ss : [esp+0x2C], ebp
        mov dword ptr ss : [esp+0x30], ebp
        mov dx, word ptr ds : [ecx]
        mov word ptr ss : [esp+0x34], dx
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        mov dword ptr ss : [esp+0x38], 0
        mov dword ptr ss : [esp+0x3C], 0xBF800000
        mov byte ptr ss : [esp+0x40], 1
        mov dword ptr ss : [esp+0x28], eax
        call dword ptr ds : [edx+0x20]
        mov dx, word ptr ss : [esp+0x98]
        mov dword ptr ss : [esp+0x2C], eax
        mov eax, dword ptr ss : [esp+0x94]
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x9C]
        mov dword ptr ss : [esp+0x30], ecx
        mov ecx, dword ptr ss : [esp+0xA0]
        mov word ptr ss : [esp+0x34], dx
        lea edx, ss:[esp+0x28]
        mov dword ptr ss : [esp+0x3C], ecx
        mov ecx, dword ptr ds : [esi+0x28]
        push edx
        mov dword ptr ss : [esp+0x3C], eax
        mov byte ptr ss : [esp+0x44], 1
        call public_6d0e750
        public_6cec7a3 : nop
        mov ecx, dword ptr ss : [esp+0x80]
        pop edi
        pop esi
        pop ebp
        mov al, bl
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x7C
        ret 0x14
        UNREACHABLE_TRAP(0x6cec4d0)
    }
}

#undef public_6cec504
#undef public_6cec560
#undef public_6cec570
#undef public_6cec690
#undef public_6cec6ac
#undef public_6cec6b4
#undef public_6cec6d6
#undef public_6cec705
#undef public_6cec707
#undef public_6cec7a3
