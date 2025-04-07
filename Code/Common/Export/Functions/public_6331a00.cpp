#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6331a00);
CLANG_FORWARD_PROC_SYMBOL(public_6332140);

#define public_6331a1d _public_6331a1d
#define public_6331a3a _public_6331a3a

PROC_DECLARE(0x6331a00, internal_6331a00, public_6331a00);
extern "C" NAKED register_t __cdecl internal_6331a00()
{
    __asm
    {
        push ebx
        push esi
        push edi
        mov ebx, ecx
        mov esi, dword ptr ds : [ebx+0x14]
        mov edi, dword ptr ds : [esi+4]
        push 0xC4
        call public_6332140
        test edi, edi
        mov dword ptr ds : [eax], esi
        jne public_6331a1d
        mov edi, eax
        public_6331a1d : nop
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        lea edi, ds:[eax+8]
        test edi, edi
        mov dword ptr ds : [ecx], eax
        je public_6331a3a
        mov esi, dword ptr ss : [esp+0x10]
        mov ecx, 0x2F
        rep movsd
        public_6331a3a : nop
        mov eax, dword ptr ds : [ebx+0x18]
        pop edi
        inc eax
        pop esi
        mov dword ptr ds : [ebx+0x18], eax
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6331a00)
    }
}

#undef public_6331a1d
#undef public_6331a3a
