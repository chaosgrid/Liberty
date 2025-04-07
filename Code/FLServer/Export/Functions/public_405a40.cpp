#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_405a40);
CLANG_FORWARD_PROC_SYMBOL(public_405d80);
CLANG_FORWARD_PROC_SYMBOL(public_405dd0);
CLANG_FORWARD_PROC_SYMBOL(public_405df0);
CLANG_FORWARD_PROC_SYMBOL(public_406020);
CLANG_FORWARD_JUMP_SYMBOL(public_419c61);

#define public_405a8f _public_405a8f
#define public_405aa0 _public_405aa0
#define public_405ab7 _public_405ab7
#define public_405ae8 _public_405ae8
#define public_405aec _public_405aec
#define public_405af5 _public_405af5
#define public_405b09 _public_405b09
#define public_405b24 _public_405b24
#define public_405b38 _public_405b38
#define public_405b52 _public_405b52
#define public_405b73 _public_405b73
#define public_405b7c _public_405b7c

PROC_DECLARE(0x405a40, internal_405a40, public_405a40);
extern "C" NAKED register_t __cdecl internal_405a40()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_419c61 @0x405a42*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_419c61
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
        je public_405b7c
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
        jbe public_405a8f
        or ebx, 0xFFFFFFFF
        public_405a8f : nop
        cmp ebp, esi
        jne public_405af5
        or edi, 0xFFFFFFFF
        cmp ebx, ecx
        jbe public_405aa0
        call dword ptr ds : [public_41b8d0]
        public_405aa0 : nop
        mov ecx, ebp
        call public_406020
        mov eax, dword ptr ss : [ebp+8]
        sub eax, ebx
        cmp eax, 0xFFFFFFFF
        jae public_405ab7
        mov edi, eax
        test edi, edi
        jbe public_405aec
        public_405ab7 : nop
        mov ecx, dword ptr ss : [ebp+4]
        add ebx, ecx
        sub eax, edi
        push eax
        lea edx, ds:[ebx+edi]
        push edx
        push ebx
        call dword ptr ds : [public_41b96c]
        mov esi, dword ptr ss : [ebp+8]
        add esp, 0xC
        push 0
        sub esi, edi
        push esi
        mov ecx, ebp
        call public_405df0
        test al, al
        je public_405ae8
        push esi
        mov ecx, ebp
        call public_405dd0
        public_405ae8 : nop
        mov esi, dword ptr ss : [esp+0x28]
        public_405aec : nop
        mov ecx, ebp
        call public_406020
        jmp public_405b73
        public_405af5 : nop
        cmp ebx, ecx
        jbe public_405b38
        cmp ebx, eax
        jne public_405b38
        mov eax, dword ptr ds : [esi+4]
        cmp eax, ecx
        jne public_405b09
        mov eax, offset public_41c4d0
        public_405b09 : nop
        cmp byte ptr ds : [eax-1], 0xFE
        jae public_405b38
        push 1
        mov ecx, ebp
        call public_405d80
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        jne public_405b24
        mov eax, offset public_41c4d0
        public_405b24 : nop
        mov dword ptr ss : [ebp+4], eax
        mov ecx, dword ptr ds : [esi+8]
        mov dword ptr ss : [ebp+8], ecx
        mov edx, dword ptr ds : [esi+0xC]
        mov dword ptr ss : [ebp+0xC], edx
        inc byte ptr ds : [eax-1]
        jmp public_405b73
        public_405b38 : nop
        push 1
        push ebx
        mov ecx, ebp
        call public_405df0
        test al, al
        je public_405b73
        mov esi, dword ptr ds : [esi+4]
        test esi, esi
        jne public_405b52
        mov esi, offset public_41c4d0
        public_405b52 : nop
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
        public_405b73 : nop
        mov edx, dword ptr ds : [esi+0x10]
        pop edi
        pop esi
        mov dword ptr ss : [ebp+0x10], edx
        pop ebx
        public_405b7c : nop
        mov ecx, dword ptr ss : [esp+8]
        pop ebp
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x405a40)
    }
}

#undef public_405a8f
#undef public_405aa0
#undef public_405ab7
#undef public_405ae8
#undef public_405aec
#undef public_405af5
#undef public_405b09
#undef public_405b24
#undef public_405b38
#undef public_405b52
#undef public_405b73
#undef public_405b7c
