#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6226cf0);
CLANG_FORWARD_PROC_SYMBOL(public_623f9a0);

#define public_6226d11 _public_6226d11

PROC_DECLARE(0x6226cf0, internal_6226cf0, public_6226cf0);
extern "C" NAKED register_t __cdecl internal_6226cf0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+8]
        add eax, 4
        cmp ecx, 0x18DADCA8
        jne public_6226d11
        mov edx, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ds : [eax+0x70]
        xor eax, eax
        mov dword ptr ds : [edx], ecx
        ret 0xC
        public_6226d11 : nop
        mov dword ptr ss : [esp+8], ecx
        mov dword ptr ss : [esp+4], eax
        jmp public_623f9a0
        UNREACHABLE_TRAP(0x6226cf0)
    }
}

#undef public_6226d11
