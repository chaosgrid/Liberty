#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_459d70);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_459d82 _public_459d82
#define public_459da1 _public_459da1

PROC_DECLARE(0x459d70, internal_459d70, public_459d70);
extern "C" NAKED register_t __cdecl internal_459d70()
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
        je public_459da1
        public_459d82 : nop
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov ecx, ebx
        call public_459d70
        mov esi, dword ptr ds : [esi]
        push edi
        call public_5b7e1d
        mov eax, dword ptr ds : [ebx+8]
        add esp, 4
        cmp esi, eax
        mov edi, esi
        jne public_459d82
        public_459da1 : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x459d70)
    }
}

#undef public_459d82
#undef public_459da1
