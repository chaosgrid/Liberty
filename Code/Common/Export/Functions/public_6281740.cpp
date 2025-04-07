#include "Common-PCH.h"


#define public_6281767 _public_6281767
#define public_6281788 _public_6281788
#define public_62817b2 _public_62817b2

PROC_DECLARE(0x6281740, internal_6281740, public_6281740);
extern "C" NAKED register_t __cdecl internal_6281740()
{
    __asm
    {
        sub esp, 8
        push esi
        mov esi, ecx
        mov ecx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [ecx]
        lea edx, ss:[esp+4]
        push edx
        call dword ptr ds : [eax+4]
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [ecx+0xA4]
        jne public_6281767
        mov ecx, dword ptr ss : [esp+8]
        public_6281767 : nop
        mov edx, dword ptr ds : [ecx+0xA4]
        test edx, edx
        je public_62817b2
        mov eax, dword ptr ds : [eax+0x54]
        cmp byte ptr ds : [eax+0x78], 9
        movsx ecx, byte ptr ds : [ecx+0x78]
        jne public_6281788
        cmp ecx, 0x10
        je public_62817b2
        cmp ecx, 9
        je public_62817b2
        public_6281788 : nop
        dec dword ptr ds : [esi+8]
        jns public_62817b2
        mov ecx, dword ptr ds : [public_6399028]
/*FIXUP push offset public_639b960 @0x6281793*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639b960
        push 0x11D
/*FIXUP push offset public_639b924 @0x628179d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639b924
        mov eax, 0x100001
/*FIXUP push offset public_639b47c @0x62817a7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639b47c
        push eax
        call dword ptr ds : [ecx]
        add esp, 0x14
        public_62817b2 : nop
        pop esi
        add esp, 8
        ret 8
        UNREACHABLE_TRAP(0x6281740)
    }
}

#undef public_6281767
#undef public_6281788
#undef public_62817b2
