#include "Deformable2-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65f1000);

#define public_65f1020 _public_65f1020
#define public_65f102d _public_65f102d

PROC_DECLARE(0x65f1000, internal_65f1000, public_65f1000);
extern "C" NAKED register_t __cdecl internal_65f1000()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0xC]
        dec eax
        js public_65f102d
        push ebx
        mov ebx, dword ptr ss : [esp+0x14]
        push ebp
        mov ebp, dword ptr ss : [esp+0x10]
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        push edi
        lea edi, ds:[eax+1]
        lea ebx, ds:[ebx]
        public_65f1020 : nop
        mov ecx, esi
        call ebx
        add esi, ebp
        dec edi
        jne public_65f1020
        pop edi
        pop esi
        pop ebp
        pop ebx
        public_65f102d : nop
        ret 0x10
        UNREACHABLE_TRAP(0x65f1000)
    }
}

#undef public_65f1020
#undef public_65f102d
