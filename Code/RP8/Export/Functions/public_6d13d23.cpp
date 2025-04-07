#include "RP8-PCH.h"


#define public_6d13d43 _public_6d13d43
#define public_6d13d49 _public_6d13d49
#define public_6d13d67 _public_6d13d67

PROC_DECLARE(0x6d13d23, internal_6d13d23, public_6d13d23);
extern "C" NAKED register_t __cdecl internal_6d13d23()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr ss : [ebp-8], 0x80004005
        cmp dword ptr ss : [ebp+0xC], 0xFFFFFFFF
        jne public_6d13d43
        mov eax, dword ptr ss : [ebp+8]
        add eax, 0x140
        mov dword ptr ss : [ebp-4], eax
        jmp public_6d13d49
        public_6d13d43 : nop
        mov ecx, dword ptr ss : [ebp+0xC]
        mov dword ptr ss : [ebp-4], ecx
        public_6d13d49 : nop
        cmp dword ptr ss : [ebp-4], 0
        je public_6d13d67
        cmp dword ptr ss : [ebp+0x10], 0
        je public_6d13d67
        mov edx, dword ptr ss : [ebp+0x10]
        mov eax, dword ptr ss : [ebp-4]
        mov ecx, dword ptr ds : [eax+0x18]
        mov dword ptr ds : [edx], ecx
        mov dword ptr ss : [ebp-8], 0
        public_6d13d67 : nop
        mov eax, dword ptr ss : [ebp-8]
        mov esp, ebp
        pop ebp
        ret 0xC
        UNREACHABLE_TRAP(0x6d13d23)
    }
}

#undef public_6d13d43
#undef public_6d13d49
#undef public_6d13d67
