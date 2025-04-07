#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_58d960);

#define public_58d978 _public_58d978
#define public_58d983 _public_58d983
#define public_58d9c6 _public_58d9c6

PROC_DECLARE(0x58d960, internal_58d960, public_58d960);
extern "C" NAKED register_t __cdecl internal_58d960()
{
    __asm
    {
        cmp dword ptr ds : [ecx+0x55C], 3
        push esi
        jne public_58d9c6
        mov edx, dword ptr ds : [ecx+0x4B4]
        test edx, edx
        jne public_58d978
        xor eax, eax
        jmp public_58d983
        public_58d978 : nop
        mov eax, dword ptr ds : [ecx+0x4B8]
        sub eax, edx
        sar eax, 2
        public_58d983 : nop
        imul eax, dword ptr ss : [esp+8]
        add eax, dword ptr ss : [esp+0xC]
        mov esi, eax
        mov eax, dword ptr ds : [ecx+0x564]
        test eax, eax
        je public_58d9c6
        mov edx, dword ptr ds : [ecx+0x568]
        sub edx, eax
        mov eax, 0x51EB851F
        imul edx
        sar edx, 5
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp esi, edx
        jae public_58d9c6
        mov edx, dword ptr ds : [ecx+0x564]
        mov eax, esi
        imul eax, 0x64
        add eax, edx
        pop esi
        ret 8
        public_58d9c6 : nop
        xor eax, eax
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x58d960)
    }
}

#undef public_58d978
#undef public_58d983
#undef public_58d9c6
