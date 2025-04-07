#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eba1b0);

#define public_6eba1d0 _public_6eba1d0
#define public_6eba1ed _public_6eba1ed
#define public_6eba200 _public_6eba200
#define public_6eba213 _public_6eba213
#define public_6eba225 _public_6eba225
#define public_6eba235 _public_6eba235
#define public_6eba244 _public_6eba244
#define public_6eba254 _public_6eba254
#define public_6eba265 _public_6eba265
#define public_6eba27d _public_6eba27d

PROC_DECLARE(0x6eba1b0, internal_6eba1b0, public_6eba1b0);
extern "C" NAKED register_t __cdecl internal_6eba1b0()
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
        mov esi, offset public_6ed6ce0
        mov dword ptr ss : [esp+0x10], 0x12
        xor edi, edi
        public_6eba1d0 : nop
        sub esi, 0x4C
        mov dword ptr ds : [esi-0x28], edi
        mov dword ptr ds : [esi-0x24], edi
        mov dword ptr ds : [esi-0x20], edi
        mov dword ptr ds : [esi-0x1C], edi
        mov eax, dword ptr ds : [esi+0x10]
        sub eax, 5
        je public_6eba1ed
        dec eax
        je public_6eba213
        dec eax
        jne public_6eba200
        public_6eba1ed : nop
        mov eax, dword ptr ds : [esi+0x14]
        cmp eax, edi
        je public_6eba200
        push eax
        push edi
        call ebp
        push eax
        call ebx
        mov dword ptr ds : [esi+0x14], edi
        mov edi, edi
        public_6eba200 : nop
        mov dword ptr ds : [esi+0x14], edi
        mov eax, dword ptr ds : [esi-4]
        sub eax, 5
        je public_6eba235
        dec eax
        je public_6eba225
        dec eax
        je public_6eba235
        jmp public_6eba244
        public_6eba213 : nop
        mov eax, dword ptr ds : [esi+0x14]
        cmp eax, edi
        mov dword ptr ds : [esi+0x14], edi
        je public_6eba200
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        jmp public_6eba200
        public_6eba225 : nop
        mov eax, dword ptr ds : [esi]
        cmp eax, edi
        mov dword ptr ds : [esi], edi
        je public_6eba244
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        jmp public_6eba244
        public_6eba235 : nop
        mov eax, dword ptr ds : [esi]
        cmp eax, edi
        je public_6eba244
        push eax
        push edi
        call ebp
        push eax
        call ebx
        mov dword ptr ds : [esi], edi
        public_6eba244 : nop
        mov dword ptr ds : [esi], edi
        mov eax, dword ptr ds : [esi-0x18]
        sub eax, 5
        je public_6eba254
        dec eax
        je public_6eba27d
        dec eax
        jne public_6eba265
        public_6eba254 : nop
        mov eax, dword ptr ds : [esi-0x14]
        cmp eax, edi
        je public_6eba265
        push eax
        push edi
        call ebp
        push eax
        call ebx
        mov dword ptr ds : [esi-0x14], edi
        public_6eba265 : nop
        mov eax, dword ptr ss : [esp+0x10]
        dec eax
        mov dword ptr ds : [esi-0x14], edi
        mov dword ptr ss : [esp+0x10], eax
        jne public_6eba1d0
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 
        public_6eba27d : nop
        mov eax, dword ptr ds : [esi-0x14]
        cmp eax, edi
        mov dword ptr ds : [esi-0x14], edi
        je public_6eba265
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        jmp public_6eba265
        UNREACHABLE_TRAP(0x6eba1b0)
    }
}

#undef public_6eba1d0
#undef public_6eba1ed
#undef public_6eba200
#undef public_6eba213
#undef public_6eba225
#undef public_6eba235
#undef public_6eba244
#undef public_6eba254
#undef public_6eba265
#undef public_6eba27d
