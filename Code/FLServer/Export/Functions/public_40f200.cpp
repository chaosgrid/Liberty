#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40ae40);
CLANG_FORWARD_PROC_SYMBOL(public_40ee60);
CLANG_FORWARD_PROC_SYMBOL(public_417420);
CLANG_FORWARD_PROC_SYMBOL(public_418aa4);
CLANG_FORWARD_PROC_SYMBOL(public_418aaa);
CLANG_FORWARD_PROC_SYMBOL(public_418ab6);
CLANG_FORWARD_PROC_SYMBOL(public_418bee);
CLANG_FORWARD_PROC_SYMBOL(public_418d80);
CLANG_FORWARD_PROC_SYMBOL(public_419122);
CLANG_FORWARD_PROC_SYMBOL(public_419128);
CLANG_FORWARD_PROC_SYMBOL(public_41912e);
CLANG_FORWARD_PROC_SYMBOL(public_419134);
CLANG_FORWARD_PROC_SYMBOL(public_41913a);
CLANG_FORWARD_PROC_SYMBOL(public_419140);
CLANG_FORWARD_PROC_SYMBOL(public_419146);
CLANG_FORWARD_PROC_SYMBOL(public_41914c);
CLANG_FORWARD_JUMP_SYMBOL(public_41a473);

#define public_40f2a6 _public_40f2a6
#define public_40f2e8 _public_40f2e8
#define public_40f2f6 _public_40f2f6
#define public_40f6b9 _public_40f6b9
#define public_40f6e0 _public_40f6e0
#define public_40f6f0 _public_40f6f0
#define public_40f6fc _public_40f6fc
#define public_40f706 _public_40f706
#define public_40f70f _public_40f70f
#define public_40f720 _public_40f720
#define public_40f72f _public_40f72f
#define public_40f73b _public_40f73b

PROC_DECLARE(0x40f200, internal_40f200, public_40f200);
extern "C" NAKED register_t __cdecl internal_40f200()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_41a473 @0x40f208*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_41a473
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x17C
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov byte ptr ds : [esi+0x1EC], 0
        call public_41914c
        call public_418d80
        mov eax, dword ptr ds : [eax+0xC]
        push 2
        push 0x9F
        push eax
        call dword ptr ds : [public_41b138]
        mov edi, eax
        test edi, edi
        je public_40f2a6
        call public_418d80
        mov eax, dword ptr ds : [eax+0xC]
        push edi
        push eax
        call dword ptr ds : [public_41b140]
        test eax, eax
        mov dword ptr ds : [esi+0x200], eax
        je public_40f2a6
        push eax
        call dword ptr ds : [public_41b144]
        test eax, eax
        mov dword ptr ds : [esi+0x204], eax
        je public_40f2a6
        push 0
        push eax
        call dword ptr ds : [public_41b104]
        test eax, eax
        je public_40f2a6
        lea edi, ds:[esi+0x1F0]
        push eax
        mov ecx, edi
        call public_419146
        test eax, eax
        jne public_40f2a6
        push 0x640A00
        call dword ptr ds : [public_41b108]
        push eax
        mov ecx, edi
        call public_419146
        public_40f2a6 : nop
        push esi
        lea ecx, ss:[esp+0x28]
        call public_419140
        lea eax, ss:[esp+0x24]
        push eax
