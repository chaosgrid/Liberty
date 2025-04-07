#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f68f20);
CLANG_FORWARD_PROC_SYMBOL(public_6f6a6a0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6f68f3d _public_6f68f3d

PROC_DECLARE(0x6f68f20, internal_6f68f20, public_6f68f20);
extern "C" NAKED register_t __cdecl internal_6f68f20()
{
    __asm
    {
        push ebx
        push esi
        mov esi, ecx
        push edi
        mov edi, dword ptr ds : [esi+4]
        mov ebx, dword ptr ds : [edi+4]
        push 0x14
        call public_6fa912a
        add esp, 4
        test ebx, ebx
        mov dword ptr ds : [eax], edi
        jne public_6f68f3d
        mov ebx, eax
        public_6f68f3d : nop
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [eax+4], ebx
        mov dword ptr ds : [edi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        push edx
        add eax, 8
        push eax
        call public_6f6a6a0
        mov eax, dword ptr ds : [esi+8]
        add esp, 8
        inc eax
        pop edi
        mov dword ptr ds : [esi+8], eax
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6f68f20)
    }
}

#undef public_6f68f3d
