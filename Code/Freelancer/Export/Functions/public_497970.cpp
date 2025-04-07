#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_42a7e0);
CLANG_FORWARD_PROC_SYMBOL(public_4347e0);
CLANG_FORWARD_PROC_SYMBOL(public_458890);
CLANG_FORWARD_PROC_SYMBOL(public_46ea00);
CLANG_FORWARD_PROC_SYMBOL(public_46ea80);
CLANG_FORWARD_PROC_SYMBOL(public_476080);
CLANG_FORWARD_PROC_SYMBOL(public_497970);
CLANG_FORWARD_PROC_SYMBOL(public_49f0e0);
CLANG_FORWARD_PROC_SYMBOL(public_4a0220);
CLANG_FORWARD_PROC_SYMBOL(public_5798b0);
CLANG_FORWARD_PROC_SYMBOL(public_57b370);
CLANG_FORWARD_PROC_SYMBOL(public_57b3e0);
CLANG_FORWARD_PROC_SYMBOL(public_57da40);
CLANG_FORWARD_PROC_SYMBOL(public_57e2c0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_JUMP_SYMBOL(public_5bca3b);

#define public_4979a0 _public_4979a0
#define public_497a34 _public_497a34
#define public_497aa6 _public_497aa6
#define public_497b13 _public_497b13
#define public_497b80 _public_497b80
#define public_497b8f _public_497b8f
#define public_497b9e _public_497b9e
#define public_497bbb _public_497bbb
#define public_497c10 _public_497c10
#define public_497cd0 _public_497cd0
#define public_497d06 _public_497d06
#define public_497d11 _public_497d11

PROC_DECLARE(0x497970, internal_497970, public_497970);
extern "C" NAKED register_t __cdecl internal_497970()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_5bca3b @0x497978*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bca3b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr fs : [0], esp
        sub esp, 0x18
        push ebx
        xor ebx, ebx
        cmp eax, ebx
        push esi
        mov esi, ecx
        jne public_4979a0
        cmp dword ptr ss : [esp+0x34], ebx
        je public_497d11
        public_4979a0 : nop
        mov al, byte ptr ss : [esp+0x38]
        push ebp
        push edi
        push ebx
        push ebx
        lea ecx, ss:[esp+0x24]
        mov byte ptr ss : [esp+0x24], al
        call public_42a7e0
        mov dword ptr ss : [esp+0x20], eax
        mov dword ptr ss : [esp+0x24], ebx
        mov ebp, dword ptr ds : [public_5c62b8]
        push 0xF64
        lea ecx, ss:[esp+0x18]
        mov dword ptr ss : [esp+0x34], ebx
        call ebp
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        mov byte ptr ss : [esp+0x30], 1
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+0x10], eax
        mov eax, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ds : [eax+4]
        lea edi, ds:[eax+4]
        push ecx
        push eax
        lea ecx, ss:[esp+0x24]
        mov byte ptr ss : [esp+0x38], 2
        call public_42a7e0
        mov dword ptr ds : [edi], eax
        mov ecx, dword ptr ds : [eax+4]
        lea edx, ss:[esp+0x10]
        mov dword ptr ds : [ecx], eax
        push edx
        add eax, 8
        push eax
        call public_46ea00
        mov ecx, dword ptr ss : [esp+0x2C]
        add esp, 8
        inc ecx
        mov dword ptr ss : [esp+0x24], ecx
        mov ecx, dword ptr ss : [esp+0x10]
        cmp ecx, ebx
        mov byte ptr ss : [esp+0x30], 1
        je public_497a34
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x10], ebx
        public_497a34 : nop
        lea ecx, ss:[esp+0x14]
        mov byte ptr ss : [esp+0x30], bl
        call dword ptr ds : [public_5c62b4]
        mov eax, dword ptr ss : [esp+0x38]
        cmp eax, ebx
        je public_497aa6
        mov ecx, dword ptr ds : [public_6119f8]
        mov edx, dword ptr ds : [public_67eca8]
        push ecx
