#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f68e70);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6f68e8d _public_6f68e8d
#define public_6f68eaa _public_6f68eaa

PROC_DECLARE(0x6f68e70, internal_6f68e70, public_6f68e70);
extern "C" NAKED register_t __cdecl internal_6f68e70()
{
    __asm
    {
        push ebx
        push esi
        mov ebx, ecx
        mov esi, dword ptr ds : [ebx+4]
        push edi
        mov edi, dword ptr ds : [esi+4]
        push 0x2C
        call public_6fa912a
        add esp, 4
        test edi, edi
        mov dword ptr ds : [eax], esi
        jne public_6f68e8d
        mov edi, eax
        public_6f68e8d : nop
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        lea edi, ds:[eax+8]
        test edi, edi
        mov dword ptr ds : [ecx], eax
        je public_6f68eaa
        mov esi, dword ptr ss : [esp+0x10]
        mov ecx, 9
        rep movsd
        public_6f68eaa : nop
        mov eax, dword ptr ds : [ebx+8]
        pop edi
        inc eax
        pop esi
        mov dword ptr ds : [ebx+8], eax
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6f68e70)
    }
}

#undef public_6f68e8d
#undef public_6f68eaa
