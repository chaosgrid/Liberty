#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea9f40);

#define public_6ec6ac4 _public_6ec6ac4
#define public_6ec6ad6 _public_6ec6ad6
#define public_6ec6aff _public_6ec6aff
#define public_6ec6b11 _public_6ec6b11
#define public_6ec6b38 _public_6ec6b38
#define public_6ec6b55 _public_6ec6b55
#define public_6ec6b74 _public_6ec6b74
#define public_6ec6c03 _public_6ec6c03
#define public_6ec6c1e _public_6ec6c1e
#define public_6ec6c37 _public_6ec6c37

PROC_DECLARE(0x6ec6aa0, internal_6ec6aa0, public_6ec6aa0);
extern "C" NAKED register_t __cdecl internal_6ec6aa0()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x14]
        push edi
        mov edi, dword ptr ds : [public_6fb3048]
        mov ebp, ecx
        xor ebx, ebx
        push ebx
        mov ecx, esi
        call edi
        cmp eax, ebx
        jne public_6ec6ac4
        mov dword ptr ss : [ebp+0xC], ebx
        mov byte ptr ss : [ebp+0x10], bl
        jmp public_6ec6ad6
        public_6ec6ac4 : nop
        push eax
        lea eax, ss:[ebp+0x10]
        push 0x30
        push eax
        call public_6ea9f40
        add esp, 0xC
        mov dword ptr ss : [ebp+0xC], eax
        public_6ec6ad6 : nop
        push 1
        mov ecx, esi
        call edi
        push eax
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        push 2
        mov ecx, esi
        mov dword ptr ss : [ebp+0xE0], eax
        call edi
        cmp eax, ebx
        jne public_6ec6aff
        mov dword ptr ss : [ebp+0x40], ebx
        mov byte ptr ss : [ebp+0x44], 0
        jmp public_6ec6b11
        public_6ec6aff : nop
        push eax
        lea ecx, ss:[ebp+0x44]
        push 0x30
        push ecx
        call public_6ea9f40
        add esp, 0xC
        mov dword ptr ss : [ebp+0x40], eax
/*FIXUP public_6ec6b11 : nop
        push offset public_6fb5b74 @0x6ec6b11*/
  FIXUP public_6ec6b11 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb5b74
        push 3
        mov ecx, esi
        call edi
        mov ebx, dword ptr ds : [public_6fb3294]
        push eax
        call ebx
        add esp, 8
        test eax, eax
        jne public_6ec6b38
        mov dword ptr ss : [ebp+0xD8], 1
        jmp public_6ec6b74
/*FIXUP public_6ec6b38 : nop
        push offset public_6fb5b6c @0x6ec6b38*/
  FIXUP public_6ec6b38 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb5b6c
        push 3
        mov ecx, esi
        call edi
        push eax
        call ebx
        add esp, 8
        test eax, eax
        jne public_6ec6b55
        mov dword ptr ss : [ebp+0xD8], eax
        jmp public_6ec6b74
/*FIXUP public_6ec6b55 : nop
        push offset public_6fb5b60 @0x6ec6b55*/
  FIXUP public_6ec6b55 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb5b60
        push 3
        mov ecx, esi
        call edi
        push eax
        call ebx
        add esp, 8
        test eax, eax
        jne public_6ec6b74
        mov dword ptr ss : [ebp+0xD8], 2
        public_6ec6b74 : nop
        push 6
        mov ecx, esi
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ss : [esp+0x10]
        push 5
        mov ecx, esi
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ss : [esp+0x18]
        push 4
        mov ecx, esi
        call dword ptr ds : [public_6fb3044]
        mov edx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ss : [esp+0x10]
        fstp dword ptr ss : [ebp+0xCC]
        push 7
        mov ecx, esi
        mov dword ptr ss : [ebp+0xD0], edx
        mov dword ptr ss : [ebp+0xD4], eax
        call dword ptr ds : [public_6fb306c]
        test al, al
        jne public_6ec6c37
        push 7
        mov ecx, esi
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ss : [ebp+0xE4]
        push 8
        mov ecx, esi
        call dword ptr ds : [public_6fb306c]
        test al, al
        jne public_6ec6c37
        push 8
        mov ecx, esi
        mov byte ptr ss : [ebp+0xDD], 1
        call edi
        mov esi, eax
        xor eax, eax
        cmp esi, eax
        jne public_6ec6c03
        pop edi
        pop esi
        mov byte ptr ss : [ebp+0x78], al
        mov dword ptr ss : [ebp+0x74], eax
        pop ebp
        pop ebx
        pop ecx
        ret 4
        public_6ec6c03 : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x30
        lea edx, ss:[ebp+0x78]
        jb public_6ec6c1e
        mov eax, 0x2F
        public_6ec6c1e : nop
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
        public_6ec6c37 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x6ec6aa0)
    }
}

#undef public_6ec6ac4
#undef public_6ec6ad6
#undef public_6ec6aff
#undef public_6ec6b11
#undef public_6ec6b38
#undef public_6ec6b55
#undef public_6ec6b74
#undef public_6ec6c03
#undef public_6ec6c1e
#undef public_6ec6c37
