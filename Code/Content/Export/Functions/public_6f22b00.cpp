#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ed0160);
CLANG_FORWARD_PROC_SYMBOL(public_6ed2c20);
CLANG_FORWARD_PROC_SYMBOL(public_6ed34e0);
CLANG_FORWARD_PROC_SYMBOL(public_6ef8910);
CLANG_FORWARD_PROC_SYMBOL(public_6f15710);
CLANG_FORWARD_PROC_SYMBOL(public_6f20230);
CLANG_FORWARD_PROC_SYMBOL(public_6f21830);
CLANG_FORWARD_PROC_SYMBOL(public_6f22b00);
CLANG_FORWARD_PROC_SYMBOL(public_6f22f50);
CLANG_FORWARD_PROC_SYMBOL(public_6f22fa0);
CLANG_FORWARD_PROC_SYMBOL(public_6f23120);
CLANG_FORWARD_PROC_SYMBOL(public_6f23150);
CLANG_FORWARD_PROC_SYMBOL(public_6f233e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f236c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f23a30);
CLANG_FORWARD_PROC_SYMBOL(public_6f23db0);
CLANG_FORWARD_PROC_SYMBOL(public_6f93490);
CLANG_FORWARD_JUMP_SYMBOL(public_6fadf27);

#define public_6f22b70 _public_6f22b70
#define public_6f22bc7 _public_6f22bc7
#define public_6f22be4 _public_6f22be4
#define public_6f22c0b _public_6f22c0b
#define public_6f22c18 _public_6f22c18
#define public_6f22cd0 _public_6f22cd0
#define public_6f22ce3 _public_6f22ce3
#define public_6f22d00 _public_6f22d00
#define public_6f22d3c _public_6f22d3c
#define public_6f22d95 _public_6f22d95
#define public_6f22d9e _public_6f22d9e
#define public_6f22dcd _public_6f22dcd
#define public_6f22df1 _public_6f22df1
#define public_6f22df8 _public_6f22df8
#define public_6f22e15 _public_6f22e15
#define public_6f22ee3 _public_6f22ee3
#define public_6f22f2b _public_6f22f2b

