#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ec7ad0);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0c50);

#define public_6ec7ae2 _public_6ec7ae2
#define public_6ec7b03 _public_6ec7b03
#define public_6ec7b15 _public_6ec7b15

PROC_DECLARE(0x6ec7ad0, internal_6ec7ad0, public_6ec7ad0);
extern "C" NAKED register_t __cdecl internal_6ec7ad0()
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
        je public_6ec7b15
        public_6ec7ae2 : nop
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov ecx, ebx
        call public_6ec7ad0
        mov eax, dword ptr ds : [edi+0x10]
        test eax, eax
        mov esi, dword ptr ds : [esi]
        je public_6ec7b03
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [edi+0x10], 0
        public_6ec7b03 : nop
        push edi
        call public_6ed0c50
        mov eax, dword ptr ds : [ebx+8]
        add esp, 4
        cmp esi, eax
        mov edi, esi
        jne public_6ec7ae2
        public_6ec7b15 : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6ec7ad0)
    }
}

#undef public_6ec7ae2
#undef public_6ec7b03
#undef public_6ec7b15
