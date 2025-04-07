#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f60d60);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6f60d7d _public_6f60d7d
#define public_6f60d97 _public_6f60d97

PROC_DECLARE(0x6f60d60, internal_6f60d60, public_6f60d60);
extern "C" NAKED register_t __cdecl internal_6f60d60()
{
    __asm
    {
        push esi
        mov esi, dword ptr ds : [public_6fd1ba0]
        push edi
        mov edi, dword ptr ds : [esi+4]
        push 0xC
        call public_6fa912a
        add esp, 4
        test edi, edi
        mov dword ptr ds : [eax], esi
        jne public_6f60d7d
        mov edi, eax
        public_6f60d7d : nop
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        add eax, 8
        test eax, eax
        pop edi
        pop esi
        je public_6f60d97
        mov edx, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax], edx
        public_6f60d97 : nop
        inc dword ptr ds : [public_6fd1ba4]
        ret 
        UNREACHABLE_TRAP(0x6f60d60)
    }
}

#undef public_6f60d7d
#undef public_6f60d97
