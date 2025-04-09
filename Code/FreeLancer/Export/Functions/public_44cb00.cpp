#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_44cb00);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_44cb12 _public_44cb12
#define public_44cb31 _public_44cb31

PROC_DECLARE(0x44cb00, internal_44cb00, public_44cb00);
extern "C" NAKED register_t __cdecl internal_44cb00()
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
        je public_44cb31
        public_44cb12 : nop
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov ecx, ebx
        call public_44cb00
        mov esi, dword ptr ds : [esi]
        push edi
        call public_5b7e1d
        mov eax, dword ptr ds : [ebx+8]
        add esp, 4
        cmp esi, eax
        mov edi, esi
        jne public_44cb12
        public_44cb31 : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x44cb00)
    }
}

#undef public_44cb12
#undef public_44cb31
