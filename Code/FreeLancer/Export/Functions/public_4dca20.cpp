#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4347e0);
CLANG_FORWARD_PROC_SYMBOL(public_4c7270);
CLANG_FORWARD_PROC_SYMBOL(public_4c7c60);
CLANG_FORWARD_PROC_SYMBOL(public_4dca20);
CLANG_FORWARD_PROC_SYMBOL(public_54baf0);
CLANG_FORWARD_PROC_SYMBOL(public_577dd0);
CLANG_FORWARD_PROC_SYMBOL(public_577f50);

#define public_4dca69 _public_4dca69
#define public_4dca80 _public_4dca80
#define public_4dca97 _public_4dca97
#define public_4dcabb _public_4dcabb
#define public_4dcabf _public_4dcabf
#define public_4dcac4 _public_4dcac4
#define public_4dcac6 _public_4dcac6
#define public_4dcb23 _public_4dcb23
#define public_4dcb2b _public_4dcb2b
#define public_4dcb37 _public_4dcb37
#define public_4dcb7d _public_4dcb7d
#define public_4dcb8e _public_4dcb8e
#define public_4dcbac _public_4dcbac
#define public_4dcbc3 _public_4dcbc3
#define public_4dcbdf _public_4dcbdf
#define public_4dcbf4 _public_4dcbf4
#define public_4dcbf6 _public_4dcbf6
#define public_4dcc19 _public_4dcc19
#define public_4dcc4a _public_4dcc4a

