#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb3370);

#define public_6eb3390 _public_6eb3390
#define public_6eb33ad _public_6eb33ad
#define public_6eb33c0 _public_6eb33c0
#define public_6eb33d3 _public_6eb33d3
#define public_6eb33e5 _public_6eb33e5
#define public_6eb33f5 _public_6eb33f5
#define public_6eb3404 _public_6eb3404
#define public_6eb3414 _public_6eb3414
#define public_6eb3425 _public_6eb3425
#define public_6eb343d _public_6eb343d

PROC_DECLARE(0x6eb3370, internal_6eb3370, public_6eb3370);
extern "C" NAKED register_t __cdecl internal_6eb3370()
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
        mov esi, offset public_6ed7f74
        mov dword ptr ss : [esp+0x10], 9
        xor edi, edi
        public_6eb3390 : nop
        sub esi, 0x4C
        mov dword ptr ds : [esi-0x28], edi
        mov dword ptr ds : [esi-0x24], edi
        mov dword ptr ds : [esi-0x20], edi
        mov dword ptr ds : [esi-0x1C], edi
        mov eax, dword ptr ds : [esi+0x10]
        sub eax, 5
        je public_6eb33ad
        dec eax
        je public_6eb33d3
        dec eax
        jne public_6eb33c0
        public_6eb33ad : nop
        mov eax, dword ptr ds : [esi+0x14]
        cmp eax, edi
        je public_6eb33c0
        push eax
        push edi
        call ebp
        push eax
        call ebx
        mov dword ptr ds : [esi+0x14], edi
        mov edi, edi
        public_6eb33c0 : nop
        mov dword ptr ds : [esi+0x14], edi
        mov eax, dword ptr ds : [esi-4]
        sub eax, 5
        je public_6eb33f5
        dec eax
        je public_6eb33e5
        dec eax
        je public_6eb33f5
        jmp public_6eb3404
        public_6eb33d3 : nop
        mov eax, dword ptr ds : [esi+0x14]
        cmp eax, edi
        mov dword ptr ds : [esi+0x14], edi
        je public_6eb33c0
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        jmp public_6eb33c0
        public_6eb33e5 : nop
        mov eax, dword ptr ds : [esi]
        cmp eax, edi
        mov dword ptr ds : [esi], edi
        je public_6eb3404
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        jmp public_6eb3404
        public_6eb33f5 : nop
        mov eax, dword ptr ds : [esi]
        cmp eax, edi
        je public_6eb3404
        push eax
        push edi
        call ebp
        push eax
        call ebx
        mov dword ptr ds : [esi], edi
        public_6eb3404 : nop
        mov dword ptr ds : [esi], edi
        mov eax, dword ptr ds : [esi-0x18]
        sub eax, 5
        je public_6eb3414
        dec eax
        je public_6eb343d
        dec eax
        jne public_6eb3425
        public_6eb3414 : nop
        mov eax, dword ptr ds : [esi-0x14]
        cmp eax, edi
        je public_6eb3425
        push eax
        push edi
        call ebp
        push eax
        call ebx
        mov dword ptr ds : [esi-0x14], edi
        public_6eb3425 : nop
        mov eax, dword ptr ss : [esp+0x10]
        dec eax
        mov dword ptr ds : [esi-0x14], edi
        mov dword ptr ss : [esp+0x10], eax
        jne public_6eb3390
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 
        public_6eb343d : nop
        mov eax, dword ptr ds : [esi-0x14]
        cmp eax, edi
        mov dword ptr ds : [esi-0x14], edi
        je public_6eb3425
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        jmp public_6eb3425
        UNREACHABLE_TRAP(0x6eb3370)
    }
}

#undef public_6eb3390
#undef public_6eb33ad
#undef public_6eb33c0
#undef public_6eb33d3
#undef public_6eb33e5
#undef public_6eb33f5
#undef public_6eb3404
#undef public_6eb3414
#undef public_6eb3425
#undef public_6eb343d
