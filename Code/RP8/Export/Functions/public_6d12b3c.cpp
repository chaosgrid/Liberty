#include "RP8-PCH.h"


#define public_6d12b5e _public_6d12b5e
#define public_6d12b87 _public_6d12b87
#define public_6d12b8e _public_6d12b8e
#define public_6d12b94 _public_6d12b94

PROC_DECLARE(0x6d12b3c, internal_6d12b3c, public_6d12b3c);
extern "C" NAKED register_t __cdecl internal_6d12b3c()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0xC
        mov dword ptr ss : [ebp-4], 0
        cmp dword ptr ss : [ebp+0xC], 0
        je public_6d12b94
        cmp dword ptr ss : [ebp+0xC], 0xFFFFFFFF
        jne public_6d12b5e
        mov dword ptr ss : [ebp-4], 1
        jmp public_6d12b94
        public_6d12b5e : nop
        mov eax, dword ptr ss : [ebp+0xC]
        mov dword ptr ss : [ebp-8], eax
        cmp dword ptr ss : [ebp-8], 0
        je public_6d12b87
        mov ecx, dword ptr ss : [ebp-8]
        xor edx, edx
        cmp dword ptr ds : [ecx+0x20], 0
        setne dl
        xor eax, eax
        mov al, dl
        test eax, eax
        je public_6d12b87
        mov dword ptr ss : [ebp-0xC], 1
        jmp public_6d12b8e
        public_6d12b87 : nop
        mov dword ptr ss : [ebp-0xC], 0
        public_6d12b8e : nop
        mov ecx, dword ptr ss : [ebp-0xC]
        mov dword ptr ss : [ebp-4], ecx
        public_6d12b94 : nop
        mov eax, dword ptr ss : [ebp-4]
        mov esp, ebp
        pop ebp
        ret 8
        UNREACHABLE_TRAP(0x6d12b3c)
    }
}

#undef public_6d12b5e
#undef public_6d12b87
#undef public_6d12b8e
#undef public_6d12b94
