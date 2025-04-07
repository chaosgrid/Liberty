#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_626c5d0);
CLANG_FORWARD_PROC_SYMBOL(public_6272080);
CLANG_FORWARD_PROC_SYMBOL(public_6272770);
CLANG_FORWARD_PROC_SYMBOL(public_6282290);
CLANG_FORWARD_PROC_SYMBOL(public_62a68e0);
CLANG_FORWARD_PROC_SYMBOL(public_632c410);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);
CLANG_FORWARD_PROC_SYMBOL(public_6391dfc);
CLANG_FORWARD_PROC_SYMBOL(public_6391ef0);
CLANG_FORWARD_JUMP_SYMBOL(public_63928a1);

#define public_62724d0 _public_62724d0
#define public_6272502 _public_6272502
#define public_6272514 _public_6272514
#define public_6272557 _public_6272557
#define public_6272586 _public_6272586
#define public_6272589 _public_6272589
#define public_627258d _public_627258d
#define public_62725a0 _public_62725a0
#define public_62725bc _public_62725bc
#define public_62725ea _public_62725ea
#define public_6272630 _public_6272630
#define public_6272664 _public_6272664
#define public_627266a _public_627266a
#define public_627266e _public_627266e
#define public_6272686 _public_6272686
#define public_62726a8 _public_62726a8
#define public_62726c2 _public_62726c2
#define public_62726e2 _public_62726e2
#define public_62726f3 _public_62726f3
#define public_627271a _public_627271a

PROC_DECLARE(0x6272440, internal_6272440, public_6272440);
extern "C" NAKED register_t __cdecl internal_6272440()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_63928a1 @0x6272442*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_63928a1
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xEC
        push ebx
        mov ebx, ecx
        cmp dword ptr ds : [ebx+8], 2
        mov dword ptr ss : [esp+0x10], ebx
        jb public_627271a
        mov al, byte ptr ds : [ebx]
        push ebp
        push esi
        push edi
        push 0x10
        mov byte ptr ss : [esp+0x14], al
        call public_6391d9c
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        add esp, 4
        mov dword ptr ss : [esp+0x14], eax
        mov dword ptr ss : [esp+0x18], 0