PROC_DECLARE(0x4dca20, internal_4dca20, public_4dca20);
extern "C" NAKED register_t __cdecl internal_4dca20()
{
    __asm
    {
        sub esp, 0x210
        push ebx
        push esi
        push edi
        mov esi, ecx
        mov byte ptr ss : [esp+0xE], 0
        xor bl, bl
        call public_54baf0
        test eax, eax
        je public_4dca80
        add eax, 0xC
        test eax, eax
        je public_4dca80
        mov edi, dword ptr ds : [eax+4]
        test edi, edi
        je public_4dca80
        mov eax, dword ptr ds : [edi+0x4C]
        and eax, 0x503
        cmp eax, 0x503
        jne public_4dca80
        mov ecx, edi
        call dword ptr ds : [public_5c64a0]
        test al, al
        je public_4dca69
        mov byte ptr ss : [esp+0xE], 1
        public_4dca69 : nop
        mov ecx, edi
        call dword ptr ds : [public_5c62e8]
        test eax, eax
        je public_4dca80
        cmp dword ptr ds : [eax+0xC0], 0xA
        jne public_4dca80
        mov bl, 1
        public_4dca80 : nop
        mov al, byte ptr ds : [esi+0x5B9]
        test al, al
        jne public_4dcabf
        call public_4c7270
        test al, al
        jne public_4dca97
        test bl, bl
        je public_4dcabf
        public_4dca97 : nop
        mov al, byte ptr ss : [esp+0xE]
        test al, al
        jne public_4dcabf
        mov al, byte ptr ds : [esi+0x5BA]
        test al, al
        mov byte ptr ss : [esp+0xF], 1
        jne public_4dcac4
        call public_4c7c60
        test al, al
        je public_4dcabb
        test bl, bl
        je public_4dcac4
        public_4dcabb : nop
        mov bl, 1
        jmp public_4dcac6
        public_4dcabf : nop
        mov byte ptr ss : [esp+0xF], 0
        public_4dcac4 : nop
        xor bl, bl
        public_4dcac6 : nop
        mov ecx, dword ptr ds : [esi+0x5BC]
        mov edx, dword ptr ds : [ecx]
        xor eax, eax
        mov al, bl
        push 0
        push eax
        push 1
        call dword ptr ds : [edx+0xA8]
        movzx eax, byte ptr ss : [esp+0xF]
        mov ecx, dword ptr ds : [esi+0x5C0]
        mov edx, dword ptr ds : [ecx]
        push 0
        push eax
        push 1
        call dword ptr ds : [edx+0xA8]
        test bl, bl
        jne public_4dcc4a
        mov al, byte ptr ds : [esi+0x5B9]
        test al, al
        je public_4dcb8e
        call public_4c7270
        test al, al
        mov ecx, dword ptr ds : [esi+0x5BC]
        push 0
        jne public_4dcb7d
        mov edx, dword ptr ds : [ecx]
        push 0x633
        public_4dcb23 : nop
        push 0x1E
        call dword ptr ds : [edx+0xA8]
        public_4dcb2b : nop
        mov al, byte ptr ss : [esp+0xE]
        test al, al
        jne public_4dcc4a
        public_4dcb37 : nop
        mov ecx, dword ptr ds : [public_6119f8]
        mov edx, dword ptr ds : [public_67eca8]
        push ecx
/*FIXUP push offset public_66dc60 @0x4dcb44*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66dc60
        push 0x62D
        push edx
        call public_4347e0
        lea eax, ss:[esp+0x2C]
/*FIXUP push offset public_5d0214 @0x4dcb58*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0214
        push eax
        call dword ptr ds : [public_5c70b4]
        mov al, byte ptr ds : [esi+0x5B9]
        add esp, 0x18
        test al, al
        je public_4dcbdf
        lea ecx, ss:[esp+0x10]
        push ecx
        push 0xBF
        jmp public_4dcbf6
        public_4dcb7d : nop
        mov eax, dword ptr ds : [ecx]
        push 0x615
        push 0x1E
        call dword ptr ds : [eax+0xA8]
        jmp public_4dcb2b
        public_4dcb8e : nop
        mov al, byte ptr ds : [esi+0x5BA]
        test al, al
        je public_4dcbac
        mov ecx, dword ptr ds : [esi+0x5BC]
        mov edx, dword ptr ds : [ecx]
        push 0
        push 0x62B
        jmp public_4dcb23
        public_4dcbac : nop
        mov al, byte ptr ss : [esp+0xE]
        test al, al
        je public_4dcbc3
        mov eax, dword ptr ds : [esi+0x5BC]
        and byte ptr ds : [eax+0x6C], 0xFC
        jmp public_4dcb2b
        public_4dcbc3 : nop
        mov ecx, dword ptr ds : [esi+0x5BC]
        mov eax, dword ptr ds : [ecx]
        push 0
        push 0x62C
        push 0x1E
        call dword ptr ds : [eax+0xA8]
        jmp public_4dcb37
        public_4dcbdf : nop
        call public_4c7270
        test al, al
        lea ecx, ss:[esp+0x10]
        push ecx
        jne public_4dcbf4
        push 0xC8
        jmp public_4dcbf6
        public_4dcbf4 : nop
        push 0xF
        public_4dcbf6 : nop
        call public_577dd0
        add esp, 8
        test al, al
        je public_4dcc19
        lea edx, ss:[esp+0x1C]
        push 0x100
        lea eax, ss:[esp+0x14]
        push edx
        push eax
        call public_577f50
        add esp, 0xC
        public_4dcc19 : nop
        lea ecx, ss:[esp+0x1C]
        push ecx
/*FIXUP push offset public_66dc60 @0x4dcc1e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66dc60
/*FIXUP push offset public_66fc60 @0x4dcc23*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        call dword ptr ds : [public_5c70ec]
        mov esi, dword ptr ds : [esi+0x5C0]
        mov edx, dword ptr ds : [esi]
        add esp, 0xC
        push 0
/*FIXUP push offset public_66fc60 @0x4dcc3b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        push 0x1D
        mov ecx, esi
        call dword ptr ds : [edx+0xA8]
        public_4dcc4a : nop
        pop edi
        pop esi
        pop ebx
        add esp, 0x210
        ret 
        UNREACHABLE_TRAP(0x4dca20)
    }
}

#undef public_4dca69
#undef public_4dca80
#undef public_4dca97
#undef public_4dcabb
#undef public_4dcabf
#undef public_4dcac4
#undef public_4dcac6
#undef public_4dcb23
#undef public_4dcb2b
#undef public_4dcb37
#undef public_4dcb7d
#undef public_4dcb8e
#undef public_4dcbac
#undef public_4dcbc3
#undef public_4dcbdf
#undef public_4dcbf4
#undef public_4dcbf6
#undef public_4dcc19
#undef public_4dcc4a
