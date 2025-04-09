#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_509e10);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_509e22 _public_509e22
#define public_509e41 _public_509e41

PROC_DECLARE(0x509e10, internal_509e10, public_509e10);
extern "C" NAKED register_t __cdecl internal_509e10()
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
        je public_509e41
        public_509e22 : nop
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov ecx, ebx
        call public_509e10
        mov esi, dword ptr ds : [esi]
        push edi
        call public_5b7e1d
        mov eax, dword ptr ds : [ebx+8]
        add esp, 4
        cmp esi, eax
        mov edi, esi
        jne public_509e22
        public_509e41 : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x509e10)
    }
}

#undef public_509e22
#undef public_509e41
