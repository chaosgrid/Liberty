#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6264ea0);
CLANG_FORWARD_PROC_SYMBOL(public_6274150);
CLANG_FORWARD_PROC_SYMBOL(public_6277c10);
CLANG_FORWARD_PROC_SYMBOL(public_627f280);
CLANG_FORWARD_PROC_SYMBOL(public_630d3f0);
CLANG_FORWARD_PROC_SYMBOL(public_6310040);
CLANG_FORWARD_PROC_SYMBOL(public_6310170);
CLANG_FORWARD_PROC_SYMBOL(public_6310410);
CLANG_FORWARD_PROC_SYMBOL(public_6310b70);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);
CLANG_FORWARD_JUMP_SYMBOL(public_6392516);

#define public_6264ee6 _public_6264ee6
#define public_6264ee8 _public_6264ee8
#define public_6264f60 _public_6264f60
#define public_6264f93 _public_6264f93
#define public_6264fc4 _public_6264fc4
#define public_6264fe9 _public_6264fe9
#define public_6264ff8 _public_6264ff8
#define public_6265011 _public_6265011
#define public_6265043 _public_6265043
#define public_626504d _public_626504d
#define public_6265060 _public_6265060
#define public_6265088 _public_6265088
#define public_62650a5 _public_62650a5
#define public_62650ae _public_62650ae
#define public_62650d5 _public_62650d5
#define public_62650de _public_62650de

PROC_DECLARE(0x6264ea0, internal_6264ea0, public_6264ea0);
extern "C" NAKED register_t __cdecl internal_6264ea0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6392516 @0x6264ea2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6392516
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x12C
        push ebx
        push ebp
        push 0x208
        mov ebp, ecx
        call public_6391d9c
        add esp, 4
        mov dword ptr ss : [esp+0x20], eax
        xor ebx, ebx
        cmp eax, ebx
        mov dword ptr ss : [esp+0x13C], ebx
        je public_6264ee6
        mov ecx, eax
        call public_6274150
        jmp public_6264ee8
        public_6264ee6 : nop
        xor eax, eax
        public_6264ee8 : nop
        push esi
        push edi
        mov dword ptr ss : [esp+0x14], eax
        mov eax, dword ptr ss : [ebp+0x28]
        lea ecx, ss:[ebp+0x24]
        lea edx, ss:[esp+0x14]
        push edx
        push eax
        lea eax, ss:[esp+0x30]
        push eax
        mov dword ptr ss : [esp+0x150], 0xFFFFFFFF
        call public_627f280
        mov cl, byte ptr ss : [esp+0x13]
        mov byte ptr ss : [esp+0x2C], cl
        push ebx
        lea ecx, ss:[esp+0x30]
        call dword ptr ds : [public_63991b8]
        mov dl, byte ptr ss : [esp+0x13]
        push ebx
        lea ecx, ss:[esp+0x1C]
        mov dword ptr ss : [esp+0x148], 1
        mov byte ptr ss : [esp+0x1C], dl
        call dword ptr ds : [public_63991b8]
        mov esi, dword ptr ss : [esp+0x14C]
        mov ecx, esi
        mov byte ptr ss : [esp+0x144], 2
        call public_6310170
        test al, al
        je public_6264ff8
        mov edi, edi
/*FIXUP public_6264f60 : nop
        push offset public_63994e8 @0x6264f60*/
  FIXUP public_6264f60 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63994e8
        mov ecx, esi
        call public_6310410
        test al, al
        mov ecx, esi
        je public_6264f93
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
        lea ecx, ss:[esp+0x34]
        call dword ptr ds : [public_63991a4]
        jmp public_6264fe9
/*FIXUP public_6264f93 : nop
        push offset public_6399550 @0x6264f93*/
  FIXUP public_6264f93 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6399550
        call public_6310410
        test al, al
        mov ecx, esi
        je public_6264fc4
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
        lea ecx, ss:[esp+0x20]
        call dword ptr ds : [public_63991a4]
        jmp public_6264fe9
        public_6264fc4 : nop
        mov edi, 0x100001
        call public_6310040
        push eax
        mov eax, dword ptr ds : [public_6399028]
        push 0xB5
