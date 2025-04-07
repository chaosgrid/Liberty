#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d00670);

#define public_6cfacdb _public_6cfacdb
#define public_6cfacdd _public_6cfacdd

PROC_DECLARE(0x6cfac70, internal_6cfac70, public_6cfac70);
extern "C" NAKED register_t __cdecl internal_6cfac70()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [ecx]
        test ecx, ecx
        push esi
        push edi
        mov eax, 0xFFFFFFFC
        je public_6cfacdd
        push ecx
        mov edi, 0xFFFFFFFE
        call public_6d00670
        mov esi, eax
        add esp, 4
        test esi, esi
        je public_6cfacdb
        mov edx, dword ptr ss : [esp+0x10]
        push edx
        call dword ptr ds : [public_6d643b4]
        mov ecx, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ds : [public_6d6402c]
        add esp, 4
        push 0xBF800000
        push ecx
        xor ecx, ecx
        mov dword ptr ss : [esp+0x14], eax
        mov cx, word ptr ds : [edx]
        mov eax, dword ptr ds : [esi]
        lea edx, ss:[esp+0x14]
        push ecx
        push edx
        push 0
        mov ecx, esi
        call dword ptr ds : [eax+0x1E4]
        neg al
        pop edi
        pop esi
        sbb eax, eax
        and eax, 4
        add eax, 0xFFFFFFFC
        ret 
        public_6cfacdb : nop
        mov eax, edi
        public_6cfacdd : nop
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6cfac70)
    }
}

#undef public_6cfacdb
#undef public_6cfacdd
