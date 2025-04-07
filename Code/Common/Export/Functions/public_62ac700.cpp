#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6262d50);
CLANG_FORWARD_PROC_SYMBOL(public_62b5fd0);

#define public_62ac721 _public_62ac721

PROC_DECLARE(0x62ac700, internal_62ac700, public_62ac700);
extern "C" NAKED register_t __cdecl internal_62ac700()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0xEC]
        push edi
        mov edi, dword ptr ds : [eax+8]
        call public_6262d50
        cmp edi, dword ptr ds : [eax+8]
        jne public_62ac721
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [esi+0xF4], ecx
        public_62ac721 : nop
        mov edx, dword ptr ss : [esp+0xC]
        push edx
        mov ecx, esi
        call public_62b5fd0
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x62ac700)
    }
}

#undef public_62ac721
