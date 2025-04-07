#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d91ca0);
CLANG_FORWARD_PROC_SYMBOL(public_6db1f8a);

#define public_6d91cb6 _public_6d91cb6
#define public_6d91cf2 _public_6d91cf2
#define public_6d91d06 _public_6d91d06
#define public_6d91d0d _public_6d91d0d
#define public_6d91d1b _public_6d91d1b

PROC_DECLARE(0x6d91ca0, internal_6d91ca0, public_6d91ca0);
extern "C" NAKED register_t __cdecl internal_6d91ca0()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [eax+4]
        push ebx
        mov ebx, dword ptr ds : [eax]
        cmp ebx, eax
        mov dword ptr ss : [esp+4], ecx
        je public_6d91d1b
        push ebp
        push esi
        push edi
        public_6d91cb6 : nop
        mov eax, dword ptr ds : [ebx+8]
        test eax, eax
        je public_6d91d0d
        push 8
        call public_6db1f8a
        mov ecx, dword ptr ds : [ebx+8]
        mov edx, dword ptr ds : [ecx+4]
        mov edi, eax
        mov dword ptr ds : [edi+4], edx
        mov eax, dword ptr ds : [ebx+8]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [edi], ecx
        mov esi, dword ptr ds : [edx+0x2C]
        mov ebp, dword ptr ds : [esi+4]
        push 0xC
        call public_6db1f8a
        add esp, 8
        test ebp, ebp
        mov dword ptr ds : [eax], esi
        jne public_6d91cf2
        mov ebp, eax
        public_6d91cf2 : nop
        mov dword ptr ds : [eax+4], ebp
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        add eax, 8
        test eax, eax
        je public_6d91d06
        mov dword ptr ds : [eax], edi
        public_6d91d06 : nop
        mov eax, dword ptr ss : [esp+0x10]
        inc dword ptr ds : [eax+0x30]
        public_6d91d0d : nop
        mov edx, dword ptr ss : [esp+0x18]
        mov ebx, dword ptr ds : [ebx]
        cmp ebx, dword ptr ds : [edx+4]
        jne public_6d91cb6
        pop edi
        pop esi
        pop ebp
        public_6d91d1b : nop
        pop ebx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x6d91ca0)
    }
}

#undef public_6d91cb6
#undef public_6d91cf2
#undef public_6d91d06
#undef public_6d91d0d
#undef public_6d91d1b
