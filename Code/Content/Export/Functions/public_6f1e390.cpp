#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f1e390);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6f1e3ae _public_6f1e3ae
#define public_6f1e3c8 _public_6f1e3c8

PROC_DECLARE(0x6f1e390, internal_6f1e390, public_6f1e390);
extern "C" NAKED register_t __cdecl internal_6f1e390()
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
        call public_6fa912a
        add esp, 4
        test edi, edi
        mov dword ptr ds : [eax], esi
        jne public_6f1e3ae
        mov edi, eax
        public_6f1e3ae : nop
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        lea ecx, ds:[eax+8]
        test ecx, ecx
        je public_6f1e3c8
        mov edx, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ds : [edx]
        mov dword ptr ds : [ecx], edx
        public_6f1e3c8 : nop
        inc dword ptr ds : [ebx+8]
        mov ecx, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        mov dword ptr ds : [ecx], eax
        mov eax, ecx
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6f1e390)
    }
}

#undef public_6f1e3ae
#undef public_6f1e3c8
