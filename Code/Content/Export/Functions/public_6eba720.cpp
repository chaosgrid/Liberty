#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb9af0);
CLANG_FORWARD_PROC_SYMBOL(public_6eba720);
CLANG_FORWARD_PROC_SYMBOL(public_6f1b480);
CLANG_FORWARD_PROC_SYMBOL(public_6f1b610);
CLANG_FORWARD_PROC_SYMBOL(public_6f1c530);
CLANG_FORWARD_PROC_SYMBOL(public_6f1c7c0);
CLANG_FORWARD_JUMP_SYMBOL(public_6faa5f9);

#define public_6eba770 _public_6eba770
#define public_6eba7b0 _public_6eba7b0
#define public_6eba7c1 _public_6eba7c1
#define public_6eba7f7 _public_6eba7f7
#define public_6eba823 _public_6eba823
#define public_6eba842 _public_6eba842
#define public_6eba84a _public_6eba84a

PROC_DECLARE(0x6eba720, internal_6eba720, public_6eba720);
extern "C" NAKED register_t __cdecl internal_6eba720()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6faa5f9 @0x6eba728*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6faa5f9
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr fs : [0], esp
        sub esp, 0x40
        push edi
        mov edi, ecx
        mov ecx, dword ptr ds : [eax+4]
        cmp ecx, dword ptr ds : [edi+0xC]
        jne public_6eba84a
        mov eax, dword ptr ds : [edi+0x324]
        push esi
        mov esi, dword ptr ds : [edi+0x320]
        cmp esi, eax
        je public_6eba7f7
        push ebx
        mov ebx, dword ptr ds : [public_6fb3640]
        push ebp
        mov ebp, esi
        lea edx, ss:[esp+0x1C]
        sub ebp, edx
        public_6eba770 : nop
        lea ecx, ss:[esp+0x14]
        call dword ptr ds : [public_6fb3094]
        mov eax, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ss : [esp+0x1C], eax
        mov eax, dword ptr ds : [esi+8]
        xor ecx, ecx
        mov dword ptr ss : [esp+0x24], eax
        mov eax, dword ptr ds : [esi+0x30]
        cmp eax, ecx
        mov dword ptr ss : [esp+0x20], edx
        mov edx, dword ptr ds : [esi+0xC]
        mov dword ptr ss : [esp+0x58], ecx
        mov dword ptr ss : [esp+0x28], edx
        mov dword ptr ss : [esp+0x4C], eax
        jle public_6eba7c1
        lea eax, ss:[esp+0x2C]
        lea ebx, ds:[ebx]
        public_6eba7b0 : nop
        mov edx, dword ptr ds : [eax+ebp]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ss : [esp+0x4C]
        inc ecx
        add eax, 4
        cmp ecx, edx
        jl public_6eba7b0
        public_6eba7c1 : nop
        mov ecx, dword ptr ds : [edi+0xC]
        lea eax, ss:[esp+0x14]
        push eax
        push ecx
        call ebx
        mov eax, dword ptr ds : [edi+0x324]
        mov edx, dword ptr ds : [public_6fb3090]
        add esi, 0x34
        add esp, 8
        add ebp, 0x34
        cmp esi, eax
        mov dword ptr ss : [esp+0x58], 0xFFFFFFFF
        mov dword ptr ss : [esp+0x14], edx
        jne public_6eba770
        pop ebp
        pop ebx
        public_6eba7f7 : nop
        mov eax, dword ptr ss : [esp+0x58]
        push eax
        lea ecx, ss:[esp+0xC]
        push ecx
        mov ecx, edi
        mov dword ptr ss : [esp+0x10], 0x36
        call public_6eb9af0
        mov al, byte ptr ds : [edi+0x290]
        test al, al
        jne public_6eba823
        mov ecx, edi
        call public_6f1b610
        jmp public_6eba842
        public_6eba823 : nop
        lea esi, ds:[edi+0x21C]
        mov ecx, esi
        call public_6f1c530
        mov ecx, edi
        call public_6f1b480
        push 0
        push 0
        mov ecx, esi
        call public_6f1c7c0
        public_6eba842 : nop
        mov byte ptr ds : [edi+0x2EC], 0
        pop esi
        public_6eba84a : nop
        mov ecx, dword ptr ss : [esp+0x44]
        pop edi
        mov dword ptr fs : [0], ecx
        add esp, 0x4C
        ret 4
        UNREACHABLE_TRAP(0x6eba720)
    }
}

#undef public_6eba770
#undef public_6eba7b0
#undef public_6eba7c1
#undef public_6eba7f7
#undef public_6eba823
#undef public_6eba842
#undef public_6eba84a
