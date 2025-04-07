#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ebbfb0);

#define public_6ebbfd0 _public_6ebbfd0
#define public_6ebbfed _public_6ebbfed
#define public_6ebc000 _public_6ebc000
#define public_6ebc013 _public_6ebc013
#define public_6ebc025 _public_6ebc025
#define public_6ebc035 _public_6ebc035
#define public_6ebc044 _public_6ebc044
#define public_6ebc054 _public_6ebc054
#define public_6ebc065 _public_6ebc065
#define public_6ebc07d _public_6ebc07d

PROC_DECLARE(0x6ebbfb0, internal_6ebbfb0, public_6ebbfb0);
extern "C" NAKED register_t __cdecl internal_6ebbfb0()
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
        mov esi, offset public_6ed6640
        mov dword ptr ss : [esp+0x10], 0x12
        xor edi, edi
        public_6ebbfd0 : nop
        sub esi, 0x4C
        mov dword ptr ds : [esi-0x28], edi
        mov dword ptr ds : [esi-0x24], edi
        mov dword ptr ds : [esi-0x20], edi
        mov dword ptr ds : [esi-0x1C], edi
        mov eax, dword ptr ds : [esi+0x10]
        sub eax, 5
        je public_6ebbfed
        dec eax
        je public_6ebc013
        dec eax
        jne public_6ebc000
        public_6ebbfed : nop
        mov eax, dword ptr ds : [esi+0x14]
        cmp eax, edi
        je public_6ebc000
        push eax
        push edi
        call ebp
        push eax
        call ebx
        mov dword ptr ds : [esi+0x14], edi
        mov edi, edi
        public_6ebc000 : nop
        mov dword ptr ds : [esi+0x14], edi
        mov eax, dword ptr ds : [esi-4]
        sub eax, 5
        je public_6ebc035
        dec eax
        je public_6ebc025
        dec eax
        je public_6ebc035
        jmp public_6ebc044
        public_6ebc013 : nop
        mov eax, dword ptr ds : [esi+0x14]
        cmp eax, edi
        mov dword ptr ds : [esi+0x14], edi
        je public_6ebc000
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        jmp public_6ebc000
        public_6ebc025 : nop
        mov eax, dword ptr ds : [esi]
        cmp eax, edi
        mov dword ptr ds : [esi], edi
        je public_6ebc044
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        jmp public_6ebc044
        public_6ebc035 : nop
        mov eax, dword ptr ds : [esi]
        cmp eax, edi
        je public_6ebc044
        push eax
        push edi
        call ebp
        push eax
        call ebx
        mov dword ptr ds : [esi], edi
        public_6ebc044 : nop
        mov dword ptr ds : [esi], edi
        mov eax, dword ptr ds : [esi-0x18]
        sub eax, 5
        je public_6ebc054
        dec eax
        je public_6ebc07d
        dec eax
        jne public_6ebc065
        public_6ebc054 : nop
        mov eax, dword ptr ds : [esi-0x14]
        cmp eax, edi
        je public_6ebc065
        push eax
        push edi
        call ebp
        push eax
        call ebx
        mov dword ptr ds : [esi-0x14], edi
        public_6ebc065 : nop
        mov eax, dword ptr ss : [esp+0x10]
        dec eax
        mov dword ptr ds : [esi-0x14], edi
        mov dword ptr ss : [esp+0x10], eax
        jne public_6ebbfd0
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 
        public_6ebc07d : nop
        mov eax, dword ptr ds : [esi-0x14]
        cmp eax, edi
        mov dword ptr ds : [esi-0x14], edi
        je public_6ebc065
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        jmp public_6ebc065
        UNREACHABLE_TRAP(0x6ebbfb0)
    }
}

#undef public_6ebbfd0
#undef public_6ebbfed
#undef public_6ebc000
#undef public_6ebc013
#undef public_6ebc025
#undef public_6ebc035
#undef public_6ebc044
#undef public_6ebc054
#undef public_6ebc065
#undef public_6ebc07d
