#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f792c0);

#define public_6f792e3 _public_6f792e3

PROC_DECLARE(0x6f792c0, internal_6f792c0, public_6f792c0);
extern "C" NAKED register_t __cdecl internal_6f792c0()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+4]
        push ebx
        mov ebx, dword ptr ds : [ecx+8]
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        mov esi, dword ptr ds : [edi+4]
        xor al, al
        cmp edx, ebx
        je public_6f792e3
        cmp esi, dword ptr ds : [edi+8]
        je public_6f792e3
        mov ecx, dword ptr ds : [edx]
        cmp ecx, dword ptr ds : [esi]
        jne public_6f792e3
        mov al, 1
        public_6f792e3 : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6f792c0)
    }
}

#undef public_6f792e3
