#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62fcfb0);
CLANG_FORWARD_PROC_SYMBOL(public_6315b90);
CLANG_FORWARD_PROC_SYMBOL(public_6316110);
CLANG_FORWARD_PROC_SYMBOL(public_6316aa0);
CLANG_FORWARD_PROC_SYMBOL(public_6316ac0);
CLANG_FORWARD_PROC_SYMBOL(public_6316dd0);
CLANG_FORWARD_PROC_SYMBOL(public_6316e20);
CLANG_FORWARD_PROC_SYMBOL(public_6319c80);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_63144fc _public_63144fc
#define public_6314504 _public_6314504
#define public_6314555 _public_6314555
#define public_6314561 _public_6314561
#define public_63145a2 _public_63145a2
#define public_6314601 _public_6314601
#define public_6314629 _public_6314629
#define public_631464b _public_631464b
#define public_631464f _public_631464f
#define public_6314652 _public_6314652
#define public_63146b2 _public_63146b2

PROC_DECLARE(0x63144c0, internal_63144c0, public_63144c0);
extern "C" NAKED register_t __cdecl internal_63144c0()
{
    __asm
    {
        sub esp, 0xC
        push ebx
        mov ebx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [ebx]
        push ebp
        push esi
        push edi
        mov edi, ecx
        lea ecx, ss:[esp+0x10]
        lea esi, ds:[edi+0x2C]
        push ecx
        mov ecx, esi
        mov dword ptr ss : [esp+0x14], eax
        call public_62fcfb0
        mov ecx, dword ptr ds : [esi+4]
        cmp eax, ecx
        mov dword ptr ss : [esp+0x14], eax
        je public_63144fc
        mov edx, dword ptr ss : [esp+0x10]
        cmp edx, dword ptr ds : [eax+0xC]
        jb public_63144fc
        lea eax, ss:[esp+0x14]
        jmp public_6314504
        public_63144fc : nop
        mov dword ptr ss : [esp+0x18], ecx
        lea eax, ss:[esp+0x18]
        public_6314504 : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, dword ptr ds : [edi+0x30]
        jne public_63146b2
        lea eax, ss:[esp+0x10]
        push eax
        mov ecx, esi
        call public_6316110
        mov ecx, dword ptr ds : [ebx]
        mov ebp, eax
        mov dword ptr ss : [ebp], ecx
        mov edx, dword ptr ds : [public_63991c0]
        mov eax, dword ptr ds : [edx]
        push eax
        push 0
        lea ecx, ds:[ebx+4]
        push ecx
        lea ecx, ss:[ebp+4]
        call dword ptr ds : [public_63991a8]
        lea edi, ds:[ebx+0x14]
        lea esi, ss:[ebp+0x14]
        cmp esi, edi
        je public_6314652
        mov ecx, dword ptr ds : [edi+4]
        test ecx, ecx
        jne public_6314555
        mov dword ptr ss : [esp+0x14], ecx
        jmp public_6314561
        public_6314555 : nop
        mov eax, dword ptr ds : [edi+8]
        sub eax, ecx
        sar eax, 4
        mov dword ptr ss : [esp+0x14], eax
        public_6314561 : nop
        mov ecx, esi
        call public_6316ac0
        cmp dword ptr ss : [esp+0x14], eax
        ja public_63145a2
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edi+8]
        mov ecx, dword ptr ds : [edi+4]
        push edx
        push eax
        push ecx
        call public_6319c80
        mov ecx, dword ptr ds : [esi+8]
        add esp, 0xC
        push ecx
        push eax
        mov ecx, esi
        call public_6316dd0
        mov ecx, edi
        call public_6316ac0
        mov ecx, dword ptr ds : [esi+4]
        shl eax, 4
        add eax, ecx
        jmp public_631464f
        public_63145a2 : nop
        mov ecx, edi
        call public_6316ac0
        mov ecx, esi
        mov ebx, eax
        call public_6316aa0
        cmp ebx, eax
        ja public_6314601
        mov edx, dword ptr ds : [edi+4]
        mov ecx, esi
        mov dword ptr ss : [esp+0x18], edx
        call public_6316ac0
        mov edx, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [edi+4]
        mov ebx, eax
        mov eax, dword ptr ds : [esi+4]
        shl ebx, 4
        push eax
        add ebx, edx
        push ebx
        push ecx
        call public_6319c80
        mov edx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [edi+8]
        add esp, 0xC
        push edx
        push eax
        push ebx
        mov ecx, esi
        call public_6316e20
        mov ecx, edi
        call public_6316ac0
        mov ecx, dword ptr ds : [esi+4]
        shl eax, 4
        add eax, ecx
        jmp public_631464b
        public_6314601 : nop
        mov ecx, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [esi+4]
        push ecx
        push edx
        mov ecx, esi
        call public_6316dd0
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_6391d5a
        add esp, 4
        mov ecx, edi
        call public_6316ac0
        test eax, eax
        jge public_6314629
        xor eax, eax
        public_6314629 : nop
        shl eax, 4
        push eax
        call public_6391d9c
        add esp, 4
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [edi+8]
        mov edi, dword ptr ds : [edi+4]
        push eax
        push ecx
        push edi
        mov ecx, esi
        call public_6316e20
        mov dword ptr ds : [esi+0xC], eax
        public_631464b : nop
        mov ebx, dword ptr ss : [esp+0x20]
        public_631464f : nop
        mov dword ptr ds : [esi+8], eax
        public_6314652 : nop
        mov ecx, dword ptr ds : [public_63991c0]
        mov edx, dword ptr ds : [ecx]
        push edx
        push 0
        lea eax, ds:[ebx+0x24]
        push eax
        lea ecx, ss:[ebp+0x24]
        call dword ptr ds : [public_63991a8]
        lea ecx, ds:[ebx+0x34]
        push ecx
        lea ecx, ss:[ebp+0x34]
        call public_6315b90
        mov edx, dword ptr ds : [public_63991c0]
        mov eax, dword ptr ds : [edx]
        push eax
        push 0
        lea ecx, ds:[ebx+0x44]
        push ecx
        lea ecx, ss:[ebp+0x44]
        call dword ptr ds : [public_63991a8]
        mov edx, dword ptr ds : [public_63991c0]
        mov eax, dword ptr ds : [edx]
        push eax
        push 0
        add ebx, 0x54
        push ebx
        lea ecx, ss:[ebp+0x54]
        call dword ptr ds : [public_63991a8]
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 0xC
        ret 4
        public_63146b2 : nop
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        add esp, 0xC
        ret 4
        UNREACHABLE_TRAP(0x63144c0)
    }
}

#undef public_63144fc
#undef public_6314504
#undef public_6314555
#undef public_6314561
#undef public_63145a2
#undef public_6314601
#undef public_6314629
#undef public_631464b
#undef public_631464f
#undef public_6314652
#undef public_63146b2
