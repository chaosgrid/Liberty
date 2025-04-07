#include "SoundManager-PCH.h"


#define public_6ee28b0 _public_6ee28b0
#define public_6ee28c5 _public_6ee28c5
#define public_6ee2924 _public_6ee2924
#define public_6ee292e _public_6ee292e

PROC_DECLARE(0x6ee2890, internal_6ee2890, public_6ee2890);
extern "C" NAKED register_t __cdecl internal_6ee2890()
{
    __asm
    {
        push ecx
        mov ecx, dword ptr ds : [public_6eeaf04]
        mov eax, dword ptr ds : [ecx]
        push ebx
        push esi
        or ebx, 0xFFFFFFFF
        cmp eax, ecx
        push edi
        mov edx, 1
        je public_6ee292e
        mov esi, dword ptr ss : [esp+0x18]
        public_6ee28b0 : nop
        cmp esi, dword ptr ds : [eax+8]
        je public_6ee28c5
        mov eax, dword ptr ds : [eax]
        inc edx
        cmp eax, ecx
        jne public_6ee28b0
        pop edi
        pop esi
        mov eax, ebx
        pop ebx
        pop ecx
        ret 0x1C
        public_6ee28c5 : nop
        test edx, edx
        je public_6ee292e
        mov eax, dword ptr ds : [eax+0xC]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x18]
        push edx
/*FIXUP push offset public_6ee917c @0x6ee28d3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ee917c
        push eax
        call dword ptr ds : [ecx]
        test eax, eax
        jne public_6ee292e
        mov esi, dword ptr ss : [esp+0x20]
        mov edi, dword ptr ss : [esp+0x1C]
        lea edx, ss:[esp+0xC]
        push edx
        push esi
        mov dword ptr ss : [esp+0x14], eax
        mov eax, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ds : [eax]
        push edi
        push eax
        call dword ptr ds : [ecx+0x14]
        test byte ptr ss : [esp+0xC], 1
        je public_6ee2924
        mov edx, dword ptr ss : [esp+0x2C]
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [eax]
        push edx
        mov edx, dword ptr ss : [esp+0x2C]
        push edx
        mov edx, dword ptr ss : [esp+0x2C]
        push edx
        push 0
        push 0
        push esi
        push edi
        push eax
        call dword ptr ds : [ecx+0xC]
        xor ebx, ebx
        public_6ee2924 : nop
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        public_6ee292e : nop
        pop edi
        pop esi
        mov eax, ebx
        pop ebx
        pop ecx
        ret 0x1C
        UNREACHABLE_TRAP(0x6ee2890)
    }
}

#undef public_6ee28b0
#undef public_6ee28c5
#undef public_6ee2924
#undef public_6ee292e
