#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f7b160);

#define public_6f7b173 _public_6f7b173
#define public_6f7b186 _public_6f7b186
#define public_6f7b18d _public_6f7b18d
#define public_6f7b18f _public_6f7b18f

PROC_DECLARE(0x6f7b160, internal_6f7b160, public_6f7b160);
extern "C" NAKED register_t __cdecl internal_6f7b160()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [ecx+8]
        cmp eax, edx
        push esi
        push edi
        je public_6f7b18d
        mov edi, dword ptr ss : [esp+0xC]
        mov esi, dword ptr ds : [edi+4]
        public_6f7b173 : nop
        mov ecx, dword ptr ds : [eax+4]
        cmp ecx, dword ptr ds : [eax+8]
        je public_6f7b186
        cmp esi, dword ptr ds : [edi+8]
        je public_6f7b186
        mov ecx, dword ptr ds : [ecx]
        cmp ecx, dword ptr ds : [esi]
        je public_6f7b18f
        public_6f7b186 : nop
        add eax, 0x10
        cmp eax, edx
        jne public_6f7b173
        public_6f7b18d : nop
        mov eax, edx
        public_6f7b18f : nop
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6f7b160)
    }
}

#undef public_6f7b173
#undef public_6f7b186
#undef public_6f7b18d
#undef public_6f7b18f
