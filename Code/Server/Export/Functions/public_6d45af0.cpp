#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d53360);

#define public_6d45b18 _public_6d45b18
#define public_6d45b28 _public_6d45b28

PROC_DECLARE(0x6d45af0, internal_6d45af0, public_6d45af0);
extern "C" NAKED register_t __cdecl internal_6d45af0()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        push esi
        push edi
        mov ecx, 0xB
        mov esi, offset public_6d8f998
        mov edi, ebx
        rep movsd
        xor edi, edi
        push edi
        mov ecx, offset public_6d90260
        xor esi, esi
        call public_6d53360
        cmp eax, edi
        je public_6d45b28
        public_6d45b18 : nop
        push eax
        mov ecx, offset public_6d90260
        inc esi
        call public_6d53360
        cmp eax, edi
        jne public_6d45b18
        public_6d45b28 : nop
        mov dword ptr ds : [ebx+0x28], edi
        mov dword ptr ds : [ebx+0x24], edi
        mov dword ptr ds : [ebx+0x20], edi
        pop edi
        mov dword ptr ds : [ebx], esi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6d45af0)
    }
}

#undef public_6d45b18
#undef public_6d45b28
