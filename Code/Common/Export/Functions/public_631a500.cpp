#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_631a500);
CLANG_FORWARD_JUMP_SYMBOL(public_6396a41);

#define public_631a564 _public_631a564
#define public_631a574 _public_631a574
#define public_631a587 _public_631a587
#define public_631a5bd _public_631a5bd
#define public_631a5da _public_631a5da
#define public_631a5ee _public_631a5ee
#define public_631a609 _public_631a609
#define public_631a633 _public_631a633
#define public_631a64f _public_631a64f
#define public_631a66b _public_631a66b

PROC_DECLARE(0x631a500, internal_631a500, public_631a500);
extern "C" NAKED register_t __cdecl internal_631a500()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6396a41 @0x631a502*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6396a41
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        mov ebx, dword ptr ss : [esp+0x18]
        push ebp
        push esi
        push edi
        mov dword ptr ss : [esp+0x10], ebx
        xor edi, edi
        cmp ebx, edi
        mov dword ptr ss : [esp+0x1C], edi
        je public_631a66b
        mov esi, dword ptr ss : [esp+0x28]
        mov eax, dword ptr ds : [esi]
        mov dword ptr ds : [ebx], eax
        mov ecx, dword ptr ds : [esi+4]
        mov dword ptr ds : [ebx+4], ecx
        mov dl, byte ptr ds : [esi+8]
        add esi, 8
        add ebx, 8
        mov byte ptr ds : [ebx], dl
        mov dword ptr ds : [ebx+4], edi
        mov dword ptr ds : [ebx+8], edi
        mov dword ptr ds : [ebx+0xC], edi
        mov eax, dword ptr ds : [public_63991c0]
        mov ecx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [eax]
        mov ebp, ecx
        cmp eax, ebp
        jae public_631a564
        mov ebp, eax
        public_631a564 : nop
        cmp ebx, esi
        jne public_631a5da
        cmp ebp, edi
        mov esi, eax
        jbe public_631a574
        call dword ptr ds : [public_63991c4]
        public_631a574 : nop
        mov ecx, ebx
        call dword ptr ds : [public_63991bc]
        mov eax, dword ptr ds : [ebx+8]
        sub eax, ebp
        cmp eax, esi
        jae public_631a587
        mov esi, eax
        public_631a587 : nop
        cmp esi, edi
        jbe public_631a5bd
        mov ecx, dword ptr ds : [ebx+4]
        add ebp, ecx
        sub eax, esi
        push eax
        lea edx, ds:[esi+ebp]
        push edx
        push ebp
        call dword ptr ds : [public_6399330]
        mov ebp, dword ptr ds : [ebx+8]
        add esp, 0xC
        push edi
        sub ebp, esi
        push ebp
        mov ecx, ebx
        call dword ptr ds : [public_63991d4]
        test al, al
        je public_631a5bd
        push ebp
        mov ecx, ebx
        call dword ptr ds : [public_63991d8]
        public_631a5bd : nop
        push edi
        push edi
        mov ecx, ebx
        call dword ptr ds : [public_6399198]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        public_631a5da : nop
        cmp ebp, edi
        jbe public_631a633
        cmp ebp, ecx
        jne public_631a633
        mov eax, dword ptr ds : [esi+4]
        cmp eax, edi
        jne public_631a5ee
        mov eax, dword ptr ds : [public_63991d0]
        public_631a5ee : nop
        cmp byte ptr ds : [eax-1], 0xFE
        jae public_631a633
        mov dword ptr ds : [ebx+4], edi
        mov dword ptr ds : [ebx+8], edi
        mov dword ptr ds : [ebx+0xC], edi
        mov eax, dword ptr ds : [esi+4]
        cmp eax, edi
        jne public_631a609
        mov eax, dword ptr ds : [public_63991d0]
        public_631a609 : nop
        mov dword ptr ds : [ebx+4], eax
        mov ecx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ebx+8], ecx
        mov edx, dword ptr ds : [esi+0xC]
        pop edi
        mov dword ptr ds : [ebx+0xC], edx
        mov cl, byte ptr ds : [eax-1]
        pop esi
        inc cl
        pop ebp
        mov byte ptr ds : [eax-1], cl
        pop ebx
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        public_631a633 : nop
        push 1
        push ebp
        mov ecx, ebx
        call dword ptr ds : [public_63991d4]
        test al, al
        je public_631a66b
        mov esi, dword ptr ds : [esi+4]
        test esi, esi
        jne public_631a64f
        mov esi, dword ptr ds : [public_63991d0]
        public_631a64f : nop
        mov edi, dword ptr ds : [ebx+4]
        mov ecx, ebp
        mov eax, ecx
        shr ecx, 2
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        push ebp
        mov ecx, ebx
        call dword ptr ds : [public_63991d8]
        public_631a66b : nop
        mov ecx, dword ptr ss : [esp+0x14]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x631a500)
    }
}

#undef public_631a564
#undef public_631a574
#undef public_631a587
#undef public_631a5bd
#undef public_631a5da
#undef public_631a5ee
#undef public_631a609
#undef public_631a633
#undef public_631a64f
#undef public_631a66b
