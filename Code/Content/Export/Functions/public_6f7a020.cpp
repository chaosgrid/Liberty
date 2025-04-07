#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f7a020);

#define public_6f7a030 _public_6f7a030
#define public_6f7a045 _public_6f7a045

PROC_DECLARE(0x6f7a020, internal_6f7a020, public_6f7a020);
extern "C" NAKED register_t __cdecl internal_6f7a020()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+4]
        push esi
        mov esi, dword ptr ds : [ecx+8]
        mov eax, esi
        cmp eax, esi
        je public_6f7a045
        push edi
        mov edi, edi
        public_6f7a030 : nop
        mov edi, dword ptr ds : [eax]
        mov dword ptr ds : [edx], edi
        mov edi, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx+4], edi
        add eax, 8
        add edx, 8
        cmp eax, esi
        jne public_6f7a030
        pop edi
        public_6f7a045 : nop
        mov dword ptr ds : [ecx+8], edx
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f7a020)
    }
}

#undef public_6f7a030
#undef public_6f7a045
