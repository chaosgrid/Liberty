#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce5a90);
CLANG_FORWARD_PROC_SYMBOL(public_6ce5d80);
CLANG_FORWARD_PROC_SYMBOL(public_6ce5dd0);
CLANG_FORWARD_PROC_SYMBOL(public_6ce5df0);
CLANG_FORWARD_PROC_SYMBOL(public_6ce6020);
CLANG_FORWARD_JUMP_SYMBOL(public_6d60431);

#define public_6ce5adf _public_6ce5adf
#define public_6ce5af0 _public_6ce5af0
#define public_6ce5b07 _public_6ce5b07
#define public_6ce5b38 _public_6ce5b38
#define public_6ce5b3c _public_6ce5b3c
#define public_6ce5b45 _public_6ce5b45
#define public_6ce5b59 _public_6ce5b59
#define public_6ce5b74 _public_6ce5b74
#define public_6ce5b88 _public_6ce5b88
#define public_6ce5ba2 _public_6ce5ba2
#define public_6ce5bc3 _public_6ce5bc3
#define public_6ce5bcc _public_6ce5bcc

PROC_DECLARE(0x6ce5a90, internal_6ce5a90, public_6ce5a90);
extern "C" NAKED register_t __cdecl internal_6ce5a90()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6d60431 @0x6ce5a92*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d60431
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebp
        mov ebp, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+4], ebp
        xor ecx, ecx
        cmp ebp, ecx
        mov dword ptr ss : [esp+0x10], ecx
        je public_6ce5bcc
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0x24]
        mov al, byte ptr ds : [esi]
        mov byte ptr ss : [ebp], al
        mov dword ptr ss : [ebp+4], ecx
        mov dword ptr ss : [ebp+8], ecx
        mov dword ptr ss : [ebp+0xC], ecx
        mov eax, dword ptr ds : [esi+8]
        mov ebx, eax
        cmp ebx, 0xFFFFFFFF
        push edi
        jbe public_6ce5adf
        or ebx, 0xFFFFFFFF
        public_6ce5adf : nop
        cmp ebp, esi
        jne public_6ce5b45
        or edi, 0xFFFFFFFF
        cmp ebx, ecx
        jbe public_6ce5af0
        call dword ptr ds : [public_6d64b04]
        public_6ce5af0 : nop
        mov ecx, ebp
        call public_6ce6020
        mov eax, dword ptr ss : [ebp+8]
        sub eax, ebx
        cmp eax, 0xFFFFFFFF
        jae public_6ce5b07
        mov edi, eax
        test edi, edi
        jbe public_6ce5b3c
        public_6ce5b07 : nop
        mov ecx, dword ptr ss : [ebp+4]
        add ebx, ecx
        sub eax, edi
        push eax
        lea edx, ds:[ebx+edi]
        push edx
        push ebx
        call dword ptr ds : [public_6d64c90]
        mov esi, dword ptr ss : [ebp+8]
        add esp, 0xC
        push 0
        sub esi, edi
        push esi
        mov ecx, ebp
        call public_6ce5df0
        test al, al
        je public_6ce5b38
        push esi
        mov ecx, ebp
        call public_6ce5dd0
        public_6ce5b38 : nop
        mov esi, dword ptr ss : [esp+0x28]
        public_6ce5b3c : nop
        mov ecx, ebp
        call public_6ce6020
        jmp public_6ce5bc3
        public_6ce5b45 : nop
        cmp ebx, ecx
        jbe public_6ce5b88
        cmp ebx, eax
        jne public_6ce5b88
        mov eax, dword ptr ds : [esi+4]
        cmp eax, ecx
        jne public_6ce5b59
        mov eax, offset public_6d64f30
        public_6ce5b59 : nop
        cmp byte ptr ds : [eax-1], 0xFE
        jae public_6ce5b88
        push 1
        mov ecx, ebp
        call public_6ce5d80
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        jne public_6ce5b74
        mov eax, offset public_6d64f30
        public_6ce5b74 : nop
        mov dword ptr ss : [ebp+4], eax
        mov ecx, dword ptr ds : [esi+8]
        mov dword ptr ss : [ebp+8], ecx
        mov edx, dword ptr ds : [esi+0xC]
        mov dword ptr ss : [ebp+0xC], edx
        inc byte ptr ds : [eax-1]
        jmp public_6ce5bc3
        public_6ce5b88 : nop
        push 1
        push ebx
        mov ecx, ebp
        call public_6ce5df0
        test al, al
        je public_6ce5bc3
        mov esi, dword ptr ds : [esi+4]
        test esi, esi
        jne public_6ce5ba2
        mov esi, offset public_6d64f30
        public_6ce5ba2 : nop
        mov edi, dword ptr ss : [ebp+4]
        mov ecx, ebx
        mov eax, ecx
        shr ecx, 2
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ss : [ebp+4]
        mov esi, dword ptr ss : [esp+0x28]
        mov dword ptr ss : [ebp+8], ebx
        mov byte ptr ds : [ebx+ecx], 0
        public_6ce5bc3 : nop
        mov edx, dword ptr ds : [esi+0x10]
        pop edi
        pop esi
        mov dword ptr ss : [ebp+0x10], edx
        pop ebx
        public_6ce5bcc : nop
        mov ecx, dword ptr ss : [esp+8]
        pop ebp
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6ce5a90)
    }
}

#undef public_6ce5adf
#undef public_6ce5af0
#undef public_6ce5b07
#undef public_6ce5b38
#undef public_6ce5b3c
#undef public_6ce5b45
#undef public_6ce5b59
#undef public_6ce5b74
#undef public_6ce5b88
#undef public_6ce5ba2
#undef public_6ce5bc3
#undef public_6ce5bcc
