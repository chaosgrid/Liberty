#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb6450);

#define public_6eb6470 _public_6eb6470
#define public_6eb648d _public_6eb648d
#define public_6eb64a0 _public_6eb64a0
#define public_6eb64b3 _public_6eb64b3
#define public_6eb64c5 _public_6eb64c5
#define public_6eb64d5 _public_6eb64d5
#define public_6eb64e4 _public_6eb64e4
#define public_6eb64f4 _public_6eb64f4
#define public_6eb6505 _public_6eb6505
#define public_6eb651d _public_6eb651d

PROC_DECLARE(0x6eb6450, internal_6eb6450, public_6eb6450);
extern "C" NAKED register_t __cdecl internal_6eb6450()
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
        mov esi, offset public_6ed78d4
        mov dword ptr ss : [esp+0x10], 9
        xor edi, edi
        public_6eb6470 : nop
        sub esi, 0x4C
        mov dword ptr ds : [esi-0x28], edi
        mov dword ptr ds : [esi-0x24], edi
        mov dword ptr ds : [esi-0x20], edi
        mov dword ptr ds : [esi-0x1C], edi
        mov eax, dword ptr ds : [esi+0x10]
        sub eax, 5
        je public_6eb648d
        dec eax
        je public_6eb64b3
        dec eax
        jne public_6eb64a0
        public_6eb648d : nop
        mov eax, dword ptr ds : [esi+0x14]
        cmp eax, edi
        je public_6eb64a0
        push eax
        push edi
        call ebp
        push eax
        call ebx
        mov dword ptr ds : [esi+0x14], edi
        mov edi, edi
        public_6eb64a0 : nop
        mov dword ptr ds : [esi+0x14], edi
        mov eax, dword ptr ds : [esi-4]
        sub eax, 5
        je public_6eb64d5
        dec eax
        je public_6eb64c5
        dec eax
        je public_6eb64d5
        jmp public_6eb64e4
        public_6eb64b3 : nop
        mov eax, dword ptr ds : [esi+0x14]
        cmp eax, edi
        mov dword ptr ds : [esi+0x14], edi
        je public_6eb64a0
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        jmp public_6eb64a0
        public_6eb64c5 : nop
        mov eax, dword ptr ds : [esi]
        cmp eax, edi
        mov dword ptr ds : [esi], edi
        je public_6eb64e4
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        jmp public_6eb64e4
        public_6eb64d5 : nop
        mov eax, dword ptr ds : [esi]
        cmp eax, edi
        je public_6eb64e4
        push eax
        push edi
        call ebp
        push eax
        call ebx
        mov dword ptr ds : [esi], edi
        public_6eb64e4 : nop
        mov dword ptr ds : [esi], edi
        mov eax, dword ptr ds : [esi-0x18]
        sub eax, 5
        je public_6eb64f4
        dec eax
        je public_6eb651d
        dec eax
        jne public_6eb6505
        public_6eb64f4 : nop
        mov eax, dword ptr ds : [esi-0x14]
        cmp eax, edi
        je public_6eb6505
        push eax
        push edi
        call ebp
        push eax
        call ebx
        mov dword ptr ds : [esi-0x14], edi
        public_6eb6505 : nop
        mov eax, dword ptr ss : [esp+0x10]
        dec eax
        mov dword ptr ds : [esi-0x14], edi
        mov dword ptr ss : [esp+0x10], eax
        jne public_6eb6470
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 
        public_6eb651d : nop
        mov eax, dword ptr ds : [esi-0x14]
        cmp eax, edi
        mov dword ptr ds : [esi-0x14], edi
        je public_6eb6505
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        jmp public_6eb6505
        UNREACHABLE_TRAP(0x6eb6450)
    }
}

#undef public_6eb6470
#undef public_6eb648d
#undef public_6eb64a0
#undef public_6eb64b3
#undef public_6eb64c5
#undef public_6eb64d5
#undef public_6eb64e4
#undef public_6eb64f4
#undef public_6eb6505
#undef public_6eb651d
