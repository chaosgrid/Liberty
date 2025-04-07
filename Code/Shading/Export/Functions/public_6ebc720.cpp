#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ebc720);

#define public_6ebc740 _public_6ebc740
#define public_6ebc75d _public_6ebc75d
#define public_6ebc770 _public_6ebc770
#define public_6ebc783 _public_6ebc783
#define public_6ebc795 _public_6ebc795
#define public_6ebc7a5 _public_6ebc7a5
#define public_6ebc7b4 _public_6ebc7b4
#define public_6ebc7c4 _public_6ebc7c4
#define public_6ebc7d5 _public_6ebc7d5
#define public_6ebc7ed _public_6ebc7ed

PROC_DECLARE(0x6ebc720, internal_6ebc720, public_6ebc720);
extern "C" NAKED register_t __cdecl internal_6ebc720()
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
        mov esi, offset public_6ed60d8
        mov dword ptr ss : [esp+0x10], 4
        xor edi, edi
        public_6ebc740 : nop
        sub esi, 0x4C
        mov dword ptr ds : [esi-0x28], edi
        mov dword ptr ds : [esi-0x24], edi
        mov dword ptr ds : [esi-0x20], edi
        mov dword ptr ds : [esi-0x1C], edi
        mov eax, dword ptr ds : [esi+0x10]
        sub eax, 5
        je public_6ebc75d
        dec eax
        je public_6ebc783
        dec eax
        jne public_6ebc770
        public_6ebc75d : nop
        mov eax, dword ptr ds : [esi+0x14]
        cmp eax, edi
        je public_6ebc770
        push eax
        push edi
        call ebp
        push eax
        call ebx
        mov dword ptr ds : [esi+0x14], edi
        mov edi, edi
        public_6ebc770 : nop
        mov dword ptr ds : [esi+0x14], edi
        mov eax, dword ptr ds : [esi-4]
        sub eax, 5
        je public_6ebc7a5
        dec eax
        je public_6ebc795
        dec eax
        je public_6ebc7a5
        jmp public_6ebc7b4
        public_6ebc783 : nop
        mov eax, dword ptr ds : [esi+0x14]
        cmp eax, edi
        mov dword ptr ds : [esi+0x14], edi
        je public_6ebc770
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        jmp public_6ebc770
        public_6ebc795 : nop
        mov eax, dword ptr ds : [esi]
        cmp eax, edi
        mov dword ptr ds : [esi], edi
        je public_6ebc7b4
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        jmp public_6ebc7b4
        public_6ebc7a5 : nop
        mov eax, dword ptr ds : [esi]
        cmp eax, edi
        je public_6ebc7b4
        push eax
        push edi
        call ebp
        push eax
        call ebx
        mov dword ptr ds : [esi], edi
        public_6ebc7b4 : nop
        mov dword ptr ds : [esi], edi
        mov eax, dword ptr ds : [esi-0x18]
        sub eax, 5
        je public_6ebc7c4
        dec eax
        je public_6ebc7ed
        dec eax
        jne public_6ebc7d5
        public_6ebc7c4 : nop
        mov eax, dword ptr ds : [esi-0x14]
        cmp eax, edi
        je public_6ebc7d5
        push eax
        push edi
        call ebp
        push eax
        call ebx
        mov dword ptr ds : [esi-0x14], edi
        public_6ebc7d5 : nop
        mov eax, dword ptr ss : [esp+0x10]
        dec eax
        mov dword ptr ds : [esi-0x14], edi
        mov dword ptr ss : [esp+0x10], eax
        jne public_6ebc740
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 
        public_6ebc7ed : nop
        mov eax, dword ptr ds : [esi-0x14]
        cmp eax, edi
        mov dword ptr ds : [esi-0x14], edi
        je public_6ebc7d5
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        jmp public_6ebc7d5
        UNREACHABLE_TRAP(0x6ebc720)
    }
}

#undef public_6ebc740
#undef public_6ebc75d
#undef public_6ebc770
#undef public_6ebc783
#undef public_6ebc795
#undef public_6ebc7a5
#undef public_6ebc7b4
#undef public_6ebc7c4
#undef public_6ebc7d5
#undef public_6ebc7ed
