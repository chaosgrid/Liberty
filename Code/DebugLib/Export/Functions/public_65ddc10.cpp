#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65ddc10);

#define public_65ddc29 _public_65ddc29

PROC_DECLARE(0x65ddc10, internal_65ddc10, public_65ddc10);
extern "C" NAKED register_t __cdecl internal_65ddc10()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        mov ecx, dword ptr ss : [esp+0x10]
        or ecx, eax
        mov ecx, dword ptr ss : [esp+0xC]
        jne public_65ddc29
        mov eax, dword ptr ss : [esp+4]
        mul ecx
        ret 0x10
        public_65ddc29 : nop
        push ebx
        mul ecx
        mov ebx, eax
        mov eax, dword ptr ss : [esp+8]
        mul dword ptr ss : [esp+0x14]
        add ebx, eax
        mov eax, dword ptr ss : [esp+8]
        mul ecx
        add edx, ebx
        pop ebx
        ret 0x10
        UNREACHABLE_TRAP(0x65ddc10)
    }
}

#undef public_65ddc29
