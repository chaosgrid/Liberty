#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620a730);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_PROC_SYMBOL(public_624612c);

#define public_620a76b _public_620a76b
#define public_620a781 _public_620a781
#define public_620a78a _public_620a78a
#define public_620a792 _public_620a792

PROC_DECLARE(0x620a730, internal_620a730, public_620a730);
extern "C" NAKED register_t __cdecl internal_620a730()
{
    __asm
    {
        sub esp, 8
        push ebp
        mov ebp, ecx
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [ebp+0x10]
        cmp ecx, edi
        mov dword ptr ss : [esp+8], ecx
        je public_620a792
        push ebx
        push esi
        mov esi, dword ptr ss : [ebp+4]
        lea eax, ds:[edi*8]
        xor ebx, ebx
        mov dword ptr ss : [esp+0x14], esi
        test eax, eax
        je public_620a76b
        push eax
        call public_624612c
        mov ecx, dword ptr ss : [esp+0x14]
        add esp, 4
        mov ebx, eax
        public_620a76b : nop
        test esi, esi
        je public_620a78a
        test ebx, ebx
        je public_620a781
        add ecx, ecx
        mov edi, ebx
        rep movsd
        mov esi, dword ptr ss : [esp+0x14]
        mov edi, dword ptr ss : [esp+0x1C]
        public_620a781 : nop
        push esi
        call public_62460e0
        add esp, 4
        public_620a78a : nop
        mov dword ptr ss : [ebp+4], ebx
        pop esi
        mov dword ptr ss : [ebp+0x10], edi
        pop ebx
        public_620a792 : nop
        pop edi
        pop ebp
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x620a730)
    }
}

#undef public_620a76b
#undef public_620a781
#undef public_620a78a
#undef public_620a792
