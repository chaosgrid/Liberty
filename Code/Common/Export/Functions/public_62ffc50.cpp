#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62b6640);
CLANG_FORWARD_PROC_SYMBOL(public_62ffc50);
CLANG_FORWARD_PROC_SYMBOL(public_6301430);
CLANG_FORWARD_PROC_SYMBOL(public_6302570);
CLANG_FORWARD_PROC_SYMBOL(public_630d3f0);
CLANG_FORWARD_PROC_SYMBOL(public_6310170);
CLANG_FORWARD_PROC_SYMBOL(public_6310410);
CLANG_FORWARD_PROC_SYMBOL(public_6310b70);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_JUMP_SYMBOL(public_6395db0);

#define public_62ffcc0 _public_62ffcc0
#define public_62ffcf3 _public_62ffcf3
#define public_62ffd24 _public_62ffd24
#define public_62ffd57 _public_62ffd57
#define public_62ffd68 _public_62ffd68
#define public_62ffd8f _public_62ffd8f
#define public_62ffdca _public_62ffdca
#define public_62ffdd4 _public_62ffdd4
#define public_62ffdeb _public_62ffdeb
#define public_62ffed8 _public_62ffed8
#define public_62ffee1 _public_62ffee1
#define public_62fff08 _public_62fff08
#define public_62fff13 _public_62fff13
#define public_62fff3e _public_62fff3e

PROC_DECLARE(0x62ffc50, internal_62ffc50, public_62ffc50);
extern "C" NAKED register_t __cdecl internal_62ffc50()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6395db0 @0x62ffc52*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6395db0
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x94
        mov al, byte ptr ss : [esp+3]
        push ebp
        push esi
        push edi
        mov ebp, ecx
        xor edi, edi
        push edi
        lea ecx, ss:[esp+0x24]
        mov byte ptr ss : [esp+0x24], al
        call dword ptr ds : [public_63991b8]
        mov cl, byte ptr ss : [esp+0xF]
        mov byte ptr ss : [esp+0x10], cl
        push edi
        lea ecx, ss:[esp+0x14]
        mov dword ptr ss : [esp+0xAC], edi
        call dword ptr ds : [public_63991b8]
        mov esi, dword ptr ss : [esp+0xBC]
        mov ecx, esi
        mov byte ptr ss : [esp+0xA8], 1
        call public_6310170
        test al, al
        je public_62ffd68
        lea ecx, ds:[ecx]
/*FIXUP public_62ffcc0 : nop
        push offset public_63994e8 @0x62ffcc0*/
  FIXUP public_62ffcc0 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63994e8
        mov ecx, esi
        call public_6310410
        test al, al
        mov ecx, esi
        je public_62ffcf3
        call public_6310b70
        mov edx, eax
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, edx
        repne scasb
        not ecx
        dec ecx
        push ecx
        push edx
        lea ecx, ss:[esp+0x28]
        call dword ptr ds : [public_63991a4]
        jmp public_62ffd57
/*FIXUP public_62ffcf3 : nop
        push offset public_639a7ec @0x62ffcf3*/
  FIXUP public_62ffcf3 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_639a7ec
        call public_6310410
        test al, al
        mov ecx, esi
        je public_62ffd24
        call public_6310b70
        mov edx, eax
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, edx
        repne scasb
        not ecx
        dec ecx
        push ecx
        push edx
        lea ecx, ss:[esp+0x18]
        call dword ptr ds : [public_63991a4]
        jmp public_62ffd57
/*FIXUP public_62ffd24 : nop
        push offset public_63a23f0 @0x62ffd24*/
  FIXUP public_62ffd24 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a23f0
        call public_6310410
        test al, al
        je public_62ffd57
        mov edx, dword ptr ds : [public_6399028]
