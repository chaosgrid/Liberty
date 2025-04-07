#include "ImeUi-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_67169dc);

#define public_6711f29 _public_6711f29
#define public_6711f3e _public_6711f3e
#define public_6711f55 _public_6711f55
#define public_6711f6a _public_6711f6a

PROC_DECLARE(0x6711ef0, internal_6711ef0, public_6711ef0);
extern "C" NAKED register_t __cdecl internal_6711ef0()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x10]
        push esi
        mov esi, ecx
        push edi
        mov al, byte ptr ss : [ebp+4]
        push 0xC
        mov byte ptr ds : [esi+4], al
        call public_67169dc
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+0xC], 0
        mov ecx, dword ptr ss : [ebp+8]
        mov edi, dword ptr ds : [eax]
        add esp, 4
        mov dword ptr ss : [esp+0x10], ecx
        mov ebx, dword ptr ds : [ecx]
        cmp ebx, ecx
        je public_6711f6a
        public_6711f29 : nop
        mov ebp, dword ptr ds : [edi+4]
        push 0xC
        call public_67169dc
        add esp, 4
        mov dword ptr ds : [eax], edi
        test ebp, ebp
        jne public_6711f3e
        mov ebp, eax
        public_6711f3e : nop
        mov dword ptr ds : [eax+4], ebp
        mov dword ptr ds : [edi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        add eax, 8
        test eax, eax
        je public_6711f55
        mov edx, dword ptr ds : [ebx+8]
        mov dword ptr ds : [eax], edx
        public_6711f55 : nop
        mov ecx, dword ptr ds : [esi+0xC]
        mov eax, dword ptr ss : [esp+0x10]
        inc ecx
        mov dword ptr ds : [esi+0xC], ecx
        mov ebx, dword ptr ds : [ebx]
        cmp ebx, eax
        jne public_6711f29
        mov ebp, dword ptr ss : [esp+0x18]
        public_6711f6a : nop
        mov eax, dword ptr ss : [ebp+0x10]
        pop edi
        mov dword ptr ds : [esi+0x10], eax
        mov cl, byte ptr ss : [ebp+0x14]
        mov byte ptr ds : [esi+0x14], cl
        mov dl, byte ptr ss : [ebp+0x15]
        mov byte ptr ds : [esi+0x15], dl
        mov al, byte ptr ss : [ebp+0x16]
        mov byte ptr ds : [esi+0x16], al
        mov cl, byte ptr ss : [ebp+0x17]
        mov byte ptr ds : [esi+0x17], cl
        mov dword ptr ds : [esi], offset public_6717158
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x6711ef0)
    }
}

#undef public_6711f29
#undef public_6711f3e
#undef public_6711f55
#undef public_6711f6a