/*FIXUP push offset public_66fc60 @0x497a57*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        push eax
        push edx
        call public_4347e0
        add esp, 0x10
/*FIXUP push offset public_66fc60 @0x497a66*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        call dword ptr ds : [public_616420]
/*FIXUP push offset public_5d0a08 @0x497a71*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0a08
/*FIXUP push offset public_66fc60 @0x497a76*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        call dword ptr ds : [public_5c70ac]
        add esp, 8
        push ebx
        lea eax, ss:[esp+0x20]
        push eax
/*FIXUP push offset public_66fc60 @0x497a8a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        call dword ptr ds : [public_5c71c8]
        add esp, 4
        push eax
/*FIXUP push offset public_66fc60 @0x497a99*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        call public_57e2c0
        add esp, 0x10
        public_497aa6 : nop
        push 0x9CA4
        lea ecx, ss:[esp+0x18]
        call ebp
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        mov byte ptr ss : [esp+0x30], 3
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+0x38], eax
        mov eax, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ds : [eax+4]
        lea edi, ds:[eax+4]
        push ecx
        push eax
        lea ecx, ss:[esp+0x24]
        mov byte ptr ss : [esp+0x38], 4
        call public_42a7e0
        mov dword ptr ds : [edi], eax
        mov ecx, dword ptr ds : [eax+4]
        lea edx, ss:[esp+0x38]
        mov dword ptr ds : [ecx], eax
        push edx
        add eax, 8
        push eax
        call public_46ea00
        mov ecx, dword ptr ss : [esp+0x2C]
        add esp, 8
        inc ecx
        mov dword ptr ss : [esp+0x24], ecx
        mov ecx, dword ptr ss : [esp+0x38]
        cmp ecx, ebx
        mov byte ptr ss : [esp+0x30], 3
        je public_497b13
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x38], ebx
        public_497b13 : nop
        lea ecx, ss:[esp+0x14]
        mov byte ptr ss : [esp+0x30], bl
        call dword ptr ds : [public_5c62b4]
        mov edi, dword ptr ss : [esp+0x3C]
        cmp edi, ebx
        mov word ptr ds : [public_66fc60], bx
        je public_497c10
        lea ecx, ss:[esp+0x1C]
        push ecx
        push edi
        call public_57da40
        lea edx, ss:[esp+0x40]
        push edx
        push edi
        call public_458890
        add esp, 0x10
        test al, al
        je public_497c10
        mov edx, dword ptr ss : [esp+0x44]
        cmp edx, ebx
        je public_497bbb
        mov cl, byte ptr ss : [esp+0x40]
        test cl, 4
        mov eax, dword ptr ss : [esp+0x38]
        mov byte ptr ss : [esp+0x10], bl
        mov byte ptr ss : [esp+0x3C], bl
        mov byte ptr ss : [esp+0x44], bl
        je public_497b80
        cmp dword ptr ds : [eax+8], ebx
        je public_497b80
        mov byte ptr ss : [esp+0x10], 1
        public_497b80 : nop
        test cl, 8
        je public_497b8f
        cmp dword ptr ds : [eax+4], ebx
        je public_497b8f
        mov byte ptr ss : [esp+0x44], 1
        public_497b8f : nop
        test cl, 0x10
        je public_497b9e
        cmp dword ptr ds : [eax+0xC], ebx
        je public_497b9e
        mov byte ptr ss : [esp+0x3C], 1
        public_497b9e : nop
        mov eax, dword ptr ss : [esp+0x3C]
        mov ecx, dword ptr ss : [esp+0x44]
        push eax
        mov eax, dword ptr ss : [esp+0x14]
        push ecx
        push eax
        push edx
        lea ecx, ss:[esp+0x2C]
        push ecx
        call public_476080
        add esp, 0x14
        public_497bbb : nop
        test byte ptr ss : [esp+0x40], 2
        je public_497c10
        mov edx, dword ptr ss : [esp+0x38]
        cmp dword ptr ds : [edx], ebx
        je public_497c10
/*FIXUP push offset public_5d09c8 @0x497bca*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d09c8
/*FIXUP push offset public_66fc60 @0x497bcf*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        call dword ptr ds : [public_5c70b4]
        add esp, 8
        push ebx
        lea eax, ss:[esp+0x20]
        push eax
/*FIXUP push offset public_66fc60 @0x497be3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        call dword ptr ds : [public_5c71c8]
        add esp, 4
        push eax
/*FIXUP push offset public_66fc60 @0x497bf2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        call public_57e2c0
        mov edx, dword ptr ss : [esp+0x48]
        mov eax, dword ptr ds : [edx]
        lea ecx, ss:[esp+0x2C]
        push ecx
        push eax
        call public_57da40
        add esp, 0x18
        public_497c10 : nop
        mov eax, dword ptr ds : [esi+0xF38]
        or byte ptr ds : [eax+0x6C], 3
        mov eax, dword ptr ds : [esi+0xF3C]
        or byte ptr ds : [eax+0x6C], 3
        mov eax, dword ptr ds : [esi+0xF40]
        or byte ptr ds : [eax+0x6C], 3
        mov edi, dword ptr ds : [esi+0xF38]
        mov ecx, edi
        call public_57b370
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, edi
        call public_57b3e0
        push ebx
        push ebx
        mov ecx, edi
        call public_5798b0
        mov edx, dword ptr ds : [public_6720a0]
        push 6
        mov ecx, esi
        mov dword ptr ds : [esi+0xF44], edx
        call public_4a0220
        mov ecx, dword ptr ds : [esi+0xAF8]
        mov eax, dword ptr ds : [ecx]
        push ebx
        push 1
        push 1
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [esi+0xAFC]
        mov edx, dword ptr ds : [ecx]
        push ebx
        push 1
        push 1
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi+0xB00]
        mov eax, dword ptr ds : [ecx]
        push ebx
        push 1
        push 1
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [esi+0xB04]
        mov edx, dword ptr ds : [ecx]
        push ebx
        push 1
        push 1
        call dword ptr ds : [edx+0xA8]
        mov ecx, esi
        call public_49f0e0
        mov eax, dword ptr ss : [esp+0x20]
        mov edi, dword ptr ds : [eax]
        cmp edi, eax
        mov dword ptr ss : [esp+0x30], 0xFFFFFFFF
        mov ebp, eax
        je public_497d06
        lea esp, ss:[esp]
        public_497cd0 : nop
        mov esi, edi
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi]
        mov edi, dword ptr ds : [edi]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [esi+4]
        push ebx
        lea ecx, ds:[esi+8]
        mov dword ptr ds : [edx+4], eax
        call public_46ea80
        push esi
        call public_5b7e1d
        mov ecx, dword ptr ss : [esp+0x28]
        add esp, 4
        dec ecx
        cmp edi, ebp
        mov dword ptr ss : [esp+0x24], ecx
        jne public_497cd0
        mov eax, dword ptr ss : [esp+0x20]
        public_497d06 : nop
        push eax
        call public_5b7e1d
        add esp, 4
        pop edi
        pop ebp
        public_497d11 : nop
        mov ecx, dword ptr ss : [esp+0x20]
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x24
        ret 0x10
        UNREACHABLE_TRAP(0x497970)
    }
}

#undef public_4979a0
#undef public_497a34
#undef public_497aa6
#undef public_497b13
#undef public_497b80
#undef public_497b8f
#undef public_497b9e
#undef public_497bbb
#undef public_497c10
#undef public_497cd0
#undef public_497d06
#undef public_497d11
