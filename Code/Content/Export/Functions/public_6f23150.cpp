#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ecfa90);
CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f15350);
CLANG_FORWARD_PROC_SYMBOL(public_6f15710);
CLANG_FORWARD_PROC_SYMBOL(public_6f22fa0);
CLANG_FORWARD_PROC_SYMBOL(public_6f23150);
CLANG_FORWARD_PROC_SYMBOL(public_6f23a30);
CLANG_FORWARD_PROC_SYMBOL(public_6f23db0);
CLANG_FORWARD_PROC_SYMBOL(public_6f28e10);
CLANG_FORWARD_JUMP_SYMBOL(public_6fadfc1);

#define public_6f231a6 _public_6f231a6
#define public_6f231b4 _public_6f231b4
#define public_6f23245 _public_6f23245
#define public_6f23283 _public_6f23283
#define public_6f232bf _public_6f232bf
#define public_6f232da _public_6f232da
#define public_6f23391 _public_6f23391
#define public_6f233a1 _public_6f233a1
#define public_6f233c4 _public_6f233c4

PROC_DECLARE(0x6f23150, internal_6f23150, public_6f23150);
extern "C" NAKED register_t __cdecl internal_6f23150()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6fadfc1 @0x6f23158*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fadfc1
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x94
        push ebx
        mov ebx, dword ptr ss : [esp+0xAC]
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xB4]
        mov ecx, ebx
        sub ecx, edi
        mov eax, 0x78787879
        imul ecx
        sar edx, 6
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov esi, edx
        cmp esi, 0x10
        jle public_6f233c4
        mov ebp, dword ptr ss : [esp+0xBC]
        jmp public_6f231b4
        public_6f231a6 : nop
        mov ebx, dword ptr ss : [esp+0xB8]
        mov edi, dword ptr ss : [esp+0xB4]
        public_6f231b4 : nop
        push ebp
        sub esp, 0x88
        lea edx, ds:[ebx-0x88]
        mov ecx, esp
        mov dword ptr ss : [esp+0xA4], esp
        push edx
        call public_6f22fa0
        mov eax, esi
        cdq 
        sub eax, edx
        sar eax, 1
        imul eax, 0x88
        sub esp, 0x88
        add eax, edi
        mov ecx, esp
        mov dword ptr ss : [esp+0x124], esp
        push eax
        mov dword ptr ss : [esp+0x1C4], 0
        call public_6f22fa0
        sub esp, 0x88
        mov ecx, esp
        mov dword ptr ss : [esp+0x1B0], esp
        push edi
        mov byte ptr ss : [esp+0x24C], 1
        call public_6f22fa0
        lea eax, ss:[esp+0x1B8]
        push eax
        mov dword ptr ss : [esp+0x24C], 0xFFFFFFFF
        call public_6f23a30
        add esp, 0x1A0
        mov dword ptr ss : [esp+0xAC], 2
        public_6f23245 : nop
        lea ecx, ds:[edi+4]
        push ecx
        mov ecx, ebp
        call public_6f15710
        lea edx, ss:[esp+0x20]
        push edx
        mov ecx, ebp
        mov esi, eax
        call public_6f15710
        test esi, esi
        je public_6f23283
        test eax, eax
        je public_6f23283
        mov edx, dword ptr ds : [eax+0x14C]
        mov esi, dword ptr ds : [esi+0x14C]
        cmp esi, edx
        setl al
        test al, al
        je public_6f23283
        add edi, 0x88
        jmp public_6f23245
        public_6f23283 : nop
        lea eax, ss:[esp+0x20]
        push eax
        mov ecx, ebp
        sub ebx, 0x88
        call public_6f15710
        lea ecx, ds:[ebx+4]
        push ecx
        mov ecx, ebp
        mov esi, eax
        call public_6f15710
        test esi, esi
        je public_6f232bf
        test eax, eax
        je public_6f232bf
        mov edx, dword ptr ds : [eax+0x14C]
        mov esi, dword ptr ds : [esi+0x14C]
        cmp esi, edx
        setl al
        test al, al
        jne public_6f23283
        public_6f232bf : nop
        cmp ebx, edi
        jbe public_6f232da
        push 0
        push ebx
        push edi
        call public_6f23db0
        add esp, 0xC
        add edi, 0x88
        jmp public_6f23245
        public_6f232da : nop
        mov dword ptr ss : [esp+0x1C], offset public_6fb60a8
        lea ecx, ss:[esp+0x84]
        mov dword ptr ss : [esp+0xAC], 6
        call public_6f28e10
        lea ecx, ss:[esp+0x88]
        call public_6eec8d0
        lea ecx, ss:[esp+0x84]
        mov byte ptr ss : [esp+0xAC], 4
        call public_6f28e10
        lea ecx, ss:[esp+0x74]
        mov byte ptr ss : [esp+0xAC], 3
        call public_6ecfa90
        lea ecx, ss:[esp+0x58]
        mov dword ptr ss : [esp+0xAC], 0xFFFFFFFF
        call public_6f15350
        mov ebx, dword ptr ss : [esp+0xB8]
        mov esi, dword ptr ss : [esp+0xB4]
        mov ecx, ebx
        sub ecx, edi
        mov eax, 0x78787879
        imul ecx
        mov ecx, edx
        sar ecx, 6
        mov edx, ecx
        shr edx, 0x1F
        add ecx, edx
        mov edx, edi
        sub edx, esi
        mov eax, 0x78787879
        imul edx
        sar edx, 6
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp ecx, edx
        push 0
        push ebp
        jg public_6f23391
        push ebx
        push edi
        call public_6f23150
        mov dword ptr ss : [esp+0xC8], edi
        mov ebx, edi
        jmp public_6f233a1
        public_6f23391 : nop
        push edi
        push esi
        call public_6f23150
        mov dword ptr ss : [esp+0xC4], edi
        mov esi, edi
        public_6f233a1 : nop
        mov ecx, ebx
        sub ecx, esi
        mov eax, 0x78787879
        imul ecx
        sar edx, 6
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        mov esi, edx
        add esp, 0x10
        cmp esi, 0x10
        jg public_6f231a6
        public_6f233c4 : nop
        mov ecx, dword ptr ss : [esp+0xA4]
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs : [0], ecx
        pop ebx
        add esp, 0xA0
        ret 
        UNREACHABLE_TRAP(0x6f23150)
    }
}

#undef public_6f231a6
#undef public_6f231b4
#undef public_6f23245
#undef public_6f23283
#undef public_6f232bf
#undef public_6f232da
#undef public_6f23391
#undef public_6f233a1
#undef public_6f233c4