PROC_DECLARE(0x6f22b00, internal_6f22b00, public_6f22b00);
extern "C" NAKED register_t __cdecl internal_6f22b00()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6fadf27 @0x6f22b08*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fadf27
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x120
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x13C]
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x140]
        mov ecx, ebp
        sub ecx, edi
        mov eax, 0x78787879
        imul ecx
        sar edx, 6
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edx, 0x10
        jg public_6f22c0b
        cmp edi, ebp
        mov ecx, dword ptr ss : [esp+0x148]
        mov dword ptr ss : [esp+0x10], ecx
        je public_6f22f2b
        lea esi, ds:[edi+0x88]
        cmp esi, ebp
        je public_6f22f2b
        lea esp, ss:[esp]
        public_6f22b70 : nop
        push esi
        lea ecx, ss:[esp+0x24]
        call public_6f22fa0
        push edi
        lea edx, ss:[esp+0x24]
        push edx
        lea ecx, ss:[esp+0x18]
        mov dword ptr ss : [esp+0x140], 0
        call public_6f22f50
        test al, al
        jne public_6f22bc7
        mov eax, dword ptr ss : [esp+0x10]
        push eax
        sub esp, 0x88
        lea edx, ss:[esp+0xAC]
        mov ecx, esp
        mov dword ptr ss : [esp+0xA0], esp
        push edx
        call public_6f22fa0
        push esi
        call public_6f233e0
        add esp, 0x90
        jmp public_6f22be4
        public_6f22bc7 : nop
        lea eax, ds:[esi+0x88]
        push eax
        push esi
        push edi
        call public_6f21830
        add esp, 0xC
        lea ecx, ss:[esp+0x20]
        push ecx
        mov ecx, edi
        call public_6ed34e0
        public_6f22be4 : nop
        lea ecx, ss:[esp+0x20]
        mov dword ptr ss : [esp+0x138], 0xFFFFFFFF
        call public_6ed2c20
        add esi, 0x88
        cmp esi, ebp
        jne public_6f22b70
        jmp public_6f22f2b
        public_6f22c0b : nop
        mov ebx, dword ptr ss : [esp+0x148]
        jle public_6f22dcd
        public_6f22c18 : nop
        push ebx
        sub esp, 0x88
        lea edx, ss:[ebp-0x88]
        mov ecx, esp
        mov dword ptr ss : [esp+0x9C], esp
        push edx
        mov dword ptr ss : [esp+0xA4], ebx
        call public_6f22fa0
        mov ecx, ebp
        sub ecx, edi
        mov eax, 0x78787879
        imul ecx
        mov eax, edx
        sar eax, 6
        mov ecx, eax
        shr ecx, 0x1F
        add eax, ecx
        cdq 
        sub eax, edx
        sar eax, 1
        imul eax, 0x88
        sub esp, 0x88
        add eax, edi
        mov ecx, esp
        mov dword ptr ss : [esp+0x12C], esp
        push eax
        mov dword ptr ss : [esp+0x250], 1
        call public_6f22fa0
        sub esp, 0x88
        mov ecx, esp
        mov dword ptr ss : [esp+0x1B8], esp
        push edi
        mov byte ptr ss : [esp+0x2D8], 2
        call public_6f22fa0
        lea edx, ss:[esp+0x1BC]
        push edx
        mov dword ptr ss : [esp+0x2D8], 0xFFFFFFFF
        call public_6f23a30
        add esp, 0x1A0
        mov dword ptr ss : [esp+0x10], ebp
        mov esi, edi
        mov dword ptr ss : [esp+0x138], 3
        nop 
        lea esp, ss:[esp]
        public_6f22cd0 : nop
        lea eax, ss:[esp+0x20]
        push eax
        push esi
        lea ecx, ss:[esp+0x1C]
        call public_6f22f50
        test al, al
        je public_6f22d00
        public_6f22ce3 : nop
        lea ecx, ss:[esp+0x20]
        push ecx
        add esi, 0x88
        push esi
        lea ecx, ss:[esp+0x1C]
        call public_6f22f50
        test al, al
        jne public_6f22ce3
        lea esp, ss:[esp]
        public_6f22d00 : nop
        mov eax, dword ptr ss : [esp+0x10]
        sub eax, 0x88
        push eax
        lea edx, ss:[esp+0x24]
        push edx
        lea ecx, ss:[esp+0x1C]
        mov dword ptr ss : [esp+0x18], eax
        call public_6f22f50
        test al, al
        jne public_6f22d00
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, esi
        jbe public_6f22d3c
        push 0
        push eax
        push esi
        call public_6f23db0
        add esp, 0xC
        add esi, 0x88
        jmp public_6f22cd0
        public_6f22d3c : nop
        lea ecx, ss:[esp+0x20]
        mov dword ptr ss : [esp+0x138], 0xFFFFFFFF
        call public_6ed2c20
        mov ecx, ebp
        sub ecx, esi
        mov eax, 0x78787879
        imul ecx
        mov ecx, edx
        mov ebx, dword ptr ss : [esp+0x148]
        sar ecx, 6
        mov eax, ecx
        shr eax, 0x1F
        add ecx, eax
        mov edx, esi
        sub edx, edi
        mov eax, 0x78787879
        imul edx
        sar edx, 6
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp ecx, edx
        push 0
        push ebx
        jg public_6f22d95
        push ebp
        push esi
        call public_6f23150
        mov ebp, esi
        jmp public_6f22d9e
        public_6f22d95 : nop
        push esi
        push edi
        call public_6f23150
        mov edi, esi
        public_6f22d9e : nop
        mov ecx, ebp
        sub ecx, edi
        mov eax, 0x78787879
        imul ecx
        sar edx, 6
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        add esp, 0x10
        cmp edx, 0x10
        jg public_6f22c18
        mov edi, dword ptr ss : [esp+0x140]
        mov ebp, dword ptr ss : [esp+0x144]
        public_6f22dcd : nop
        push 0
        push ebx
        lea esi, ds:[edi+0x880]
        push esi
        push edi
        call public_6f236c0
        add esp, 0x10
        cmp esi, ebp
        mov dword ptr ss : [esp+0x140], esi
        je public_6f22f2b
        jmp public_6f22df8
        public_6f22df1 : nop
        mov esi, dword ptr ss : [esp+0x140]
        public_6f22df8 : nop
        push esi
        lea ecx, ss:[esp+0xAC]
        call public_6f22fa0
        mov edi, esi
        mov dword ptr ss : [esp+0x138], 4
        add esi, 8
        public_6f22e15 : nop
        lea edx, ss:[esp+0xAC]
        push edx
        mov ecx, ebx
        sub esi, 0x88
        call public_6f15710
        mov ebp, eax
        lea eax, ds:[esi-4]
        push eax
        mov ecx, ebx
        call public_6f15710
        test ebp, ebp
        je public_6f22ee3
        test eax, eax
        je public_6f22ee3
        mov edx, dword ptr ds : [eax+0x14C]
        mov ebp, dword ptr ss : [ebp+0x14C]
        cmp ebp, edx
        setl al
        test al, al
        je public_6f22ee3
        push esi
        lea ecx, ds:[edi+4]
        call public_6ed0160
        mov ecx, dword ptr ds : [esi+0x30]
        lea edx, ds:[esi+0x34]
        mov dword ptr ds : [edi+0x38], ecx
        push edx
        lea ecx, ds:[edi+0x3C]
        call public_6f93490
        mov al, byte ptr ds : [esi+0x40]
        mov byte ptr ds : [edi+0x48], al
        mov cl, byte ptr ds : [esi+0x41]
        mov byte ptr ds : [edi+0x49], cl
        mov edx, dword ptr ds : [esi+0x44]
        mov dword ptr ds : [edi+0x4C], edx
        mov al, byte ptr ds : [esi+0x48]
        mov byte ptr ds : [edi+0x50], al
        mov ecx, dword ptr ds : [esi+0x4C]
        lea edx, ds:[esi+0x50]
        mov dword ptr ds : [edi+0x54], ecx
        push edx
        lea ecx, ds:[edi+0x58]
        call public_6f20230
        mov eax, dword ptr ds : [esi+0x5C]
        lea ecx, ds:[esi+0x60]
        push ecx
        lea ecx, ds:[edi+0x68]
        mov dword ptr ds : [edi+0x64], eax
        call public_6f23120
        lea edx, ds:[esi+0x64]
        push edx
        lea ecx, ds:[edi+0x6C]
        call public_6ef8910
        mov eax, dword ptr ds : [esi+0x74]
        mov dword ptr ds : [edi+0x7C], eax
        mov ecx, dword ptr ds : [esi+0x78]
        mov dword ptr ds : [edi+0x80], ecx
        mov edx, dword ptr ds : [esi+0x7C]
        mov dword ptr ds : [edi+0x84], edx
        lea edi, ds:[esi-8]
        jmp public_6f22e15
        public_6f22ee3 : nop
        lea eax, ss:[esp+0xA8]
        push eax
        mov ecx, edi
        call public_6ed34e0
        lea ecx, ss:[esp+0xA8]
        mov dword ptr ss : [esp+0x138], 0xFFFFFFFF
        call public_6ed2c20
        mov eax, dword ptr ss : [esp+0x140]
        mov ecx, dword ptr ss : [esp+0x144]
        add eax, 0x88
        cmp eax, ecx
        mov dword ptr ss : [esp+0x140], eax
        jne public_6f22df1
        public_6f22f2b : nop
        mov ecx, dword ptr ss : [esp+0x130]
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs : [0], ecx
        pop ebx
        add esp, 0x12C
        ret 
        UNREACHABLE_TRAP(0x6f22b00)
    }
}

#undef public_6f22b70
#undef public_6f22bc7
#undef public_6f22be4
#undef public_6f22c0b
#undef public_6f22c18
#undef public_6f22cd0
#undef public_6f22ce3
#undef public_6f22d00
#undef public_6f22d3c
#undef public_6f22d95
#undef public_6f22d9e
#undef public_6f22dcd
#undef public_6f22df1
#undef public_6f22df8
#undef public_6f22e15
#undef public_6f22ee3
#undef public_6f22f2b
