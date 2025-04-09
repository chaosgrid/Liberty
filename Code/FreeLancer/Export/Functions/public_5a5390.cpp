#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5a5390);

#define public_5a5488 _public_5a5488
#define public_5a54c2 _public_5a54c2
#define public_5a54d7 _public_5a54d7

PROC_DECLARE(0x5a5390, internal_5a5390, public_5a5390);
extern "C" NAKED register_t __cdecl internal_5a5390()
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
        call dword ptr ds : [public_5c6f1c]
        mov edx, dword ptr ds : [public_5e6334]
        or ecx, 0xFFFFFFFF
        xor eax, eax
        lea edi, ss:[esp+0x58]
        repne scasb
        mov eax, dword ptr ds : [public_5e6338]
        mov cx, word ptr ds : [public_5e633c]
        dec edi
        mov dword ptr ds : [edi], edx
        mov dl, byte ptr ds : [public_5e633e]
        mov dword ptr ds : [edi+4], eax
        lea eax, ss:[esp+0x58]
        push eax
        mov word ptr ds : [edi+8], cx
        lea ecx, ss:[esp+0x160]
/*FIXUP push offset public_5e6324 @0x5a5405*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e6324
        push ecx
        mov byte ptr ds : [edi+0xA], dl
        call dword ptr ds : [public_5c7238]
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
        call dword ptr ds : [public_5c6f18]
        test eax, eax
        pop edi
        je public_5a54d7
        mov edx, dword ptr ss : [esp]
        push esi
        push 0xEA60
        push edx
        call dword ptr ds : [public_5c6f14]
        cmp eax, 0x102
        je public_5a54c2
        mov esi, dword ptr ds : [public_5c71c8]
/*FIXUP push offset public_67de50 @0x5a5467*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67de50
        call esi
        add esp, 4
        test eax, eax
        je public_5a5488
/*FIXUP push offset public_5e50d0 @0x5a5475*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e50d0
/*FIXUP push offset public_67de50 @0x5a547a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67de50
        call dword ptr ds : [public_5c70ac]
        add esp, 8
/*FIXUP public_5a5488 : nop
        push offset public_67de50 @0x5a5488*/
  FIXUP public_5a5488 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_67de50
        call esi
        add esp, 4
        mov esi, eax
        mov eax, 0x410
        sub eax, esi
        push eax
        lea ecx, ds : [esi*2+public_67de50]
        push ecx
        push 0xFFFFFFFF
        lea edx, ss:[esp+0x64]
        push edx
        push 0
        push 0xFDE9
        call dword ptr ds : [public_61641c]
        mov word ptr ds : [esi*2+public_67e058], 0
        public_5a54c2 : nop
        mov eax, dword ptr ss : [esp+4]
        mov esi, dword ptr ds : [public_5c6ef8]
        push eax
        call esi
        mov ecx, dword ptr ss : [esp+8]
        push ecx
        call esi
        pop esi
        public_5a54d7 : nop
        add esp, 0x25C
        ret 
        UNREACHABLE_TRAP(0x5a5390)
    }
}

#undef public_5a5488
#undef public_5a54c2
#undef public_5a54d7
