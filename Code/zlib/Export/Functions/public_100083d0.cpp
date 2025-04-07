#include "zlib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_100083d0);

#define public_100083f4 _public_100083f4

PROC_DECLARE(0x100083d0, internal_100083d0, public_100083d0);
extern "C" NAKED register_t __cdecl internal_100083d0()
{
    __asm
    {
        push ecx
        mov ecx, dword ptr ds : [esi+0x1C]
        push 1
        lea eax, ss:[esp+7]
        push eax
        push edi
        push ecx
        call dword ptr ds : [esi+4]
        cmp eax, 1
        jne public_100083f4
        movzx edx, byte ptr ss : [esp+3]
        mov eax, dword ptr ss : [esp+8]
        mov dword ptr ds : [eax], edx
        xor eax, eax
        pop ecx
        ret 
        public_100083f4 : nop
        mov ecx, dword ptr ds : [esi+0x1C]
        push edi
        push ecx
        call dword ptr ds : [esi+0x18]
        neg eax
        sbb eax, eax
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x100083d0)
    }
}

#undef public_100083f4
