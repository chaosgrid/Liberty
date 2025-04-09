#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_46d8e0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_46d8f2 _public_46d8f2
#define public_46d911 _public_46d911

PROC_DECLARE(0x46d8e0, internal_46d8e0, public_46d8e0);
extern "C" NAKED register_t __cdecl internal_46d8e0()
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
        je public_46d911
        public_46d8f2 : nop
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov ecx, ebx
        call public_46d8e0
        mov esi, dword ptr ds : [esi]
        push edi
        call public_5b7e1d
        mov eax, dword ptr ds : [ebx+8]
        add esp, 4
        cmp esi, eax
        mov edi, esi
        jne public_46d8f2
        public_46d911 : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x46d8e0)
    }
}

#undef public_46d8f2
#undef public_46d911
