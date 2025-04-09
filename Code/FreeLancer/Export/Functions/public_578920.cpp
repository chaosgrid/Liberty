#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_578920);

#define public_578934 _public_578934
#define public_57893e _public_57893e
#define public_578942 _public_578942
#define public_578947 _public_578947

PROC_DECLARE(0x578920, internal_578920, public_578920);
extern "C" NAKED register_t __cdecl internal_578920()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        cmp edx, ecx
        je public_578947
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov esi, dword ptr ds : [esi]
        public_578934 : nop
        cmp dword ptr ds : [edx+0xC], esi
        jge public_57893e
        mov edx, dword ptr ds : [edx+8]
        jmp public_578942
        public_57893e : nop
        mov eax, edx
        mov edx, dword ptr ds : [edx]
        public_578942 : nop
        cmp edx, ecx
        jne public_578934
        pop esi
        public_578947 : nop
        ret 4
        UNREACHABLE_TRAP(0x578920)
    }
}

#undef public_578934
#undef public_57893e
#undef public_578942
#undef public_578947
