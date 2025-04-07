#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb83e0);

#define public_6eb8400 _public_6eb8400
#define public_6eb841d _public_6eb841d
#define public_6eb8430 _public_6eb8430
#define public_6eb8443 _public_6eb8443
#define public_6eb8455 _public_6eb8455
#define public_6eb8465 _public_6eb8465
#define public_6eb8474 _public_6eb8474
#define public_6eb8484 _public_6eb8484
#define public_6eb8495 _public_6eb8495
#define public_6eb84ad _public_6eb84ad

PROC_DECLARE(0x6eb83e0, internal_6eb83e0, public_6eb83e0);
extern "C" NAKED register_t __cdecl internal_6eb83e0()
{
    __asm
    {
        push ecx
        push ebx
        mov ebx, dword ptr ds : [public_6ed101c]
        push ebp
        mov ebp, dword ptr ds : [public_6ed1020]
        push esi
        push edi
        mov esi, offset public_6ed7244
        mov dword ptr ss : [esp+0x10], 0xD
        xor edi, edi
        public_6eb8400 : nop
        sub esi, 0x4C
        mov dword ptr ds : [esi-0x28], edi
        mov dword ptr ds : [esi-0x24], edi
        mov dword ptr ds : [esi-0x20], edi
        mov dword ptr ds : [esi-0x1C], edi
        mov eax, dword ptr ds : [esi+0x10]
        sub eax, 5
        je public_6eb841d
        dec eax
        je public_6eb8443
        dec eax
        jne public_6eb8430
        public_6eb841d : nop
        mov eax, dword ptr ds : [esi+0x14]
        cmp eax, edi
        je public_6eb8430
        push eax
        push edi
        call ebp
        push eax
        call ebx
        mov dword ptr ds : [esi+0x14], edi
        mov edi, edi
        public_6eb8430 : nop
        mov dword ptr ds : [esi+0x14], edi
        mov eax, dword ptr ds : [esi-4]
        sub eax, 5
        je public_6eb8465
        dec eax
        je public_6eb8455
        dec eax
        je public_6eb8465
        jmp public_6eb8474
        public_6eb8443 : nop
        mov eax, dword ptr ds : [esi+0x14]
        cmp eax, edi
        mov dword ptr ds : [esi+0x14], edi
        je public_6eb8430
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        jmp public_6eb8430
        public_6eb8455 : nop
        mov eax, dword ptr ds : [esi]
        cmp eax, edi
        mov dword ptr ds : [esi], edi
        je public_6eb8474
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        jmp public_6eb8474
        public_6eb8465 : nop
        mov eax, dword ptr ds : [esi]
        cmp eax, edi
        je public_6eb8474
        push eax
        push edi
        call ebp
        push eax
        call ebx
        mov dword ptr ds : [esi], edi
        public_6eb8474 : nop
        mov dword ptr ds : [esi], edi
        mov eax, dword ptr ds : [esi-0x18]
        sub eax, 5
        je public_6eb8484
        dec eax
        je public_6eb84ad
        dec eax
        jne public_6eb8495
        public_6eb8484 : nop
        mov eax, dword ptr ds : [esi-0x14]
        cmp eax, edi
        je public_6eb8495
        push eax
        push edi
        call ebp
        push eax
        call ebx
        mov dword ptr ds : [esi-0x14], edi
        public_6eb8495 : nop
        mov eax, dword ptr ss : [esp+0x10]
        dec eax
        mov dword ptr ds : [esi-0x14], edi
        mov dword ptr ss : [esp+0x10], eax
        jne public_6eb8400
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 
        public_6eb84ad : nop
        mov eax, dword ptr ds : [esi-0x14]
        cmp eax, edi
        mov dword ptr ds : [esi-0x14], edi
        je public_6eb8495
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        jmp public_6eb8495
        UNREACHABLE_TRAP(0x6eb83e0)
    }
}

#undef public_6eb8400
#undef public_6eb841d
#undef public_6eb8430
#undef public_6eb8443
#undef public_6eb8455
#undef public_6eb8465
#undef public_6eb8474
#undef public_6eb8484
#undef public_6eb8495
#undef public_6eb84ad
