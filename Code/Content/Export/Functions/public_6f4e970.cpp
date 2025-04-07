#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4e640);
CLANG_FORWARD_PROC_SYMBOL(public_6f4e970);
CLANG_FORWARD_JUMP_SYMBOL(public_6faf1b1);

#define public_6f4e9c4 _public_6f4e9c4
#define public_6f4e9d4 _public_6f4e9d4
#define public_6f4e9e7 _public_6f4e9e7
#define public_6f4ea20 _public_6f4ea20
#define public_6f4ea3b _public_6f4ea3b
#define public_6f4ea4f _public_6f4ea4f
#define public_6f4ea6b _public_6f4ea6b
#define public_6f4ea95 _public_6f4ea95
#define public_6f4eab3 _public_6f4eab3
#define public_6f4eac0 _public_6f4eac0
#define public_6f4eacf _public_6f4eacf
#define public_6f4eadb _public_6f4eadb

PROC_DECLARE(0x6f4e970, internal_6f4e970, public_6f4e970);
extern "C" NAKED register_t __cdecl internal_6f4e970()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6faf1b1 @0x6f4e972*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6faf1b1
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
        je public_6f4eadb
        mov ebx, dword ptr ss : [esp+0x28]
        mov al, byte ptr ds : [ebx]
        mov byte ptr ds : [esi], al
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [esi+8], ebp
        mov dword ptr ds : [esi+0xC], ebp
        mov ecx, dword ptr ds : [public_6fb32cc]
        mov eax, dword ptr ds : [ecx]
        mov ecx, dword ptr ds : [ebx+8]
        mov edi, ecx
        cmp eax, edi
        jae public_6f4e9c4
        mov edi, eax
        public_6f4e9c4 : nop
        cmp esi, ebx
        jne public_6f4ea3b
        cmp edi, ebp
        mov ebx, eax
        jbe public_6f4e9d4
        call dword ptr ds : [public_6fb32e4]
        public_6f4e9d4 : nop
        mov ecx, esi
        call dword ptr ds : [public_6fb32b8]
        mov eax, dword ptr ds : [esi+8]
        sub eax, edi
        cmp eax, ebx
        jae public_6f4e9e7
        mov ebx, eax
        public_6f4e9e7 : nop
        cmp ebx, ebp
        jbe public_6f4ea20
        mov ecx, dword ptr ds : [esi+4]
        sub eax, ebx
        push eax
        lea edx, ds:[ebx+edi]
        lea eax, ds:[ecx+edx*2]
        push eax
        lea ecx, ds:[ecx+edi*2]
        push ecx
        call public_6f4e640
        mov edi, dword ptr ds : [esi+8]
        add esp, 0xC
        push ebp
        sub edi, ebx
        push edi
        mov ecx, esi
        call dword ptr ds : [public_6fb32b4]
        test al, al
        je public_6f4ea20
        push edi
        mov ecx, esi
        call dword ptr ds : [public_6fb32d4]
        public_6f4ea20 : nop
        mov ecx, esi
        call dword ptr ds : [public_6fb32b8]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        public_6f4ea3b : nop
        cmp edi, ebp
        jbe public_6f4ea95
        cmp edi, ecx
        jne public_6f4ea95
        mov eax, dword ptr ds : [ebx+4]
        cmp eax, ebp
        jne public_6f4ea4f
        mov eax, dword ptr ds : [public_6fb32c0]
        public_6f4ea4f : nop
        cmp byte ptr ds : [eax-1], 0xFE
        jae public_6f4ea95
        push 1
        mov ecx, esi
        call dword ptr ds : [public_6fb32c8]
        mov eax, dword ptr ds : [ebx+4]
        cmp eax, ebp
        jne public_6f4ea6b
        mov eax, dword ptr ds : [public_6fb32c0]
        public_6f4ea6b : nop
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
        public_6f4ea95 : nop
        push 1
        push edi
        mov ecx, esi
        call dword ptr ds : [public_6fb32b4]
        test al, al
        je public_6f4eadb
        mov ebx, dword ptr ds : [ebx+4]
        test ebx, ebx
        mov ecx, dword ptr ds : [public_6fb32c0]
        je public_6f4eab3
        mov ecx, ebx
        public_6f4eab3 : nop
        test edi, edi
        mov eax, dword ptr ds : [esi+4]
        jbe public_6f4eacf
        mov edx, edi
        lea esp, ss:[esp]
        public_6f4eac0 : nop
        mov bx, word ptr ds : [ecx]
        mov word ptr ds : [eax], bx
        add eax, 2
        add ecx, 2
        dec edx
        jne public_6f4eac0
        public_6f4eacf : nop
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+8], edi
        mov word ptr ds : [edx+edi*2], 0
        public_6f4eadb : nop
        mov ecx, dword ptr ss : [esp+0x14]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6f4e970)
    }
}

#undef public_6f4e9c4
#undef public_6f4e9d4
#undef public_6f4e9e7
#undef public_6f4ea20
#undef public_6f4ea3b
#undef public_6f4ea4f
#undef public_6f4ea6b
#undef public_6f4ea95
#undef public_6f4eab3
#undef public_6f4eac0
#undef public_6f4eacf
#undef public_6f4eadb
