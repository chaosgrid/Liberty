#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce4270);
CLANG_FORWARD_PROC_SYMBOL(public_6d60012);

#define public_6ce42b5 _public_6ce42b5
#define public_6ce42c7 _public_6ce42c7
#define public_6ce42e5 _public_6ce42e5

PROC_DECLARE(0x6ce4270, internal_6ce4270, public_6ce4270);
extern "C" NAKED register_t __cdecl internal_6ce4270()
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
        jne public_6ce42e5
        mov al, byte ptr ss : [ebp+0x10]
        push esi
        push 0x14
        mov byte ptr ss : [esp+0x18], al
        call public_6d60012
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dl, byte ptr ss : [esp+0x18]
        mov esi, eax
        lea eax, ds:[esi+0xC]
        add esp, 4
        test eax, eax
        mov dword ptr ds : [esi+4], ecx
        mov byte ptr ds : [esi+0x10], dl
        mov byte ptr ds : [esi+0x11], 0
        je public_6ce42b5
        mov ecx, dword ptr ss : [ebp+0xC]
        mov dword ptr ds : [eax], ecx
        public_6ce42b5 : nop
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ds : [esi], edx
        mov eax, dword ptr ds : [edi+8]
        mov dword ptr ds : [esi+8], eax
        cmp ebx, dword ptr ds : [edi+8]
        jne public_6ce42c7
        mov ebx, esi
        public_6ce42c7 : nop
        mov ecx, dword ptr ss : [ebp]
        push esi
        push ecx
        mov ecx, edi
        call public_6ce4270
        mov dword ptr ds : [esi], eax
        mov edx, dword ptr ss : [ebp+8]
        push esi
        push edx
        mov ecx, edi
        call public_6ce4270
        mov dword ptr ds : [esi+8], eax
        pop esi
        public_6ce42e5 : nop
        pop edi
        pop ebp
        mov eax, ebx
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6ce4270)
    }
}

#undef public_6ce42b5
#undef public_6ce42c7
#undef public_6ce42e5
