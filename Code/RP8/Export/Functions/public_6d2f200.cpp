#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d2c7a2);
CLANG_FORWARD_PROC_SYMBOL(public_6d2f200);
CLANG_FORWARD_PROC_SYMBOL(public_6d2f249);

#define public_6d2f22a _public_6d2f22a
#define public_6d2f240 _public_6d2f240

PROC_DECLARE(0x6d2f200, internal_6d2f200, public_6d2f200);
extern "C" NAKED register_t __cdecl internal_6d2f200()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr ss : [ebp-8], ecx
        mov eax, dword ptr ss : [ebp-8]
        add eax, 4
        mov dword ptr ss : [ebp-4], eax
        mov ecx, dword ptr ss : [ebp-4]
        cmp dword ptr ds : [ecx+8], 0xFFFFFFFF
        je public_6d2f22a
        mov edx, dword ptr ss : [ebp-4]
        mov eax, dword ptr ds : [edx+8]
        push eax
        call public_6d2c7a2
        add esp, 4
        public_6d2f22a : nop
        mov ecx, dword ptr ss : [ebp+8]
        and ecx, 1
        test ecx, ecx
        je public_6d2f240
        mov edx, dword ptr ss : [ebp-8]
        push edx
        call public_6d2f249
        add esp, 4
        public_6d2f240 : nop
        mov eax, dword ptr ss : [ebp-8]
        mov esp, ebp
        pop ebp
        ret 4
        UNREACHABLE_TRAP(0x6d2f200)
    }
}

#undef public_6d2f22a
#undef public_6d2f240
