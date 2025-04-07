#include "ReadFile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b74000);
CLANG_FORWARD_PROC_SYMBOL(public_6b782ac);

#define public_6b7401e _public_6b7401e
#define public_6b74046 _public_6b74046

PROC_DECLARE(0x6b74000, internal_6b74000, public_6b74000);
extern "C" NAKED register_t __cdecl internal_6b74000()
{
    __asm
    {
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        push edi
        push 0x14
        mov ebx, ecx
        mov edi, dword ptr ds : [esi+4]
        call public_6b782ac
        add esp, 4
        mov dword ptr ds : [eax], esi
        test edi, edi
        jne public_6b7401e
        mov edi, eax
        public_6b7401e : nop
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        lea ecx, ds:[eax+8]
        test ecx, ecx
        je public_6b74046
        mov edx, dword ptr ss : [esp+0x18]
        mov esi, dword ptr ds : [edx+4]
        mov dword ptr ds : [ecx+4], esi
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx+8], edx
        mov dword ptr ds : [ecx], offset public_6b791f4
        public_6b74046 : nop
        mov ecx, dword ptr ds : [ebx+8]
        pop edi
        inc ecx
        pop esi
        mov dword ptr ds : [ebx+8], ecx
        mov ecx, dword ptr ss : [esp+8]
        pop ebx
        mov dword ptr ds : [ecx], eax
        mov eax, ecx
        ret 0xC
        UNREACHABLE_TRAP(0x6b74000)
    }
}

#undef public_6b7401e
#undef public_6b74046
