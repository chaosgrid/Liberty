#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4e7f20);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_4e7f32 _public_4e7f32
#define public_4e7f51 _public_4e7f51

PROC_DECLARE(0x4e7f20, internal_4e7f20, public_4e7f20);
extern "C" NAKED register_t __cdecl internal_4e7f20()
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
        je public_4e7f51
        public_4e7f32 : nop
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov ecx, ebx
        call public_4e7f20
        mov esi, dword ptr ds : [esi]
        push edi
        call public_5b7e1d
        mov eax, dword ptr ds : [ebx+8]
        add esp, 4
        cmp esi, eax
        mov edi, esi
        jne public_4e7f32
        public_4e7f51 : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x4e7f20)
    }
}

#undef public_4e7f32
#undef public_4e7f51
