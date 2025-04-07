#include "FLMaterials-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_66f29b0);

#define public_66f29c5 _public_66f29c5
#define public_66f29d4 _public_66f29d4

PROC_DECLARE(0x66f29b0, internal_66f29b0, public_66f29b0);
extern "C" NAKED register_t __cdecl internal_66f29b0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+0xC]
        sub ecx, 0
        mov edx, dword ptr ss : [esp+8]
        mov eax, dword ptr ss : [esp+4]
        je public_66f29c5
        dec ecx
        je public_66f29d4
        ret 
        public_66f29c5 : nop
        mov ecx, dword ptr ds : [eax]
        push esi
        mov esi, ecx
        xor esi, edx
        and esi, 3
        xor esi, ecx
        mov dword ptr ds : [eax], esi
        pop esi
        public_66f29d4 : nop
        mov ecx, dword ptr ds : [eax]
        shl edx, 2
        xor edx, ecx
        and edx, 0xC
        xor edx, ecx
        mov dword ptr ds : [eax], edx
        ret 
        UNREACHABLE_TRAP(0x66f29b0)
    }
}

#undef public_66f29c5
#undef public_66f29d4
