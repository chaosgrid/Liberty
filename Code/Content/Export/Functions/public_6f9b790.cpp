#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f31650);
CLANG_FORWARD_PROC_SYMBOL(public_6f319d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4f050);
CLANG_FORWARD_PROC_SYMBOL(public_6f51370);
CLANG_FORWARD_PROC_SYMBOL(public_6f88240);
CLANG_FORWARD_PROC_SYMBOL(public_6f9c100);
CLANG_FORWARD_PROC_SYMBOL(public_6f9c410);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6fb18f3);

#define public_6f9b7e5 _public_6f9b7e5
#define public_6f9b7e7 _public_6f9b7e7
#define public_6f9b7ff _public_6f9b7ff
#define public_6f9b82f _public_6f9b82f
#define public_6f9b83c _public_6f9b83c
#define public_6f9b849 _public_6f9b849
#define public_6f9b84f _public_6f9b84f
#define public_6f9b853 _public_6f9b853
#define public_6f9b883 _public_6f9b883
#define public_6f9b8fc _public_6f9b8fc
#define public_6f9b923 _public_6f9b923
#define public_6f9b93a _public_6f9b93a
#define public_6f9b944 _public_6f9b944
#define public_6f9b958 _public_6f9b958
#define public_6f9b96e _public_6f9b96e
#define public_6f9b99e _public_6f9b99e
#define public_6f9b9ca _public_6f9b9ca
#define public_6f9ba11 _public_6f9ba11
#define public_6f9ba1f _public_6f9ba1f
#define public_6f9ba23 _public_6f9ba23

