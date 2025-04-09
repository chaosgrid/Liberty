#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4363b0);

#define public_4363c1 _public_4363c1
#define public_4363cf _public_4363cf
#define public_4363da _public_4363da

PROC_DECLARE(0x4363b0, internal_4363b0, public_4363b0);
extern "C" NAKED register_t __cdecl internal_4363b0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+8]
        cmp ecx, edx
        mov eax, dword ptr ss : [esp+0xC]
        je public_4363da
        push esi
        public_4363c1 : nop
        test eax, eax
        je public_4363cf
        mov esi, dword ptr ds : [ecx]
        mov dword ptr ds : [eax], esi
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], esi
        public_4363cf : nop
        add ecx, 8
        add eax, 8
        cmp ecx, edx
        jne public_4363c1
        pop esi
        public_4363da : nop
        ret 0xC
        UNREACHABLE_TRAP(0x4363b0)
    }
}

#undef public_4363c1
#undef public_4363cf
#undef public_4363da
