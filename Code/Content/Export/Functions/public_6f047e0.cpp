#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea1490);
CLANG_FORWARD_PROC_SYMBOL(public_6eac680);
CLANG_FORWARD_PROC_SYMBOL(public_6eb2060);
CLANG_FORWARD_PROC_SYMBOL(public_6f042d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f04450);
CLANG_FORWARD_PROC_SYMBOL(public_6f047e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f04a30);
CLANG_FORWARD_PROC_SYMBOL(public_6f04ab0);
CLANG_FORWARD_PROC_SYMBOL(public_6f04b10);
CLANG_FORWARD_PROC_SYMBOL(public_6f04b90);
CLANG_FORWARD_PROC_SYMBOL(public_6f48c50);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_JUMP_SYMBOL(public_6faccca);

#define public_6f0484d _public_6f0484d
#define public_6f04861 _public_6f04861
#define public_6f04930 _public_6f04930
#define public_6f049f3 _public_6f049f3
#define public_6f049fd _public_6f049fd

PROC_DECLARE(0x6f047e0, internal_6f047e0, public_6f047e0);
extern "C" NAKED register_t __cdecl internal_6f047e0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6faccca @0x6f047e2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6faccca
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xB4
        mov al, byte ptr ss : [esp+3]
        push ebp
        push esi
        xor esi, esi
        push edi
        mov byte ptr ss : [esp+0x10], al
        mov dword ptr ss : [esp+0x14], esi
        mov dword ptr ss : [esp+0x18], esi
        mov dword ptr ss : [esp+0x1C], esi
        mov edi, dword ptr ss : [esp+0xD8]
        mov ebp, dword ptr ss : [esp+0xD0]
        lea ecx, ss:[esp+0x10]
        push ecx
        push edi
        push ebp
        mov dword ptr ss : [esp+0xD4], esi
        call public_6f042d0
        mov ecx, dword ptr ss : [esp+0x20]
        add esp, 0xC
        cmp ecx, esi
        je public_6f0484d
        mov eax, dword ptr ss : [esp+0x18]
        sub eax, ecx
        sar eax, 3
        cmp eax, esi
        jne public_6f04861
        public_6f0484d : nop
        mov edx, dword ptr ds : [edi+0xC]
        push 1
        push edx
        call dword ptr ds : [public_6fb36ac]
        add esp, 8
        jmp public_6f049fd
        public_6f04861 : nop
        mov al, byte ptr ss : [esp+0xF]
        push ebx
        mov byte ptr ss : [esp+0x28], al
        mov dword ptr ss : [esp+0x2C], esi
        mov dword ptr ss : [esp+0x30], esi
        mov dword ptr ss : [esp+0x34], esi
        mov esi, dword ptr ss : [ebp+0x6C]
        mov ebx, dword ptr ss : [ebp+0x68]
        mov byte ptr ss : [esp+0xCC], 1
        call dword ptr ds : [public_6fb3370]
        sub esi, ebx
        inc esi
        imul eax, esi
        cdq 
        and edx, 0x7FFF
        add eax, edx
        sar eax, 0xF
        add eax, ebx
        push eax
        lea ecx, ss:[esp+0x18]
        push ecx
        push ebp
        lea edx, ss:[esp+0x34]
        push edi
        push edx
        call public_6f04450
        mov ecx, dword ptr ss : [esp+0x30]
        add esp, 0x14
        mov esi, eax
        mov eax, dword ptr ss : [esp+0x18]
        push ecx
        push eax
        lea ecx, ss:[esp+0x1C]
        mov ebx, eax
        call public_6ea1490
        mov eax, dword ptr ds : [edi+0xC]
        push esi
        push eax
        mov dword ptr ss : [esp+0x24], ebx
        call dword ptr ds : [public_6fb36ac]
        mov esi, dword ptr ss : [esp+0x34]
        add esp, 8
        test esi, esi
        je public_6f049f3
        mov ebx, dword ptr ss : [esp+0x30]
        mov ecx, ebx
        sub ecx, esi
        mov eax, 0x38E38E39
        imul ecx
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov dword ptr ss : [esp+0x24], edx
        je public_6f049f3
        cmp esi, ebx
        je public_6f049f3
        mov ecx, dword ptr ss : [esp+0xD8]
        mov ebp, dword ptr ds : [public_6fb36b0]
        add ecx, 0x10
        mov dword ptr ss : [esp+0x24], ecx
        mov ebx, 2
        lea esp, ss:[esp]
        public_6f04930 : nop
        lea ecx, ss:[esp+0x74]
        call public_6eac680
        lea ecx, ss:[esp+0x8C]
        mov byte ptr ss : [esp+0xCC], bl
        call public_6eac680
        lea ecx, ss:[esp+0xA4]
        mov byte ptr ss : [esp+0xCC], 3
        call public_6eac680
        lea ecx, ss:[esp+0x64]
        mov byte ptr ss : [esp+0xCC], 4
        call public_6f04ab0
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [ecx]
        lea eax, ss:[esp+0x64]
        push eax
        mov eax, dword ptr ds : [esi+4]
        push eax
        mov byte ptr ss : [esp+0xD4], 5
        call dword ptr ds : [edx+0x18]
        mov ecx, edi
        mov dword ptr ss : [esp+0x6C], ebx
        call public_6f48c50
        lea ecx, ss:[esp+0x40]
        mov dword ptr ss : [esp+0x68], eax
        call public_6f04a30
        lea ecx, ss:[esp+0x64]
        push ecx
        call ebp
        mov edx, dword ptr ss : [esp+0x6C]
        add esp, 4
        push esi
        lea ecx, ss:[esp+0x44]
        mov dword ptr ss : [esp+0x3C], eax
        mov dword ptr ss : [esp+0x40], edx
        call public_6eb2060
        mov ecx, dword ptr ss : [esp+0x24]
        lea eax, ss:[esp+0x38]
        push eax
        call public_6f04b90
        lea ecx, ss:[esp+0x64]
        mov byte ptr ss : [esp+0xCC], 1
        call public_6f04b10
        mov eax, dword ptr ss : [esp+0x30]
        add esi, 0x24
        cmp esi, eax
        jne public_6f04930
        mov esi, dword ptr ss : [esp+0x2C]
        public_6f049f3 : nop
        push esi
        call public_6fa8fe0
        add esp, 4
        pop ebx
        public_6f049fd : nop
        mov ecx, dword ptr ss : [esp+0x14]
        push ecx
        call public_6fa8fe0
        mov ecx, dword ptr ss : [esp+0xC4]
        add esp, 4
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs : [0], ecx
        add esp, 0xC0
        ret 
        UNREACHABLE_TRAP(0x6f047e0)
    }
}

#undef public_6f0484d
#undef public_6f04861
#undef public_6f04930
#undef public_6f049f3
#undef public_6f049fd
