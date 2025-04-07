#include "ImeUi-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_671623d);

#define public_671626a _public_671626a
#define public_6716273 _public_6716273

PROC_DECLARE(0x671623d, internal_671623d, public_671623d);
extern "C" NAKED register_t __cdecl internal_671623d()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [esi+0x3C]
        add eax, esi
        je public_671626a
        movzx ecx, word ptr ss : [esp+0xC]
        cmp ecx, dword ptr ds : [eax+0x74]
        jae public_671626a
        mov edx, dword ptr ds : [eax+ecx*8+0x78]
        test edx, edx
        je public_671626a
        mov eax, dword ptr ds : [eax+ecx*8+0x7C]
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ecx], eax
        lea eax, ds:[edx+esi]
        jmp public_6716273
        public_671626a : nop
        mov eax, dword ptr ss : [esp+0x10]
        and dword ptr ds : [eax], 0
        xor eax, eax
        public_6716273 : nop
        pop esi
        ret 0xC
        UNREACHABLE_TRAP(0x671623d)
    }
}

#undef public_671626a
#undef public_6716273
