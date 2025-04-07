#include "Deformable2-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65f4070);

#define public_65f2084 _public_65f2084

PROC_DECLARE(0x65f2070, internal_65f2070, public_65f2070);
extern "C" NAKED register_t __cdecl internal_65f2070()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+8]
        test ecx, ecx
        jne public_65f2084
        mov eax, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [eax], ecx
        or eax, 0xFFFFFFFF
        ret 0x1C
        public_65f2084 : nop
        mov edx, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ss : [esp+0x14]
        push edx
        mov edx, dword ptr ss : [esp+0x1C]
        push eax
        mov eax, dword ptr ss : [esp+0x14]
        push edx
        mov edx, dword ptr ss : [esp+0x1C]
        push eax
        push edx
        call public_65f4070
        xor eax, eax
        ret 0x1C
        UNREACHABLE_TRAP(0x65f2070)
    }
}

#undef public_65f2084
