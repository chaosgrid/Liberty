#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f3abe0);
CLANG_FORWARD_PROC_SYMBOL(public_6f3bbf0);
CLANG_FORWARD_PROC_SYMBOL(public_6f3ceb0);
CLANG_FORWARD_PROC_SYMBOL(public_6f3cec0);
CLANG_FORWARD_PROC_SYMBOL(public_6f3df40);
CLANG_FORWARD_PROC_SYMBOL(public_6f3ef70);
CLANG_FORWARD_PROC_SYMBOL(public_6f3ff50);
CLANG_FORWARD_PROC_SYMBOL(public_6f400e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f40290);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e26);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e9c);

#define public_6f3ac28 _public_6f3ac28
#define public_6f3ac48 _public_6f3ac48
#define public_6f3ac5c _public_6f3ac5c
#define public_6f3ac60 _public_6f3ac60
#define public_6f3ac74 _public_6f3ac74
#define public_6f3acaa _public_6f3acaa
#define public_6f3acb2 _public_6f3acb2
#define public_6f3accb _public_6f3accb
#define public_6f3acfd _public_6f3acfd
#define public_6f3ad02 _public_6f3ad02
#define public_6f3ad13 _public_6f3ad13
#define public_6f3ad94 _public_6f3ad94
#define public_6f3add3 _public_6f3add3
#define public_6f3ade2 _public_6f3ade2
#define public_6f3adf7 _public_6f3adf7
#define public_6f3ae06 _public_6f3ae06
#define public_6f3ae10 _public_6f3ae10
#define public_6f3ae1d _public_6f3ae1d
#define public_6f3ae21 _public_6f3ae21
#define public_6f3ae37 _public_6f3ae37

