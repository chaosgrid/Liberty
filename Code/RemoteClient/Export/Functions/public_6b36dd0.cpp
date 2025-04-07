#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b38730);
CLANG_FORWARD_PROC_SYMBOL(public_6b3a160);
CLANG_FORWARD_PROC_SYMBOL(public_6b3b480);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a092);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a134);

#define public_6b36e46 _public_6b36e46
#define public_6b36e4d _public_6b36e4d
#define public_6b36e58 _public_6b36e58
#define public_6b36e5f _public_6b36e5f
#define public_6b36e70 _public_6b36e70
#define public_6b36e80 _public_6b36e80
#define public_6b36e97 _public_6b36e97
#define public_6b36eac _public_6b36eac
#define public_6b36eb4 _public_6b36eb4
#define public_6b36ebb _public_6b36ebb
#define public_6b36ec3 _public_6b36ec3
#define public_6b36eca _public_6b36eca
#define public_6b36ed6 _public_6b36ed6
#define public_6b36edd _public_6b36edd
#define public_6b36ee4 _public_6b36ee4
#define public_6b36ef4 _public_6b36ef4
#define public_6b36f04 _public_6b36f04
#define public_6b36f1c _public_6b36f1c
#define public_6b36f31 _public_6b36f31
#define public_6b36f44 _public_6b36f44
#define public_6b36f58 _public_6b36f58
#define public_6b36f5f _public_6b36f5f
#define public_6b36f65 _public_6b36f65
#define public_6b36f88 _public_6b36f88
#define public_6b36f8b _public_6b36f8b
#define public_6b36fa0 _public_6b36fa0

