#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b44b40);
CLANG_FORWARD_PROC_SYMBOL(public_6b44c60);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a134);

#define public_6b44b5d _public_6b44b5d

PROC_DECLARE(0x6b44b40, internal_6b44b40, public_6b44b40);
extern "C" NAKED register_t __cdecl internal_6b44b40()
{
    __asm
    {
        push ebx
        push esi
        mov esi, ecx
        push edi
        mov edi, dword ptr ds : [esi+0x2C]
        mov ebx, dword ptr ds : [edi+4]
        push 0x50
        call public_6b6a134
        add esp, 4
        test ebx, ebx
        mov dword ptr ds : [eax], edi
        jne public_6b44b5d
        mov ebx, eax
        public_6b44b5d : nop
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [eax+4], ebx
        mov dword ptr ds : [edi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        push edx
        add eax, 8
        push eax
        call public_6b44c60
        mov eax, dword ptr ds : [esi+0x30]
        add esp, 8
        inc eax
        pop edi
        mov dword ptr ds : [esi+0x30], eax
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6b44b40)
    }
}

#undef public_6b44b5d