/*FIXUP push offset public_6399484 @0x6264fd9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6399484
/*FIXUP push offset public_6399450 @0x6264fde*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6399450
        push edi
        call dword ptr ds : [eax]
        add esp, 0x14
        public_6264fe9 : nop
        mov ecx, esi
        call public_6310170
        test al, al
        jne public_6264f60
        public_6264ff8 : nop
        cmp dword ptr ss : [esp+0x34], ebx
        je public_6265060
        cmp dword ptr ss : [esp+0x20], ebx
        je public_6265060
        mov eax, dword ptr ss : [esp+0x30]
        cmp eax, ebx
        jne public_6265011
        mov eax, dword ptr ds : [public_63991d0]
        public_6265011 : nop
        mov ecx, dword ptr ss : [ebp]
        push eax
        push ecx
        lea edx, ss:[esp+0x44]
/*FIXUP push offset public_63994d4 @0x626501a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63994d4
        push edx
        call dword ptr ds : [public_639931c]
        lea eax, ss:[esp+0x4C]
        push eax
        call public_630d3f0
        mov edx, dword ptr ss : [esp+0x30]
        mov esi, dword ptr ds : [public_63991d0]
        add esp, 0x14
        cmp edx, ebx
        jne public_6265043
        mov edx, esi
        public_6265043 : nop
        mov ecx, dword ptr ss : [esp+0x30]
        cmp ecx, ebx
        jne public_626504d
        mov ecx, esi
        public_626504d : nop
        push edx
        push ecx
        mov ecx, dword ptr ss : [ebp]
        push eax
        push ecx
        mov ecx, dword ptr ss : [esp+0x24]
        call public_6277c10
        jmp public_6265088
        nop 
        public_6265060 : nop
        mov ecx, esi
        mov edi, 0x100001
        call public_6310040
        mov edx, dword ptr ds : [public_6399028]
        push eax
        push 0xC1
/*FIXUP push offset public_6399484 @0x6265078*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6399484
/*FIXUP push offset public_63994f8 @0x626507d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63994f8
        push edi
        call dword ptr ds : [edx]
        add esp, 0x14
        public_6265088 : nop
        mov eax, dword ptr ss : [esp+0x1C]
        cmp eax, ebx
        pop edi
        pop esi
        je public_62650ae
        mov cl, byte ptr ds : [eax-1]
        dec eax
        cmp cl, bl
        je public_62650a5
        cmp cl, 0xFF
        je public_62650a5
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_62650ae
        public_62650a5 : nop
        push eax
        call public_6391d5a
        add esp, 4
        public_62650ae : nop
        mov eax, dword ptr ss : [esp+0x28]
        cmp eax, ebx
        mov dword ptr ss : [esp+0x14], ebx
        mov dword ptr ss : [esp+0x18], ebx
        mov dword ptr ss : [esp+0x1C], ebx
        je public_62650de
        mov cl, byte ptr ds : [eax-1]
        dec eax
        cmp cl, bl
        je public_62650d5
        cmp cl, 0xFF
        je public_62650d5
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_62650de
        public_62650d5 : nop
        push eax
        call public_6391d5a
        add esp, 4
        public_62650de : nop
        mov ecx, dword ptr ss : [esp+0x134]
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x138
        ret 4
        UNREACHABLE_TRAP(0x6264ea0)
    }
}

#undef public_6264ee6
#undef public_6264ee8
#undef public_6264f60
#undef public_6264f93
#undef public_6264fc4
#undef public_6264fe9
#undef public_6264ff8
#undef public_6265011
#undef public_6265043
#undef public_626504d
#undef public_6265060
#undef public_6265088
#undef public_62650a5
#undef public_62650ae
#undef public_62650d5
#undef public_62650de
