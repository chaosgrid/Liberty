#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d8cad0);
CLANG_FORWARD_PROC_SYMBOL(public_6db1f8a);

#define public_6d8caee _public_6d8caee
#define public_6d8cb08 _public_6d8cb08

PROC_DECLARE(0x6d8cad0, internal_6d8cad0, public_6d8cad0);
extern "C" NAKED register_t __cdecl internal_6d8cad0()
{
    __asm
    {
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        push edi
        mov edi, dword ptr ds : [esi+4]
        push 0xC
        mov ebx, ecx
        call public_6db1f8a
        add esp, 4
        test edi, edi
        mov dword ptr ds : [eax], esi
        jne public_6d8caee
        mov edi, eax
        public_6d8caee : nop
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        lea ecx, ds:[eax+8]
        test ecx, ecx
        je public_6d8cb08
        mov edx, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ds : [edx]
        mov dword ptr ds : [ecx], edx
        public_6d8cb08 : nop
        inc dword ptr ds : [ebx+8]
        mov ecx, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        mov dword ptr ds : [ecx], eax
        mov eax, ecx
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6d8cad0)
    }
}

#undef public_6d8caee
#undef public_6d8cb08
