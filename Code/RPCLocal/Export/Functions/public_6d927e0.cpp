#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d927e0);
CLANG_FORWARD_PROC_SYMBOL(public_6db1f8a);

#define public_6d927f2 _public_6d927f2
#define public_6d9282e _public_6d9282e
#define public_6d92842 _public_6d92842
#define public_6d9284d _public_6d9284d
#define public_6d92857 _public_6d92857

PROC_DECLARE(0x6d927e0, internal_6d927e0, public_6d927e0);
extern "C" NAKED register_t __cdecl internal_6d927e0()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ds : [ecx+0x4C]
        push ebx
        mov ebx, dword ptr ds : [eax]
        cmp ebx, eax
        mov dword ptr ss : [esp+4], ecx
        je public_6d92857
        push ebp
        push esi
        push edi
        public_6d927f2 : nop
        mov eax, dword ptr ds : [ebx+8]
        test eax, eax
        je public_6d9284d
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
        jne public_6d9282e
        mov ebp, eax
        public_6d9282e : nop
        mov dword ptr ds : [eax+4], ebp
        mov dword ptr ds : [esi+4], eax
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx], eax
        add eax, 8
        test eax, eax
        je public_6d92842
        mov dword ptr ds : [eax], edi
        public_6d92842 : nop
        mov eax, dword ptr ss : [esp+0x18]
        inc dword ptr ds : [eax+8]
        mov ecx, dword ptr ss : [esp+0x10]
        public_6d9284d : nop
        mov ebx, dword ptr ds : [ebx]
        cmp ebx, dword ptr ds : [ecx+0x4C]
        jne public_6d927f2
        pop edi
        pop esi
        pop ebp
        public_6d92857 : nop
        pop ebx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x6d927e0)
    }
}

#undef public_6d927f2
#undef public_6d9282e
#undef public_6d92842
#undef public_6d9284d
#undef public_6d92857
