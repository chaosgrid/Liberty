#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_431a30);
CLANG_FORWARD_PROC_SYMBOL(public_433a50);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_431a4d _public_431a4d

PROC_DECLARE(0x431a30, internal_431a30, public_431a30);
extern "C" NAKED register_t __cdecl internal_431a30()
{
    __asm
    {
        push ebx
        push esi
        mov esi, ecx
        push edi
        mov edi, dword ptr ds : [esi+4]
        mov ebx, dword ptr ds : [edi+4]
        push 0x18
        call public_5b7e84
        add esp, 4
        test ebx, ebx
        mov dword ptr ds : [eax], edi
        jne public_431a4d
        mov ebx, eax
        public_431a4d : nop
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [eax+4], ebx
        mov dword ptr ds : [edi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        push edx
        add eax, 8
        push eax
        call public_433a50
        mov eax, dword ptr ds : [esi+8]
        add esp, 8
        inc eax
        pop edi
        mov dword ptr ds : [esi+8], eax
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x431a30)
    }
}

#undef public_431a4d
