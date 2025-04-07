#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_66131d0);

#define public_66131e7 _public_66131e7
#define public_66131f4 _public_66131f4
#define public_6613206 _public_6613206

PROC_DECLARE(0x66131d0, internal_66131d0, public_66131d0);
extern "C" NAKED register_t __cdecl internal_66131d0()
{
    __asm
    {
        push esi
        mov esi, ecx
        push edi
        mov edi, dword ptr ds : [public_662902c]
        mov eax, dword ptr ds : [esi+0xC]
        test eax, eax
        je public_66131e7
        push eax
        call edi
        add esp, 4
        public_66131e7 : nop
        mov eax, dword ptr ds : [esi+0x10]
        test eax, eax
        je public_66131f4
        push eax
        call edi
        add esp, 4
        public_66131f4 : nop
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_6613206
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi], 0
        public_6613206 : nop
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x66131d0)
    }
}

#undef public_66131e7
#undef public_66131f4
#undef public_6613206