PROC_DECLARE(0x6b36dd0, internal_6b36dd0, public_6b36dd0);
extern "C" NAKED register_t __cdecl internal_6b36dd0()
{
    __asm
    {
        sub esp, 0x14
        push ebp
        lea eax, ss:[esp+4]
        push eax
        mov ebp, ecx
        mov ecx, dword ptr ss : [ebp+8]
        push 2
        push 1
        mov dword ptr ss : [esp+0x14], ebp
        call public_6b3b480
        test eax, eax
        jne public_6b36fa0
        mov edx, dword ptr ss : [esp+4]
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0x28]
        mov ecx, dword ptr ds : [esi]
        mov dword ptr ds : [edx+0x20], ecx
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [esi+0xC]
        mov dword ptr ss : [esp+0x18], ecx
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr ss : [esp+0x14], eax
        push edi
        lea eax, ss:[esp+0x18]
        push eax
        add ecx, 0x24
        mov dword ptr ss : [esp+0x24], edx
        call public_6b3a160
        mov edx, dword ptr ss : [esp+0x10]
        add esi, 0x10
        lea ebx, ds:[edx+0x30]
        cmp ebx, esi
        je public_6b36f8b
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        jne public_6b36e46
        xor edi, edi
        jmp public_6b36e4d
        public_6b36e46 : nop
        mov edi, dword ptr ds : [esi+8]
        sub edi, eax
        sar edi, 1
        public_6b36e4d : nop
        mov edx, dword ptr ds : [ebx+4]
        test edx, edx
        jne public_6b36e58
        xor ecx, ecx
        jmp public_6b36e5f
        public_6b36e58 : nop
        mov ecx, dword ptr ds : [ebx+8]
        sub ecx, edx
        sar ecx, 1
        public_6b36e5f : nop
        cmp edi, ecx
        ja public_6b36eac
        mov ecx, dword ptr ds : [esi+8]
        cmp eax, ecx
        je public_6b36e80
        lea ebx, ds:[ebx]
        public_6b36e70 : nop
        mov di, word ptr ds : [eax]
        mov word ptr ds : [edx], di
        add eax, 2
        add edx, 2
        cmp eax, ecx
        jne public_6b36e70
        public_6b36e80 : nop
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        jne public_6b36e97
        mov eax, dword ptr ds : [ebx+4]
        xor esi, esi
        lea ecx, ds:[eax+esi*2]
        mov dword ptr ds : [ebx+8], ecx
        jmp public_6b36f8b
        public_6b36e97 : nop
        mov esi, dword ptr ds : [esi+8]
        sub esi, eax
        mov eax, dword ptr ds : [ebx+4]
        sar esi, 1
        lea ecx, ds:[eax+esi*2]
        mov dword ptr ds : [ebx+8], ecx
        jmp public_6b36f8b
        public_6b36eac : nop
        test eax, eax
        jne public_6b36eb4
        xor edi, edi
        jmp public_6b36ebb
        public_6b36eb4 : nop
        mov edi, dword ptr ds : [esi+8]
        sub edi, eax
        sar edi, 1
        public_6b36ebb : nop
        test edx, edx
        jne public_6b36ec3
        xor ecx, ecx
        jmp public_6b36eca
        public_6b36ec3 : nop
        mov ecx, dword ptr ds : [ebx+0xC]
        sub ecx, edx
        sar ecx, 1
        public_6b36eca : nop
        cmp edi, ecx
        ja public_6b36f44
        test edx, edx
        jne public_6b36ed6
        xor ecx, ecx
        jmp public_6b36edd
        public_6b36ed6 : nop
        mov ecx, dword ptr ds : [ebx+8]
        sub ecx, edx
        sar ecx, 1
        public_6b36edd : nop
        lea ecx, ds:[eax+ecx*2]
        cmp eax, ecx
        je public_6b36ef4
        public_6b36ee4 : nop
        mov di, word ptr ds : [eax]
        mov word ptr ds : [edx], di
        add eax, 2
        add edx, 2
        cmp eax, ecx
        jne public_6b36ee4
        public_6b36ef4 : nop
        mov eax, dword ptr ds : [esi+8]
        cmp ecx, eax
        mov ebp, dword ptr ds : [ebx+8]
        mov dword ptr ss : [esp+0x2C], eax
        mov edi, ecx
        je public_6b36f1c
        public_6b36f04 : nop
        push edi
        push ebp
        call public_6b38730
        mov eax, dword ptr ss : [esp+0x34]
        add edi, 2
        add esp, 8
        add ebp, 2
        cmp edi, eax
        jne public_6b36f04
        public_6b36f1c : nop
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        jne public_6b36f31
        mov edx, dword ptr ds : [ebx+4]
        mov ebp, dword ptr ss : [esp+0x14]
        xor esi, esi
        lea eax, ds:[edx+esi*2]
        jmp public_6b36f88
        public_6b36f31 : nop
        mov esi, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [ebx+4]
        mov ebp, dword ptr ss : [esp+0x14]
        sub esi, eax
        sar esi, 1
        lea eax, ds:[edx+esi*2]
        jmp public_6b36f88
        public_6b36f44 : nop
        push edx
        call public_6b6a092
        mov ecx, dword ptr ds : [esi+4]
        add esp, 4
        test ecx, ecx
        jne public_6b36f58
        xor eax, eax
        jmp public_6b36f5f
        public_6b36f58 : nop
        mov eax, dword ptr ds : [esi+8]
        sub eax, ecx
        sar eax, 1
        public_6b36f5f : nop
        test eax, eax
        jge public_6b36f65
        xor eax, eax
        public_6b36f65 : nop
        lea ecx, ds:[eax+eax]
        push ecx
        call public_6b6a134
        add esp, 4
        mov dword ptr ds : [ebx+4], eax
        mov ecx, dword ptr ds : [esi+8]
        mov esi, dword ptr ds : [esi+4]
        push eax
        push ecx
        push esi
        mov ecx, ebx
        call dword ptr ds : [public_6b6b064]
        mov dword ptr ds : [ebx+0xC], eax
        public_6b36f88 : nop
        mov dword ptr ds : [ebx+8], eax
        public_6b36f8b : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0x28]
        mov edx, dword ptr ss : [ebp]
        push eax
        push ecx
        mov ecx, ebp
        call dword ptr ds : [edx+0x24]
        pop edi
        pop esi
        pop ebx
        public_6b36fa0 : nop
        pop ebp
        add esp, 0x14
        ret 8
        UNREACHABLE_TRAP(0x6b36dd0)
    }
}

#undef public_6b36e46
#undef public_6b36e4d
#undef public_6b36e58
#undef public_6b36e5f
#undef public_6b36e70
#undef public_6b36e80
#undef public_6b36e97
#undef public_6b36eac
#undef public_6b36eb4
#undef public_6b36ebb
#undef public_6b36ec3
#undef public_6b36eca
#undef public_6b36ed6
#undef public_6b36edd
#undef public_6b36ee4
#undef public_6b36ef4
#undef public_6b36f04
#undef public_6b36f1c
#undef public_6b36f31
#undef public_6b36f44
#undef public_6b36f58
#undef public_6b36f5f
#undef public_6b36f65
#undef public_6b36f88
#undef public_6b36f8b
#undef public_6b36fa0
