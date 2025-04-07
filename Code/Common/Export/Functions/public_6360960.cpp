#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6360960);
CLANG_FORWARD_PROC_SYMBOL(public_6360a10);
CLANG_FORWARD_PROC_SYMBOL(public_6362f70);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_636096e _public_636096e
#define public_6360988 _public_6360988
#define public_63609b2 _public_63609b2

PROC_DECLARE(0x6360960, internal_6360960, public_6360960);
extern "C" NAKED register_t __cdecl internal_6360960()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+8]
        cmp word ptr ds : [eax+0x10], 0
        push edi
        jbe public_6360988
        public_636096e : nop
        mov ecx, esi
        call public_6360a10
        push eax
        call public_6391d5a
        mov ecx, dword ptr ds : [esi+8]
        add esp, 4
        cmp word ptr ds : [ecx+0x10], 0
        ja public_636096e
        public_6360988 : nop
        mov edx, dword ptr ds : [esi+4]
        push edx
        call public_6391d5a
        mov edi, dword ptr ds : [esi+8]
        add esp, 4
        test edi, edi
        mov dword ptr ds : [esi+4], 0
        je public_63609b2
        mov ecx, edi
        call public_6362f70
        push edi
        call public_6391d5a
        add esp, 4
        public_63609b2 : nop
        pop edi
        mov dword ptr ds : [esi+8], 0
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6360960)
    }
}

#undef public_636096e
#undef public_6360988
#undef public_63609b2
