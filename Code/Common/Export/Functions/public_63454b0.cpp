#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63454b0);
CLANG_FORWARD_PROC_SYMBOL(public_6350460);

#define public_63454bf _public_63454bf
#define public_63454d7 _public_63454d7

PROC_DECLARE(0x63454b0, internal_63454b0, public_63454b0);
extern "C" NAKED register_t __cdecl internal_63454b0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x18]
        push edi
        mov edi, dword ptr ds : [eax+0x10]
        mov eax, dword ptr ds : [ecx+0x20]
        test eax, eax
        je public_63454d7
        push esi
        public_63454bf : nop
        movsx ecx, word ptr ds : [eax+0x18]
        mov esi, dword ptr ds : [eax+8]
        add ecx, eax
        push ecx
        mov ecx, edi
        call public_6350460
        test esi, esi
        mov eax, esi
        jne public_63454bf
        pop esi
        public_63454d7 : nop
        pop edi
        ret 
        UNREACHABLE_TRAP(0x63454b0)
    }
}

#undef public_63454bf
#undef public_63454d7
