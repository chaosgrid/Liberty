#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea9f40);

#define public_6ec1a44 _public_6ec1a44
#define public_6ec1a56 _public_6ec1a56
#define public_6ec1a69 _public_6ec1a69
#define public_6ec1a7b _public_6ec1a7b
#define public_6ec1aa1 _public_6ec1aa1
#define public_6ec1ac3 _public_6ec1ac3
#define public_6ec1ade _public_6ec1ade
#define public_6ec1af7 _public_6ec1af7
#define public_6ec1b0a _public_6ec1b0a

PROC_DECLARE(0x6ec1a20, internal_6ec1a20, public_6ec1a20);
extern "C" NAKED register_t __cdecl internal_6ec1a20()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ds : [public_6fb3048]
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        mov ebp, ecx
        xor esi, esi
        push esi
        mov ecx, edi
        call ebx
        cmp eax, esi
        jne public_6ec1a44
        mov dword ptr ss : [ebp+0xC], esi
        mov byte ptr ss : [ebp+0x10], 0
        jmp public_6ec1a56
        public_6ec1a44 : nop
        push eax
        lea eax, ss:[ebp+0x10]
        push 0x30
        push eax
        call public_6ea9f40
        add esp, 0xC
        mov dword ptr ss : [ebp+0xC], eax
        public_6ec1a56 : nop
        push 1
        mov ecx, edi
        call ebx
        cmp eax, esi
        jne public_6ec1a69
        mov dword ptr ss : [ebp+0x40], esi
        mov byte ptr ss : [ebp+0x44], 0
        jmp public_6ec1a7b
        public_6ec1a69 : nop
        push eax
        lea ecx, ss:[ebp+0x44]
        push 0x30
        push ecx
        call public_6ea9f40
        add esp, 0xC
        mov dword ptr ss : [ebp+0x40], eax
        public_6ec1a7b : nop
        lea esi, ss:[ebp+0x44]
/*FIXUP push offset public_6fb579c @0x6ec1a7e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb579c
        push esi
        call dword ptr ds : [public_6fb3294]
        add esp, 8
        test eax, eax
        je public_6ec1aa1
        push esi
        call dword ptr ds : [public_6fb3684]
        add esp, 4
        mov dword ptr ss : [ebp+0xB0], eax
        public_6ec1aa1 : nop
        push 2
        mov ecx, edi
        call dword ptr ds : [public_6fb306c]
        test al, al
        jne public_6ec1b0a
        push 2
        mov ecx, edi
        call ebx
        mov esi, eax
        test esi, esi
        jne public_6ec1ac3
        mov dword ptr ss : [ebp+0x74], eax
        mov byte ptr ss : [ebp+0x78], al
        jmp public_6ec1af7
        public_6ec1ac3 : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x30
        lea edx, ss:[ebp+0x78]
        jb public_6ec1ade
        mov eax, 0x2F
        public_6ec1ade : nop
        mov ecx, eax
        mov ebx, ecx
        shr ecx, 2
        mov edi, edx
        rep movsd
        mov ecx, ebx
        and ecx, 3
        rep movsb
        mov byte ptr ds : [eax+edx], 0
        mov dword ptr ss : [ebp+0x74], eax
        public_6ec1af7 : nop
        lea edx, ss:[ebp+0x78]
        push edx
        call dword ptr ds : [public_6fb3684]
        add esp, 4
        mov dword ptr ss : [ebp+0xAC], eax
        public_6ec1b0a : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6ec1a20)
    }
}

#undef public_6ec1a44
#undef public_6ec1a56
#undef public_6ec1a69
#undef public_6ec1a7b
#undef public_6ec1aa1
#undef public_6ec1ac3
#undef public_6ec1ade
#undef public_6ec1af7
#undef public_6ec1b0a
