#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63034f0);

#define public_6303510 _public_6303510
#define public_6303536 _public_6303536

PROC_DECLARE(0x63034f0, internal_63034f0, public_63034f0);
extern "C" NAKED register_t __cdecl internal_63034f0()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        push ebp
        mov ebp, dword ptr ss : [esp+0x10]
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        push ebx
        push edi
        call ebp
        add esp, 8
        or ecx, 0xFFFFFFFF
        lea ebx, ds:[ebx]
        public_6303510 : nop
        mov eax, dword ptr ds : [public_6399040]
        mov eax, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax]
        push ecx
        push 1
        push edi
        push eax
        call dword ptr ds : [edx+0xD8]
        mov esi, eax
        cmp esi, 0xFFFFFFFF
        je public_6303536
        push ebx
        push ebp
        push esi
        call public_63034f0
        add esp, 0xC
        public_6303536 : nop
        cmp esi, 0xFFFFFFFF
        mov ecx, esi
        jne public_6303510
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x63034f0)
    }
}

#undef public_6303510
#undef public_6303536
