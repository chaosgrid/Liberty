#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d00670);

#define public_6cf9ab8 _public_6cf9ab8
#define public_6cf9aba _public_6cf9aba

PROC_DECLARE(0x6cf9a40, internal_6cf9a40, public_6cf9a40);
extern "C" NAKED register_t __cdecl internal_6cf9a40()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [ecx]
        test ecx, 0x3FFFFFFF
        push esi
        mov eax, 0xFFFFFFFC
        je public_6cf9aba
        push ecx
        mov esi, 0xFFFFFFFE
        call public_6d00670
        mov ecx, eax
        add esp, 4
        test ecx, ecx
        je public_6cf9ab8
        add ecx, 0xC
        or eax, 0xFFFFFFFF
        test ecx, ecx
        je public_6cf9aba
        mov ecx, dword ptr ds : [ecx+4]
        test ecx, ecx
        je public_6cf9aba
        mov edx, dword ptr ds : [ecx+0x4C]
        and edx, 0x303
        cmp edx, 0x303
        jne public_6cf9aba
        mov edx, dword ptr ds : [ecx+0xE0]
        mov esi, edx
        and esi, 0xC40
        cmp edx, esi
        jne public_6cf9aba
        mov edx, dword ptr ds : [ecx+0x1B4]
        mov esi, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [esi], edx
        mov ecx, dword ptr ds : [ecx+0x1B8]
        mov edx, dword ptr ss : [esp+0x10]
        xor eax, eax
        mov dword ptr ds : [edx], ecx
        pop esi
        ret 
        public_6cf9ab8 : nop
        mov eax, esi
        public_6cf9aba : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6cf9a40)
    }
}

#undef public_6cf9ab8
#undef public_6cf9aba
