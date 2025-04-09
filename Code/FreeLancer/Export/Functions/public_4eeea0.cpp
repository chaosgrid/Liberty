#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_45a4e0);
CLANG_FORWARD_PROC_SYMBOL(public_4eeea0);
CLANG_FORWARD_PROC_SYMBOL(public_54baf0);

#define public_4eeed9 _public_4eeed9
#define public_4eef00 _public_4eef00
#define public_4eef17 _public_4eef17
#define public_4eef37 _public_4eef37

PROC_DECLARE(0x4eeea0, internal_4eeea0, public_4eeea0);
extern "C" NAKED register_t __cdecl internal_4eeea0()
{
    __asm
    {
        push ecx
        push esi
        mov esi, dword ptr ds : [public_679bb0]
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [edi]
        lea ecx, ss:[esp+0x14]
        push ecx
        mov ecx, edi
        call dword ptr ds : [eax+0x88]
        test eax, eax
        jne public_4eef37
        mov eax, dword ptr ss : [esp+0x14]
        test ah, 2
        je public_4eeed9
        mov esi, dword ptr ds : [public_679b80]
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        mov dword ptr ds : [eax], esi
        pop esi
        pop ecx
        ret 
        public_4eeed9 : nop
        test eax, 0x10000000
        je public_4eef00
        mov al, 0xFF
        mov byte ptr ss : [esp+0x14], al
        mov byte ptr ss : [esp+0x15], al
        mov byte ptr ss : [esp+0x16], al
        mov byte ptr ss : [esp+0x17], al
        mov esi, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        mov dword ptr ds : [eax], esi
        pop esi
        pop ecx
        ret 
        public_4eef00 : nop
        test eax, 0x5000000
        je public_4eef17
        mov esi, dword ptr ds : [public_679ba8]
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        mov dword ptr ds : [eax], esi
        pop esi
        pop ecx
        ret 
        public_4eef17 : nop
        call public_54baf0
        test eax, eax
        je public_4eef37
        cmp dword ptr ds : [eax+0x1C], 1
        jne public_4eef37
        push edi
        push eax
        lea edx, ss:[esp+0x10]
        push edx
        call public_45a4e0
        mov esi, dword ptr ds : [eax]
        add esp, 0xC
        public_4eef37 : nop
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        mov dword ptr ds : [eax], esi
        pop esi
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x4eeea0)
    }
}

#undef public_4eeed9
#undef public_4eef00
#undef public_4eef17
#undef public_4eef37
