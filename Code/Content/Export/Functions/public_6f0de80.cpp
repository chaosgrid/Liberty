#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f0de80);

#define public_6f0de9d _public_6f0de9d
#define public_6f0dea9 _public_6f0dea9

PROC_DECLARE(0x6f0de80, internal_6f0de80, public_6f0de80);
extern "C" NAKED register_t __cdecl internal_6f0de80()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi]
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        cmp ecx, edi
        je public_6f0dea9
        test ecx, ecx
        je public_6f0de9d
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+4]
        mov dword ptr ds : [esi], 0
        public_6f0de9d : nop
        test edi, edi
        mov dword ptr ds : [esi], edi
        je public_6f0dea9
        mov edx, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [edx]
        public_6f0dea9 : nop
        mov eax, dword ptr ds : [esi]
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6f0de80)
    }
}

#undef public_6f0de9d
#undef public_6f0dea9
