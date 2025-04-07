#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62406b0);

#define public_62406ce _public_62406ce
#define public_62406e4 _public_62406e4

PROC_DECLARE(0x62406b0, internal_62406b0, public_62406b0);
extern "C" NAKED register_t __cdecl internal_62406b0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+8]
        mov eax, dword ptr ss : [esp+4]
        cmp ecx, 0xEFA8CE01
        jne public_62406ce
        mov ecx, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [eax+0x3C]
        mov dword ptr ds : [ecx], eax
        xor eax, eax
        ret 0xC
        public_62406ce : nop
        cmp ecx, 0xF54EF296
        jne public_62406e4
        mov edx, dword ptr ds : [eax+0x18]
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax], edx
        xor eax, eax
        ret 0xC
        public_62406e4 : nop
        mov eax, 0xFFFFFFF8
        ret 0xC
        UNREACHABLE_TRAP(0x62406b0)
    }
}

#undef public_62406ce
#undef public_62406e4
