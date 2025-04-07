#include "DALib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65c6a66);

#define public_65c2cb0 _public_65c2cb0
#define public_65c2cc5 _public_65c2cc5
#define public_65c2cdc _public_65c2cdc
#define public_65c2cf1 _public_65c2cf1

PROC_DECLARE(0x65c2c70, internal_65c2c70, public_65c2c70);
extern "C" NAKED register_t __cdecl internal_65c2c70()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x10]
        mov al, byte ptr ss : [ebp+4]
        push esi
        push edi
        mov ebx, ecx
        push 0xC
        mov byte ptr ds : [ebx+4], al
        call public_65c6a66
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [ebx+8], eax
        mov dword ptr ds : [ebx+0xC], 0
        mov ecx, dword ptr ss : [ebp+8]
        mov edi, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [eax]
        add esp, 4
        cmp edi, ecx
        mov dword ptr ss : [esp+0x10], ecx
        je public_65c2cf1
        lea esp, ss:[esp]
        public_65c2cb0 : nop
        mov ebp, dword ptr ds : [esi+4]
        push 0xC
        call public_65c6a66
        add esp, 4
        test ebp, ebp
        mov dword ptr ds : [eax], esi
        jne public_65c2cc5
        mov ebp, eax
        public_65c2cc5 : nop
        mov dword ptr ds : [eax+4], ebp
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        add eax, 8
        test eax, eax
        je public_65c2cdc
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ds : [eax], edx
        public_65c2cdc : nop
        mov ecx, dword ptr ds : [ebx+0xC]
        mov eax, dword ptr ss : [esp+0x10]
        inc ecx
        mov dword ptr ds : [ebx+0xC], ecx
        mov edi, dword ptr ds : [edi]
        cmp edi, eax
        jne public_65c2cb0
        mov ebp, dword ptr ss : [esp+0x18]
        public_65c2cf1 : nop
        lea esi, ss:[ebp+0x10]
        lea edi, ds:[ebx+0x10]
        mov ecx, 6
        rep movsd
        mov eax, dword ptr ss : [ebp+0x28]
        pop edi
        pop esi
        mov dword ptr ds : [ebx+0x28], eax
        pop ebp
        mov dword ptr ds : [ebx], offset public_65c74b4
        mov eax, ebx
        pop ebx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x65c2c70)
    }
}

#undef public_65c2cb0
#undef public_65c2cc5
#undef public_65c2cdc
#undef public_65c2cf1
