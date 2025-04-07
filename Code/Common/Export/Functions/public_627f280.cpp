#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_627f280);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_627f29e _public_627f29e
#define public_627f2b8 _public_627f2b8

PROC_DECLARE(0x627f280, internal_627f280, public_627f280);
extern "C" NAKED register_t __cdecl internal_627f280()
{
    __asm
    {
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        push edi
        mov edi, dword ptr ds : [esi+4]
        push 0xC
        mov ebx, ecx
        call public_6391d9c
        add esp, 4
        test edi, edi
        mov dword ptr ds : [eax], esi
        jne public_627f29e
        mov edi, eax
        public_627f29e : nop
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        lea ecx, ds:[eax+8]
        test ecx, ecx
        je public_627f2b8
        mov edx, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ds : [edx]
        mov dword ptr ds : [ecx], edx
        public_627f2b8 : nop
        inc dword ptr ds : [ebx+8]
        mov ecx, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        mov dword ptr ds : [ecx], eax
        mov eax, ecx
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x627f280)
    }
}

#undef public_627f29e
#undef public_627f2b8
