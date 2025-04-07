#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d1c770);

#define public_6d1c78c _public_6d1c78c
#define public_6d1c7ac _public_6d1c7ac

PROC_DECLARE(0x6d1c770, internal_6d1c770, public_6d1c770);
extern "C" NAKED register_t __cdecl internal_6d1c770()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr ss : [ebp-4], ecx
        mov eax, dword ptr ss : [ebp-4]
        mov ecx, dword ptr ss : [ebp+8]
        cmp ecx, dword ptr ds : [eax+4]
        jne public_6d1c78c
        mov edx, dword ptr ss : [ebp-4]
        mov eax, dword ptr ss : [ebp+0xC]
        cmp eax, dword ptr ds : [edx]
        je public_6d1c7ac
        public_6d1c78c : nop
        mov ecx, dword ptr ss : [ebp-4]
        mov dl, byte ptr ds : [ecx+0x10]
        or dl, 1
        mov eax, dword ptr ss : [ebp-4]
        mov byte ptr ds : [eax+0x10], dl
        mov ecx, dword ptr ss : [ebp-4]
        mov edx, dword ptr ss : [ebp+8]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ss : [ebp-4]
        mov ecx, dword ptr ss : [ebp+0xC]
        mov dword ptr ds : [eax], ecx
        public_6d1c7ac : nop
        mov esp, ebp
        pop ebp
        ret 8
        UNREACHABLE_TRAP(0x6d1c770)
    }
}

#undef public_6d1c78c
#undef public_6d1c7ac
