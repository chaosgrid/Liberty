#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ed3d30);
CLANG_FORWARD_PROC_SYMBOL(public_6efd030);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6ed3d42 _public_6ed3d42
#define public_6ed3d69 _public_6ed3d69

PROC_DECLARE(0x6ed3d30, internal_6ed3d30, public_6ed3d30);
extern "C" NAKED register_t __cdecl internal_6ed3d30()
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
        je public_6ed3d69
        public_6ed3d42 : nop
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov ecx, ebx
        call public_6ed3d30
        mov esi, dword ptr ds : [esi]
        lea ecx, ds:[edi+0xC]
        call public_6efd030
        push edi
        call public_6fa8fe0
        mov eax, dword ptr ds : [ebx+8]
        add esp, 4
        cmp esi, eax
        mov edi, esi
        jne public_6ed3d42
        public_6ed3d69 : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6ed3d30)
    }
}

#undef public_6ed3d42
#undef public_6ed3d69
