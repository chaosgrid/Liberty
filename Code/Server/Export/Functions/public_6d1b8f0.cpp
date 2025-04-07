#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d1b8f0);
CLANG_FORWARD_JUMP_SYMBOL(public_6d62169);

#define public_6d1b951 _public_6d1b951
#define public_6d1b961 _public_6d1b961
#define public_6d1b974 _public_6d1b974
#define public_6d1b9ab _public_6d1b9ab
#define public_6d1b9c0 _public_6d1b9c0
#define public_6d1b9d4 _public_6d1b9d4
#define public_6d1b9f0 _public_6d1b9f0
#define public_6d1ba0c _public_6d1ba0c
#define public_6d1ba28 _public_6d1ba28
#define public_6d1ba44 _public_6d1ba44
#define public_6d1ba4e _public_6d1ba4e

PROC_DECLARE(0x6d1b8f0, internal_6d1b8f0, public_6d1b8f0);
extern "C" NAKED register_t __cdecl internal_6d1b8f0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6d62169 @0x6d1b8f2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d62169
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push ebx
        push ebp
        push esi
        push edi
        lea eax, ss:[esp+0x14]
        mov edi, ecx
        push eax
        mov dword ptr ss : [esp+0x14], edi
        mov dword ptr ss : [esp+0x18], offset public_6d66ee4
        call dword ptr ds : [public_6d64c5c]
        mov esi, dword ptr ss : [esp+0x28]
        mov cl, byte ptr ds : [esi]
        xor edx, edx
        lea ebx, ds:[edi+0xC]
        mov byte ptr ds : [ebx], cl
        mov dword ptr ds : [ebx+4], edx
        mov dword ptr ds : [ebx+8], edx
        mov dword ptr ds : [ebx+0xC], edx
        mov eax, dword ptr ds : [public_6d64b80]
        mov ecx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [eax]
        mov ebp, ecx
        cmp eax, ebp
        mov dword ptr ss : [esp+0x20], edx
        jae public_6d1b951
        mov ebp, eax
        public_6d1b951 : nop
        cmp ebx, esi
        jne public_6d1b9c0
        cmp ebp, edx
        mov esi, eax
        jbe public_6d1b961
        call dword ptr ds : [public_6d64b04]
        public_6d1b961 : nop
        mov ecx, ebx
        call dword ptr ds : [public_6d64ae8]
        mov eax, dword ptr ds : [ebx+8]
        sub eax, ebp
        cmp eax, esi
        jae public_6d1b974
        mov esi, eax
        public_6d1b974 : nop
        test esi, esi
        jbe public_6d1b9ab
        mov ecx, dword ptr ds : [ebx+4]
        add ebp, ecx
        sub eax, esi
        push eax
        lea edx, ds:[esi+ebp]
        push edx
        push ebp
        call dword ptr ds : [public_6d64c90]
        mov ebp, dword ptr ds : [ebx+8]
        add esp, 0xC
        push 0
        sub ebp, esi
        push ebp
        mov ecx, ebx
        call dword ptr ds : [public_6d64b84]
        test al, al
        je public_6d1b9ab
        push ebp
        mov ecx, ebx
        call dword ptr ds : [public_6d64b88]
        public_6d1b9ab : nop
        mov ecx, ebx
        call dword ptr ds : [public_6d64ae8]
        mov dword ptr ds : [edi], offset public_6d68ab0
        mov eax, edi
        jmp public_6d1ba4e
        public_6d1b9c0 : nop
        cmp ebp, edx
        jbe public_6d1ba0c
        cmp ebp, ecx
        jne public_6d1ba0c
        mov eax, dword ptr ds : [esi+4]
        cmp eax, edx
        jne public_6d1b9d4
        mov eax, dword ptr ds : [public_6d64b7c]
        public_6d1b9d4 : nop
        cmp byte ptr ds : [eax-1], 0xFE
        jae public_6d1ba0c
        push 1
        mov ecx, ebx
        call dword ptr ds : [public_6d64b74]
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        jne public_6d1b9f0
        mov eax, dword ptr ds : [public_6d64b7c]
        public_6d1b9f0 : nop
        mov dword ptr ds : [ebx+4], eax
        mov ecx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ebx+8], ecx
        mov edx, dword ptr ds : [esi+0xC]
        mov dword ptr ds : [ebx+0xC], edx
        inc byte ptr ds : [eax-1]
        mov dword ptr ds : [edi], offset public_6d68ab0
        mov eax, edi
        jmp public_6d1ba4e
        public_6d1ba0c : nop
        push 1
        push ebp
        mov ecx, ebx
        call dword ptr ds : [public_6d64b84]
        test al, al
        je public_6d1ba44
        mov esi, dword ptr ds : [esi+4]
        test esi, esi
        jne public_6d1ba28
        mov esi, dword ptr ds : [public_6d64b7c]
        public_6d1ba28 : nop
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
        call dword ptr ds : [public_6d64b88]
        public_6d1ba44 : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [eax], offset public_6d68ab0
        public_6d1ba4e : nop
        mov ecx, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 4
        UNREACHABLE_TRAP(0x6d1b8f0)
    }
}

#undef public_6d1b951
#undef public_6d1b961
#undef public_6d1b974
#undef public_6d1b9ab
#undef public_6d1b9c0
#undef public_6d1b9d4
#undef public_6d1b9f0
#undef public_6d1ba0c
#undef public_6d1ba28
#undef public_6d1ba44
#undef public_6d1ba4e
