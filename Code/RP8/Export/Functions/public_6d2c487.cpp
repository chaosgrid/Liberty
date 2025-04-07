#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d2c487);
CLANG_FORWARD_PROC_SYMBOL(public_6d2c553);
CLANG_FORWARD_PROC_SYMBOL(public_6d2c7a2);
CLANG_FORWARD_PROC_SYMBOL(public_6d2dba0);

#define public_6d2c50c _public_6d2c50c
#define public_6d2c51e _public_6d2c51e
#define public_6d2c547 _public_6d2c547

PROC_DECLARE(0x6d2c487, internal_6d2c487, public_6d2c487);
extern "C" NAKED register_t __cdecl internal_6d2c487()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x40
        mov dword ptr ss : [ebp-0x40], ecx
        mov byte ptr ss : [ebp-0x2C], 0
        mov byte ptr ss : [ebp-0x2B], 0
        mov byte ptr ss : [ebp-0x2A], 0
        mov dword ptr ss : [ebp-0x28], 0xFFFFFFFF
        mov dword ptr ss : [ebp-0x24], 0xFFFFFFFF
        mov eax, dword ptr ss : [ebp+0xC]
        mov dword ptr ss : [ebp-0x20], eax
        mov ecx, dword ptr ss : [ebp+8]
        mov dword ptr ss : [ebp-0x1C], ecx
        lea edx, ss:[ebp-0x18]
        mov eax, dword ptr ss : [ebp-0x2C]
        mov dword ptr ds : [edx], eax
        mov ecx, dword ptr ss : [ebp-0x28]
        mov dword ptr ds : [edx+4], ecx
        mov eax, dword ptr ss : [ebp-0x24]
        mov dword ptr ds : [edx+8], eax
        mov ecx, dword ptr ss : [ebp-0x20]
        mov dword ptr ds : [edx+0xC], ecx
        lea edx, ss:[ebp-0x1C]
        push edx
        lea eax, ss:[ebp-0x34]
        push eax
        mov ecx, offset public_6d728cc
        call public_6d2dba0
        mov ecx, dword ptr ss : [ebp-0x34]
        mov dword ptr ss : [ebp-8], ecx
        mov dl, byte ptr ss : [ebp-0x30]
        mov byte ptr ss : [ebp-4], dl
        lea eax, ss:[ebp-0x18]
        mov dword ptr ss : [ebp-0x38], eax
        mov ecx, dword ptr ss : [ebp-0x38]
        cmp dword ptr ds : [ecx+8], 0xFFFFFFFF
        je public_6d2c50c
        mov edx, dword ptr ss : [ebp-0x38]
        mov eax, dword ptr ds : [edx+8]
        push eax
        call public_6d2c7a2
        add esp, 4
        public_6d2c50c : nop
        cmp dword ptr ss : [ebp-0x24], 0xFFFFFFFF
        je public_6d2c51e
        mov ecx, dword ptr ss : [ebp-0x24]
        push ecx
        call public_6d2c7a2
        add esp, 4
        public_6d2c51e : nop
        movzx edx, byte ptr ss : [ebp-4]
        test edx, edx
        je public_6d2c547
        mov eax, dword ptr ss : [ebp-8]
        add eax, 0x10
        mov dword ptr ss : [ebp-0x3C], eax
        call public_6d2c553
        mov ecx, dword ptr ss : [ebp-0x3C]
        mov dword ptr ds : [ecx+8], eax
        cmp dword ptr ss : [ebp+0xC], 0
        je public_6d2c547
        mov edx, dword ptr ss : [ebp-8]
        mov byte ptr ds : [edx+0x12], 1
        public_6d2c547 : nop
        mov eax, dword ptr ss : [ebp-8]
        mov eax, dword ptr ds : [eax+0x18]
        mov esp, ebp
        pop ebp
        ret 8
        UNREACHABLE_TRAP(0x6d2c487)
    }
}

#undef public_6d2c50c
#undef public_6d2c51e
#undef public_6d2c547
