#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62a3d00);
CLANG_FORWARD_PROC_SYMBOL(public_62a7c50);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_62a7c62 _public_62a7c62
#define public_62a7c89 _public_62a7c89

PROC_DECLARE(0x62a7c50, internal_62a7c50, public_62a7c50);
extern "C" NAKED register_t __cdecl internal_62a7c50()
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
        je public_62a7c89
        public_62a7c62 : nop
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov ecx, ebx
        call public_62a7c50
        mov esi, dword ptr ds : [esi]
        lea ecx, ds:[edi+0xC]
        call public_62a3d00
        push edi
        call public_6391d5a
        mov eax, dword ptr ds : [ebx+8]
        add esp, 4
        cmp esi, eax
        mov edi, esi
        jne public_62a7c62
        public_62a7c89 : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x62a7c50)
    }
}

#undef public_62a7c62
#undef public_62a7c89
