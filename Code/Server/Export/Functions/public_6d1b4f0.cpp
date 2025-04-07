#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce3ac0);
CLANG_FORWARD_PROC_SYMBOL(public_6d1b4f0);
CLANG_FORWARD_JUMP_SYMBOL(public_6d62101);

#define public_6d1b544 _public_6d1b544
#define public_6d1b554 _public_6d1b554
#define public_6d1b567 _public_6d1b567
#define public_6d1b5a0 _public_6d1b5a0
#define public_6d1b5bb _public_6d1b5bb
#define public_6d1b5cf _public_6d1b5cf
#define public_6d1b5eb _public_6d1b5eb
#define public_6d1b615 _public_6d1b615
#define public_6d1b633 _public_6d1b633
#define public_6d1b640 _public_6d1b640
#define public_6d1b64f _public_6d1b64f
#define public_6d1b65b _public_6d1b65b

PROC_DECLARE(0x6d1b4f0, internal_6d1b4f0, public_6d1b4f0);
extern "C" NAKED register_t __cdecl internal_6d1b4f0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6d62101 @0x6d1b4f2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d62101
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x20]
        push edi
        mov dword ptr ss : [esp+0x10], esi
        xor ebp, ebp
        cmp esi, ebp
        mov dword ptr ss : [esp+0x1C], ebp
        je public_6d1b65b
        mov ebx, dword ptr ss : [esp+0x28]
        mov al, byte ptr ds : [ebx]
        mov byte ptr ds : [esi], al
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [esi+8], ebp
        mov dword ptr ds : [esi+0xC], ebp
        mov ecx, dword ptr ds : [public_6d64b64]
        mov eax, dword ptr ds : [ecx]
        mov ecx, dword ptr ds : [ebx+8]
        mov edi, ecx
        cmp eax, edi
        jae public_6d1b544
        mov edi, eax
        public_6d1b544 : nop
        cmp esi, ebx
        jne public_6d1b5bb
        cmp edi, ebp
        mov ebx, eax
        jbe public_6d1b554
        call dword ptr ds : [public_6d64b04]
        public_6d1b554 : nop
        mov ecx, esi
        call dword ptr ds : [public_6d64acc]
        mov eax, dword ptr ds : [esi+8]
        sub eax, edi
        cmp eax, ebx
        jae public_6d1b567
        mov ebx, eax
        public_6d1b567 : nop
        cmp ebx, ebp
        jbe public_6d1b5a0
        mov ecx, dword ptr ds : [esi+4]
        sub eax, ebx
        push eax
        lea edx, ds:[ebx+edi]
        lea eax, ds:[ecx+edx*2]
        push eax
        lea ecx, ds:[ecx+edi*2]
        push ecx
        call public_6ce3ac0
        mov edi, dword ptr ds : [esi+8]
        add esp, 0xC
        push ebp
        sub edi, ebx
        push edi
        mov ecx, esi
        call dword ptr ds : [public_6d64b5c]
        test al, al
        je public_6d1b5a0
        push edi
        mov ecx, esi
        call dword ptr ds : [public_6d64b60]
        public_6d1b5a0 : nop
        mov ecx, esi
        call dword ptr ds : [public_6d64acc]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        public_6d1b5bb : nop
        cmp edi, ebp
        jbe public_6d1b615
        cmp edi, ecx
        jne public_6d1b615
        mov eax, dword ptr ds : [ebx+4]
        cmp eax, ebp
        jne public_6d1b5cf
        mov eax, dword ptr ds : [public_6d64b54]
        public_6d1b5cf : nop
        cmp byte ptr ds : [eax-1], 0xFE
        jae public_6d1b615
        push 1
        mov ecx, esi
        call dword ptr ds : [public_6d64b58]
        mov eax, dword ptr ds : [ebx+4]
        cmp eax, ebp
        jne public_6d1b5eb
        mov eax, dword ptr ds : [public_6d64b54]
        public_6d1b5eb : nop
        mov dword ptr ds : [esi+4], eax
        mov edx, dword ptr ds : [ebx+8]
        mov dword ptr ds : [esi+8], edx
        mov ecx, dword ptr ds : [ebx+0xC]
        mov dword ptr ds : [esi+0xC], ecx
        mov cl, byte ptr ds : [eax-1]
        pop edi
        pop esi
        inc cl
        pop ebp
        mov byte ptr ds : [eax-1], cl
        pop ebx
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        public_6d1b615 : nop
        push 1
        push edi
        mov ecx, esi
        call dword ptr ds : [public_6d64b5c]
        test al, al
        je public_6d1b65b
        mov ebx, dword ptr ds : [ebx+4]
        test ebx, ebx
        mov ecx, dword ptr ds : [public_6d64b54]
        je public_6d1b633
        mov ecx, ebx
        public_6d1b633 : nop
        test edi, edi
        mov eax, dword ptr ds : [esi+4]
        jbe public_6d1b64f
        mov edx, edi
        lea esp, ss:[esp]
        public_6d1b640 : nop
        mov bx, word ptr ds : [ecx]
        mov word ptr ds : [eax], bx
        add eax, 2
        add ecx, 2
        dec edx
        jne public_6d1b640
        public_6d1b64f : nop
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+8], edi
        mov word ptr ds : [edx+edi*2], 0
        public_6d1b65b : nop
        mov ecx, dword ptr ss : [esp+0x14]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6d1b4f0)
    }
}

#undef public_6d1b544
#undef public_6d1b554
#undef public_6d1b567
#undef public_6d1b5a0
#undef public_6d1b5bb
#undef public_6d1b5cf
#undef public_6d1b5eb
#undef public_6d1b615
#undef public_6d1b633
#undef public_6d1b640
#undef public_6d1b64f
#undef public_6d1b65b
