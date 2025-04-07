#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bde900);
CLANG_FORWARD_PROC_SYMBOL(public_6bde990);
CLANG_FORWARD_PROC_SYMBOL(public_6c09d26);

#define public_6bde921 _public_6bde921

PROC_DECLARE(0x6bde900, internal_6bde900, public_6bde900);
extern "C" NAKED register_t __cdecl internal_6bde900()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        push ebp
        mov ebp, dword ptr ds : [ebx+4]
        push esi
        push edi
        push 0x50
        mov edi, ecx
        call public_6c09d26
        add esp, 4
        test ebp, ebp
        mov esi, eax
        mov dword ptr ds : [esi], ebx
        jne public_6bde921
        mov ebp, esi
        public_6bde921 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [ebx+4], esi
        mov eax, dword ptr ds : [esi+4]
        push ecx
        lea edx, ds:[esi+8]
        push edx
        mov dword ptr ds : [eax], esi
        call public_6bde990
        mov eax, dword ptr ds : [edi+8]
        add esp, 8
        inc eax
        mov dword ptr ds : [edi+8], eax
        mov eax, dword ptr ss : [esp+0x14]
        pop edi
        mov dword ptr ds : [eax], esi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6bde900)
    }
}

#undef public_6bde921
