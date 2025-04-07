#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f8b110);

#define public_6f8b122 _public_6f8b122
#define public_6f8b130 _public_6f8b130
#define public_6f8b132 _public_6f8b132

PROC_DECLARE(0x6f8b110, internal_6f8b110, public_6f8b110);
extern "C" NAKED register_t __cdecl internal_6f8b110()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x7C]
        mov ecx, dword ptr ds : [ecx+0x80]
        cmp eax, ecx
        push esi
        je public_6f8b130
        mov edx, dword ptr ss : [esp+8]
        public_6f8b122 : nop
        mov esi, dword ptr ds : [eax]
        cmp dword ptr ds : [esi+0x34], edx
        je public_6f8b132
        add eax, 4
        cmp eax, ecx
        jne public_6f8b122
        public_6f8b130 : nop
        mov eax, ecx
        public_6f8b132 : nop
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6f8b110)
    }
}

#undef public_6f8b122
#undef public_6f8b130
#undef public_6f8b132
