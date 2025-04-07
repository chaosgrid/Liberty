#include "ReadFile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b73d60);
CLANG_FORWARD_PROC_SYMBOL(public_6b73e00);
CLANG_FORWARD_PROC_SYMBOL(public_6b76220);
CLANG_FORWARD_PROC_SYMBOL(public_6b77020);
CLANG_FORWARD_PROC_SYMBOL(public_6b771c0);
CLANG_FORWARD_PROC_SYMBOL(public_6b77900);
CLANG_FORWARD_PROC_SYMBOL(public_6b78020);
CLANG_FORWARD_PROC_SYMBOL(public_6b782ac);

#define public_6b76353 _public_6b76353
#define public_6b76386 _public_6b76386
#define public_6b763ad _public_6b763ad
#define public_6b763de _public_6b763de
#define public_6b763e9 _public_6b763e9
#define public_6b76401 _public_6b76401

PROC_DECLARE(0x6b76220, internal_6b76220, public_6b76220);
extern "C" NAKED register_t __cdecl internal_6b76220()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push ebx
        xor ebx, ebx
        push esi
        sub eax, ebx
        je public_6b763e9
        dec eax
        jne public_6b76401
        mov eax, dword ptr ss : [esp+0xC]
        push eax
        mov dword ptr ds : [public_6b7a228], eax
        call dword ptr ds : [public_6b79058]
        call public_6b73e00
        push 1
        push 0x170
        call dword ptr ds : [public_6b7906c]
        mov esi, eax
        add esp, 8
        cmp esi, ebx
        je public_6b763de
        mov al, byte ptr ss : [esp+0x10]
        mov cl, byte ptr ss : [esp+0x10]
        push edi
        lea edi, ds:[esi+0x134]
        push ebx
        mov dword ptr ds : [esi+0x120], ebx
        push 0x28
        mov byte ptr ds : [edi], al
        mov byte ptr ds : [edi+1], cl
        mov byte ptr ds : [edi+0xC], bl
        call public_6b771c0
        mov dword ptr ds : [eax+4], ebx
        mov byte ptr ds : [eax+0x24], 1
        mov byte ptr ds : [eax+0x25], bl
        mov dword ptr ds : [edi+8], eax
        mov byte ptr ds : [eax+0x25], 1
        mov edx, dword ptr ds : [edi+8]
        add esp, 8
        mov dword ptr ds : [edx], ebx
        mov eax, dword ptr ds : [edi+8]
        push ebx
        mov dword ptr ds : [eax+8], ebx
        mov ecx, dword ptr ds : [edi+8]
        push ecx
        mov ecx, edi
        call public_6b77020
        mov dword ptr ds : [edi+4], eax
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [edi+4]
        mov dl, byte ptr ss : [esp+0x14]
        push 0xC
        mov dword ptr ds : [eax+8], eax
        mov dword ptr ds : [edi+0x10], ebx
        mov byte ptr ds : [esi+0x148], dl
        call public_6b782ac
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        add esp, 4
        mov dword ptr ds : [esi+0x14C], eax
        lea eax, ds:[esi+0x154]
        mov dword ptr ds : [esi+0x150], ebx
        push eax
        mov byte ptr ds : [esi+0xD], 0x5C
        mov byte ptr ds : [esi+0xE], bl
        mov dword ptr ds : [esi+0x130], 0xFFFFFFFF
        call dword ptr ds : [public_6b79040]
        mov dword ptr ds : [esi], offset public_6b79218
        mov dword ptr ds : [esi+0x16C], 1
        pop edi
        mov dword ptr ds : [public_6b7a224], esi
        call dword ptr ds : [public_6b79004]
        cmp eax, ebx
        mov dword ptr ds : [public_6b7a220], eax
        je public_6b76401
        mov edx, dword ptr ds : [public_6b7a224]
        mov ecx, dword ptr ds : [eax]
        push 0x40000000
/*FIXUP push offset public_6b7a028 @0x6b7633e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6b7a028
        push edx
        push eax
        call dword ptr ds : [ecx+0x10]
        mov eax, dword ptr ds : [public_6b7a224]
        push eax
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+8]
        public_6b76353 : nop
        cmp dword ptr ds : [public_6b7a220], ebx
        je public_6b76401
        call public_6b73d60
        mov esi, eax
        cmp esi, ebx
        je public_6b76386
        mov eax, dword ptr ds : [public_6b7a220]
        push 0x80000000
/*FIXUP push offset public_6b7a028 @0x6b76374*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6b7a028
        push esi
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+0x10]
        mov eax, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [eax+8]
        public_6b76386 : nop
        call public_6b77900
        mov esi, eax
        cmp esi, ebx
        je public_6b763ad
        mov eax, dword ptr ds : [public_6b7a220]
        push 0x80000000
/*FIXUP push offset public_6b7a028 @0x6b7639b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6b7a028
        push esi
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x10]
        mov edx, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [edx+8]
        public_6b763ad : nop
        call public_6b78020
        mov esi, eax
        cmp esi, ebx
        je public_6b76401
        mov eax, dword ptr ds : [public_6b7a220]
        push 0x80000000
/*FIXUP push offset public_6b7a1e4 @0x6b763c2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6b7a1e4
        push esi
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x10]
        mov edx, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [edx+8]
        pop esi
        mov eax, 1
        pop ebx
        ret 0xC
        public_6b763de : nop
        mov dword ptr ds : [public_6b7a224], ebx
        jmp public_6b76353
        public_6b763e9 : nop
        cmp dword ptr ds : [public_6b7a220], ebx
        je public_6b76401
        call public_6b73e00
        mov eax, dword ptr ds : [public_6b7a220]
        push eax
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+8]
        public_6b76401 : nop
        pop esi
        mov eax, 1
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6b76220)
    }
}

#undef public_6b76353
#undef public_6b76386
#undef public_6b763ad
#undef public_6b763de
#undef public_6b763e9
#undef public_6b76401
