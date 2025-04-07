#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d91d20);
CLANG_FORWARD_PROC_SYMBOL(public_6db1f8a);

#define public_6d91d32 _public_6d91d32
#define public_6d91d6e _public_6d91d6e
#define public_6d91d82 _public_6d91d82
#define public_6d91d8d _public_6d91d8d
#define public_6d91d97 _public_6d91d97

PROC_DECLARE(0x6d91d20, internal_6d91d20, public_6d91d20);
extern "C" NAKED register_t __cdecl internal_6d91d20()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ds : [ecx+0x2C]
        push ebx
        mov ebx, dword ptr ds : [eax]
        cmp ebx, eax
        mov dword ptr ss : [esp+4], ecx
        je public_6d91d97
        push ebp
        push esi
        push edi
        public_6d91d32 : nop
        mov eax, dword ptr ds : [ebx+8]
        test eax, eax
        je public_6d91d8d
        push 8
        call public_6db1f8a
        mov edi, eax
        mov eax, dword ptr ds : [ebx+8]
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edi+4], ecx
        mov edx, dword ptr ds : [ebx+8]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [edi], eax
        mov esi, dword ptr ds : [ecx+4]
        mov ebp, dword ptr ds : [esi+4]
        push 0xC
        call public_6db1f8a
        add esp, 8
        test ebp, ebp
        mov dword ptr ds : [eax], esi
        jne public_6d91d6e
        mov ebp, eax
        public_6d91d6e : nop
        mov dword ptr ds : [eax+4], ebp
        mov dword ptr ds : [esi+4], eax
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx], eax
        add eax, 8
        test eax, eax
        je public_6d91d82
        mov dword ptr ds : [eax], edi
        public_6d91d82 : nop
        mov eax, dword ptr ss : [esp+0x18]
        inc dword ptr ds : [eax+8]
        mov ecx, dword ptr ss : [esp+0x10]
        public_6d91d8d : nop
        mov ebx, dword ptr ds : [ebx]
        cmp ebx, dword ptr ds : [ecx+0x2C]
        jne public_6d91d32
        pop edi
        pop esi
        pop ebp
        public_6d91d97 : nop
        pop ebx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x6d91d20)
    }
}

#undef public_6d91d32
#undef public_6d91d6e
#undef public_6d91d82
#undef public_6d91d8d
#undef public_6d91d97
