#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c278b0);
CLANG_FORWARD_PROC_SYMBOL(public_6c34ea0);
CLANG_FORWARD_PROC_SYMBOL(public_6c34eac);

#define public_6c278fb _public_6c278fb

PROC_DECLARE(0x6c278b0, internal_6c278b0, public_6c278b0);
extern "C" NAKED register_t __cdecl internal_6c278b0()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        mov ebx, ecx
        mov eax, dword ptr ds : [ebx+0x18]
        push edi
        push eax
        call public_6c34ea0
        mov ebp, dword ptr ss : [esp+0x18]
        xor edi, edi
        add esp, 4
        cmp ebp, edi
        mov dword ptr ds : [ebx+0x18], edi
        je public_6c278fb
        lea esi, ss:[ebp+ebp]
        push esi
        call public_6c34eac
        add esp, 4
        cmp eax, edi
        mov dword ptr ds : [ebx+0x18], eax
        je public_6c278fb
        mov ecx, esi
        mov esi, dword ptr ss : [esp+0x18]
        mov edx, ecx
        shr ecx, 2
        mov edi, eax
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        xor edi, edi
        public_6c278fb : nop
        mov dword ptr ds : [ebx+0x10], edi
        mov dword ptr ds : [ebx+0x14], edi
        pop edi
        pop esi
        mov dword ptr ds : [ebx+0x1C], ebp
        pop ebp
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6c278b0)
    }
}

#undef public_6c278fb
