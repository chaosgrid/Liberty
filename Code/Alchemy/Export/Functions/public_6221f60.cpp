#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6221f60);

#define public_6221f71 _public_6221f71
#define public_6221f7f _public_6221f7f
#define public_6221f8a _public_6221f8a

PROC_DECLARE(0x6221f60, internal_6221f60, public_6221f60);
extern "C" NAKED register_t __cdecl internal_6221f60()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+8]
        mov eax, dword ptr ss : [esp+0xC]
        cmp ecx, edx
        je public_6221f8a
        push esi
        public_6221f71 : nop
        test eax, eax
        je public_6221f7f
        mov esi, dword ptr ds : [ecx]
        mov dword ptr ds : [eax], esi
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], esi
        public_6221f7f : nop
        add ecx, 8
        add eax, 8
        cmp ecx, edx
        jne public_6221f71
        pop esi
        public_6221f8a : nop
        ret 0xC
        UNREACHABLE_TRAP(0x6221f60)
    }
}

#undef public_6221f71
#undef public_6221f7f
#undef public_6221f8a
