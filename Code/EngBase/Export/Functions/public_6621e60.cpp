#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6621ea0);
CLANG_FORWARD_PROC_SYMBOL(public_6621f20);

#define public_6621e89 _public_6621e89
#define public_6621e99 _public_6621e99

PROC_DECLARE(0x6621e60, internal_6621e60, public_6621e60);
extern "C" NAKED register_t __cdecl internal_6621e60()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        cmp esi, 0xFFFFFFFF
        je public_6621e99
        test esi, esi
        je public_6621e99
        push ebx
        push edi
        mov edi, dword ptr ss : [esp+0x18]
        mov ebx, dword ptr ss : [esp+0x10]
        mov eax, edi
        and eax, 8
        cmp al, 8
        je public_6621e89
        push esi
        mov ecx, ebx
        call public_6621f20
        public_6621e89 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        push ecx
        push edi
        push esi
        mov ecx, ebx
        call public_6621ea0
        pop edi
        pop ebx
        public_6621e99 : nop
        pop esi
        ret 0x10
        UNREACHABLE_TRAP(0x6621e60)
    }
}

#undef public_6621e89
#undef public_6621e99
