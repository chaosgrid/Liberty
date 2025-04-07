#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d00670);

#define public_6cf9082 _public_6cf9082
#define public_6cf9084 _public_6cf9084
#define public_6cf90a9 _public_6cf90a9
#define public_6cf90ab _public_6cf90ab

PROC_DECLARE(0x6cf9040, internal_6cf9040, public_6cf9040);
extern "C" NAKED register_t __cdecl internal_6cf9040()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [ecx]
        sub esp, 0xC
        test ecx, 0x3FFFFFFF
        push esi
        mov eax, 0xFFFFFFFC
        je public_6cf90ab
        push ecx
        mov esi, 0xFFFFFFFE
        call public_6d00670
        add esp, 4
        test eax, eax
        je public_6cf90a9
        add eax, 0xC
        test eax, eax
        je public_6cf9082
        mov ecx, dword ptr ds : [eax+4]
        test ecx, ecx
        je public_6cf9082
        mov edx, dword ptr ds : [ecx+0x4C]
        and edx, 3
        cmp dl, 3
        je public_6cf9084
        public_6cf9082 : nop
        xor ecx, ecx
        public_6cf9084 : nop
        mov eax, dword ptr ds : [ecx]
        lea edx, ss:[esp+4]
        push edx
        call dword ptr ds : [eax+0x68]
        mov edx, dword ptr ds : [eax]
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+8], eax
        xor eax, eax
        pop esi
        add esp, 0xC
        ret 
        public_6cf90a9 : nop
        mov eax, esi
        public_6cf90ab : nop
        pop esi
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x6cf9040)
    }
}

#undef public_6cf9082
#undef public_6cf9084
#undef public_6cf90a9
#undef public_6cf90ab
