#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ec6120);
CLANG_FORWARD_PROC_SYMBOL(public_6ecc4e0);

#define public_6ecc510 _public_6ecc510
#define public_6ecc518 _public_6ecc518
#define public_6ecc52a _public_6ecc52a

PROC_DECLARE(0x6ecc4e0, internal_6ecc4e0, public_6ecc4e0);
extern "C" NAKED register_t __cdecl internal_6ecc4e0()
{
    __asm
    {
        push ecx
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        push ebp
        push esi
        push edi
        mov edi, ecx
        lea esi, ds:[edi+0x14]
        push ebx
        mov ecx, esi
        xor ebp, ebp
        call public_6ec6120
        mov esi, dword ptr ds : [esi+4]
        cmp eax, esi
        mov dword ptr ss : [esp+0x18], eax
        je public_6ecc510
        mov ecx, dword ptr ds : [ebx]
        cmp ecx, dword ptr ds : [eax+0xC]
        jb public_6ecc510
        lea eax, ss:[esp+0x18]
        jmp public_6ecc518
        public_6ecc510 : nop
        mov dword ptr ss : [esp+0x10], esi
        lea eax, ss:[esp+0x10]
        public_6ecc518 : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, dword ptr ds : [edi+0x18]
        je public_6ecc52a
        pop edi
        pop esi
        pop ebp
        add eax, 0x10
        pop ebx
        pop ecx
        ret 4
        public_6ecc52a : nop
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x6ecc4e0)
    }
}

#undef public_6ecc510
#undef public_6ecc518
#undef public_6ecc52a
