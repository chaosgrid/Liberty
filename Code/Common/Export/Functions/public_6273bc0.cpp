#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6273bc0);

#define public_6273be0 _public_6273be0
#define public_6273bed _public_6273bed

PROC_DECLARE(0x6273bc0, internal_6273bc0, public_6273bc0);
extern "C" NAKED register_t __cdecl internal_6273bc0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0xC]
        dec eax
        js public_6273bed
        push ebx
        mov ebx, dword ptr ss : [esp+0x14]
        push ebp
        mov ebp, dword ptr ss : [esp+0x10]
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        push edi
        lea edi, ds:[eax+1]
        lea ebx, ds:[ebx]
        public_6273be0 : nop
        mov ecx, esi
        call ebx
        add esi, ebp
        dec edi
        jne public_6273be0
        pop edi
        pop esi
        pop ebp
        pop ebx
        public_6273bed : nop
        ret 0x10
        UNREACHABLE_TRAP(0x6273bc0)
    }
}

#undef public_6273be0
#undef public_6273bed
