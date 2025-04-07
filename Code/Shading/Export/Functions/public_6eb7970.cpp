#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb7970);

#define public_6eb7990 _public_6eb7990
#define public_6eb79ad _public_6eb79ad
#define public_6eb79c0 _public_6eb79c0
#define public_6eb79d3 _public_6eb79d3
#define public_6eb79e5 _public_6eb79e5
#define public_6eb79f5 _public_6eb79f5
#define public_6eb7a04 _public_6eb7a04
#define public_6eb7a14 _public_6eb7a14
#define public_6eb7a25 _public_6eb7a25
#define public_6eb7a3d _public_6eb7a3d

PROC_DECLARE(0x6eb7970, internal_6eb7970, public_6eb7970);
extern "C" NAKED register_t __cdecl internal_6eb7970()
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
        mov esi, offset public_6ed7624
        mov dword ptr ss : [esp+0x10], 0xD
        xor edi, edi
        public_6eb7990 : nop
        sub esi, 0x4C
        mov dword ptr ds : [esi-0x28], edi
        mov dword ptr ds : [esi-0x24], edi
        mov dword ptr ds : [esi-0x20], edi
        mov dword ptr ds : [esi-0x1C], edi
        mov eax, dword ptr ds : [esi+0x10]
        sub eax, 5
        je public_6eb79ad
        dec eax
        je public_6eb79d3
        dec eax
        jne public_6eb79c0
        public_6eb79ad : nop
        mov eax, dword ptr ds : [esi+0x14]
        cmp eax, edi
        je public_6eb79c0
        push eax
        push edi
        call ebp
        push eax
        call ebx
        mov dword ptr ds : [esi+0x14], edi
        mov edi, edi
        public_6eb79c0 : nop
        mov dword ptr ds : [esi+0x14], edi
        mov eax, dword ptr ds : [esi-4]
        sub eax, 5
        je public_6eb79f5
        dec eax
        je public_6eb79e5
        dec eax
        je public_6eb79f5
        jmp public_6eb7a04
        public_6eb79d3 : nop
        mov eax, dword ptr ds : [esi+0x14]
        cmp eax, edi
        mov dword ptr ds : [esi+0x14], edi
        je public_6eb79c0
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        jmp public_6eb79c0
        public_6eb79e5 : nop
        mov eax, dword ptr ds : [esi]
        cmp eax, edi
        mov dword ptr ds : [esi], edi
        je public_6eb7a04
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        jmp public_6eb7a04
        public_6eb79f5 : nop
        mov eax, dword ptr ds : [esi]
        cmp eax, edi
        je public_6eb7a04
        push eax
        push edi
        call ebp
        push eax
        call ebx
        mov dword ptr ds : [esi], edi
        public_6eb7a04 : nop
        mov dword ptr ds : [esi], edi
        mov eax, dword ptr ds : [esi-0x18]
        sub eax, 5
        je public_6eb7a14
        dec eax
        je public_6eb7a3d
        dec eax
        jne public_6eb7a25
        public_6eb7a14 : nop
        mov eax, dword ptr ds : [esi-0x14]
        cmp eax, edi
        je public_6eb7a25
        push eax
        push edi
        call ebp
        push eax
        call ebx
        mov dword ptr ds : [esi-0x14], edi
        public_6eb7a25 : nop
        mov eax, dword ptr ss : [esp+0x10]
        dec eax
        mov dword ptr ds : [esi-0x14], edi
        mov dword ptr ss : [esp+0x10], eax
        jne public_6eb7990
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 
        public_6eb7a3d : nop
        mov eax, dword ptr ds : [esi-0x14]
        cmp eax, edi
        mov dword ptr ds : [esi-0x14], edi
        je public_6eb7a25
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        jmp public_6eb7a25
        UNREACHABLE_TRAP(0x6eb7970)
    }
}

#undef public_6eb7990
#undef public_6eb79ad
#undef public_6eb79c0
#undef public_6eb79d3
#undef public_6eb79e5
#undef public_6eb79f5
#undef public_6eb7a04
#undef public_6eb7a14
#undef public_6eb7a25
#undef public_6eb7a3d
