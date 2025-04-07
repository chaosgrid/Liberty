#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d0c840);
CLANG_FORWARD_PROC_SYMBOL(public_6d0d6e0);

#define public_6d0d720 _public_6d0d720

PROC_DECLARE(0x6d0d6e0, internal_6d0d6e0, public_6d0d6e0);
extern "C" NAKED register_t __cdecl internal_6d0d6e0()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_6d0c840
        mov esi, eax
        test esi, esi
        je public_6d0d720
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x160]
        test al, al
        jne public_6d0d720
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x19C]
        test al, al
        jne public_6d0d720
        mov eax, dword ptr ds : [edi]
        mov edx, dword ptr ds : [esi]
        push eax
        push 1
        mov ecx, esi
        call dword ptr ds : [edx+0x158]
        public_6d0d720 : nop
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6d0d6e0)
    }
}

#undef public_6d0d720
