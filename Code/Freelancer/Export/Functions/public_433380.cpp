#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_433380);
CLANG_FORWARD_PROC_SYMBOL(public_433d50);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_4333da _public_4333da
#define public_4333f8 _public_4333f8

PROC_DECLARE(0x433380, internal_433380, public_433380);
extern "C" NAKED register_t __cdecl internal_433380()
{
    __asm
    {
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0xC]
        mov al, byte ptr ss : [ebp+0x25]
        test al, al
        push edi
        mov edi, ecx
        mov ebx, dword ptr ds : [edi+8]
        jne public_4333f8
        mov al, byte ptr ss : [ebp+0x24]
        push esi
        push 0x28
        mov byte ptr ss : [esp+0x18], al
        call public_5b7e84
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dl, byte ptr ss : [esp+0x18]
        mov esi, eax
        lea eax, ss:[ebp+0xC]
        mov dword ptr ds : [esi+4], ecx
        push eax
        lea ecx, ds:[esi+0xC]
        push ecx
        mov byte ptr ds : [esi+0x24], dl
        mov byte ptr ds : [esi+0x25], 0
        call public_433d50
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ds : [esi], edx
        mov eax, dword ptr ds : [edi+8]
        mov dword ptr ds : [esi+8], eax
        mov eax, dword ptr ds : [edi+8]
        add esp, 0xC
        cmp ebx, eax
        jne public_4333da
        mov ebx, esi
        public_4333da : nop
        mov ecx, dword ptr ss : [ebp]
        push esi
        push ecx
        mov ecx, edi
        call public_433380
        mov dword ptr ds : [esi], eax
        mov edx, dword ptr ss : [ebp+8]
        push esi
        push edx
        mov ecx, edi
        call public_433380
        mov dword ptr ds : [esi+8], eax
        pop esi
        public_4333f8 : nop
        pop edi
        pop ebp
        mov eax, ebx
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x433380)
    }
}

#undef public_4333da
#undef public_4333f8
