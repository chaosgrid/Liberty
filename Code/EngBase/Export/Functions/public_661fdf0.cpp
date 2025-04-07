#include "EngBase-PCH.h"


#define public_661fe37 _public_661fe37
#define public_661fe73 _public_661fe73
#define public_661fe8b _public_661fe8b
#define public_661febd _public_661febd
#define public_661fece _public_661fece
#define public_661fed9 _public_661fed9

PROC_DECLARE(0x661fdf0, internal_661fdf0, public_661fdf0);
extern "C" NAKED register_t __cdecl internal_661fdf0()
{
    __asm
    {
        sub esp, 0xC
        push esi
        mov esi, dword ptr ss : [esp+0x18]
        test esi, esi
        mov dword ptr ss : [esp+8], 8
        mov dword ptr ss : [esp+0xC], offset public_662a6dc
        mov dword ptr ss : [esp+4], 0
        jne public_661fe37
/*FIXUP push offset public_662a6b4 @0x661fe14*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_662a6b4
        push 0x270
        mov eax, 0x100002
/*FIXUP push offset public_662a5c8 @0x661fe23*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_662a5c8
/*FIXUP push offset public_662a0d4 @0x661fe28*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_662a0d4
        push eax
        mov eax, dword ptr ds : [public_6629004]
        call dword ptr ds : [eax]
        jmp public_661fe73
        public_661fe37 : nop
        call dword ptr ds : [public_6629000]
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+4]
        push ecx
        lea ecx, ss:[esp+0xC]
        push ecx
        push eax
        call dword ptr ds : [edx+0xC]
        test eax, eax
        jge public_661fe8b
        mov edx, dword ptr ds : [public_6629004]
/*FIXUP push offset public_662a67c @0x661fe57*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_662a67c
        push 0x275
        mov eax, 0x100002
/*FIXUP push offset public_662a5c8 @0x661fe66*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_662a5c8
/*FIXUP push offset public_662a0d4 @0x661fe6b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_662a0d4
        push eax
        call dword ptr ds : [edx]
        public_661fe73 : nop
        mov eax, dword ptr ss : [esp+0x18]
        add esp, 0x14
        test eax, eax
        je public_661fed9
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        pop esi
        add esp, 0xC
        ret 8
        public_661fe8b : nop
        mov eax, dword ptr ss : [esp+4]
        push edi
        push esi
        push eax
        mov edx, dword ptr ds : [eax]
        call dword ptr ds : [edx+0x10]
        mov edi, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+8]
        mov esi, ecx
        mov eax, dword ptr ds : [edi+4]
        cmp eax, ecx
        je public_661fece
        test eax, eax
        je public_661febd
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [edi+4], 0
        mov ecx, dword ptr ss : [esp+8]
        public_661febd : nop
        test esi, esi
        mov dword ptr ds : [edi+4], esi
        je public_661fece
        mov edx, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [edx+4]
        mov ecx, dword ptr ss : [esp+8]
        public_661fece : nop
        test ecx, ecx
        pop edi
        je public_661fed9
        mov eax, dword ptr ds : [ecx]
        push ecx
        call dword ptr ds : [eax+8]
        public_661fed9 : nop
        pop esi
        add esp, 0xC
        ret 8
        UNREACHABLE_TRAP(0x661fdf0)
    }
}

#undef public_661fe37
#undef public_661fe73
#undef public_661fe8b
#undef public_661febd
#undef public_661fece
#undef public_661fed9
