#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b76c6);

#define public_5b76f3 _public_5b76f3
#define public_5b76fc _public_5b76fc

PROC_DECLARE(0x5b76c6, internal_5b76c6, public_5b76c6);
extern "C" NAKED register_t __cdecl internal_5b76c6()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [esi+0x3C]
        add eax, esi
        je public_5b76f3
        movzx ecx, word ptr ss : [esp+0xC]
        cmp ecx, dword ptr ds : [eax+0x74]
        jae public_5b76f3
        mov edx, dword ptr ds : [eax+ecx*8+0x78]
        test edx, edx
        je public_5b76f3
        mov eax, dword ptr ds : [eax+ecx*8+0x7C]
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ecx], eax
        lea eax, ds:[edx+esi]
        jmp public_5b76fc
        public_5b76f3 : nop
        mov eax, dword ptr ss : [esp+0x10]
        and dword ptr ds : [eax], 0
        xor eax, eax
        public_5b76fc : nop
        pop esi
        ret 0xC
        UNREACHABLE_TRAP(0x5b76c6)
    }
}

#undef public_5b76f3
#undef public_5b76fc
