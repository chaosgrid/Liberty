#include "RP8-PCH.h"


#define public_6d13b8f _public_6d13b8f
#define public_6d13b95 _public_6d13b95
#define public_6d13bb8 _public_6d13bb8
#define public_6d13bbf _public_6d13bbf
#define public_6d13bc5 _public_6d13bc5

PROC_DECLARE(0x6d13b69, internal_6d13b69, public_6d13b69);
extern "C" NAKED register_t __cdecl internal_6d13b69()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0xC
        mov dword ptr ss : [ebp-4], 0
        cmp dword ptr ss : [ebp+0xC], 0
        je public_6d13bc5
        cmp dword ptr ss : [ebp+0xC], 0xFFFFFFFF
        jne public_6d13b8f
        mov eax, dword ptr ss : [ebp+8]
        add eax, 0x140
        mov dword ptr ss : [ebp-8], eax
        jmp public_6d13b95
        public_6d13b8f : nop
        mov ecx, dword ptr ss : [ebp+0xC]
        mov dword ptr ss : [ebp-8], ecx
        public_6d13b95 : nop
        cmp dword ptr ss : [ebp-8], 0
        je public_6d13bb8
        mov edx, dword ptr ss : [ebp-8]
        xor eax, eax
        cmp dword ptr ds : [edx+4], 0
        setne al
        xor ecx, ecx
        mov cl, al
        test ecx, ecx
        je public_6d13bb8
        mov dword ptr ss : [ebp-0xC], 1
        jmp public_6d13bbf
        public_6d13bb8 : nop
        mov dword ptr ss : [ebp-0xC], 0
        public_6d13bbf : nop
        mov edx, dword ptr ss : [ebp-0xC]
        mov dword ptr ss : [ebp-4], edx
        public_6d13bc5 : nop
        mov eax, dword ptr ss : [ebp-4]
        mov esp, ebp
        pop ebp
        ret 8
        UNREACHABLE_TRAP(0x6d13b69)
    }
}

#undef public_6d13b8f
#undef public_6d13b95
#undef public_6d13bb8
#undef public_6d13bbf
#undef public_6d13bc5
