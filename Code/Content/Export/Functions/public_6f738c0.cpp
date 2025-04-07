#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb7090);
CLANG_FORWARD_PROC_SYMBOL(public_6f738c0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6f738e0 _public_6f738e0
#define public_6f738f8 _public_6f738f8

PROC_DECLARE(0x6f738c0, internal_6f738c0, public_6f738c0);
extern "C" NAKED register_t __cdecl internal_6f738c0()
{
    __asm
    {
        push ebx
        push esi
        mov ebx, ecx
        mov esi, dword ptr ds : [ebx+0xE0]
        push edi
        mov edi, dword ptr ds : [esi+4]
        push 0xC
        call public_6fa912a
        add esp, 4
        test edi, edi
        mov dword ptr ds : [eax], esi
        jne public_6f738e0
        mov edi, eax
        public_6f738e0 : nop
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov esi, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ecx], eax
        add eax, 8
        test eax, eax
        je public_6f738f8
        mov dword ptr ds : [eax], esi
        public_6f738f8 : nop
        mov eax, dword ptr ds : [ebx+0xE4]
        inc eax
        push ebx
        mov ecx, esi
        mov dword ptr ds : [ebx+0xE4], eax
        call public_6eb7090
        mov edx, dword ptr ds : [esi+4]
        lea eax, ss:[esp+0x14]
        push eax
        lea ecx, ss:[esp+0x14]
        push ecx
        mov dword ptr ss : [esp+0x18], edx
        call dword ptr ds : [public_6fb3574]
        add esp, 8
        pop edi
        pop esi
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6f738c0)
    }
}

#undef public_6f738e0
#undef public_6f738f8
