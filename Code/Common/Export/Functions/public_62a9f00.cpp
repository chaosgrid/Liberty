#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62695c0);
CLANG_FORWARD_PROC_SYMBOL(public_626a570);
CLANG_FORWARD_PROC_SYMBOL(public_626a5b0);
CLANG_FORWARD_PROC_SYMBOL(public_626c1e0);
CLANG_FORWARD_PROC_SYMBOL(public_628f050);
CLANG_FORWARD_PROC_SYMBOL(public_629b430);
CLANG_FORWARD_PROC_SYMBOL(public_629b970);
CLANG_FORWARD_PROC_SYMBOL(public_6309ae0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_62a9f21 _public_62a9f21
#define public_62a9f29 _public_62a9f29
#define public_62a9f48 _public_62a9f48
#define public_62a9f50 _public_62a9f50
#define public_62a9f5c _public_62a9f5c
#define public_62a9f80 _public_62a9f80
#define public_62a9f98 _public_62a9f98
#define public_62a9fbb _public_62a9fbb
#define public_62a9fc3 _public_62a9fc3
#define public_62a9fce _public_62a9fce
#define public_62a9ff0 _public_62a9ff0
#define public_62aa02f _public_62aa02f
#define public_62aa034 _public_62aa034
#define public_62aa045 _public_62aa045
#define public_62aa0bf _public_62aa0bf
#define public_62aa100 _public_62aa100
#define public_62aa116 _public_62aa116
#define public_62aa130 _public_62aa130
#define public_62aa145 _public_62aa145
#define public_62aa150 _public_62aa150
#define public_62aa164 _public_62aa164
#define public_62aa16a _public_62aa16a
#define public_62aa16d _public_62aa16d
#define public_62aa183 _public_62aa183

PROC_DECLARE(0x62a9f00, internal_62a9f00, public_62a9f00);
extern "C" NAKED register_t __cdecl internal_62a9f00()
{
    __asm
    {
        sub esp, 0x38
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        lea ecx, ss:[esp+0x28]
        call public_6309ae0
        mov ebx, dword ptr ss : [esp+0x4C]
        mov ecx, dword ptr ds : [ebx+4]
        test ecx, ecx
        jne public_62a9f21
        xor eax, eax
        jmp public_62a9f29
        public_62a9f21 : nop
        mov eax, dword ptr ds : [ebx+8]
        sub eax, ecx
        sar eax, 5
        public_62a9f29 : nop
        mov edi, dword ptr ds : [esi+0xF0]
        lea edx, ds:[esi+0xE4]
        mov esi, dword ptr ds : [edx+0x18]
        add esi, edi
        add esi, eax
        test ecx, ecx
        mov dword ptr ss : [esp+0x4C], edx
        jne public_62a9f48
        xor eax, eax
        jmp public_62a9f50
        public_62a9f48 : nop
        mov eax, dword ptr ds : [ebx+0xC]
        sub eax, ecx
        sar eax, 5
        public_62a9f50 : nop
        cmp eax, esi
        jae public_62a9fce
        test esi, esi
        mov eax, esi
        jge public_62a9f5c
        xor eax, eax
        public_62a9f5c : nop
        shl eax, 5
        push eax
        call public_6391d9c
        mov edi, dword ptr ds : [ebx+4]
        mov dword ptr ss : [esp+0x18], eax
        mov ebp, eax
        mov eax, dword ptr ds : [ebx+8]
        add esp, 4
        cmp edi, eax
        mov dword ptr ss : [esp+0x10], eax
        je public_62a9f98
        lea esp, ss:[esp]
        public_62a9f80 : nop
        push edi
        push ebp
        call public_626c1e0
        mov eax, dword ptr ss : [esp+0x18]
        add edi, 0x20
        add esp, 8
        add ebp, 0x20
        cmp edi, eax
        jne public_62a9f80
        public_62a9f98 : nop
        mov eax, dword ptr ds : [ebx+4]
        push eax
        call public_6391d5a
        mov edx, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [ebx+4]
        shl esi, 5
        add esi, edx
        add esp, 4
        test ecx, ecx
        mov dword ptr ds : [ebx+0xC], esi
        jne public_62a9fbb
        xor eax, eax
        jmp public_62a9fc3
        public_62a9fbb : nop
        mov eax, dword ptr ds : [ebx+8]
        sub eax, ecx
        sar eax, 5
        public_62a9fc3 : nop
        shl eax, 5
        add eax, edx
        mov dword ptr ds : [ebx+8], eax
        mov dword ptr ds : [ebx+4], edx
        public_62a9fce : nop
        lea ecx, ss:[esp+0x18]
        call public_629b970
        lea ecx, ss:[esp+0x18]
        push ecx
        mov ecx, dword ptr ss : [esp+0x50]
        call public_629b430
        test eax, eax
        je public_62aa183
        lea ecx, ds:[ecx]
        public_62a9ff0 : nop
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x28]
        push ecx
        mov ecx, eax
        call dword ptr ds : [edx+0x28]
        test al, al
        je public_62aa16d
        mov ebp, dword ptr ds : [ebx+8]
        mov edx, dword ptr ds : [ebx+0xC]
        sub edx, ebp
        sar edx, 5
        cmp edx, 1
        jae public_62aa0bf
        mov ecx, ebx
        call public_62695c0
        cmp eax, 1
        jbe public_62aa02f
        mov ecx, ebx
        call public_62695c0
        mov edi, eax
        jmp public_62aa034
        public_62aa02f : nop
        mov edi, 1
        public_62aa034 : nop
        mov ecx, ebx
        call public_62695c0
        mov esi, eax
        add esi, edi
        mov eax, esi
        jns public_62aa045
        xor eax, eax
        public_62aa045 : nop
        shl eax, 5
        push eax
        call public_6391d9c
        add esp, 4
        mov edi, eax
        mov eax, dword ptr ds : [ebx+4]
        push edi
        push ebp
        push eax
        mov ecx, ebx
        call public_626a570
        lea ecx, ss:[esp+0x28]
        push ecx
        push 1
        push eax
        mov ecx, ebx
        mov dword ptr ss : [esp+0x20], eax
        call public_626a5b0
        mov edx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [ebx+8]
        add edx, 0x20
        push edx
        push eax
        push ebp
        mov ecx, ebx
        call public_626a570
        mov ecx, dword ptr ds : [ebx+8]
        mov edx, dword ptr ds : [ebx+4]
        push ecx
        push edx
        mov ecx, ebx
        call public_628f050
        mov eax, dword ptr ds : [ebx+4]
        push eax
        call public_6391d5a
        shl esi, 5
        add esi, edi
        add esp, 4
        mov ecx, ebx
        mov dword ptr ds : [ebx+0xC], esi
        call public_62695c0
        inc eax
        shl eax, 5
        add eax, edi
        mov dword ptr ds : [ebx+4], edi
        jmp public_62aa16a
        public_62aa0bf : nop
        mov ecx, ebp
        sub ecx, ebp
        sar ecx, 5
        cmp ecx, 1
        mov ecx, ebx
        jae public_62aa116
        lea edx, ss:[ebp+0x20]
        push edx
        push ebp
        push ebp
        call public_626a570
        mov eax, dword ptr ds : [ebx+8]
        mov edx, eax
        lea ecx, ss:[esp+0x28]
        push ecx
        sub edx, ebp
        sar edx, 5
        mov ecx, 1
        sub ecx, edx
        push ecx
        push eax
        mov ecx, ebx
        call public_626a5b0
        mov eax, dword ptr ds : [ebx+8]
        cmp ebp, eax
        je public_62aa164
        mov edi, edi
        public_62aa100 : nop
        mov edi, ebp
        add ebp, 0x20
        cmp ebp, eax
        mov ecx, 8
        lea esi, ss:[esp+0x28]
        rep movsd
        jne public_62aa100
        jmp public_62aa164
        public_62aa116 : nop
        push ebp
        push ebp
        lea edx, ss:[ebp-0x20]
        push edx
        call public_626a570
        mov edx, dword ptr ds : [ebx+8]
        lea eax, ds:[edx-0x20]
        cmp ebp, eax
        je public_62aa145
        nop 
        lea esp, ss:[esp]
        public_62aa130 : nop
        sub eax, 0x20
        sub edx, 0x20
        cmp eax, ebp
        mov ecx, 8
        mov esi, eax
        mov edi, edx
        rep movsd
        jne public_62aa130
        public_62aa145 : nop
        lea eax, ss:[ebp+0x20]
        cmp ebp, eax
        je public_62aa164
        lea esp, ss:[esp]
        public_62aa150 : nop
        mov edi, ebp
        add ebp, 0x20
        cmp ebp, eax
        mov ecx, 8
        lea esi, ss:[esp+0x28]
        rep movsd
        jne public_62aa150
        public_62aa164 : nop
        mov eax, dword ptr ds : [ebx+8]
        add eax, 0x20
        public_62aa16a : nop
        mov dword ptr ds : [ebx+8], eax
        public_62aa16d : nop
        mov ecx, dword ptr ss : [esp+0x4C]
        lea eax, ss:[esp+0x18]
        push eax
        call public_629b430
        test eax, eax
        jne public_62a9ff0
        public_62aa183 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x38
        ret 4
        UNREACHABLE_TRAP(0x62a9f00)
    }
}

#undef public_62a9f21
#undef public_62a9f29
#undef public_62a9f48
#undef public_62a9f50
#undef public_62a9f5c
#undef public_62a9f80
#undef public_62a9f98
#undef public_62a9fbb
#undef public_62a9fc3
#undef public_62a9fce
#undef public_62a9ff0
#undef public_62aa02f
#undef public_62aa034
#undef public_62aa045
#undef public_62aa0bf
#undef public_62aa100
#undef public_62aa116
#undef public_62aa130
#undef public_62aa145
#undef public_62aa150
#undef public_62aa164
#undef public_62aa16a
#undef public_62aa16d
#undef public_62aa183
