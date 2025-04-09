#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_42ec80);

#define public_42ec90 _public_42ec90
#define public_42ec9f _public_42ec9f

PROC_DECLARE(0x42ec80, internal_42ec80, public_42ec80);
extern "C" NAKED register_t __cdecl internal_42ec80()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+4]
        push esi
        mov esi, dword ptr ds : [ecx+8]
        mov eax, esi
        cmp eax, esi
        je public_42ec9f
        push edi
        mov edi, edi
        public_42ec90 : nop
        mov edi, dword ptr ds : [eax]
        mov dword ptr ds : [edx], edi
        add eax, 4
        add edx, 4
        cmp eax, esi
        jne public_42ec90
        pop edi
        public_42ec9f : nop
        mov dword ptr ds : [ecx+8], edx
        pop esi
        ret 
        UNREACHABLE_TRAP(0x42ec80)
    }
}

#undef public_42ec90
#undef public_42ec9f
