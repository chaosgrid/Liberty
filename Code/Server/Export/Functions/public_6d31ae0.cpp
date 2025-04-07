#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d1baa0);
CLANG_FORWARD_PROC_SYMBOL(public_6d31ae0);

#define public_6d31afd _public_6d31afd
#define public_6d31b19 _public_6d31b19

PROC_DECLARE(0x6d31ae0, internal_6d31ae0, public_6d31ae0);
extern "C" NAKED register_t __cdecl internal_6d31ae0()
{
    __asm
    {
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        push edi
        mov edi, dword ptr ds : [esi+4]
        mov ebx, ecx
        mov ecx, dword ptr ds : [ebx]
        push 0xC
        call public_6d1baa0
        test edi, edi
        mov dword ptr ds : [eax], esi
        jne public_6d31afd
        mov edi, eax
        public_6d31afd : nop
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        lea ecx, ds:[eax+8]
        test ecx, ecx
        je public_6d31b19
        mov edx, dword ptr ss : [esp+0x18]
        mov dx, word ptr ds : [edx]
        mov word ptr ds : [ecx], dx
        public_6d31b19 : nop
        inc dword ptr ds : [ebx+8]
        mov ecx, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        mov dword ptr ds : [ecx], eax
        mov eax, ecx
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6d31ae0)
    }
}

#undef public_6d31afd
#undef public_6d31b19
