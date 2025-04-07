#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_408b70);

#define public_408c68 _public_408c68
#define public_408ca2 _public_408ca2
#define public_408cb7 _public_408cb7

PROC_DECLARE(0x408b70, internal_408b70, public_408b70);
extern "C" NAKED register_t __cdecl internal_408b70()
{
    __asm
    {
        sub esp, 0x25C
        push edi
        xor eax, eax
        mov ecx, 0x11
        lea edi, ss:[esp+0x14]
        rep stosd
        mov dword ptr ss : [esp+4], eax
        lea ecx, ss:[esp+0x58]
        mov dword ptr ss : [esp+8], eax
        push ecx
        mov dword ptr ss : [esp+0x10], eax
        push 0x104
        mov dword ptr ss : [esp+0x1C], 0x44
        mov dword ptr ss : [esp+0x18], eax
        call dword ptr ds : [public_41b1ac]
        mov edx, dword ptr ds : [public_425494]
        or ecx, 0xFFFFFFFF
        xor eax, eax
        lea edi, ss:[esp+0x58]
        repne scasb
        mov eax, dword ptr ds : [public_425498]
        mov cx, word ptr ds : [public_42549c]
        dec edi
        mov dword ptr ds : [edi], edx
        mov dl, byte ptr ds : [public_42549e]
        mov dword ptr ds : [edi+4], eax
        lea eax, ss:[esp+0x58]
        push eax
        mov word ptr ds : [edi+8], cx
        lea ecx, ss:[esp+0x160]
/*FIXUP push offset public_425484 @0x408be5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_425484
        push ecx
        mov byte ptr ds : [edi+0xA], dl
        call dword ptr ds : [public_41bc08]
        add esp, 0xC
        lea edx, ss:[esp+4]
        push edx
        lea eax, ss:[esp+0x18]
        push eax
        push 0
        push 0
        push 0x4000020
        push 0
        push 0
        push 0
        lea ecx, ss:[esp+0x17C]
        push ecx
        push 0
        call dword ptr ds : [public_41b1b0]
        test eax, eax
        pop edi
        je public_408cb7
        mov edx, dword ptr ss : [esp]
        push esi
        push 0xEA60
        push edx
        call dword ptr ds : [public_41b1b4]
        cmp eax, 0x102
        je public_408ca2
        mov esi, dword ptr ds : [public_41b8f4]
/*FIXUP push offset public_426270 @0x408c47*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_426270
        call esi
        add esp, 4
        test eax, eax
        je public_408c68
/*FIXUP push offset public_425480 @0x408c55*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_425480
/*FIXUP push offset public_426270 @0x408c5a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_426270
        call dword ptr ds : [public_41b984]
        add esp, 8
/*FIXUP public_408c68 : nop
        push offset public_426270 @0x408c68*/
  FIXUP public_408c68 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_426270
        call esi
        add esp, 4
        mov esi, eax
        mov eax, 0x410
        sub eax, esi
        push eax
        lea ecx, ds : [esi*2+public_426270]
        push ecx
        push 0xFFFFFFFF
        lea edx, ss:[esp+0x64]
        push edx
        push 0
        push 0xFDE9
        call dword ptr ds : [public_41b1b8]
        mov word ptr ds : [esi*2+public_426478], 0
        public_408ca2 : nop
        mov eax, dword ptr ss : [esp+4]
        mov esi, dword ptr ds : [public_41b1bc]
        push eax
        call esi
        mov ecx, dword ptr ss : [esp+8]
        push ecx
        call esi
        pop esi
        public_408cb7 : nop
        add esp, 0x25C
        ret 
        UNREACHABLE_TRAP(0x408b70)
    }
}

#undef public_408c68
#undef public_408ca2
#undef public_408cb7
