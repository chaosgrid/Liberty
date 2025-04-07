#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62fcd70);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_62fcd82 _public_62fcd82
#define public_62fcda1 _public_62fcda1

PROC_DECLARE(0x62fcd70, internal_62fcd70, public_62fcd70);
extern "C" NAKED register_t __cdecl internal_62fcd70()
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
        je public_62fcda1
        public_62fcd82 : nop
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov ecx, ebx
        call public_62fcd70
        mov esi, dword ptr ds : [esi]
        push edi
        call public_6391d5a
        mov eax, dword ptr ds : [ebx+8]
        add esp, 4
        cmp esi, eax
        mov edi, esi
        jne public_62fcd82
        public_62fcda1 : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x62fcd70)
    }
}

#undef public_62fcd82
#undef public_62fcda1
