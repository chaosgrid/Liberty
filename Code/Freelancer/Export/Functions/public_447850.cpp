#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_447850);
CLANG_FORWARD_PROC_SYMBOL(public_458160);

#define public_44789d _public_44789d
#define public_4478ad _public_4478ad

PROC_DECLARE(0x447850, internal_447850, public_447850);
extern "C" NAKED register_t __cdecl internal_447850()
{
    __asm
    {
        mov edx, dword ptr ds : [public_5c6210]
        push esi
        mov esi, dword ptr ds : [edx]
        push edi
        mov edi, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [edi]
        cmp eax, esi
        je public_4478ad
        lea esi, ds:[ecx+0x74]
        mov ecx, dword ptr ds : [esi]
        push eax
        call dword ptr ds : [public_5c61c4]
        cmp eax, 0xFFFFFFFF
        jne public_44789d
        mov ecx, dword ptr ds : [edi]
        mov edx, dword ptr ds : [public_5c6d18]
        push ecx
        push 0x295
/*FIXUP push offset public_5cbdbc @0x447883*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cbdbc
        mov eax, 0x100001
/*FIXUP push offset public_5cbe24 @0x44788d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cbe24
        push eax
        call dword ptr ds : [edx]
        add esp, 0x14
        pop edi
        pop esi
        ret 0x14
        public_44789d : nop
        mov ecx, dword ptr ss : [esp+0xC]
        test ecx, ecx
        jne public_4478ad
        push eax
        mov ecx, esi
        call public_458160
        public_4478ad : nop
        pop edi
        pop esi
        ret 0x14
        UNREACHABLE_TRAP(0x447850)
    }
}

#undef public_44789d
#undef public_4478ad
