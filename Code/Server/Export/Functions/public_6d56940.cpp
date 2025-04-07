#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce3b20);
CLANG_FORWARD_PROC_SYMBOL(public_6ce5500);
CLANG_FORWARD_PROC_SYMBOL(public_6d466f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d56940);
CLANG_FORWARD_PROC_SYMBOL(public_6d60160);

#define public_6d569d8 _public_6d569d8
#define public_6d569f1 _public_6d569f1
#define public_6d56a26 _public_6d56a26
#define public_6d56a50 _public_6d56a50
#define public_6d56a71 _public_6d56a71
#define public_6d56a80 _public_6d56a80
#define public_6d56a99 _public_6d56a99
#define public_6d56ac1 _public_6d56ac1
#define public_6d56ae7 _public_6d56ae7
#define public_6d56af6 _public_6d56af6
#define public_6d56b02 _public_6d56b02
#define public_6d56b0b _public_6d56b0b
#define public_6d56b13 _public_6d56b13
#define public_6d56b23 _public_6d56b23
#define public_6d56b32 _public_6d56b32
#define public_6d56b3e _public_6d56b3e
#define public_6d56b80 _public_6d56b80
#define public_6d56bba _public_6d56bba

PROC_DECLARE(0x6d56940, internal_6d56940, public_6d56940);
extern "C" NAKED register_t __cdecl internal_6d56940()
{
    __asm
    {
        mov eax, 0x1108
        call public_6d60160
        push ebx
        mov ebx, dword ptr ss : [esp+0x1110]
        push ebp
        push esi
        push edi
        push 0
/*FIXUP push offset public_6d6b2e8 @0x6d56957*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6b2e8
        push ebx
        lea eax, ss:[esp+0x20]
        push 0
        push eax
        mov dword ptr ss : [esp+0x24], ecx
        call dword ptr ds : [public_6d64bc0]
        lea ecx, ss:[esp+0x28]
/*FIXUP push offset public_6d6aea8 @0x6d56972*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6aea8
        push ecx
        call dword ptr ds : [public_6d64bd8]
        mov esi, eax
        add esp, 0x1C
        test esi, esi
        je public_6d56b3e
        push esi
        push 0x400
        lea edx, ss:[esp+0x920]
        push 2
        push edx
        call dword ptr ds : [public_6d64bd4]
        mov ebp, eax
        push esi
        mov word ptr ss : [esp+ebp*2+0x12C], 0
        call dword ptr ds : [public_6d64bd0]
        mov esi, dword ptr ds : [public_6d8d158]
        push esi
        call dword ptr ds : [public_6d64c80]
        mov edi, dword ptr ds : [public_6d90144]
        shl eax, 1
        add esp, 0x18
        test eax, eax
        mov dword ptr ds : [public_6d90150], edi
        jle public_6d569f1
        mov edi, eax
        public_6d569d8 : nop
        xor eax, eax
        mov al, byte ptr ds : [esi]
        mov ecx, offset public_6d8fd38
        inc esi
        push eax
        call public_6d466f0
        dec edi
        jne public_6d569d8
        mov edi, dword ptr ds : [public_6d90150]
        public_6d569f1 : nop
        mov al, byte ptr ds : [public_6d9014c]
        test al, al
        mov eax, dword ptr ds : [public_6d9013c]
        lea ecx, ds:[eax-1]
        jne public_6d56a26
        mov edx, 1
        shl edx, cl
        mov ecx, dword ptr ds : [public_6d90148]
        xor ecx, edi
        lea edx, ds:[edx+edx-1]
        or edx, 1
        and edx, ecx
        mov ecx, dword ptr ds : [public_6d90138]
        sub ecx, eax
        shl edx, cl
        jmp public_6d56a71
        public_6d56a26 : nop
        mov eax, 1
        shl eax, cl
        mov ecx, dword ptr ds : [public_6d90148]
        xor ecx, edi
        mov edi, dword ptr ds : [public_6d90138]
        lea eax, ds:[eax+eax-1]
        or eax, 1
        mov esi, 8
        xor edx, edx
        and eax, ecx
        cmp edi, esi
        jb public_6d56a71
        nop 
        public_6d56a50 : nop
        mov ebx, eax
        mov ecx, edi
        sub ecx, esi
        and ebx, 0xFF
        shl ebx, cl
        add esi, 8
        shr eax, 8
        or edx, ebx
        cmp esi, edi
        jbe public_6d56a50
        mov ebx, dword ptr ss : [esp+0x111C]
        public_6d56a71 : nop
        test ebp, ebp
        je public_6d56a99
        xor eax, eax
        mov ecx, ebp
        lea esp, ss:[esp]
        public_6d56a80 : nop
        mov si, word ptr ss : [esp+eax+0x918]
        xor si, dx
        mov word ptr ss : [esp+eax+0x118], si
        add eax, 2
        dec ecx
        jne public_6d56a80
        public_6d56a99 : nop
        mov edx, dword ptr ss : [esp+0x10]
        lea eax, ss:[esp+0x118]
        push eax
        lea edi, ds:[edx+4]
        call dword ptr ds : [public_6d64c80]
        mov esi, eax
        add esp, 4
        cmp esi, 0x7FFFFFFD
        jbe public_6d56ac1
        call dword ptr ds : [public_6d64b4c]
        public_6d56ac1 : nop
        mov eax, dword ptr ds : [edi+4]
        test eax, eax
        je public_6d56ae7
        mov cl, byte ptr ds : [eax-1]
        test cl, cl
        je public_6d56ae7
        cmp cl, 0xFF
        je public_6d56ae7
        test esi, esi
        jne public_6d56b0b
        dec cl
        mov byte ptr ds : [eax-1], cl
        push esi
        mov ecx, edi
        call public_6ce3b20
        jmp public_6d56b3e
        public_6d56ae7 : nop
        test esi, esi
        jne public_6d56af6
        push 1
        mov ecx, edi
        call public_6ce3b20
        jmp public_6d56b3e
        public_6d56af6 : nop
        mov eax, dword ptr ds : [edi+0xC]
        cmp eax, 0x1F
        ja public_6d56b02
        cmp eax, esi
        jae public_6d56b13
        public_6d56b02 : nop
        push 1
        mov ecx, edi
        call public_6ce3b20
        public_6d56b0b : nop
        mov ecx, edi
        push esi
        call public_6ce5500
        public_6d56b13 : nop
        test esi, esi
        mov eax, dword ptr ds : [edi+4]
        lea ecx, ss:[esp+0x118]
        jbe public_6d56b32
        mov edx, esi
        public_6d56b23 : nop
        mov bp, word ptr ds : [ecx]
        mov word ptr ds : [eax], bp
        add eax, 2
        add ecx, 2
        dec edx
        jne public_6d56b23
        public_6d56b32 : nop
        mov ecx, dword ptr ds : [edi+4]
        mov dword ptr ds : [edi+8], esi
        mov word ptr ds : [ecx+esi*2], 0
        public_6d56b3e : nop
        mov esi, dword ptr ds : [public_6d64bc0]
        push 0
/*FIXUP push offset public_6d6b8b0 @0x6d56b46*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6b8b0
        push ebx
        lea edx, ss:[esp+0x20]
        push 0
        push edx
        call esi
        mov edi, dword ptr ds : [public_6d64bd8]
        lea eax, ss:[esp+0x28]
/*FIXUP push offset public_6d6aea8 @0x6d56b5f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6aea8
        push eax
        call edi
        add esp, 0x1C
        test eax, eax
        je public_6d56b80
        mov ecx, dword ptr ss : [esp+0x10]
        push eax
        mov byte ptr ds : [ecx+0x31], 0
        call dword ptr ds : [public_6d64bd0]
        add esp, 4
        public_6d56b80 : nop
        push 0
/*FIXUP push offset public_6d6b8f8 @0x6d56b82*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6b8f8
        push ebx
        lea edx, ss:[esp+0x20]
        push 0
        push edx
        call esi
        lea eax, ss:[esp+0x28]
/*FIXUP push offset public_6d6aea8 @0x6d56b95*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6aea8
        push eax
        call edi
        add esp, 0x1C
        test eax, eax
        pop edi
        pop esi
        pop ebp
        pop ebx
        je public_6d56bba
        mov ecx, dword ptr ss : [esp]
        push eax
        mov byte ptr ds : [ecx+0x32], 1
        call dword ptr ds : [public_6d64bd0]
        add esp, 4
        public_6d56bba : nop
        add esp, 0x1108
        ret 4
        UNREACHABLE_TRAP(0x6d56940)
    }
}

#undef public_6d569d8
#undef public_6d569f1
#undef public_6d56a26
#undef public_6d56a50
#undef public_6d56a71
#undef public_6d56a80
#undef public_6d56a99
#undef public_6d56ac1
#undef public_6d56ae7
#undef public_6d56af6
#undef public_6d56b02
#undef public_6d56b0b
#undef public_6d56b13
#undef public_6d56b23
#undef public_6d56b32
#undef public_6d56b3e
#undef public_6d56b80
#undef public_6d56bba
