#include "Deformable2-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65f9a70);

#define public_65f9a81 _public_65f9a81
#define public_65f9a89 _public_65f9a89
#define public_65f9a94 _public_65f9a94

PROC_DECLARE(0x65f9a70, internal_65f9a70, public_65f9a70);
extern "C" NAKED register_t __cdecl internal_65f9a70()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+8]
        cmp ecx, edx
        mov eax, dword ptr ss : [esp+0xC]
        je public_65f9a94
        push esi
        public_65f9a81 : nop
        test eax, eax
        je public_65f9a89
        mov esi, dword ptr ds : [ecx]
        mov dword ptr ds : [eax], esi
        public_65f9a89 : nop
        add ecx, 4
        add eax, 4
        cmp ecx, edx
        jne public_65f9a81
        pop esi
        public_65f9a94 : nop
        ret 0xC
        UNREACHABLE_TRAP(0x65f9a70)
    }
}

#undef public_65f9a81
#undef public_65f9a89
#undef public_65f9a94
