#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6619790);

#define public_66197a4 _public_66197a4
#define public_66197ae _public_66197ae
#define public_66197b2 _public_66197b2
#define public_66197b7 _public_66197b7

PROC_DECLARE(0x6619790, internal_6619790, public_6619790);
extern "C" NAKED register_t __cdecl internal_6619790()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ds : [ecx+8]
        mov eax, dword ptr ds : [edx+4]
        cmp eax, ecx
        je public_66197b7
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        mov esi, dword ptr ds : [esi]
        public_66197a4 : nop
        cmp dword ptr ds : [eax+0xC], esi
        jae public_66197ae
        mov eax, dword ptr ds : [eax+8]
        jmp public_66197b2
        public_66197ae : nop
        mov edx, eax
        mov eax, dword ptr ds : [eax]
        public_66197b2 : nop
        cmp eax, ecx
        jne public_66197a4
        pop esi
        public_66197b7 : nop
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax], edx
        ret 8
        UNREACHABLE_TRAP(0x6619790)
    }
}

#undef public_66197a4
#undef public_66197ae
#undef public_66197b2
#undef public_66197b7
