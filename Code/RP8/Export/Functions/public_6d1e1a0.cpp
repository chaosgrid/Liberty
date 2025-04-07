#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d1e1a0);
CLANG_FORWARD_PROC_SYMBOL(public_6d2f2a0);

#define public_6d1e1c3 _public_6d1e1c3

PROC_DECLARE(0x6d1e1a0, internal_6d1e1a0, public_6d1e1a0);
extern "C" NAKED register_t __cdecl internal_6d1e1a0()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x10
        mov dword ptr ss : [ebp-0x10], ecx
        mov dword ptr ss : [ebp-0xC], 0x28
        mov eax, dword ptr ss : [ebp-0xC]
        mov dword ptr ss : [ebp-8], eax
        cmp dword ptr ss : [ebp-8], 0
        jge public_6d1e1c3
        mov dword ptr ss : [ebp-8], 0
        public_6d1e1c3 : nop
        mov ecx, dword ptr ss : [ebp-8]
        push ecx
        call public_6d2f2a0
        add esp, 4
        mov dword ptr ss : [ebp-4], eax
        mov edx, dword ptr ss : [ebp-4]
        mov eax, dword ptr ss : [ebp+8]
        mov dword ptr ds : [edx+4], eax
        mov ecx, dword ptr ss : [ebp-4]
        mov dl, byte ptr ss : [ebp+0xC]
        mov byte ptr ds : [ecx+0x24], dl
        mov eax, dword ptr ss : [ebp-4]
        mov byte ptr ds : [eax+0x25], 0
        mov eax, dword ptr ss : [ebp-4]
        mov esp, ebp
        pop ebp
        ret 8
        UNREACHABLE_TRAP(0x6d1e1a0)
    }
}

#undef public_6d1e1c3
