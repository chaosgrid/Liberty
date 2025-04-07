#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6222000);

#define public_6222014 _public_6222014
#define public_622201e _public_622201e
#define public_6222022 _public_6222022
#define public_6222027 _public_6222027

PROC_DECLARE(0x6222000, internal_6222000, public_6222000);
extern "C" NAKED register_t __cdecl internal_6222000()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ds : [ecx+8]
        mov edx, dword ptr ds : [eax+4]
        cmp edx, ecx
        je public_6222027
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov esi, dword ptr ds : [esi]
        public_6222014 : nop
        cmp dword ptr ds : [edx+0xC], esi
        jae public_622201e
        mov edx, dword ptr ds : [edx+8]
        jmp public_6222022
        public_622201e : nop
        mov eax, edx
        mov edx, dword ptr ds : [edx]
        public_6222022 : nop
        cmp edx, ecx
        jne public_6222014
        pop esi
        public_6222027 : nop
        ret 4
        UNREACHABLE_TRAP(0x6222000)
    }
}

#undef public_6222014
#undef public_622201e
#undef public_6222022
#undef public_6222027
