#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_6281f2f _public_6281f2f
#define public_6281f55 _public_6281f55

PROC_DECLARE(0x6281f10, internal_6281f10, public_6281f10);
extern "C" NAKED register_t __cdecl internal_6281f10()
{
    __asm
    {
        push ebx
        push esi
        mov ebx, ecx
        mov eax, dword ptr ds : [ebx+4]
        mov esi, dword ptr ds : [eax]
        push edi
        mov edi, dword ptr ds : [esi+4]
        push 0x14
        call public_6391d9c
        add esp, 4
        test edi, edi
        mov dword ptr ds : [eax], esi
        jne public_6281f2f
        mov edi, eax
        public_6281f2f : nop
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        add eax, 8
        test eax, eax
        je public_6281f55
        mov edx, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [edx]
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ds : [edx+4]
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ds : [eax+8], edx
        public_6281f55 : nop
        mov eax, dword ptr ds : [ebx+8]
        pop edi
        inc eax
        pop esi
        mov dword ptr ds : [ebx+8], eax
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6281f10)
    }
}

#undef public_6281f2f
#undef public_6281f55
