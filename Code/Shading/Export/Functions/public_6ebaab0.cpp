#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ebaab0);

#define public_6ebaad0 _public_6ebaad0
#define public_6ebaaed _public_6ebaaed
#define public_6ebab00 _public_6ebab00
#define public_6ebab13 _public_6ebab13
#define public_6ebab25 _public_6ebab25
#define public_6ebab35 _public_6ebab35
#define public_6ebab44 _public_6ebab44
#define public_6ebab54 _public_6ebab54
#define public_6ebab65 _public_6ebab65
#define public_6ebab7d _public_6ebab7d

PROC_DECLARE(0x6ebaab0, internal_6ebaab0, public_6ebaab0);
extern "C" NAKED register_t __cdecl internal_6ebaab0()
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
        mov esi, offset public_6ed6778
        mov dword ptr ss : [esp+0x10], 4
        xor edi, edi
        public_6ebaad0 : nop
        sub esi, 0x4C
        mov dword ptr ds : [esi-0x28], edi
        mov dword ptr ds : [esi-0x24], edi
        mov dword ptr ds : [esi-0x20], edi
        mov dword ptr ds : [esi-0x1C], edi
        mov eax, dword ptr ds : [esi+0x10]
        sub eax, 5
        je public_6ebaaed
        dec eax
        je public_6ebab13
        dec eax
        jne public_6ebab00
        public_6ebaaed : nop
        mov eax, dword ptr ds : [esi+0x14]
        cmp eax, edi
        je public_6ebab00
        push eax
        push edi
        call ebp
        push eax
        call ebx
        mov dword ptr ds : [esi+0x14], edi
        mov edi, edi
        public_6ebab00 : nop
        mov dword ptr ds : [esi+0x14], edi
        mov eax, dword ptr ds : [esi-4]
        sub eax, 5
        je public_6ebab35
        dec eax
        je public_6ebab25
        dec eax
        je public_6ebab35
        jmp public_6ebab44
        public_6ebab13 : nop
        mov eax, dword ptr ds : [esi+0x14]
        cmp eax, edi
        mov dword ptr ds : [esi+0x14], edi
        je public_6ebab00
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        jmp public_6ebab00
        public_6ebab25 : nop
        mov eax, dword ptr ds : [esi]
        cmp eax, edi
        mov dword ptr ds : [esi], edi
        je public_6ebab44
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        jmp public_6ebab44
        public_6ebab35 : nop
        mov eax, dword ptr ds : [esi]
        cmp eax, edi
        je public_6ebab44
        push eax
        push edi
        call ebp
        push eax
        call ebx
        mov dword ptr ds : [esi], edi
        public_6ebab44 : nop
        mov dword ptr ds : [esi], edi
        mov eax, dword ptr ds : [esi-0x18]
        sub eax, 5
        je public_6ebab54
        dec eax
        je public_6ebab7d
        dec eax
        jne public_6ebab65
        public_6ebab54 : nop
        mov eax, dword ptr ds : [esi-0x14]
        cmp eax, edi
        je public_6ebab65
        push eax
        push edi
        call ebp
        push eax
        call ebx
        mov dword ptr ds : [esi-0x14], edi
        public_6ebab65 : nop
        mov eax, dword ptr ss : [esp+0x10]
        dec eax
        mov dword ptr ds : [esi-0x14], edi
        mov dword ptr ss : [esp+0x10], eax
        jne public_6ebaad0
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 
        public_6ebab7d : nop
        mov eax, dword ptr ds : [esi-0x14]
        cmp eax, edi
        mov dword ptr ds : [esi-0x14], edi
        je public_6ebab65
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        jmp public_6ebab65
        UNREACHABLE_TRAP(0x6ebaab0)
    }
}

#undef public_6ebaad0
#undef public_6ebaaed
#undef public_6ebab00
#undef public_6ebab13
#undef public_6ebab25
#undef public_6ebab35
#undef public_6ebab44
#undef public_6ebab54
#undef public_6ebab65
#undef public_6ebab7d
