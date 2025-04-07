#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d59e10);
CLANG_FORWARD_PROC_SYMBOL(public_6d60012);

#define public_6d59e5b _public_6d59e5b
#define public_6d59e6d _public_6d59e6d
#define public_6d59e8b _public_6d59e8b

PROC_DECLARE(0x6d59e10, internal_6d59e10, public_6d59e10);
extern "C" NAKED register_t __cdecl internal_6d59e10()
{
    __asm
    {
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0xC]
        mov al, byte ptr ss : [ebp+0x15]
        test al, al
        push edi
        mov edi, ecx
        mov ebx, dword ptr ds : [edi+8]
        jne public_6d59e8b
        mov al, byte ptr ss : [ebp+0x14]
        push esi
        push 0x18
        mov byte ptr ss : [esp+0x18], al
        call public_6d60012
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dl, byte ptr ss : [esp+0x18]
        mov esi, eax
        lea eax, ds:[esi+0xC]
        add esp, 4
        test eax, eax
        mov dword ptr ds : [esi+4], ecx
        mov byte ptr ds : [esi+0x14], dl
        mov byte ptr ds : [esi+0x15], 0
        je public_6d59e5b
        mov ecx, dword ptr ss : [ebp+0xC]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ss : [ebp+0x10]
        mov dword ptr ds : [eax+4], edx
        public_6d59e5b : nop
        mov eax, dword ptr ds : [edi+8]
        mov dword ptr ds : [esi], eax
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ds : [esi+8], ecx
        cmp ebx, dword ptr ds : [edi+8]
        jne public_6d59e6d
        mov ebx, esi
        public_6d59e6d : nop
        mov edx, dword ptr ss : [ebp]
        push esi
        push edx
        mov ecx, edi
        call public_6d59e10
        mov dword ptr ds : [esi], eax
        mov eax, dword ptr ss : [ebp+8]
        push esi
        push eax
        mov ecx, edi
        call public_6d59e10
        mov dword ptr ds : [esi+8], eax
        pop esi
        public_6d59e8b : nop
        pop edi
        pop ebp
        mov eax, ebx
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6d59e10)
    }
}

#undef public_6d59e5b
#undef public_6d59e6d
#undef public_6d59e8b
