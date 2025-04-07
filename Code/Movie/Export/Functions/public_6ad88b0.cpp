#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ad596d);
CLANG_FORWARD_PROC_SYMBOL(public_6ad88b0);

#define public_6ad88f6 _public_6ad88f6
#define public_6ad88fd _public_6ad88fd

PROC_DECLARE(0x6ad88b0, internal_6ad88b0, public_6ad88b0);
extern "C" NAKED register_t __cdecl internal_6ad88b0()
{
    __asm
    {
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        xor ebx, ebx
        push edi
        mov eax, dword ptr ds : [esi+0xC]
        mov ecx, eax
        and ecx, 3
        cmp cl, 2
        jne public_6ad88fd
        test ax, 0x108
        je public_6ad88fd
        mov eax, dword ptr ds : [esi+8]
        mov edi, dword ptr ds : [esi]
        sub edi, eax
        test edi, edi
        jle public_6ad88fd
        push edi
        push eax
        push dword ptr ds : [esi+0x10]
        call public_6ad596d
        add esp, 0xC
        cmp eax, edi
        jne public_6ad88f6
        mov eax, dword ptr ds : [esi+0xC]
        test al, 0x80
        je public_6ad88fd
        and al, 0xFD
        mov dword ptr ds : [esi+0xC], eax
        jmp public_6ad88fd
        public_6ad88f6 : nop
        or dword ptr ds : [esi+0xC], 0x20
        or ebx, 0xFFFFFFFF
        public_6ad88fd : nop
        mov eax, dword ptr ds : [esi+8]
        and dword ptr ds : [esi+4], 0
        mov dword ptr ds : [esi], eax
        pop edi
        mov eax, ebx
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6ad88b0)
    }
}

#undef public_6ad88f6
#undef public_6ad88fd
