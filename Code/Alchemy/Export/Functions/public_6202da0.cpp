#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6202da0);
CLANG_FORWARD_PROC_SYMBOL(public_6202ff0);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);

#define public_6202db2 _public_6202db2
#define public_6202dd9 _public_6202dd9

PROC_DECLARE(0x6202da0, internal_6202da0, public_6202da0);
extern "C" NAKED register_t __cdecl internal_6202da0()
{
    __asm
    {
        push ebx
        mov ebx, ecx
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [ebx+8]
        cmp edi, eax
        mov esi, edi
        je public_6202dd9
        public_6202db2 : nop
        mov eax, dword ptr ds : [esi+8]
        mov ecx, ebx
        push eax
        call public_6202da0
        mov esi, dword ptr ds : [esi]
        lea ecx, ds:[edi+0xC]
        call public_6202ff0
        push edi
        call public_62460e0
        mov eax, dword ptr ds : [ebx+8]
        add esp, 4
        cmp esi, eax
        mov edi, esi
        jne public_6202db2
        public_6202dd9 : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6202da0)
    }
}

#undef public_6202db2
#undef public_6202dd9
