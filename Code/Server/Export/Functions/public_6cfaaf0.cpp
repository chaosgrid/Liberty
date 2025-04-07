#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d00670);

#define public_6cfab47 _public_6cfab47
#define public_6cfab4b _public_6cfab4b

PROC_DECLARE(0x6cfaaf0, internal_6cfaaf0, public_6cfaaf0);
extern "C" NAKED register_t __cdecl internal_6cfaaf0()
{
    __asm
    {
        fld dword ptr ss : [esp+8]
        push esi
        fcomp dword ptr ds : [public_6d65188]
        mov ecx, 0xFFFFFFFC
        fnstsw ax
        test ah, 1
        jne public_6cfab4b
        fld dword ptr ss : [esp+0xC]
        fcomp dword ptr ds : [public_6d65520]
        fnstsw ax
        test ah, 0x41
        jp public_6cfab4b
        mov eax, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [eax]
        test eax, eax
        je public_6cfab4b
        push eax
        mov esi, 0xFFFFFFFE
        call public_6d00670
        add esp, 4
        test eax, eax
        je public_6cfab47
        mov ecx, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ds : [eax]
        push ecx
        mov ecx, eax
        call dword ptr ds : [edx+0x1AC]
        xor eax, eax
        pop esi
        ret 
        public_6cfab47 : nop
        mov eax, esi
        pop esi
        ret 
        public_6cfab4b : nop
        mov eax, ecx
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6cfaaf0)
    }
}

#undef public_6cfab47
#undef public_6cfab4b
