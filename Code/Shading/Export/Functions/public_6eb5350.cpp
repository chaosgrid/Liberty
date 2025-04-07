#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb5350);

#define public_6eb5370 _public_6eb5370
#define public_6eb538d _public_6eb538d
#define public_6eb53a0 _public_6eb53a0
#define public_6eb53b3 _public_6eb53b3
#define public_6eb53c5 _public_6eb53c5
#define public_6eb53d5 _public_6eb53d5
#define public_6eb53e4 _public_6eb53e4
#define public_6eb53f4 _public_6eb53f4
#define public_6eb5405 _public_6eb5405
#define public_6eb541d _public_6eb541d

PROC_DECLARE(0x6eb5350, internal_6eb5350, public_6eb5350);
extern "C" NAKED register_t __cdecl internal_6eb5350()
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
        mov esi, offset public_6ed7cc4
        mov dword ptr ss : [esp+0x10], 0xD
        xor edi, edi
        public_6eb5370 : nop
        sub esi, 0x4C
        mov dword ptr ds : [esi-0x28], edi
        mov dword ptr ds : [esi-0x24], edi
        mov dword ptr ds : [esi-0x20], edi
        mov dword ptr ds : [esi-0x1C], edi
        mov eax, dword ptr ds : [esi+0x10]
        sub eax, 5
        je public_6eb538d
        dec eax
        je public_6eb53b3
        dec eax
        jne public_6eb53a0
        public_6eb538d : nop
        mov eax, dword ptr ds : [esi+0x14]
        cmp eax, edi
        je public_6eb53a0
        push eax
        push edi
        call ebp
        push eax
        call ebx
        mov dword ptr ds : [esi+0x14], edi
        mov edi, edi
        public_6eb53a0 : nop
        mov dword ptr ds : [esi+0x14], edi
        mov eax, dword ptr ds : [esi-4]
        sub eax, 5
        je public_6eb53d5
        dec eax
        je public_6eb53c5
        dec eax
        je public_6eb53d5
        jmp public_6eb53e4
        public_6eb53b3 : nop
        mov eax, dword ptr ds : [esi+0x14]
        cmp eax, edi
        mov dword ptr ds : [esi+0x14], edi
        je public_6eb53a0
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        jmp public_6eb53a0
        public_6eb53c5 : nop
        mov eax, dword ptr ds : [esi]
        cmp eax, edi
        mov dword ptr ds : [esi], edi
        je public_6eb53e4
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        jmp public_6eb53e4
        public_6eb53d5 : nop
        mov eax, dword ptr ds : [esi]
        cmp eax, edi
        je public_6eb53e4
        push eax
        push edi
        call ebp
        push eax
        call ebx
        mov dword ptr ds : [esi], edi
        public_6eb53e4 : nop
        mov dword ptr ds : [esi], edi
        mov eax, dword ptr ds : [esi-0x18]
        sub eax, 5
        je public_6eb53f4
        dec eax
        je public_6eb541d
        dec eax
        jne public_6eb5405
        public_6eb53f4 : nop
        mov eax, dword ptr ds : [esi-0x14]
        cmp eax, edi
        je public_6eb5405
        push eax
        push edi
        call ebp
        push eax
        call ebx
        mov dword ptr ds : [esi-0x14], edi
        public_6eb5405 : nop
        mov eax, dword ptr ss : [esp+0x10]
        dec eax
        mov dword ptr ds : [esi-0x14], edi
        mov dword ptr ss : [esp+0x10], eax
        jne public_6eb5370
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 
        public_6eb541d : nop
        mov eax, dword ptr ds : [esi-0x14]
        cmp eax, edi
        mov dword ptr ds : [esi-0x14], edi
        je public_6eb5405
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        jmp public_6eb5405
        UNREACHABLE_TRAP(0x6eb5350)
    }
}

#undef public_6eb5370
#undef public_6eb538d
#undef public_6eb53a0
#undef public_6eb53b3
#undef public_6eb53c5
#undef public_6eb53d5
#undef public_6eb53e4
#undef public_6eb53f4
#undef public_6eb5405
#undef public_6eb541d
