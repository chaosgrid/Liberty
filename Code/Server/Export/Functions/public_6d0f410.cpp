#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d0d4a0);
CLANG_FORWARD_PROC_SYMBOL(public_6d0f410);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);

#define public_6d0f422 _public_6d0f422
#define public_6d0f452 _public_6d0f452

PROC_DECLARE(0x6d0f410, internal_6d0f410, public_6d0f410);
extern "C" NAKED register_t __cdecl internal_6d0f410()
{
    __asm
    {
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x14]
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        cmp edi, ebp
        mov ebx, ecx
        je public_6d0f452
        push esi
        public_6d0f422 : nop
        mov esi, edi
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi]
        mov edi, dword ptr ds : [edi]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [esi+4]
        lea ecx, ds:[esi+8]
        mov dword ptr ds : [edx+4], eax
        call public_6d0d4a0
        push esi
        call public_6d5ffb0
        mov ecx, dword ptr ds : [ebx+8]
        add esp, 4
        dec ecx
        cmp edi, ebp
        mov dword ptr ds : [ebx+8], ecx
        jne public_6d0f422
        pop esi
        public_6d0f452 : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [eax], edi
        pop edi
        pop ebp
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6d0f410)
    }
}

#undef public_6d0f422
#undef public_6d0f452
