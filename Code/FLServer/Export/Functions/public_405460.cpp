#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_405460);
CLANG_FORWARD_PROC_SYMBOL(public_405b90);
CLANG_FORWARD_PROC_SYMBOL(public_418a9e);

#define public_4054ba _public_4054ba
#define public_4054d8 _public_4054d8

PROC_DECLARE(0x405460, internal_405460, public_405460);
extern "C" NAKED register_t __cdecl internal_405460()
{
    __asm
    {
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0xC]
        mov al, byte ptr ss : [ebp+0x21]
        test al, al
        push edi
        mov edi, ecx
        mov ebx, dword ptr ds : [edi+8]
        jne public_4054d8
        mov al, byte ptr ss : [ebp+0x20]
        push esi
        push 0x24
        mov byte ptr ss : [esp+0x18], al
        call public_418a9e
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dl, byte ptr ss : [esp+0x18]
        mov esi, eax
        lea eax, ss:[ebp+0xC]
        mov dword ptr ds : [esi+4], ecx
        push eax
        lea ecx, ds:[esi+0xC]
        push ecx
        mov byte ptr ds : [esi+0x20], dl
        mov byte ptr ds : [esi+0x21], 0
        call public_405b90
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ds : [esi], edx
        mov eax, dword ptr ds : [edi+8]
        mov dword ptr ds : [esi+8], eax
        mov eax, dword ptr ds : [edi+8]
        add esp, 0xC
        cmp ebx, eax
        jne public_4054ba
        mov ebx, esi
        public_4054ba : nop
        mov ecx, dword ptr ss : [ebp]
        push esi
        push ecx
        mov ecx, edi
        call public_405460
        mov dword ptr ds : [esi], eax
        mov edx, dword ptr ss : [ebp+8]
        push esi
        push edx
        mov ecx, edi
        call public_405460
        mov dword ptr ds : [esi+8], eax
        pop esi
        public_4054d8 : nop
        pop edi
        pop ebp
        mov eax, ebx
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x405460)
    }
}

#undef public_4054ba
#undef public_4054d8
