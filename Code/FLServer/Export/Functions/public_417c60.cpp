#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_417c60);
CLANG_FORWARD_PROC_SYMBOL(public_417dc0);
CLANG_FORWARD_PROC_SYMBOL(public_418978);

#define public_417c72 _public_417c72
#define public_417c99 _public_417c99

PROC_DECLARE(0x417c60, internal_417c60, public_417c60);
extern "C" NAKED register_t __cdecl internal_417c60()
{
    __asm
    {
        push ebx
        push esi
        mov ebx, ecx
        mov eax, dword ptr ds : [ebx+8]
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        cmp edi, eax
        mov esi, edi
        je public_417c99
        public_417c72 : nop
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov ecx, ebx
        call public_417c60
        mov esi, dword ptr ds : [esi]
        lea ecx, ds:[edi+0xC]
        call public_417dc0
        push edi
        call public_418978
        mov eax, dword ptr ds : [ebx+8]
        add esp, 4
        cmp esi, eax
        mov edi, esi
        jne public_417c72
        public_417c99 : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x417c60)
    }
}

#undef public_417c72
#undef public_417c99
