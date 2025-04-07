#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f3cef0);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e9c);

#define public_6f3cf0e _public_6f3cf0e
#define public_6f3cf28 _public_6f3cf28

PROC_DECLARE(0x6f3cef0, internal_6f3cef0, public_6f3cef0);
extern "C" NAKED register_t __cdecl internal_6f3cef0()
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
        call public_6f57e9c
        add esp, 4
        test edi, edi
        mov dword ptr ds : [eax], esi
        jne public_6f3cf0e
        mov edi, eax
        public_6f3cf0e : nop
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        lea ecx, ds:[eax+8]
        test ecx, ecx
        je public_6f3cf28
        mov edx, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ds : [edx]
        mov dword ptr ds : [ecx], edx
        public_6f3cf28 : nop
        inc dword ptr ds : [ebx+8]
        mov ecx, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        mov dword ptr ds : [ecx], eax
        mov eax, ecx
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6f3cef0)
    }
}

#undef public_6f3cf0e
#undef public_6f3cf28
