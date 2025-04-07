#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62a78e0);
CLANG_FORWARD_PROC_SYMBOL(public_62a7fc0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_62a793a _public_62a793a
#define public_62a7958 _public_62a7958

PROC_DECLARE(0x62a78e0, internal_62a78e0, public_62a78e0);
extern "C" NAKED register_t __cdecl internal_62a78e0()
{
    __asm
    {
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0xC]
        mov al, byte ptr ss : [ebp+0x69]
        test al, al
        push edi
        mov edi, ecx
        mov ebx, dword ptr ds : [edi+8]
        jne public_62a7958
        mov al, byte ptr ss : [ebp+0x68]
        push esi
        push 0x6C
        mov byte ptr ss : [esp+0x18], al
        call public_6391d9c
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dl, byte ptr ss : [esp+0x18]
        mov esi, eax
        lea eax, ss:[ebp+0xC]
        mov dword ptr ds : [esi+4], ecx
        push eax
        lea ecx, ds:[esi+0xC]
        push ecx
        mov byte ptr ds : [esi+0x68], dl
        mov byte ptr ds : [esi+0x69], 0
        call public_62a7fc0
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ds : [esi], edx
        mov eax, dword ptr ds : [edi+8]
        mov dword ptr ds : [esi+8], eax
        mov eax, dword ptr ds : [edi+8]
        add esp, 0xC
        cmp ebx, eax
        jne public_62a793a
        mov ebx, esi
        public_62a793a : nop
        mov ecx, dword ptr ss : [ebp]
        push esi
        push ecx
        mov ecx, edi
        call public_62a78e0
        mov dword ptr ds : [esi], eax
        mov edx, dword ptr ss : [ebp+8]
        push esi
        push edx
        mov ecx, edi
        call public_62a78e0
        mov dword ptr ds : [esi+8], eax
        pop esi
        public_62a7958 : nop
        pop edi
        pop ebp
        mov eax, ebx
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x62a78e0)
    }
}

#undef public_62a793a
#undef public_62a7958