PROC_DECLARE(0x6f3abe0, internal_6f3abe0, public_6f3abe0);
extern "C" NAKED register_t __cdecl internal_6f3abe0()
{
    __asm
    {
        sub esp, 0x10
        mov eax, dword ptr ss : [esp+0x18]
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ds : [eax]
        mov al, byte ptr ds : [esi+0x20]
        add esi, 0x10
        test al, al
        push edi
        mov dword ptr ss : [esp+0x10], esi
        jne public_6f3ae37
        mov edi, dword ptr ds : [esi+8]
        mov ebx, dword ptr ds : [esi+4]
        mov ecx, edi
        sub ecx, ebx
        and ecx, 0xFFFFFFFC
        cmp ecx, 0x40
        mov byte ptr ds : [esi+0x10], 1
        push 0
        jg public_6f3ac28
        mov edx, dword ptr ss : [esp+0x2C]
        push edx
        push edi
        push ebx
        call public_6f40290
        add esp, 0x10
        jmp public_6f3ac60
        public_6f3ac28 : nop
        mov ebp, dword ptr ss : [esp+0x2C]
        push ebp
        push edi
        push ebx
        call public_6f3ff50
        push 0
        push ebp
        lea esi, ds:[ebx+0x40]
        push esi
        push ebx
        call public_6f40290
        add esp, 0x20
        cmp esi, edi
        je public_6f3ac5c
        public_6f3ac48 : nop
        mov eax, dword ptr ds : [esi]
        push ebp
        push eax
        push esi
        call public_6f400e0
        add esi, 4
        add esp, 0xC
        cmp esi, edi
        jne public_6f3ac48
        public_6f3ac5c : nop
        mov esi, dword ptr ss : [esp+0x10]
        public_6f3ac60 : nop
        mov ebp, dword ptr ds : [esi+4]
        cmp ebp, dword ptr ds : [esi+8]
        mov dword ptr ss : [esp+0x14], ebp
        je public_6f3ae37
        mov esi, dword ptr ss : [esp+0x2C]
        public_6f3ac74 : nop
        mov edi, dword ptr ss : [ebp]
        mov dword ptr ss : [esp+0x28], edi
        mov eax, dword ptr ds : [edi+0x18]
        add edi, 0x18
        cmp eax, 0xFFFFFFFF
        je public_6f3accb
        mov ebx, dword ptr ss : [esp+0x24]
        push edi
        mov ecx, ebx
        call public_6f3ef70
        mov ecx, dword ptr ds : [ebx+4]
        cmp eax, ecx
        mov dword ptr ss : [esp+0x2C], eax
        je public_6f3acaa
        mov edx, dword ptr ds : [edi]
        cmp edx, dword ptr ds : [eax+0xC]
        jl public_6f3acaa
        lea eax, ss:[esp+0x2C]
        jmp public_6f3acb2
        public_6f3acaa : nop
        mov dword ptr ss : [esp+0x18], ecx
        lea eax, ss:[esp+0x18]
        public_6f3acb2 : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        mov dword ptr ss : [esp+0x1C], eax
        je public_6f3accb
        push esi
        lea eax, ss:[esp+0x20]
        push eax
        push ebx
        call public_6f3abe0
        add esp, 0xC
        public_6f3accb : nop
        mov eax, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [esi+0xC]
        sub ecx, eax
        sar ecx, 2
        cmp ecx, 1
        mov edi, eax
        jae public_6f3ad94
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        je public_6f3acfd
        sub eax, ecx
        sar eax, 2
        cmp eax, 1
        jbe public_6f3acfd
        mov ecx, esi
        call public_6f3bbf0
        mov ebx, eax
        jmp public_6f3ad02
        public_6f3acfd : nop
        mov ebx, 1
        public_6f3ad02 : nop
        mov ecx, esi
        call public_6f3bbf0
        mov ebp, eax
        add ebp, ebx
        mov eax, ebp
        jns public_6f3ad13
        xor eax, eax
        public_6f3ad13 : nop
        lea edx, ds:[eax*4]
        push edx
        call public_6f57e9c
        add esp, 4
        mov ebx, eax
        mov eax, dword ptr ds : [esi+4]
        push ebx
        push edi
        push eax
        mov ecx, esi
        call public_6f3cec0
        lea ecx, ss:[esp+0x28]
        push ecx
        push 1
        push eax
        mov ecx, esi
        mov dword ptr ss : [esp+0x38], eax
        call public_6f3df40
        mov edx, dword ptr ss : [esp+0x2C]
        mov eax, dword ptr ds : [esi+8]
        add edx, 4
        push edx
        push eax
        push edi
        mov ecx, esi
        call public_6f3cec0
        mov ecx, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [esi+4]
        push ecx
        push edx
        mov ecx, esi
        call public_6f3ceb0
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_6f57e26
        lea ecx, ds:[ebx+ebp*4]
        mov dword ptr ds : [esi+0xC], ecx
        add esp, 4
        mov ecx, esi
        call public_6f3bbf0
        mov ebp, dword ptr ss : [esp+0x14]
        lea edx, ds:[ebx+eax*4+4]
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [esi+4], ebx
        jmp public_6f3ae21
        public_6f3ad94 : nop
        mov ecx, eax
        sub ecx, edi
        sar ecx, 2
        cmp ecx, 1
        mov ecx, esi
        jae public_6f3ade2
        lea edx, ds:[edi+4]
        push edx
        push eax
        push edi
        call public_6f3cec0
        mov eax, dword ptr ds : [esi+8]
        mov edx, eax
        lea ecx, ss:[esp+0x28]
        push ecx
        sub edx, edi
        sar edx, 2
        mov ecx, 1
        sub ecx, edx
        push ecx
        push eax
        mov ecx, esi
        call public_6f3df40
        mov eax, dword ptr ds : [esi+8]
        cmp edi, eax
        je public_6f3ae1d
        public_6f3add3 : nop
        mov edx, dword ptr ss : [esp+0x28]
        mov dword ptr ds : [edi], edx
        add edi, 4
        cmp edi, eax
        jne public_6f3add3
        jmp public_6f3ae1d
        public_6f3ade2 : nop
        push eax
        push eax
        add eax, 0xFFFFFFFC
        push eax
        call public_6f3cec0
        mov ecx, dword ptr ds : [esi+8]
        lea eax, ds:[ecx-4]
        cmp edi, eax
        je public_6f3ae06
        public_6f3adf7 : nop
        mov edx, dword ptr ds : [eax-4]
        sub eax, 4
        sub ecx, 4
        cmp eax, edi
        mov dword ptr ds : [ecx], edx
        jne public_6f3adf7
        public_6f3ae06 : nop
        lea eax, ds:[edi+4]
        cmp edi, eax
        je public_6f3ae1d
        lea ecx, ds:[ecx]
        public_6f3ae10 : nop
        mov ecx, dword ptr ss : [esp+0x28]
        mov dword ptr ds : [edi], ecx
        add edi, 4
        cmp edi, eax
        jne public_6f3ae10
        public_6f3ae1d : nop
        add dword ptr ds : [esi+8], 4
        public_6f3ae21 : nop
        mov edx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [edx+8]
        add ebp, 4
        cmp ebp, eax
        mov dword ptr ss : [esp+0x14], ebp
        jne public_6f3ac74
        public_6f3ae37 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6f3abe0)
    }
}

#undef public_6f3ac28
#undef public_6f3ac48
#undef public_6f3ac5c
#undef public_6f3ac60
#undef public_6f3ac74
#undef public_6f3acaa
#undef public_6f3acb2
#undef public_6f3accb
#undef public_6f3acfd
#undef public_6f3ad02
#undef public_6f3ad13
#undef public_6f3ad94
#undef public_6f3add3
#undef public_6f3ade2
#undef public_6f3adf7
#undef public_6f3ae06
#undef public_6f3ae10
#undef public_6f3ae1d
#undef public_6f3ae21
#undef public_6f3ae37
