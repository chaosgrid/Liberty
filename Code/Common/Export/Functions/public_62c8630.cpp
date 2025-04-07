#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62e74a0);
CLANG_FORWARD_PROC_SYMBOL(public_62e8280);
CLANG_FORWARD_PROC_SYMBOL(public_6341610);

#define public_62c864a _public_62c864a
#define public_62c8659 _public_62c8659
#define public_62c866d _public_62c866d
#define public_62c866f _public_62c866f
#define public_62c8679 _public_62c8679

PROC_DECLARE(0x62c8630, internal_62c8630, public_62c8630);
extern "C" NAKED register_t __cdecl internal_62c8630()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        push esi
        mov esi, ecx
        je public_62c8659
        mov ecx, dword ptr ds : [esi+0x24]
        add eax, 0xC
        push eax
        add ecx, 0x34
        call public_62e74a0
        public_62c864a : nop
        test eax, eax
        lea ecx, ds:[esi+0x2A0]
        je public_62c866d
        add eax, 8
        jmp public_62c866f
        public_62c8659 : nop
        mov eax, dword ptr ds : [esi+0x24]
        mov ecx, dword ptr ds : [eax+0x1584]
        push ecx
        lea ecx, ds:[eax+0x34]
        call public_62e8280
        jmp public_62c864a
        public_62c866d : nop
        xor eax, eax
        public_62c866f : nop
        cmp eax, dword ptr ds : [ecx]
        je public_62c8679
        push eax
        call public_6341610
        public_62c8679 : nop
        or byte ptr ds : [esi+0x28], 2
        mov al, 1
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x62c8630)
    }
}

#undef public_62c864a
#undef public_62c8659
#undef public_62c866d
#undef public_62c866f
#undef public_62c8679