/*FIXUP push offset public_63a23d8 @0x62ffd38*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a23d8
        push 0x2C9
/*FIXUP push offset public_63a234c @0x62ffd42*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a234c
        mov eax, 0x100002
/*FIXUP push offset public_639add0 @0x62ffd4c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639add0
        push eax
        call dword ptr ds : [edx]
        add esp, 0x14
        public_62ffd57 : nop
        mov ecx, esi
        call public_6310170
        test al, al
        jne public_62ffcc0
        xor edi, edi
        public_62ffd68 : nop
        cmp dword ptr ss : [esp+0x28], edi
        je public_62fff13
        cmp dword ptr ss : [esp+0x18], edi
        je public_62fff13
        mov eax, dword ptr ss : [ebp+0x20]
        push ebx
        xor ebx, ebx
        cmp eax, edi
        je public_62ffd8f
        mov eax, dword ptr ss : [ebp+0x1C]
        mov eax, dword ptr ds : [eax+4]
        lea ebx, ds:[eax+8]
        public_62ffd8f : nop
        mov al, byte ptr ss : [esp+0x13]
        push edi
        lea ecx, ss:[esp+0x3C]
        mov byte ptr ss : [esp+0x3C], al
        call dword ptr ds : [public_63991b8]
        mov dword ptr ss : [esp+0x34], edi
        mov dword ptr ss : [esp+0x48], edi
        mov dword ptr ss : [esp+0x4C], edi
        mov dword ptr ss : [esp+0x50], edi
        mov esi, dword ptr ss : [esp+0x18]
        cmp esi, edi
        mov edi, dword ptr ds : [public_63991d0]
        mov byte ptr ss : [esp+0xAC], 2
        jne public_62ffdca
        mov esi, edi
        public_62ffdca : nop
        mov eax, dword ptr ss : [esp+0x28]
        test eax, eax
        je public_62ffdd4
        mov edi, eax
        public_62ffdd4 : nop
        push edi
        call dword ptr ds : [public_63992ec]
        add esp, 4
        test eax, eax
        jne public_62ffdeb
        push edi
        call public_630d3f0
        add esp, 4
        public_62ffdeb : nop
        or ecx, 0xFFFFFFFF
        mov dword ptr ss : [esp+0x34], eax
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        push ecx
        push esi
        lea ecx, ss:[esp+0x40]
        call dword ptr ds : [public_63991a4]
        mov ecx, dword ptr ss : [esp+0xB8]
        mov edx, dword ptr ss : [esp+0xBC]
        lea eax, ss:[esp+0x34]
        mov dword ptr ss : [esp+0x48], ecx
        push eax
        lea ecx, ss:[esp+0x38]
        mov dword ptr ss : [esp+0x50], edx
        push ecx
        lea edx, ss:[esp+0x88]
        push edx
        mov dword ptr ss : [esp+0x5C], ebx
        call public_6302570
        add esp, 0xC
        mov ecx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ss : [esp+0x5C], ecx
        mov bl, 3
        push eax
        lea ecx, ss:[esp+0x64]
        mov byte ptr ss : [esp+0xB0], bl
        call public_62b6640
        lea edx, ss:[esp+0x5C]
        push edx
        lea eax, ss:[esp+0x58]
        push eax
        mov eax, dword ptr ss : [esp+0xBC]
        lea ecx, ds:[eax+eax*4]
        lea ecx, ss:[ebp+ecx*4+0x30]
        mov byte ptr ss : [esp+0xB4], 4
        call public_6301430
        push 1
        lea ecx, ss:[esp+0x68]
        mov byte ptr ss : [esp+0xB0], bl
        call dword ptr ds : [public_63991b8]
        push 1
        lea ecx, ss:[esp+0x8C]
        mov byte ptr ss : [esp+0xB0], 2
        call dword ptr ds : [public_63991b8]
        push 1
        lea ecx, ss:[esp+0x3C]
        mov byte ptr ss : [esp+0xB0], 1
        call dword ptr ds : [public_63991b8]
        mov eax, dword ptr ss : [esp+0x18]
        xor esi, esi
        cmp eax, esi
        pop ebx
        je public_62ffee1
        mov cl, byte ptr ds : [eax-1]
        dec eax
        test cl, cl
        je public_62ffed8
        cmp cl, 0xFF
        je public_62ffed8
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_62ffee1
        public_62ffed8 : nop
        push eax
        call public_6391d5a
        add esp, 4
        public_62ffee1 : nop
        mov eax, dword ptr ss : [esp+0x24]
        cmp eax, esi
        mov dword ptr ss : [esp+0x14], esi
        mov dword ptr ss : [esp+0x18], esi
        mov dword ptr ss : [esp+0x1C], esi
        je public_62fff3e
        mov cl, byte ptr ds : [eax-1]
        dec eax
        test cl, cl
        je public_62fff08
        cmp cl, 0xFF
        je public_62fff08
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_62fff3e
        public_62fff08 : nop
        push eax
        call public_6391d5a
        add esp, 4
        jmp public_62fff3e
        public_62fff13 : nop
        push 1
        lea ecx, ss:[esp+0x14]
        mov byte ptr ss : [esp+0xAC], 0
        call dword ptr ds : [public_63991b8]
        push 1
        lea ecx, ss:[esp+0x24]
        mov dword ptr ss : [esp+0xAC], 0xFFFFFFFF
        call dword ptr ds : [public_63991b8]
        public_62fff3e : nop
        mov ecx, dword ptr ss : [esp+0xA0]
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs : [0], ecx
        add esp, 0xA0
        ret 0x10
        UNREACHABLE_TRAP(0x62ffc50)
    }
}

#undef public_62ffcc0
#undef public_62ffcf3
#undef public_62ffd24
#undef public_62ffd57
#undef public_62ffd68
#undef public_62ffd8f
#undef public_62ffdca
#undef public_62ffdd4
#undef public_62ffdeb
#undef public_62ffed8
#undef public_62ffee1
#undef public_62fff08
#undef public_62fff13
#undef public_62fff3e
