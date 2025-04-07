#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce4ab0);
CLANG_FORWARD_PROC_SYMBOL(public_6ce5a90);
CLANG_FORWARD_PROC_SYMBOL(public_6d60012);

#define public_6ce4b0a _public_6ce4b0a
#define public_6ce4b28 _public_6ce4b28

PROC_DECLARE(0x6ce4ab0, internal_6ce4ab0, public_6ce4ab0);
extern "C" NAKED register_t __cdecl internal_6ce4ab0()
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
        jne public_6ce4b28
        mov al, byte ptr ss : [ebp+0x20]
        push esi
        push 0x24
        mov byte ptr ss : [esp+0x18], al
        call public_6d60012
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
        call public_6ce5a90
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ds : [esi], edx
        mov eax, dword ptr ds : [edi+8]
        mov dword ptr ds : [esi+8], eax
        mov eax, dword ptr ds : [edi+8]
        add esp, 0xC
        cmp ebx, eax
        jne public_6ce4b0a
        mov ebx, esi
        public_6ce4b0a : nop
        mov ecx, dword ptr ss : [ebp]
        push esi
        push ecx
        mov ecx, edi
        call public_6ce4ab0
        mov dword ptr ds : [esi], eax
        mov edx, dword ptr ss : [ebp+8]
        push esi
        push edx
        mov ecx, edi
        call public_6ce4ab0
        mov dword ptr ds : [esi+8], eax
        pop esi
        public_6ce4b28 : nop
        pop edi
        pop ebp
        mov eax, ebx
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6ce4ab0)
    }
}

#undef public_6ce4b0a
#undef public_6ce4b28
