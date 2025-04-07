#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d046c0);
CLANG_FORWARD_PROC_SYMBOL(public_6d06050);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);

#define public_6d06062 _public_6d06062
#define public_6d06089 _public_6d06089

PROC_DECLARE(0x6d06050, internal_6d06050, public_6d06050);
extern "C" NAKED register_t __cdecl internal_6d06050()
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
        je public_6d06089
        public_6d06062 : nop
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov ecx, ebx
        call public_6d06050
        mov esi, dword ptr ds : [esi]
        lea ecx, ds:[edi+0xC]
        call public_6d046c0
        push edi
        call public_6d5ffb0
        mov eax, dword ptr ds : [ebx+8]
        add esp, 4
        cmp esi, eax
        mov edi, esi
        jne public_6d06062
        public_6d06089 : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6d06050)
    }
}

#undef public_6d06062
#undef public_6d06089