/*FIXUP push offset _public_62a68e0 @0x6272490*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_62a68e0
/*FIXUP push offset _public_626c5d0 @0x6272495*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_626c5d0
        push 0x10
        push 0xC
        lea ecx, ss:[esp+0x4C]
        push ecx
        mov dword ptr ss : [esp+0x118], 0
        call public_6391ef0
        mov eax, dword ptr ds : [ebx+8]
        xor ebp, ebp
        test eax, eax
        mov byte ptr ss : [esp+0x104], 1
        mov dword ptr ss : [esp+0x20], ebp
        je public_62726f3
        lea esp, ss:[esp]
        public_62724d0 : nop
        mov eax, dword ptr ds : [ebx+4]
        mov edx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [edx]
        cmp ecx, eax
        je public_6272502
        mov edx, dword ptr ds : [eax]
        cmp ecx, edx
        je public_6272502
        push edx
        push eax
        push ebx
        push ecx
        lea ecx, ss:[esp+0x20]
        call public_6272770
        mov ecx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [ebx+8]
        inc ecx
        dec eax
        mov dword ptr ss : [esp+0x18], ecx
        mov dword ptr ds : [ebx+8], eax
        public_6272502 : nop
        xor esi, esi
        test ebp, ebp
        mov dword ptr ss : [esp+0x30], esi
        jbe public_62726a8
        lea edi, ss:[esp+0x40]
        public_6272514 : nop
        mov eax, dword ptr ds : [edi+4]
        test eax, eax
        je public_62725ea
        lea eax, ds:[edi-4]
        lea ecx, ss:[esp+0x10]
        cmp ecx, eax
        lea ebx, ds:[edi-4]
        je public_62725bc
        mov esi, dword ptr ds : [edi]
        mov ebp, dword ptr ds : [esi]
        lea edx, ss:[esp+0x24]
        push edx
        lea ecx, ss:[esp+0x14]
        mov dword ptr ss : [esp+0x38], esi
        call public_632c410
        cmp ebp, esi
        mov ecx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [esp+0x24]
        mov dword ptr ss : [esp+0x38], ecx
        je public_627258d
        public_6272557 : nop
        cmp eax, ecx
        je public_62725a0
        mov dx, word ptr ds : [eax+8]
        cmp dx, word ptr ss : [ebp+8]
        jbe public_6272586
        mov esi, dword ptr ds : [eax]
        push esi
        push eax
        lea eax, ss:[esp+0x18]
        push eax
        push ebp
        mov ecx, ebx
        call public_6272770
        mov ecx, dword ptr ss : [esp+0x38]
        mov eax, esi
        mov esi, dword ptr ss : [esp+0x34]
        mov dword ptr ss : [esp+0x24], eax
        jmp public_6272589
        public_6272586 : nop
        mov ebp, dword ptr ss : [ebp]
        public_6272589 : nop
        cmp ebp, esi
        jne public_6272557
        public_627258d : nop
        cmp eax, ecx
        je public_62725a0
        push ecx
        push eax
        lea ecx, ss:[esp+0x18]
        push ecx
        push esi
        mov ecx, ebx
        call public_6272770
        public_62725a0 : nop
        mov edx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [ebx+8]
        mov esi, dword ptr ss : [esp+0x30]
        mov ebp, dword ptr ss : [esp+0x20]
        add eax, edx
        mov dword ptr ds : [ebx+8], eax
        mov dword ptr ss : [esp+0x18], 0
        public_62725bc : nop
        mov eax, dword ptr ds : [edi]
        mov ecx, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0x18]
        mov ebx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [edi], ecx
        mov dword ptr ss : [esp+0x14], eax
        mov eax, dword ptr ds : [edi+4]
        inc esi
        mov dword ptr ds : [edi+4], edx
        add edi, 0xC
        cmp esi, ebp
        mov dword ptr ss : [esp+0x18], eax
        mov dword ptr ss : [esp+0x30], esi
        jb public_6272514
        public_62725ea : nop
        cmp esi, 0xF
        jne public_62726a8
        lea eax, ss:[esp+0x2C]
        push eax
        lea ecx, ss:[esp+0xF4]
        call public_632c410
        mov ebx, dword ptr ss : [esp+0xF4]
        lea ecx, ss:[esp+0x28]
        push ecx
        lea ecx, ss:[esp+0x14]
        call public_632c410
        mov ecx, dword ptr ss : [esp+0x2C]
        cmp ecx, ebx
        mov edi, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [esp+0x28]
        je public_627266e
        lea esp, ss:[esp]
        public_6272630 : nop
        cmp eax, edi
        je public_6272686
        mov dx, word ptr ds : [eax+8]
        cmp dx, word ptr ds : [ecx+8]
        jbe public_6272664
        mov esi, dword ptr ds : [eax]
        push esi
        push eax
        lea eax, ss:[esp+0x18]
        push eax
        push ecx
        lea ecx, ss:[esp+0x100]
        call public_6272770
        mov ecx, dword ptr ss : [esp+0x2C]
        mov ebp, dword ptr ss : [esp+0x20]
        mov eax, esi
        mov dword ptr ss : [esp+0x28], eax
        jmp public_627266a
        public_6272664 : nop
        mov ecx, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x2C], ecx
        public_627266a : nop
        cmp ecx, ebx
        jne public_6272630
        public_627266e : nop
        cmp eax, edi
        je public_6272686
        push edi
        push eax
        lea ecx, ss:[esp+0x18]
        push ecx
        push ebx
        lea ecx, ss:[esp+0x100]
        call public_6272770
        public_6272686 : nop
        mov edx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ss : [esp+0xF8]
        mov ebx, dword ptr ss : [esp+0x1C]
        add eax, edx
        mov dword ptr ss : [esp+0xF8], eax
        mov dword ptr ss : [esp+0x18], 0
        jmp public_62726c2
        public_62726a8 : nop
        lea eax, ss:[esp+0x10]
        lea ecx, ds:[esi+esi*2]
        push eax
        lea ecx, ss:[esp+ecx*4+0x40]
        call public_6282290
        cmp esi, ebp
        jne public_62726c2
        inc ebp
        mov dword ptr ss : [esp+0x20], ebp
        public_62726c2 : nop
        mov eax, dword ptr ds : [ebx+8]
        test eax, eax
        jne public_62724d0
        test ebp, ebp
        jbe public_62726f3
        mov ebx, dword ptr ss : [esp+0x10C]
        lea edx, ss:[ebp+ebp*2]
        lea esi, ss:[esp+edx*4+0x3C]
        mov edi, ebp
        public_62726e2 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        push ebx
        sub esi, 0xC
        push esi
        call public_6272080
        dec edi
        jne public_62726e2
/*FIXUP public_62726f3 : nop
        push offset _public_62a68e0 @0x62726f3*/
  FIXUP public_62726f3 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset _public_62a68e0
        push 0x10
        push 0xC
        lea eax, ss:[esp+0x48]
        push eax
        mov byte ptr ss : [esp+0x114], 0
        call public_6391dfc
        lea ecx, ss:[esp+0x10]
        call public_62a68e0
        pop edi
        pop esi
        pop ebp
        public_627271a : nop
        mov ecx, dword ptr ss : [esp+0xF0]
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0xF8
        ret 4
        UNREACHABLE_TRAP(0x6272440)
    }
}

#undef public_62724d0
#undef public_6272502
#undef public_6272514
#undef public_6272557
#undef public_6272586
#undef public_6272589
#undef public_627258d
#undef public_62725a0
#undef public_62725bc
#undef public_62725ea
#undef public_6272630
#undef public_6272664
#undef public_627266a
#undef public_627266e
#undef public_6272686
#undef public_62726a8
#undef public_62726c2
#undef public_62726e2
#undef public_62726f3
#undef public_627271a
