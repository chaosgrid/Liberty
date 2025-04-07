#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d2bd09);
CLANG_FORWARD_PROC_SYMBOL(public_6d2f249);

#define public_6d2bd19 _public_6d2bd19
#define public_6d2bd22 _public_6d2bd22
#define public_6d2bd2f _public_6d2bd2f

PROC_DECLARE(0x6d2bd09, internal_6d2bd09, public_6d2bd09);
extern "C" NAKED register_t __cdecl internal_6d2bd09()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0xC
        mov eax, dword ptr ds : [public_6d728e4]
        mov dword ptr ss : [ebp-4], eax
        jmp public_6d2bd22
        public_6d2bd19 : nop
        mov ecx, dword ptr ss : [ebp-4]
        add ecx, 4
        mov dword ptr ss : [ebp-4], ecx
        public_6d2bd22 : nop
        mov edx, dword ptr ss : [ebp-4]
        cmp edx, dword ptr ds : [public_6d728e8]
        je public_6d2bd2f
        jmp public_6d2bd19
        public_6d2bd2f : nop
        mov eax, dword ptr ds : [public_6d728ec]
        sub eax, dword ptr ds : [public_6d728e4]
        sar eax, 2
        mov dword ptr ss : [ebp-0xC], eax
        mov ecx, dword ptr ds : [public_6d728e4]
        mov dword ptr ss : [ebp-8], ecx
        mov edx, dword ptr ss : [ebp-8]
        push edx
        call public_6d2f249
        add esp, 4
        mov dword ptr ds : [public_6d728e4], 0
        mov dword ptr ds : [public_6d728e8], 0
        mov dword ptr ds : [public_6d728ec], 0
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6d2bd09)
    }
}

#undef public_6d2bd19
#undef public_6d2bd22
#undef public_6d2bd2f
