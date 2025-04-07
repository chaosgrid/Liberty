#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6282160);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_628217e _public_628217e
#define public_62821a4 _public_62821a4

PROC_DECLARE(0x6282160, internal_6282160, public_6282160);
extern "C" NAKED register_t __cdecl internal_6282160()
{
    __asm
    {
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        push edi
        mov edi, dword ptr ds : [esi+4]
        push 0x14
        mov ebx, ecx
        call public_6391d9c
        add esp, 4
        test edi, edi
        mov dword ptr ds : [eax], esi
        jne public_628217e
        mov edi, eax
        public_628217e : nop
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        lea ecx, ds:[eax+8]
        test ecx, ecx
        je public_62821a4
        mov edx, dword ptr ss : [esp+0x18]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+4]
        mov dword ptr ds : [ecx+4], esi
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx+8], edx
        public_62821a4 : nop
        inc dword ptr ds : [ebx+8]
        mov ecx, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        mov dword ptr ds : [ecx], eax
        mov eax, ecx
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6282160)
    }
}

#undef public_628217e
#undef public_62821a4
