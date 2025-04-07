#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4049b0);
CLANG_FORWARD_PROC_SYMBOL(public_418a9e);

#define public_4049f5 _public_4049f5
#define public_404a07 _public_404a07
#define public_404a25 _public_404a25

PROC_DECLARE(0x4049b0, internal_4049b0, public_4049b0);
extern "C" NAKED register_t __cdecl internal_4049b0()
{
    __asm
    {
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0xC]
        mov al, byte ptr ss : [ebp+0x11]
        test al, al
        push edi
        mov edi, ecx
        mov ebx, dword ptr ds : [edi+8]
        jne public_404a25
        mov al, byte ptr ss : [ebp+0x10]
        push esi
        push 0x14
        mov byte ptr ss : [esp+0x18], al
        call public_418a9e
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dl, byte ptr ss : [esp+0x18]
        mov esi, eax
        lea eax, ds:[esi+0xC]
        add esp, 4
        test eax, eax
        mov dword ptr ds : [esi+4], ecx
        mov byte ptr ds : [esi+0x10], dl
        mov byte ptr ds : [esi+0x11], 0
        je public_4049f5
        mov ecx, dword ptr ss : [ebp+0xC]
        mov dword ptr ds : [eax], ecx
        public_4049f5 : nop
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ds : [esi], edx
        mov eax, dword ptr ds : [edi+8]
        mov dword ptr ds : [esi+8], eax
        cmp ebx, dword ptr ds : [edi+8]
        jne public_404a07
        mov ebx, esi
        public_404a07 : nop
        mov ecx, dword ptr ss : [ebp]
        push esi
        push ecx
        mov ecx, edi
        call public_4049b0
        mov dword ptr ds : [esi], eax
        mov edx, dword ptr ss : [ebp+8]
        push esi
        push edx
        mov ecx, edi
        call public_4049b0
        mov dword ptr ds : [esi+8], eax
        pop esi
        public_404a25 : nop
        pop edi
        pop ebp
        mov eax, ebx
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x4049b0)
    }
}

#undef public_4049f5
#undef public_404a07
#undef public_404a25