/*FIXUP push offset public_4258c0 @0x40f2b5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_4258c0
        lea edi, ds:[esi+0x1F8]
        push 0x1E0
        mov ecx, edi
        mov dword ptr ss : [esp+0x1A0], 0
        call public_41913a
        test eax, eax
        mov ebp, dword ptr ds : [public_41bbe8]
        je public_40f2f6
        test edi, edi
        je public_40f2e8
        mov edi, dword ptr ds : [edi+4]
        public_40f2e8 : nop
        mov ecx, dword ptr ds : [esi+0xE0]
        push 1
        push edi
        push 0x30
        push ecx
        call ebp
        public_40f2f6 : nop
        push 5
        lea ecx, ds:[esi+0xC0]
        call public_418ab6
        or ebx, 0xFFFFFFFF
        lea ecx, ss:[esp+0x24]
        mov dword ptr ss : [esp+0x194], ebx
        call public_419134
        mov edx, dword ptr ds : [esi+0x1A0]
/*FIXUP push offset public_420000 @0x40f31c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_420000
        push 0
        push 0x401
        push edx
        call ebp
        mov eax, dword ptr ds : [esi+0x1A0]
        push 0
        push 0
        push 0x402
        push eax
        call ebp
        mov edx, dword ptr ds : [esi+0x120]
        lea ecx, ss:[esp+0x14]
        push ecx
        push edx
        call dword ptr ds : [public_41bc14]
        lea ecx, ss:[esp+0x10]
        call public_418aaa
        lea eax, ss:[esp+0x10]
        push 0xF013
        push eax
        mov dword ptr ss : [esp+0x19C], 1
        call public_40ae40
        mov edx, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ss : [esp+0x18]
        sub eax, edx
        cdq 
        add esp, 8
        sub eax, edx
        push 0
        sar eax, 1
        sub eax, 4
        push eax
        push 0
        push ecx
        lea edi, ds:[esi+0x100]
        push 0
        mov ecx, edi
        call public_41912e
        lea ecx, ss:[esp+0x10]
        mov dword ptr ss : [esp+0x194], ebx
        call public_418aa4
        lea ecx, ss:[esp+0x10]
        call public_418aaa
        lea edx, ss:[esp+0x10]
        push 0xF014
        push edx
        mov dword ptr ss : [esp+0x19C], 2
        call public_40ae40
        mov edx, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ss : [esp+0x24]
        sub eax, edx
        cdq 
        add esp, 8
        sub eax, edx
        push 1
        sar eax, 1
        sub eax, 4
        push eax
        mov eax, dword ptr ss : [esp+0x18]
        push 0
        push eax
        push 1
        mov ecx, edi
        call public_41912e
        lea ecx, ss:[esp+0x10]
        mov dword ptr ss : [esp+0x194], ebx
        call public_418aa4
        lea ecx, ss:[esp+0x10]
        call public_418aaa
        lea ecx, ss:[esp+0x10]
        push 0xF015
        push ecx
        mov dword ptr ss : [esp+0x19C], 3
        call public_40ae40
        mov edx, dword ptr ss : [esp+0x18]
        add esp, 8
        push 0
        push 0
        push 0
        push 0
        push edx
        push 0
        push 1
        mov ecx, edi
        call public_419128
        lea ecx, ss:[esp+0x10]
        mov dword ptr ss : [esp+0x194], ebx
        call public_418aa4
        lea ecx, ss:[esp+0x10]
        call public_418aaa
        lea eax, ss:[esp+0x10]
        push 0xF016
        push eax
        mov dword ptr ss : [esp+0x19C], 4
        call public_40ae40
        mov ecx, dword ptr ss : [esp+0x18]
        add esp, 8
        push 0
        push 0
        push 0
        push 0
        push ecx
        push 1
        push 1
        mov ecx, edi
        call public_419128
        lea ecx, ss:[esp+0x10]
        mov dword ptr ss : [esp+0x194], ebx
        call public_418aa4
        lea ecx, ss:[esp+0x10]
        call public_418aaa
        lea edx, ss:[esp+0x10]
        push 0xF017
        push edx
        mov dword ptr ss : [esp+0x19C], 5
        call public_40ae40
        mov eax, dword ptr ss : [esp+0x18]
        add esp, 8
        push 0
        push 0
        push 0
        push 0
        push eax
        push 2
        push 1
        mov ecx, edi
        call public_419128
        lea ecx, ss:[esp+0x10]
        mov dword ptr ss : [esp+0x194], ebx
        call public_418aa4
        lea ecx, ss:[esp+0x10]
        call public_418aaa
        lea ecx, ss:[esp+0x10]
        push 0xF018
        push ecx
        mov dword ptr ss : [esp+0x19C], 6
        call public_40ae40
        mov edx, dword ptr ss : [esp+0x18]
        add esp, 8
        push 0
        push 0
        push 0
        push 0
        push edx
        push 3
        push 1
        mov ecx, edi
        call public_419128
        lea ecx, ss:[esp+0x10]
        mov dword ptr ss : [esp+0x194], ebx
        call public_418aa4
        lea ecx, ss:[esp+0x10]
        call public_418aaa
        lea eax, ss:[esp+0x10]
        push 0xF019
        push eax
        mov dword ptr ss : [esp+0x19C], 7
        call public_40ae40
        mov ecx, dword ptr ss : [esp+0x18]
        add esp, 8
        push 0
        push 0
        push 0
        push 0
        push ecx
        push 4
        push 1
        mov ecx, edi
        call public_419128
        lea ecx, ss:[esp+0x10]
        mov dword ptr ss : [esp+0x194], ebx
        call public_418aa4
        lea ecx, ss:[esp+0x10]
        call public_418aaa
        lea edx, ss:[esp+0x10]
        push 0xF01A
        push edx
        mov dword ptr ss : [esp+0x19C], 8
        call public_40ae40
        mov eax, dword ptr ss : [esp+0x18]
        add esp, 8
        push 0
        push 0
        push 0
        push 0
        push eax
        push 5
        push 1
        mov ecx, edi
        call public_419128
        lea ecx, ss:[esp+0x10]
        mov dword ptr ss : [esp+0x194], ebx
        call public_418aa4
        mov ecx, dword ptr ds : [esi+0x120]
        push 0xFFFF
        push 0
        push 0x101E
        push ecx
        call ebp
        mov edx, dword ptr ds : [esi+0x120]
        push 0xFFFE
        push 1
        push 0x101E
        push edx
        call ebp
/*FIXUP push offset public_42621c @0x40f609*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_42621c
        lea ecx, ds:[esi+0x140]
        call public_418bee
        mov eax, ebx
        mov ecx, 0xB
        lea edi, ds:[esi+0x1C0]
        rep stosd
        xor eax, eax
        mov ecx, 0x15
        lea edi, ss:[esp+0x38]
        rep stosd
        lea eax, ss:[esp+0x38]
        push eax
        lea ecx, ds:[esi+0x80]
        mov dword ptr ss : [esp+0x3C], 0x54
        mov dword ptr ss : [esp+0x40], 0x40000000
        mov dword ptr ss : [esp+0x50], 0xE0C387
        call public_419122
        push 0xFF
        push 0
        mov ecx, dword ptr ds : [esi+0xA0]
        push 0x443
        push ecx
        call ebp
        call public_418d80
        mov eax, dword ptr ds : [eax+0xC]
        push 0x100
        lea edx, ss:[esp+0x90]
        push edx
        push 0xF01E
        push eax
        call public_417420
        lea eax, ss:[esp+0x9C]
        push eax
        lea ebx, ds:[esi+0x218]
        call dword ptr ds : [public_41b8f4]
        mov edi, eax
        add esp, 0x14
        cmp edi, 0x7FFFFFFD
        jbe public_40f6b9
        call dword ptr ds : [public_41b8a0]
        public_40f6b9 : nop
        mov eax, dword ptr ds : [ebx+4]
        test eax, eax
        je public_40f6e0
        mov cl, byte ptr ds : [eax-1]
        test cl, cl
        je public_40f6e0
        cmp cl, 0xFF
        je public_40f6e0
        test edi, edi
        jne public_40f706
        dec cl
        mov byte ptr ds : [eax-1], cl
        push edi
        mov ecx, ebx
        call dword ptr ds : [public_41b86c]
        jmp public_40f73b
        public_40f6e0 : nop
        test edi, edi
        jne public_40f6f0
        push 1
        mov ecx, ebx
        call dword ptr ds : [public_41b86c]
        jmp public_40f73b
        public_40f6f0 : nop
        mov eax, dword ptr ds : [ebx+0xC]
        cmp eax, 0x1F
        ja public_40f6fc
        cmp eax, edi
        jae public_40f70f
        public_40f6fc : nop
        push 1
        mov ecx, ebx
        call dword ptr ds : [public_41b86c]
        public_40f706 : nop
        mov ecx, ebx
        push edi
        call dword ptr ds : [public_41b8a4]
        public_40f70f : nop
        test edi, edi
        mov eax, dword ptr ds : [ebx+4]
        lea ecx, ss:[esp+0x8C]
        jbe public_40f72f
        mov edx, edi
        nop 
        public_40f720 : nop
        mov bp, word ptr ds : [ecx]
        mov word ptr ds : [eax], bp
        add eax, 2
        add ecx, 2
        dec edx
        jne public_40f720
        public_40f72f : nop
        mov ecx, dword ptr ds : [ebx+4]
        mov dword ptr ds : [ebx+8], edi
        mov word ptr ds : [ecx+edi*2], 0
        public_40f73b : nop
        mov edx, dword ptr ds : [esi+0x20]
        push 0
        push 0x64
        push 0x2002
        push edx
        call dword ptr ds : [public_41bc18]
        mov ecx, esi
        mov byte ptr ds : [esi+0x1EC], 1
        call public_40ee60
        mov ecx, dword ptr ss : [esp+0x18C]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x188
        ret 
        UNREACHABLE_TRAP(0x40f200)
    }
}

#undef public_40f2a6
#undef public_40f2e8
#undef public_40f2f6
#undef public_40f6b9
#undef public_40f6e0
#undef public_40f6f0
#undef public_40f6fc
#undef public_40f706
#undef public_40f70f
#undef public_40f720
#undef public_40f72f
#undef public_40f73b
