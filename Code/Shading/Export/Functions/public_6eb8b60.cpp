#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb8b60);

#define public_6eb8b80 _public_6eb8b80
#define public_6eb8b9d _public_6eb8b9d
#define public_6eb8bb0 _public_6eb8bb0
#define public_6eb8bc3 _public_6eb8bc3
#define public_6eb8bd5 _public_6eb8bd5
#define public_6eb8be5 _public_6eb8be5
#define public_6eb8bf4 _public_6eb8bf4
#define public_6eb8c04 _public_6eb8c04
#define public_6eb8c15 _public_6eb8c15
#define public_6eb8c2d _public_6eb8c2d

PROC_DECLARE(0x6eb8b60, internal_6eb8b60, public_6eb8b60);
extern "C" NAKED register_t __cdecl internal_6eb8b60()
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
        mov esi, offset public_6ed6e64
        mov dword ptr ss : [esp+0x10], 5
        xor edi, edi
        public_6eb8b80 : nop
        sub esi, 0x4C
        mov dword ptr ds : [esi-0x28], edi
        mov dword ptr ds : [esi-0x24], edi
        mov dword ptr ds : [esi-0x20], edi
        mov dword ptr ds : [esi-0x1C], edi
        mov eax, dword ptr ds : [esi+0x10]
        sub eax, 5
        je public_6eb8b9d
        dec eax
        je public_6eb8bc3
        dec eax
        jne public_6eb8bb0
        public_6eb8b9d : nop
        mov eax, dword ptr ds : [esi+0x14]
        cmp eax, edi
        je public_6eb8bb0
        push eax
        push edi
        call ebp
        push eax
        call ebx
        mov dword ptr ds : [esi+0x14], edi
        mov edi, edi
        public_6eb8bb0 : nop
        mov dword ptr ds : [esi+0x14], edi
        mov eax, dword ptr ds : [esi-4]
        sub eax, 5
        je public_6eb8be5
        dec eax
        je public_6eb8bd5
        dec eax
        je public_6eb8be5
        jmp public_6eb8bf4
        public_6eb8bc3 : nop
        mov eax, dword ptr ds : [esi+0x14]
        cmp eax, edi
        mov dword ptr ds : [esi+0x14], edi
        je public_6eb8bb0
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        jmp public_6eb8bb0
        public_6eb8bd5 : nop
        mov eax, dword ptr ds : [esi]
        cmp eax, edi
        mov dword ptr ds : [esi], edi
        je public_6eb8bf4
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        jmp public_6eb8bf4
        public_6eb8be5 : nop
        mov eax, dword ptr ds : [esi]
        cmp eax, edi
        je public_6eb8bf4
        push eax
        push edi
        call ebp
        push eax
        call ebx
        mov dword ptr ds : [esi], edi
        public_6eb8bf4 : nop
        mov dword ptr ds : [esi], edi
        mov eax, dword ptr ds : [esi-0x18]
        sub eax, 5
        je public_6eb8c04
        dec eax
        je public_6eb8c2d
        dec eax
        jne public_6eb8c15
        public_6eb8c04 : nop
        mov eax, dword ptr ds : [esi-0x14]
        cmp eax, edi
        je public_6eb8c15
        push eax
        push edi
        call ebp
        push eax
        call ebx
        mov dword ptr ds : [esi-0x14], edi
        public_6eb8c15 : nop
        mov eax, dword ptr ss : [esp+0x10]
        dec eax
        mov dword ptr ds : [esi-0x14], edi
        mov dword ptr ss : [esp+0x10], eax
        jne public_6eb8b80
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 
        public_6eb8c2d : nop
        mov eax, dword ptr ds : [esi-0x14]
        cmp eax, edi
        mov dword ptr ds : [esi-0x14], edi
        je public_6eb8c15
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        jmp public_6eb8c15
        UNREACHABLE_TRAP(0x6eb8b60)
    }
}

#undef public_6eb8b80
#undef public_6eb8b9d
#undef public_6eb8bb0
#undef public_6eb8bc3
#undef public_6eb8bd5
#undef public_6eb8be5
#undef public_6eb8bf4
#undef public_6eb8c04
#undef public_6eb8c15
#undef public_6eb8c2d