PROC_DECLARE(0x6f9b790, internal_6f9b790, public_6f9b790);
extern "C" NAKED register_t __cdecl internal_6f9b790()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fb18f3 @0x6f9b792*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fb18f3
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x64
        push ebx
        push ebp
        push esi
        push 0x218
        mov ebx, ecx
        mov byte ptr ss : [esp+0x13], 1
        call public_6fa912a
        add esp, 4
        mov dword ptr ss : [esp+0x14], eax
        test eax, eax
        mov dword ptr ss : [esp+0x78], 0
        je public_6f9b7e5
        mov cl, byte ptr ds : [ebx+0xC]
        neg cl
        sbb ecx, ecx
        add ecx, 3
        push ecx
        mov ecx, eax
        call public_6f88240
        mov ebp, eax
        jmp public_6f9b7e7
        public_6f9b7e5 : nop
        xor ebp, ebp
        public_6f9b7e7 : nop
        test ebp, ebp
        mov dword ptr ss : [esp+0x78], 0xFFFFFFFF
        mov dword ptr ss : [esp+0x18], ebp
        je public_6f9b7ff
        mov edx, dword ptr ss : [ebp+4]
        lea ecx, ss:[ebp+4]
        call dword ptr ds : [edx]
        public_6f9b7ff : nop
        mov eax, dword ptr ss : [ebp+4]
        lea ecx, ss:[ebp+4]
        mov dword ptr ss : [esp+0x78], 1
        mov dword ptr ss : [esp+0x10], ecx
        call dword ptr ds : [eax+4]
        mov byte ptr ss : [ebp+0xC4], 1
        mov al, byte ptr ds : [ebx+0xC]
        test al, al
        je public_6f9b84f
        mov al, byte ptr ds : [ebx+0xF]
        test al, al
        je public_6f9b82f
        mov byte ptr ss : [ebp+0x54], 4
        jmp public_6f9b853
        public_6f9b82f : nop
        mov al, byte ptr ds : [ebx+0x10]
        test al, al
        je public_6f9b83c
        mov byte ptr ss : [ebp+0x54], 5
        jmp public_6f9b853
        public_6f9b83c : nop
        mov al, byte ptr ds : [ebx+0x11]
        test al, al
        je public_6f9b849
        mov byte ptr ss : [ebp+0x54], 3
        jmp public_6f9b853
        public_6f9b849 : nop
        mov byte ptr ss : [ebp+0x54], 2
        jmp public_6f9b853
        public_6f9b84f : nop
        mov byte ptr ss : [ebp+0x54], 0
        public_6f9b853 : nop
        mov esi, dword ptr ss : [esp+0x80]
        mov al, byte ptr ds : [ebx+0xE]
        test al, al
        push edi
        mov ecx, 0xD
        lea edi, ss:[esp+0x40]
        rep movsd
        pop edi
        je public_6f9b883
        mov al, byte ptr ds : [ebx+0xF]
        test al, al
        je public_6f9b883
        fld dword ptr ss : [esp+0x54]
        fmul dword ptr ds : [public_6fbd3e4]
        fstp dword ptr ss : [esp+0x54]
        public_6f9b883 : nop
        mov al, byte ptr ds : [ebx+0xC]
        test al, al
        je public_6f9b923
        lea ecx, ss:[esp+0x40]
        push ecx
        call public_6f51370
        add esp, 4
        lea ecx, ds:[eax+0x18]
        call public_6f4f050
        test al, al
        jne public_6f9b8fc
        push 1
        lea edx, ss:[ebp+0x1E0]
        push edx
        lea ecx, ss:[esp+0x24]
        mov dword ptr ss : [ebp+0x210], 1
        call public_6f31650
        push eax
        mov eax, dword ptr ss : [esp+0x4C]
        push eax
        call public_6f319d0
        add esp, 0x10
        test al, al
        jne public_6f9b923
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x78], 0xFFFFFFFF
        call dword ptr ds : [edx+4]
        pop esi
        pop ebp
        xor al, al
        pop ebx
        mov ecx, dword ptr ss : [esp+0x64]
        mov dword ptr fs : [0], ecx
        add esp, 0x70
        ret 8
        public_6f9b8fc : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x78], 0xFFFFFFFF
        call dword ptr ds : [eax+4]
        pop esi
        pop ebp
        xor al, al
        pop ebx
        mov ecx, dword ptr ss : [esp+0x64]
        mov dword ptr fs : [0], ecx
        add esp, 0x70
        ret 8
        public_6f9b923 : nop
        mov dl, byte ptr ds : [ebx+0x13]
        xor eax, eax
        test dl, dl
        je public_6f9b944
        mov al, byte ptr ds : [ebx+0x1F]
        test al, al
        je public_6f9b93a
        movzx eax, byte ptr ds : [ebx+0x21]
        inc eax
        jmp public_6f9b944
        public_6f9b93a : nop
        movzx eax, byte ptr ds : [ebx+0x15]
        movzx ecx, byte ptr ds : [ebx+0x14]
        add eax, ecx
        public_6f9b944 : nop
        mov cl, byte ptr ds : [ebx+0x1F]
        test cl, cl
        je public_6f9b958
        movzx ecx, byte ptr ds : [ebx+0x23]
        movzx esi, byte ptr ds : [ebx+0x1E]
        lea ecx, ds:[esi+ecx*2]
        jmp public_6f9b96e
        public_6f9b958 : nop
        movzx esi, byte ptr ds : [ebx+0x1D]
        movzx ecx, byte ptr ds : [ebx+0x1E]
        add ecx, esi
        movzx esi, byte ptr ds : [ebx+0x1C]
        add ecx, esi
        movzx esi, byte ptr ds : [ebx+0x1B]
        add ecx, esi
        public_6f9b96e : nop
        add eax, ecx
        test eax, eax
        mov dword ptr ss : [esp+0x14], eax
        mov dword ptr ss : [esp+0x80], 0
        je public_6f9b99e
        fild dword ptr ss : [esp+0x14]
        fadd dword ptr ds : [public_6fb5810]
        fmul dword ptr ds : [public_6fb605c]
        fdivr dword ptr ss : [esp+0x54]
        fstp dword ptr ss : [esp+0x80]
        public_6f9b99e : nop
        test dl, dl
        mov esi, dword ptr ss : [esp+0x80]
        je public_6f9b9ca
        lea edx, ss:[ebp+0x1E0]
        push edx
        push esi
        lea eax, ss:[ebp+0xEC]
        push eax
        lea ecx, ss:[esp+0x48]
        push ecx
        mov ecx, ebx
        call public_6f9c100
        and al, 1
        mov byte ptr ss : [esp+0xF], al
        public_6f9b9ca : nop
        lea edx, ss:[ebp+0x1E0]
        push edx
        lea eax, ss:[ebp+0x144]
        push eax
        push esi
        lea ecx, ss:[ebp+0x190]
        push ecx
        lea edx, ss:[esp+0x4C]
        push edx
        mov ecx, ebx
        call public_6f9c410
        mov bl, byte ptr ss : [esp+0xF]
        mov esi, dword ptr ss : [esp+0x84]
        and bl, al
        mov eax, dword ptr ds : [esi]
        cmp eax, ebp
        je public_6f9ba1f
        test eax, eax
        je public_6f9ba11
        lea ecx, ds:[eax+4]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+4]
        mov dword ptr ds : [esi], 0
        public_6f9ba11 : nop
        mov dword ptr ds : [esi], ebp
        mov esi, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx]
        jmp public_6f9ba23
        public_6f9ba1f : nop
        mov esi, dword ptr ss : [esp+0x10]
        public_6f9ba23 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        mov dword ptr ss : [esp+0x78], 0xFFFFFFFF
        call dword ptr ds : [eax+4]
        mov ecx, dword ptr ss : [esp+0x70]
        pop esi
        pop ebp
        mov al, bl
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x70
        ret 8
        UNREACHABLE_TRAP(0x6f9b790)
    }
}

#undef public_6f9b7e5
#undef public_6f9b7e7
#undef public_6f9b7ff
#undef public_6f9b82f
#undef public_6f9b83c
#undef public_6f9b849
#undef public_6f9b84f
#undef public_6f9b853
#undef public_6f9b883
#undef public_6f9b8fc
#undef public_6f9b923
#undef public_6f9b93a
#undef public_6f9b944
#undef public_6f9b958
#undef public_6f9b96e
#undef public_6f9b99e
#undef public_6f9b9ca
#undef public_6f9ba11
#undef public_6f9ba1f
#undef public_6f9ba23
