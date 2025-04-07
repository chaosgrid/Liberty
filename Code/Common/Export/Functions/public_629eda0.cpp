#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_629eda0);
CLANG_FORWARD_PROC_SYMBOL(public_6333ca0);

#define public_629edd3 _public_629edd3

PROC_DECLARE(0x629eda0, internal_629eda0, public_629eda0);
extern "C" NAKED register_t __cdecl internal_629eda0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        push 0
        push eax
        mov esi, ecx
        call public_6333ca0
        mov edx, dword ptr ds : [esi]
        add esp, 8
        push 1
        mov ecx, esi
        mov dword ptr ds : [esi+0x20], eax
        call dword ptr ds : [edx+0x64]
        cmp eax, 0xFFFFFFFF
        mov dword ptr ds : [esi+0x24], eax
        jne public_629edd3
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x74]
        xor al, al
        pop esi
        ret 4
        public_629edd3 : nop
        mov al, 1
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x629eda0)
    }
}

#undef public_629edd3
