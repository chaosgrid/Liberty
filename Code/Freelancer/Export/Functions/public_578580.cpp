#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_578580);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_57859e _public_57859e
#define public_5785be _public_5785be

PROC_DECLARE(0x578580, internal_578580, public_578580);
extern "C" NAKED register_t __cdecl internal_578580()
{
    __asm
    {
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        push edi
        mov edi, dword ptr ds : [esi+4]
        push 0x10
        mov ebx, ecx
        call public_5b7e84
        add esp, 4
        test edi, edi
        mov dword ptr ds : [eax], esi
        jne public_57859e
        mov edi, eax
        public_57859e : nop
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        lea ecx, ds:[eax+8]
        test ecx, ecx
        je public_5785be
        mov edx, dword ptr ss : [esp+0x18]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx], esi
        mov edx, dword ptr ds : [edx+4]
        mov dword ptr ds : [ecx+4], edx
        public_5785be : nop
        inc dword ptr ds : [ebx+8]
        mov ecx, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        mov dword ptr ds : [ecx], eax
        mov eax, ecx
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x578580)
    }
}

#undef public_57859e
#undef public_5785be
