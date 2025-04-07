#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6226be0);

#define public_6226bfc _public_6226bfc

PROC_DECLARE(0x6226be0, internal_6226be0, public_6226be0);
extern "C" NAKED register_t __cdecl internal_6226be0()
{
    __asm
    {
        cmp dword ptr ss : [esp+8], 0xB7EE41C
        jne public_6226bfc
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ds : [eax+0x60]
        xor eax, eax
        mov dword ptr ds : [edx], ecx
        ret 0xC
        public_6226bfc : nop
        mov eax, 0xFFFFFFF8
        ret 0xC
        UNREACHABLE_TRAP(0x6226be0)
    }
}

#undef public_6226bfc
