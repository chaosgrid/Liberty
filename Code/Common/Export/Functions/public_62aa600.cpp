#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62aa600);
CLANG_FORWARD_PROC_SYMBOL(public_6321a70);

#define public_62aa635 _public_62aa635

PROC_DECLARE(0x62aa600, internal_62aa600, public_62aa600);
extern "C" NAKED register_t __cdecl internal_62aa600()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        push esi
        push edi
        add eax, 0x104
        push eax
        add ecx, 0x104
        push ecx
        call public_6321a70
        add esp, 0x10
        test eax, eax
        je public_62aa635
        mov dword ptr ds : [edi], 0
        mov dword ptr ds : [esi], 0
        public_62aa635 : nop
        pop edi
        pop esi
        ret 0xC
        UNREACHABLE_TRAP(0x62aa600)
    }
}

#undef public_62aa635
