#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4177b0);
CLANG_FORWARD_PROC_SYMBOL(public_41c970);
CLANG_FORWARD_PROC_SYMBOL(public_4347e0);
CLANG_FORWARD_PROC_SYMBOL(public_437f70);
CLANG_FORWARD_PROC_SYMBOL(public_438060);
CLANG_FORWARD_PROC_SYMBOL(public_43a510);
CLANG_FORWARD_PROC_SYMBOL(public_4a5890);
CLANG_FORWARD_PROC_SYMBOL(public_4a5ca0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e90);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec0);
CLANG_FORWARD_JUMP_SYMBOL(public_5bcc3b);

#define public_4a591b _public_4a591b
#define public_4a5920 _public_4a5920
#define public_4a5934 _public_4a5934
#define public_4a59bb _public_4a59bb
#define public_4a59d9 _public_4a59d9
#define public_4a59f0 _public_4a59f0
#define public_4a5a07 _public_4a5a07
#define public_4a5a97 _public_4a5a97
#define public_4a5aa7 _public_4a5aa7
#define public_4a5ac9 _public_4a5ac9
#define public_4a5b88 _public_4a5b88
#define public_4a5b9e _public_4a5b9e
#define public_4a5bae _public_4a5bae
#define public_4a5bb5 _public_4a5bb5
#define public_4a5bde _public_4a5bde
#define public_4a5c50 _public_4a5c50
#define public_4a5c7d _public_4a5c7d

