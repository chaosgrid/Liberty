#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f21650);
CLANG_FORWARD_PROC_SYMBOL(public_6f324d0);

#define public_6f324e6 _public_6f324e6
#define public_6f324ff _public_6f324ff
#define public_6f32506 _public_6f32506

PROC_DECLARE(0x6f324d0, internal_6f324d0, public_6f324d0);
extern "C" NAKED register_t __cdecl internal_6f324d0()
{
    __asm
    {
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [eax]
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        xor ebx, ebx
        mov dword ptr ss : [esp+0x14], eax
        public_6f324e6 : nop
        cmp eax, dword ptr ds : [esi+4]
        je public_6f32506
        cmp dword ptr ds : [eax+0x14], edi
        je public_6f324ff
        lea ecx, ss:[esp+0x14]
        call public_6f21650
        mov eax, dword ptr ss : [esp+0x14]
        jmp public_6f324e6
        public_6f324ff : nop
        pop edi
        pop esi
        add eax, 0x10
        pop ebx
        ret 
        public_6f32506 : nop
        pop edi
        pop esi
        mov eax, ebx
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6f324d0)
    }
}

#undef public_6f324e6
#undef public_6f324ff
#undef public_6f32506
