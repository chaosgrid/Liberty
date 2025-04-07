#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d60012);

#define public_6ce3110 _public_6ce3110
#define public_6ce3125 _public_6ce3125
#define public_6ce313c _public_6ce313c
#define public_6ce3151 _public_6ce3151

PROC_DECLARE(0x6ce30d0, internal_6ce30d0, public_6ce30d0);
extern "C" NAKED register_t __cdecl internal_6ce30d0()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [ebp]
        push esi
        mov esi, ecx
        mov dword ptr ds : [esi], eax
        mov cl, byte ptr ss : [ebp+4]
        push edi
        push 0xC
        mov byte ptr ds : [esi+4], cl
        call public_6d60012
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+0xC], 0
        mov ecx, dword ptr ss : [ebp+8]
        mov ebx, dword ptr ds : [ecx]
        mov edi, dword ptr ds : [eax]
        add esp, 4
        cmp ebx, ecx
        mov dword ptr ss : [esp+0x10], ecx
        je public_6ce3151
        mov edi, edi
        public_6ce3110 : nop
        mov ebp, dword ptr ds : [edi+4]
        push 0xC
        call public_6d60012
        add esp, 4
        test ebp, ebp
        mov dword ptr ds : [eax], edi
        jne public_6ce3125
        mov ebp, eax
        public_6ce3125 : nop
        mov dword ptr ds : [eax+4], ebp
        mov dword ptr ds : [edi+4], eax
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx], eax
        add eax, 8
        test eax, eax
        je public_6ce313c
        mov ecx, dword ptr ds : [ebx+8]
        mov dword ptr ds : [eax], ecx
        public_6ce313c : nop
        mov ecx, dword ptr ds : [esi+0xC]
        mov eax, dword ptr ss : [esp+0x10]
        inc ecx
        mov dword ptr ds : [esi+0xC], ecx
        mov ebx, dword ptr ds : [ebx]
        cmp ebx, eax
        jne public_6ce3110
        mov ebp, dword ptr ss : [esp+0x18]
        public_6ce3151 : nop
        mov edx, dword ptr ss : [ebp+0x10]
        mov dword ptr ds : [esi+0x10], edx
        mov eax, dword ptr ss : [ebp+0x14]
        pop edi
        mov dword ptr ds : [esi+0x14], eax
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x6ce30d0)
    }
}

#undef public_6ce3110
#undef public_6ce3125
#undef public_6ce313c
#undef public_6ce3151
