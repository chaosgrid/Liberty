#include "FreeLancer-PCH.h"


#define public_5477a9 _public_5477a9
#define public_5477ab _public_5477ab

PROC_DECLARE(0x547760, internal_547760, public_547760);
extern "C" NAKED register_t __cdecl internal_547760()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        push edi
        push 0x303
        push eax
        mov esi, ecx
        call dword ptr ds : [public_5c67ec]
        add esp, 8
        lea edi, ds:[esi+0xC]
        push 1
        mov ecx, edi
        mov dword ptr ds : [esi+0x10], eax
        call dword ptr ds : [public_5c67e8]
        test edi, edi
        lea eax, ds:[esi+0xAC]
        je public_5477a9
        mov ecx, dword ptr ds : [edi+4]
        test ecx, ecx
        je public_5477a9
        mov edx, dword ptr ds : [ecx+0x4C]
        and edx, 0x303
        cmp edx, 0x303
        je public_5477ab
        public_5477a9 : nop
        xor ecx, ecx
        public_5477ab : nop
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx+0xC4]
        mov ecx, dword ptr ds : [esi+0x10]
        xor eax, eax
        test ecx, ecx
        pop edi
        setne al
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x547760)
    }
}

#undef public_5477a9
#undef public_5477ab
