#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63427e0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_63427f2 _public_63427f2
#define public_6342811 _public_6342811

PROC_DECLARE(0x63427e0, internal_63427e0, public_63427e0);
extern "C" NAKED register_t __cdecl internal_63427e0()
{
    __asm
    {
        push ebx
        push esi
        mov ebx, ecx
        mov eax, dword ptr ds : [ebx+8]
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        cmp edi, eax
        mov esi, edi
        je public_6342811
        public_63427f2 : nop
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov ecx, ebx
        call public_63427e0
        mov esi, dword ptr ds : [esi]
        push edi
        call public_6391d5a
        mov eax, dword ptr ds : [ebx+8]
        add esp, 4
        cmp esi, eax
        mov edi, esi
        jne public_63427f2
        public_6342811 : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x63427e0)
    }
}

#undef public_63427f2
#undef public_6342811
