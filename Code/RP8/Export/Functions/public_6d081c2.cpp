#include "RP8-PCH.h"


#define public_6d081f7 _public_6d081f7
#define public_6d081fe _public_6d081fe
#define public_6d08224 _public_6d08224
#define public_6d08236 _public_6d08236

PROC_DECLARE(0x6d081c2, internal_6d081c2, public_6d081c2);
extern "C" NAKED register_t __cdecl internal_6d081c2()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0xC
        mov eax, dword ptr ss : [ebp+0xC]
        imul eax, 0xC
        mov ecx, dword ptr ss : [ebp+8]
        lea edx, ds:[ecx+eax+0x354]
        mov dword ptr ss : [ebp-4], edx
        mov eax, dword ptr ss : [ebp-4]
        cmp dword ptr ds : [eax+8], 0
        je public_6d081f7
        mov ecx, dword ptr ss : [ebp-4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ss : [ebp+0x10]
        jne public_6d081f7
        mov dword ptr ss : [ebp-0xC], 0
        jmp public_6d081fe
        public_6d081f7 : nop
        mov dword ptr ss : [ebp-0xC], 1
        public_6d081fe : nop
        movzx eax, byte ptr ss : [ebp-0xC]
        test eax, eax
        je public_6d08236
        mov ecx, dword ptr ss : [ebp+0xC]
        imul ecx, 0xC
        mov edx, dword ptr ss : [ebp+8]
        lea eax, ds:[edx+ecx+0x354]
        mov dword ptr ss : [ebp-8], eax
        mov ecx, dword ptr ss : [ebp-8]
        cmp dword ptr ds : [ecx+4], 0
        jne public_6d08224
        jmp public_6d08236
        public_6d08224 : nop
        mov edx, dword ptr ss : [ebp-8]
        mov dword ptr ds : [edx+8], 1
        mov eax, dword ptr ss : [ebp-8]
        mov ecx, dword ptr ss : [ebp+0x10]
        mov dword ptr ds : [eax], ecx
        public_6d08236 : nop
        xor eax, eax
        mov esp, ebp
        pop ebp
        ret 0xC
        UNREACHABLE_TRAP(0x6d081c2)
    }
}

#undef public_6d081f7
#undef public_6d081fe
#undef public_6d08224
#undef public_6d08236
