#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_410d10);
CLANG_FORWARD_PROC_SYMBOL(public_418978);

#define public_410d22 _public_410d22
#define public_410d41 _public_410d41

PROC_DECLARE(0x410d10, internal_410d10, public_410d10);
extern "C" NAKED register_t __cdecl internal_410d10()
{
    __asm
    {
        push ebx
        push esi
        mov ebx, ecx
        mov eax, dword ptr ds : [ebx+8]
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        cmp edi, eax
        mov esi, edi
        je public_410d41
        public_410d22 : nop
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov ecx, ebx
        call public_410d10
        mov esi, dword ptr ds : [esi]
        push edi
        call public_418978
        mov eax, dword ptr ds : [ebx+8]
        add esp, 4
        cmp esi, eax
        mov edi, esi
        jne public_410d22
        public_410d41 : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x410d10)
    }
}

#undef public_410d22
#undef public_410d41
