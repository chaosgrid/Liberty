#include "RP8-PCH.h"


#define public_6d12d2d _public_6d12d2d
#define public_6d12d45 _public_6d12d45

PROC_DECLARE(0x6d12cdc, internal_6d12cdc, public_6d12cdc);
extern "C" NAKED register_t __cdecl internal_6d12cdc()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr ss : [ebp-4], 0x80004005
        cmp dword ptr ss : [ebp+0xC], 0
        je public_6d12d45
        cmp dword ptr ss : [ebp+0xC], 0xFFFFFFFF
        je public_6d12d45
        mov eax, dword ptr ss : [ebp+0xC]
        mov dword ptr ss : [ebp-8], eax
        cmp dword ptr ss : [ebp-8], 0
        je public_6d12d45
        mov ecx, dword ptr ss : [ebp-8]
        xor edx, edx
        cmp dword ptr ds : [ecx+0x20], 0
        setne dl
        xor eax, eax
        mov al, dl
        test eax, eax
        je public_6d12d45
        cmp dword ptr ss : [ebp+0x10], 0
        je public_6d12d2d
        mov ecx, dword ptr ss : [ebp+0x10]
        mov edx, dword ptr ss : [ebp-8]
        mov eax, dword ptr ds : [edx+4]
        mov dword ptr ds : [ecx], eax
        mov dword ptr ss : [ebp-4], 0
        public_6d12d2d : nop
        cmp dword ptr ss : [ebp+0x14], 0
        je public_6d12d45
        mov ecx, dword ptr ss : [ebp+0x14]
        mov edx, dword ptr ss : [ebp-8]
        mov eax, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], eax
        mov dword ptr ss : [ebp-4], 0
        public_6d12d45 : nop
        mov eax, dword ptr ss : [ebp-4]
        mov esp, ebp
        pop ebp
        ret 0x10
        UNREACHABLE_TRAP(0x6d12cdc)
    }
}

#undef public_6d12d2d
#undef public_6d12d45