PROC_DECLARE(0x4a5890, internal_4a5890, public_4a5890);
extern "C" NAKED register_t __cdecl internal_4a5890()
{
    __asm
    {
        push ebp
        mov ebp, esp
        and esp, 0xFFFFFFF8
        push 0xFFFFFFFF
/*FIXUP push public_5bcc3b @0x4a5898*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bcc3b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        mov eax, 0x1020
        call public_5b7e90
        mov eax, dword ptr ds : [public_66873c]
        push ebx
        push ebp
        push esi
        push edi
        mov dword ptr ss : [esp+0x18], ecx
        xor ebp, ebp
        push eax
        mov ecx, offset public_668708
        xor ebx, ebx
        mov word ptr ss : [esp+0x834], bp
        call public_43a510
        mov esi, eax
        mov al, byte ptr ss : [esp+0x2B]
        push 0xC
        mov dword ptr ss : [esp+0x30], esi
        mov byte ptr ss : [esp+0x20], al
        call public_5b7e84
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        add esp, 4
        mov dword ptr ss : [esp+0x20], eax
        mov dword ptr ss : [esp+0x24], ebp
        push ebp
        lea ecx, ss:[esp+0x20]
        push ecx
        mov ecx, esi
        mov dword ptr ss : [esp+0x1044], ebp
        call public_437f70
        mov edi, dword ptr ds : [public_5c71c8]
        jmp public_4a5920
        public_4a591b : nop
        xor ebp, ebp
        lea ecx, ds:[ecx]
        public_4a5920 : nop
        mov edx, dword ptr ss : [esp+0x18]
        cmp dword ptr ds : [edx+0x588], ebp
        mov dword ptr ss : [esp+0x14], ebp
        jle public_4a59d9
        public_4a5934 : nop
        mov eax, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [eax+0x584]
        mov cl, byte ptr ds : [eax+ebp+8]
        add eax, ebp
        test cl, cl
        je public_4a59bb
        push 0x100
        lea ecx, ss:[esp+0x34]
        push ecx
        lea ecx, ds:[eax+0x28]
        call public_41c970
        lea edx, ss:[esp+0x230]
/*FIXUP push offset public_5d4400 @0x4a5961*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d4400
        push edx
        call dword ptr ds : [public_5c70b4]
        lea eax, ss:[esp+0x238]
        push eax
        call edi
        lea ecx, ss:[esp+0x3C]
        push ecx
        mov esi, eax
        call edi
        add esi, eax
        add esi, ebx
        add esp, 0x10
        cmp esi, 0x400
        jge public_4a59bb
        mov ebx, dword ptr ds : [public_5c70ac]
        lea edx, ss:[esp+0x30]
        push edx
        lea eax, ss:[esp+0x834]
        push eax
        call ebx
        lea ecx, ss:[esp+0x238]
        push ecx
        lea edx, ss:[esp+0x83C]
        push edx
        call ebx
        add esp, 0x10
        mov ebx, esi
        public_4a59bb : nop
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ds : [ecx+0x588]
        inc eax
        add ebp, 0x60
        cmp eax, edx
        mov dword ptr ss : [esp+0x14], eax
        jl public_4a5934
        public_4a59d9 : nop
        mov ebp, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ss : [ebp]
        cmp eax, ebp
        mov dword ptr ss : [esp+0x14], eax
        je public_4a5b9e
        lea esp, ss:[esp]
        public_4a59f0 : nop
        mov edx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [edx+8]
        mov ecx, dword ptr ds : [eax+0x10]
        cmp ecx, 2
        je public_4a5a07
        test ecx, ecx
        jne public_4a5b88
        public_4a5a07 : nop
        mov esi, dword ptr ds : [eax]
        mov ecx, dword ptr ss : [esp+0x2C]
        push esi
        call public_438060
        sub esp, 8
        fstp qword ptr ss : [esp]
        call dword ptr ds : [public_5c71c4]
        call public_5b7ec0
        push esi
        mov ebp, eax
        call dword ptr ds : [public_5c6088]
        add esp, 0xC
        test ebp, ebp
        mov esi, eax
        jle public_4a5b88
        mov eax, dword ptr ds : [esi+0x88]
        test eax, eax
        je public_4a5b88
        mov edx, dword ptr ds : [public_67eca8]
        push 0x100
        lea ecx, ss:[esp+0x34]
        push ecx
        push eax
        push edx
        call public_4347e0
        add esp, 0x10
        test eax, eax
        jne public_4a5a97
        lea ecx, ds:[esi+0x48]
        call dword ptr ds : [public_5c6044]
        push eax
        mov eax, dword ptr ds : [esi+0x88]
        push eax
        push 0x35F
/*FIXUP push offset public_5d4384 @0x4a5a7c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d4384
        mov ecx, 0x100002
/*FIXUP push offset public_5d43b8 @0x4a5a86*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d43b8
        push ecx
        mov ecx, dword ptr ds : [public_5c6d18]
        call dword ptr ds : [ecx]
        add esp, 0x18
        public_4a5a97 : nop
        lea edx, ss:[esp+0x30]
        push edx
        xor esi, esi
        call edi
        add esp, 4
        test eax, eax
        jbe public_4a5ac9
        public_4a5aa7 : nop
        xor eax, eax
        mov ax, word ptr ss : [esp+esi*2+0x30]
        push eax
        call dword ptr ds : [public_5c7114]
        lea ecx, ss:[esp+0x34]
        mov word ptr ss : [esp+esi*2+0x34], ax
        push ecx
        inc esi
        call edi
        add esp, 8
        cmp esi, eax
        jb public_4a5aa7
        public_4a5ac9 : nop
        mov esi, dword ptr ds : [public_5c70b4]
        lea edx, ss:[esp+0x230]
/*FIXUP push offset public_5cef90 @0x4a5ad6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cef90
        push edx
        call esi
        push 0xA
        lea eax, ss:[esp+0x63C]
        push eax
        push ebp
        call dword ptr ds : [public_5c7110]
        lea ecx, ss:[esp+0x444]
/*FIXUP push offset public_5d4400 @0x4a5af6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d4400
        push ecx
        call esi
        lea edx, ss:[esp+0x44C]
        push edx
        call edi
        mov esi, eax
        lea eax, ss:[esp+0x650]
        push eax
        call edi
        lea ecx, ss:[esp+0x254]
        push ecx
        add esi, eax
        call edi
        lea edx, ss:[esp+0x58]
        push edx
        add esi, eax
        call edi
        add esi, eax
        add esi, ebx
        add esp, 0x2C
        cmp esi, 0x400
        jge public_4a5b88
        mov ebx, dword ptr ds : [public_5c70ac]
        lea eax, ss:[esp+0x30]
        push eax
        lea ecx, ss:[esp+0x834]
        push ecx
        call ebx
        lea edx, ss:[esp+0x238]
        push edx
        lea eax, ss:[esp+0x83C]
        push eax
        call ebx
        lea ecx, ss:[esp+0x640]
        push ecx
        lea edx, ss:[esp+0x844]
        push edx
        call ebx
        lea eax, ss:[esp+0x448]
        push eax
        lea ecx, ss:[esp+0x84C]
        push ecx
        call ebx
        add esp, 0x20
        mov ebx, esi
        public_4a5b88 : nop
        mov edx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [edx]
        mov ebp, dword ptr ss : [esp+0x20]
        cmp eax, ebp
        mov dword ptr ss : [esp+0x14], eax
        jne public_4a59f0
        public_4a5b9e : nop
        test ebx, ebx
        je public_4a5bae
        cmp ebx, 0x80
        jl public_4a591b
        public_4a5bae : nop
        mov esi, dword ptr ss : [ebp]
        cmp esi, ebp
        je public_4a5bde
        public_4a5bb5 : nop
        mov eax, esi
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov esi, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [ecx+4], edx
        call public_5b7e1d
        mov ecx, dword ptr ss : [esp+0x28]
        add esp, 4
        dec ecx
        cmp esi, ebp
        mov dword ptr ss : [esp+0x24], ecx
        jne public_4a5bb5
        public_4a5bde : nop
        lea eax, ss:[esp+0x830]
        push eax
        call dword ptr ds : [public_5c710c]
        mov esi, dword ptr ss : [esp+0x1C]
        push eax
        mov dword ptr ds : [esi+0x344], eax
        call edi
        lea ecx, ds:[eax*4]
        push ecx
        mov dword ptr ds : [esi+0x34C], eax
        call public_5b7e84
        mov dword ptr ds : [esi+0x348], eax
        mov edx, dword ptr ds : [public_611d0c]
        push edx
        call public_4177b0
        mov ecx, dword ptr ds : [esi+0x348]
        mov edx, dword ptr ds : [eax]
        add esp, 0x10
        push ecx
        mov ecx, dword ptr ds : [esi+0x344]
        push 0xFFFFFFFF
        push ecx
        mov ecx, eax
        call dword ptr ds : [edx+0x28]
        push 0
        push 0
        mov ecx, esi
        call public_4a5ca0
        mov eax, dword ptr ss : [esp+0x20]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        mov edi, eax
        je public_4a5c7d
        nop 
        public_4a5c50 : nop
        mov eax, esi
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [eax]
        mov esi, dword ptr ds : [esi]
        mov dword ptr ds : [edx], ecx
        mov edx, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [edx+4], ecx
        call public_5b7e1d
        mov ecx, dword ptr ss : [esp+0x28]
        add esp, 4
        dec ecx
        cmp esi, edi
        mov dword ptr ss : [esp+0x24], ecx
        jne public_4a5c50
        mov eax, dword ptr ss : [esp+0x20]
        public_4a5c7d : nop
        push eax
        call public_5b7e1d
        mov ecx, dword ptr ss : [esp+0x1038]
        add esp, 4
        pop edi
        mov dword ptr fs : [0], ecx
        pop esi
        pop ebp
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x4a5890)
    }
}

#undef public_4a591b
#undef public_4a5920
#undef public_4a5934
#undef public_4a59bb
#undef public_4a59d9
#undef public_4a59f0
#undef public_4a5a07
#undef public_4a5a97
#undef public_4a5aa7
#undef public_4a5ac9
#undef public_4a5b88
#undef public_4a5b9e
#undef public_4a5bae
#undef public_4a5bb5
#undef public_4a5bde
#undef public_4a5c50
#undef public_4a5c7d
