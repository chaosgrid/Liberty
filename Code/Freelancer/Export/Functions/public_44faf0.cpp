#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_44faf0);

#define public_44fafb _public_44fafb
#define public_44fb06 _public_44fb06
#define public_44fb20 _public_44fb20
#define public_44fb4c _public_44fb4c
#define public_44fb68 _public_44fb68
#define public_44fb6f _public_44fb6f
#define public_44fb75 _public_44fb75

PROC_DECLARE(0x44faf0, internal_44faf0, public_44faf0);
extern "C" NAKED register_t __cdecl internal_44faf0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        test eax, eax
        je public_44fafb
        mov byte ptr ds : [eax], 0
        public_44fafb : nop
        mov eax, dword ptr ss : [esp+0xC]
        test eax, eax
        je public_44fb06
        mov byte ptr ds : [eax], 0
        public_44fb06 : nop
        push ebx
        push ebp
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        test edi, edi
        je public_44fb75
        mov eax, dword ptr ds : [edi]
        push edi
        call dword ptr ds : [eax+0x18]
        mov ebp, eax
        xor ebx, ebx
        test ebp, ebp
        jle public_44fb75
        push esi
        public_44fb20 : nop
        mov ecx, dword ptr ds : [edi]
        push ebx
        push edi
        call dword ptr ds : [ecx+0x24]
        mov esi, eax
        cmp dword ptr ds : [esi], 6
        jne public_44fb6f
        mov edx, dword ptr ds : [public_610ff8]
        mov eax, dword ptr ds : [esi+0x3C]
        push edx
        push eax
        call dword ptr ds : [public_5c6d24]
        add esp, 8
        test eax, eax
        jne public_44fb4c
        mov eax, dword ptr ss : [esp+0x18]
        jmp public_44fb68
        public_44fb4c : nop
        mov ecx, dword ptr ds : [public_610ffc]
        mov edx, dword ptr ds : [esi+0x3C]
        push ecx
        push edx
        call dword ptr ds : [public_5c6d24]
        add esp, 8
        test eax, eax
        jne public_44fb6f
        mov eax, dword ptr ss : [esp+0x1C]
        public_44fb68 : nop
        test eax, eax
        je public_44fb6f
        mov byte ptr ds : [eax], 1
        public_44fb6f : nop
        inc ebx
        cmp ebx, ebp
        jl public_44fb20
        pop esi
        public_44fb75 : nop
        pop edi
        pop ebp
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x44faf0)
    }
}

#undef public_44fafb
#undef public_44fb06
#undef public_44fb20
#undef public_44fb4c
#undef public_44fb68
#undef public_44fb6f
#undef public_44fb75
