#include "ReadFile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b73ed0);

#define public_6b73eea _public_6b73eea
#define public_6b73ef7 _public_6b73ef7

PROC_DECLARE(0x6b73ed0, internal_6b73ed0, public_6b73ed0);
extern "C" NAKED register_t __cdecl internal_6b73ed0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0xC]
        dec eax
        js public_6b73ef7
        push ebx
        mov ebx, dword ptr ss : [esp+0x14]
        push ebp
        mov ebp, dword ptr ss : [esp+0x10]
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        push edi
        lea edi, ds:[eax+1]
        public_6b73eea : nop
        mov ecx, esi
        call ebx
        add esi, ebp
        dec edi
        jne public_6b73eea
        pop edi
        pop esi
        pop ebp
        pop ebx
        public_6b73ef7 : nop
        ret 0x10
        UNREACHABLE_TRAP(0x6b73ed0)
    }
}

#undef public_6b73eea
#undef public_6b73ef7
