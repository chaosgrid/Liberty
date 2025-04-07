#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620a5c0);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_PROC_SYMBOL(public_624612c);

#define public_620a5fb _public_620a5fb
#define public_620a611 _public_620a611
#define public_620a61a _public_620a61a
#define public_620a622 _public_620a622

PROC_DECLARE(0x620a5c0, internal_620a5c0, public_620a5c0);
extern "C" NAKED register_t __cdecl internal_620a5c0()
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
        je public_620a622
        push ebx
        push esi
        mov esi, dword ptr ss : [ebp+4]
        lea eax, ds:[edi*8]
        xor ebx, ebx
        mov dword ptr ss : [esp+0x14], esi
        test eax, eax
        je public_620a5fb
        push eax
        call public_624612c
        mov ecx, dword ptr ss : [esp+0x14]
        add esp, 4
        mov ebx, eax
        public_620a5fb : nop
        test esi, esi
        je public_620a61a
        test ebx, ebx
        je public_620a611
        add ecx, ecx
        mov edi, ebx
        rep movsd
        mov esi, dword ptr ss : [esp+0x14]
        mov edi, dword ptr ss : [esp+0x1C]
        public_620a611 : nop
        push esi
        call public_62460e0
        add esp, 4
        public_620a61a : nop
        mov dword ptr ss : [ebp+4], ebx
        pop esi
        mov dword ptr ss : [ebp+0x10], edi
        pop ebx
        public_620a622 : nop
        pop edi
        pop ebp
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x620a5c0)
    }
}

#undef public_620a5fb
#undef public_620a611
#undef public_620a61a
#undef public_620a622
