#include "Content-PCH.h"


#define public_6ec0bdb _public_6ec0bdb
#define public_6ec0c0f _public_6ec0c0f
#define public_6ec0c23 _public_6ec0c23
#define public_6ec0c3b _public_6ec0c3b
#define public_6ec0c51 _public_6ec0c51
#define public_6ec0c7c _public_6ec0c7c
#define public_6ec0c97 _public_6ec0c97
#define public_6ec0cb0 _public_6ec0cb0

PROC_DECLARE(0x6ec0b90, internal_6ec0b90, public_6ec0b90);
extern "C" NAKED register_t __cdecl internal_6ec0b90()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ds : [public_6fb3048]
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        push edi
        mov ebp, ecx
        push 0
        mov ecx, esi
        call ebx
        push eax
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        push 1
        mov ecx, esi
        mov dword ptr ss : [ebp+0x14], eax
        call dword ptr ds : [public_6fb306c]
        test al, al
        jne public_6ec0bdb
        mov edi, dword ptr ds : [public_6fb3020]
        push 1
        mov ecx, esi
        call edi
        cmp eax, 0xFFFFFFFF
        jl public_6ec0bdb
        push 1
        mov ecx, esi
        call edi
        mov dword ptr ss : [ebp+0x10], eax
        public_6ec0bdb : nop
        push 2
        mov ecx, esi
        call dword ptr ds : [public_6fb306c]
        test al, al
        jne public_6ec0c51
        push 2
        mov ecx, esi
        call ebx
        mov ebx, dword ptr ds : [public_6fb3294]
        mov edi, eax
/*FIXUP push offset public_6fb584c @0x6ec0bf7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb584c
        push edi
        call ebx
        add esp, 8
        test eax, eax
        jne public_6ec0c0f
        mov dword ptr ss : [ebp+0x50], 1
        jmp public_6ec0c51
/*FIXUP public_6ec0c0f : nop
        push offset public_6fb5844 @0x6ec0c0f*/
  FIXUP public_6ec0c0f : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb5844
        push edi
        call ebx
        add esp, 8
        test eax, eax
        jne public_6ec0c23
        mov dword ptr ss : [ebp+0x50], eax
        jmp public_6ec0c51
/*FIXUP public_6ec0c23 : nop
        push offset public_6fb5840 @0x6ec0c23*/
  FIXUP public_6ec0c23 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb5840
        push edi
        call ebx
        add esp, 8
        test eax, eax
        jne public_6ec0c3b
        mov dword ptr ss : [ebp+0x50], 0x3E7
        jmp public_6ec0c51
/*FIXUP public_6ec0c3b : nop
        push offset public_6fb582c @0x6ec0c3b*/
  FIXUP public_6ec0c3b : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb582c
        push edi
        call ebx
        add esp, 8
        test eax, eax
        jne public_6ec0c51
        mov dword ptr ss : [ebp+0x50], 0x3E6
        public_6ec0c51 : nop
        push 3
        mov ecx, esi
        call dword ptr ds : [public_6fb306c]
        test al, al
        jne public_6ec0cb0
        push 3
        mov ecx, esi
        call dword ptr ds : [public_6fb3048]
        mov esi, eax
        test esi, esi
        jne public_6ec0c7c
        pop edi
        pop esi
        mov dword ptr ss : [ebp+0x18], eax
        mov byte ptr ss : [ebp+0x1C], al
        pop ebp
        pop ebx
        ret 4
        public_6ec0c7c : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x30
        lea edx, ss:[ebp+0x1C]
        jb public_6ec0c97
        mov eax, 0x2F
        public_6ec0c97 : nop
        mov ecx, eax
        mov ebx, ecx
        shr ecx, 2
        mov edi, edx
        rep movsd
        mov ecx, ebx
        and ecx, 3
        rep movsb
        mov byte ptr ds : [eax+edx], 0
        mov dword ptr ss : [ebp+0x18], eax
        public_6ec0cb0 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6ec0b90)
    }
}

#undef public_6ec0bdb
#undef public_6ec0c0f
#undef public_6ec0c23
#undef public_6ec0c3b
#undef public_6ec0c51
#undef public_6ec0c7c
#undef public_6ec0c97
#undef public_6ec0cb0
