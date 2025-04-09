#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_52af60);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_52af72 _public_52af72
#define public_52af91 _public_52af91

PROC_DECLARE(0x52af60, internal_52af60, public_52af60);
extern "C" NAKED register_t __cdecl internal_52af60()
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
        je public_52af91
        public_52af72 : nop
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov ecx, ebx
        call public_52af60
        mov esi, dword ptr ds : [esi]
        push edi
        call public_5b7e1d
        mov eax, dword ptr ds : [ebx+8]
        add esp, 4
        cmp esi, eax
        mov edi, esi
        jne public_52af72
        public_52af91 : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x52af60)
    }
}

#undef public_52af72
#undef public_52af91
