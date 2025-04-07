#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_404f60);
CLANG_FORWARD_PROC_SYMBOL(public_405a40);
CLANG_FORWARD_PROC_SYMBOL(public_418a9e);

#define public_404fba _public_404fba
#define public_404fd8 _public_404fd8

PROC_DECLARE(0x404f60, internal_404f60, public_404f60);
extern "C" NAKED register_t __cdecl internal_404f60()
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
        jne public_404fd8
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
        call public_405a40
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ds : [esi], edx
        mov eax, dword ptr ds : [edi+8]
        mov dword ptr ds : [esi+8], eax
        mov eax, dword ptr ds : [edi+8]
        add esp, 0xC
        cmp ebx, eax
        jne public_404fba
        mov ebx, esi
        public_404fba : nop
        mov ecx, dword ptr ss : [ebp]
        push esi
        push ecx
        mov ecx, edi
        call public_404f60
        mov dword ptr ds : [esi], eax
        mov edx, dword ptr ss : [ebp+8]
        push esi
        push edx
        mov ecx, edi
        call public_404f60
        mov dword ptr ds : [esi+8], eax
        pop esi
        public_404fd8 : nop
        pop edi
        pop ebp
        mov eax, ebx
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x404f60)
    }
}

#undef public_404fba
#undef public_404fd8
