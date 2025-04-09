#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41d8a0);
CLANG_FORWARD_PROC_SYMBOL(public_46b650);
CLANG_FORWARD_PROC_SYMBOL(public_5739c0);
CLANG_FORWARD_PROC_SYMBOL(public_5a8770);
CLANG_FORWARD_PROC_SYMBOL(public_5a8840);
CLANG_FORWARD_PROC_SYMBOL(public_5a9300);
CLANG_FORWARD_PROC_SYMBOL(public_5aa680);
CLANG_FORWARD_PROC_SYMBOL(public_5aade0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_JUMP_SYMBOL(public_5c39eb);

#define public_573a48 _public_573a48
#define public_573ac9 _public_573ac9
#define public_573b6c _public_573b6c
#define public_573b78 _public_573b78
#define public_573ba7 _public_573ba7
#define public_573bbf _public_573bbf

PROC_DECLARE(0x5739c0, internal_5739c0, public_5739c0);
extern "C" NAKED register_t __cdecl internal_5739c0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c39eb @0x5739c2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c39eb
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x24
        push ebx
        push esi
        push edi
        xor ebx, ebx
        push ebx
        mov esi, ecx
        call dword ptr ds : [public_5c6be8]
        add esp, 4
        mov byte ptr ds : [esi+0x22D], bl
        call public_46b650
        mov al, byte ptr ss : [esp+0xF]
        push ebx
        lea ecx, ss:[esp+0x24]
        mov byte ptr ss : [esp+0x24], al
        call dword ptr ds : [public_5c6fb8]
        mov edi, dword ptr ds : [public_5c71c8]
/*FIXUP push offset public_5e3094 @0x573a0d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e3094
        call edi
        add esp, 4
        mov esi, eax
        push 1
        push esi
        lea ecx, ss:[esp+0x28]
        call dword ptr ds : [public_5c6f88]
        test al, al
        je public_573a48
        mov ecx, dword ptr ss : [esp+0x24]
        push esi
/*FIXUP push offset public_5e3094 @0x573a2f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e3094
        push ecx
        call public_41d8a0
        add esp, 0xC
        push esi
        lea ecx, ss:[esp+0x24]
        call dword ptr ds : [public_5c7054]
        public_573a48 : nop
        mov edx, dword ptr ds : [public_5c705c]
        mov eax, dword ptr ds : [edx]
        push eax
        push ebx
        lea ecx, ss:[esp+0x28]
        push ecx
        mov ecx, offset public_67e940
        mov dword ptr ss : [esp+0x44], ebx
        call dword ptr ds : [public_5c7060]
        push 1
        lea ecx, ss:[esp+0x24]
        mov dword ptr ss : [esp+0x3C], 0xFFFFFFFF
        call dword ptr ds : [public_5c6fb8]
        mov dl, byte ptr ss : [esp+0xF]
        push ebx
        lea ecx, ss:[esp+0x24]
        mov byte ptr ss : [esp+0x24], dl
        call dword ptr ds : [public_5c6fb8]
/*FIXUP push offset public_5c8ce0 @0x573a8d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c8ce0
        call edi
        add esp, 4
        mov esi, eax
        push 1
        push esi
        lea ecx, ss:[esp+0x28]
        call dword ptr ds : [public_5c6f88]
        test al, al
        je public_573ac9
        mov eax, dword ptr ss : [esp+0x24]
        push esi
/*FIXUP push offset public_5c8ce0 @0x573aaf*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c8ce0
        push eax
        call public_41d8a0
        mov ecx, dword ptr ss : [esp+0x30]
        mov dword ptr ss : [esp+0x34], esi
        add esp, 0xC
        mov word ptr ds : [ecx+esi*2], bx
        public_573ac9 : nop
        mov edx, dword ptr ds : [public_5c705c]
        mov eax, dword ptr ds : [edx]
        push eax
        push ebx
        lea ecx, ss:[esp+0x28]
        push ecx
        mov ecx, offset public_67e950
        mov dword ptr ss : [esp+0x44], 1
        call dword ptr ds : [public_5c7060]
        or esi, 0xFFFFFFFF
        push 1
        lea ecx, ss:[esp+0x24]
        mov dword ptr ss : [esp+0x3C], esi
        call dword ptr ds : [public_5c6fb8]
        mov dl, byte ptr ss : [esp+0xF]
/*FIXUP push offset public_5c8ce0 @0x573b02*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c8ce0
        mov byte ptr ss : [esp+0x14], dl
        mov dword ptr ss : [esp+0x18], ebx
        mov dword ptr ss : [esp+0x1C], ebx
        mov dword ptr ss : [esp+0x20], ebx
        call edi
        add esp, 4
        push eax
/*FIXUP push offset public_5c8ce0 @0x573b1d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c8ce0
        lea ecx, ss:[esp+0x18]
        call dword ptr ds : [public_5c6fb0]
        mov eax, dword ptr ds : [public_5c705c]
        mov ecx, dword ptr ds : [eax]
        push ecx
        push ebx
        lea edx, ss:[esp+0x18]
        push edx
        mov ecx, offset public_67e8e8
        mov dword ptr ss : [esp+0x44], 2
        call dword ptr ds : [public_5c7060]
        mov eax, dword ptr ss : [esp+0x14]
        cmp eax, ebx
        mov dword ptr ss : [esp+0x38], esi
        je public_573b78
        mov cl, byte ptr ds : [eax-1]
        cmp cl, bl
        je public_573b6c
        cmp cl, 0xFF
        je public_573b6c
        dec cl
        mov byte ptr ds : [eax-1], cl
        jmp public_573b78
        public_573b6c : nop
        add eax, 0xFFFFFFFE
        push eax
        call public_5b7e1d
        add esp, 4
/*FIXUP public_573b78 : nop
        push offset public_679d04 @0x573b78*/
  FIXUP public_573b78 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_679d04
        mov dword ptr ss : [esp+0x18], ebx
        mov dword ptr ss : [esp+0x1C], ebx
        mov dword ptr ss : [esp+0x20], ebx
        call public_5a8770
        add esp, 4
        test al, al
        pop edi
        pop esi
        pop ebx
        jne public_573ba7
        mov ecx, dword ptr ss : [esp+0x24]
        mov dword ptr fs : [0], ecx
        add esp, 0x30
        ret 
        public_573ba7 : nop
        call public_5a8840
        test al, al
        jne public_573bbf
        mov ecx, dword ptr ss : [esp+0x24]
        mov dword ptr fs : [0], ecx
        add esp, 0x30
        ret 
        public_573bbf : nop
        mov ecx, offset public_67e7b8
        call public_5a9300
        mov ecx, offset public_67e7b8
        call public_5aade0
        mov ecx, offset public_67e7b8
        call public_5aa680
        mov ecx, dword ptr ss : [esp+0x24]
        test eax, eax
        setne al
        mov dword ptr fs : [0], ecx
        add esp, 0x30
        ret 
        UNREACHABLE_TRAP(0x5739c0)
    }
}

#undef public_573a48
#undef public_573ac9
#undef public_573b6c
#undef public_573b78
#undef public_573ba7
#undef public_573bbf
