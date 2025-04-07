#include "SoundManager-PCH.h"


#define public_6ee2a60 _public_6ee2a60
#define public_6ee2a75 _public_6ee2a75
#define public_6ee2acf _public_6ee2acf
#define public_6ee2ad9 _public_6ee2ad9

PROC_DECLARE(0x6ee2a40, internal_6ee2a40, public_6ee2a40);
extern "C" NAKED register_t __cdecl internal_6ee2a40()
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
        je public_6ee2ad9
        mov esi, dword ptr ss : [esp+0x18]
        public_6ee2a60 : nop
        cmp esi, dword ptr ds : [eax+8]
        je public_6ee2a75
        mov eax, dword ptr ds : [eax]
        inc edx
        cmp eax, ecx
        jne public_6ee2a60
        pop edi
        pop esi
        mov eax, ebx
        pop ebx
        pop ecx
        ret 0x18
        public_6ee2a75 : nop
        test edx, edx
        je public_6ee2ad9
        mov eax, dword ptr ds : [eax+0xC]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x18]
        push edx
/*FIXUP push offset public_6ee917c @0x6ee2a83*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ee917c
        push eax
        call dword ptr ds : [ecx]
        test eax, eax
        jne public_6ee2ad9
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
        test byte ptr ss : [esp+0xC], 2
        je public_6ee2acf
        mov edx, dword ptr ss : [esp+0x28]
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [eax]
        push edx
        mov edx, dword ptr ss : [esp+0x28]
        push edx
        push 0
        push 0
        push esi
        push edi
        push eax
        call dword ptr ds : [ecx+0x10]
        xor ebx, ebx
        public_6ee2acf : nop
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        public_6ee2ad9 : nop
        pop edi
        pop esi
        mov eax, ebx
        pop ebx
        pop ecx
        ret 0x18
        UNREACHABLE_TRAP(0x6ee2a40)
    }
}

#undef public_6ee2a60
#undef public_6ee2a75
#undef public_6ee2acf
#undef public_6ee2ad9
