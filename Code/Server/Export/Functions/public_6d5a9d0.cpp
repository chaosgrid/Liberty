#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d5a9d0);
CLANG_FORWARD_JUMP_SYMBOL(public_6d63c41);

#define public_6d5aa25 _public_6d5aa25
#define public_6d5aa35 _public_6d5aa35
#define public_6d5aa48 _public_6d5aa48
#define public_6d5aa7e _public_6d5aa7e
#define public_6d5aa99 _public_6d5aa99
#define public_6d5aaad _public_6d5aaad
#define public_6d5aac9 _public_6d5aac9
#define public_6d5aaf3 _public_6d5aaf3
#define public_6d5ab0f _public_6d5ab0f
#define public_6d5ab2c _public_6d5ab2c

PROC_DECLARE(0x6d5a9d0, internal_6d5a9d0, public_6d5a9d0);
extern "C" NAKED register_t __cdecl internal_6d5a9d0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6d63c41 @0x6d5a9d2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d63c41
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x1C]
        push esi
        push edi
        mov dword ptr ss : [esp+0x10], ebp
        xor edi, edi
        cmp ebp, edi
        mov dword ptr ss : [esp+0x1C], edi
        je public_6d5ab2c
        mov esi, dword ptr ss : [esp+0x28]
        mov al, byte ptr ds : [esi]
        mov byte ptr ss : [ebp], al
        mov dword ptr ss : [ebp+4], edi
        mov dword ptr ss : [ebp+8], edi
        mov dword ptr ss : [ebp+0xC], edi
        mov ecx, dword ptr ds : [public_6d64b80]
        mov eax, dword ptr ds : [ecx]
        mov ecx, dword ptr ds : [esi+8]
        mov ebx, ecx
        cmp eax, ebx
        jae public_6d5aa25
        mov ebx, eax
        public_6d5aa25 : nop
        cmp ebp, esi
        jne public_6d5aa99
        cmp ebx, edi
        mov esi, eax
        jbe public_6d5aa35
        call dword ptr ds : [public_6d64b04]
        public_6d5aa35 : nop
        mov ecx, ebp
        call dword ptr ds : [public_6d64ae8]
        mov eax, dword ptr ss : [ebp+8]
        sub eax, ebx
        cmp eax, esi
        jae public_6d5aa48
        mov esi, eax
        public_6d5aa48 : nop
        cmp esi, edi
        jbe public_6d5aa7e
        mov edx, dword ptr ss : [ebp+4]
        sub eax, esi
        add ebx, edx
        push eax
        lea eax, ds:[ebx+esi]
        push eax
        push ebx
        call dword ptr ds : [public_6d64c90]
        mov ebx, dword ptr ss : [ebp+8]
        add esp, 0xC
        push edi
        sub ebx, esi
        push ebx
        mov ecx, ebp
        call dword ptr ds : [public_6d64b84]
        test al, al
        je public_6d5aa7e
        push ebx
        mov ecx, ebp
        call dword ptr ds : [public_6d64b88]
        public_6d5aa7e : nop
        mov ecx, ebp
        call dword ptr ds : [public_6d64ae8]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        public_6d5aa99 : nop
        cmp ebx, edi
        jbe public_6d5aaf3
        cmp ebx, ecx
        jne public_6d5aaf3
        mov eax, dword ptr ds : [esi+4]
        cmp eax, edi
        jne public_6d5aaad
        mov eax, dword ptr ds : [public_6d64b7c]
        public_6d5aaad : nop
        cmp byte ptr ds : [eax-1], 0xFE
        jae public_6d5aaf3
        push 1
        mov ecx, ebp
        call dword ptr ds : [public_6d64b74]
        mov eax, dword ptr ds : [esi+4]
        cmp eax, edi
        jne public_6d5aac9
        mov eax, dword ptr ds : [public_6d64b7c]
        public_6d5aac9 : nop
        mov dword ptr ss : [ebp+4], eax
        mov ecx, dword ptr ds : [esi+8]
        mov dword ptr ss : [ebp+8], ecx
        mov edx, dword ptr ds : [esi+0xC]
        pop edi
        mov dword ptr ss : [ebp+0xC], edx
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
        public_6d5aaf3 : nop
        push 1
        push ebx
        mov ecx, ebp
        call dword ptr ds : [public_6d64b84]
        test al, al
        je public_6d5ab2c
        mov esi, dword ptr ds : [esi+4]
        test esi, esi
        jne public_6d5ab0f
        mov esi, dword ptr ds : [public_6d64b7c]
        public_6d5ab0f : nop
        mov edi, dword ptr ss : [ebp+4]
        mov ecx, ebx
        mov eax, ecx
        shr ecx, 2
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ss : [ebp+4]
        mov dword ptr ss : [ebp+8], ebx
        mov byte ptr ds : [ebx+ecx], 0
        public_6d5ab2c : nop
        mov ecx, dword ptr ss : [esp+0x14]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6d5a9d0)
    }
}

#undef public_6d5aa25
#undef public_6d5aa35
#undef public_6d5aa48
#undef public_6d5aa7e
#undef public_6d5aa99
#undef public_6d5aaad
#undef public_6d5aac9
#undef public_6d5aaf3
#undef public_6d5ab0f
#undef public_6d5ab2c
