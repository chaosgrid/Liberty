#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62bed30);

#define public_62bed45 _public_62bed45
#define public_62bed57 _public_62bed57
#define public_62bed5a _public_62bed5a
#define public_62bed5f _public_62bed5f

PROC_DECLARE(0x62bed30, internal_62bed30, public_62bed30);
extern "C" NAKED register_t __cdecl internal_62bed30()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        cmp edx, ecx
        push esi
        mov esi, eax
        je public_62bed5f
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        public_62bed45 : nop
        fld dword ptr ds : [edi]
        fcomp dword ptr ds : [edx+0xC]
        fnstsw ax
        test ah, 5
        jp public_62bed57
        mov esi, edx
        mov edx, dword ptr ds : [edx]
        jmp public_62bed5a
        public_62bed57 : nop
        mov edx, dword ptr ds : [edx+8]
        public_62bed5a : nop
        cmp edx, ecx
        jne public_62bed45
        pop edi
        public_62bed5f : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x62bed30)
    }
}

#undef public_62bed45
#undef public_62bed57
#undef public_62bed5a
#undef public_62bed5f
