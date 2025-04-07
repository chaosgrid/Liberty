#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eadac0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6eadade _public_6eadade
#define public_6eadb04 _public_6eadb04

PROC_DECLARE(0x6eadac0, internal_6eadac0, public_6eadac0);
extern "C" NAKED register_t __cdecl internal_6eadac0()
{
    __asm
    {
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        push edi
        mov edi, dword ptr ds : [esi+4]
        push 0x14
        mov ebx, ecx
        call public_6fa912a
        add esp, 4
        test edi, edi
        mov dword ptr ds : [eax], esi
        jne public_6eadade
        mov edi, eax
        public_6eadade : nop
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        lea ecx, ds:[eax+8]
        test ecx, ecx
        je public_6eadb04
        mov edx, dword ptr ss : [esp+0x18]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+4]
        mov dword ptr ds : [ecx+4], esi
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx+8], edx
        public_6eadb04 : nop
        inc dword ptr ds : [ebx+8]
        mov ecx, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        mov dword ptr ds : [ecx], eax
        mov eax, ecx
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6eadac0)
    }
}

#undef public_6eadade
#undef public_6eadb04
