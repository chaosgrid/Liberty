#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6266ff0);
CLANG_FORWARD_PROC_SYMBOL(public_6267db0);
CLANG_FORWARD_PROC_SYMBOL(public_6267de0);
CLANG_FORWARD_PROC_SYMBOL(public_626c1c0);
CLANG_FORWARD_PROC_SYMBOL(public_628f050);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_62676ac _public_62676ac
#define public_62676b1 _public_62676b1
#define public_62676b9 _public_62676b9
#define public_62676bd _public_62676bd
#define public_62676c9 _public_62676c9
#define public_62676e2 _public_62676e2
#define public_62676f6 _public_62676f6
#define public_6267761 _public_6267761
#define public_62677a0 _public_62677a0
#define public_62677af _public_62677af
#define public_62677c6 _public_62677c6
#define public_62677d7 _public_62677d7
#define public_62677e2 _public_62677e2
#define public_62677ef _public_62677ef

PROC_DECLARE(0x6267670, internal_6267670, public_6267670);
extern "C" NAKED register_t __cdecl internal_6267670()
{
    __asm
    {
        sub esp, 8
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [esi+0xC]
        mov edx, dword ptr ds : [esi+4]
        push edi
        mov edi, dword ptr ss : [esp+0x1C]
        mov ebp, edi
        sub ecx, eax
        sub ebp, edx
        sar ebp, 1
        sar ecx, 1
        cmp ecx, 1
        mov dword ptr ss : [esp+0x14], ebp
        jae public_6267761
        test edx, edx
        je public_62676ac
        mov ecx, eax
        sub ecx, edx
        sar ecx, 1
        cmp ecx, 1
        ja public_62676b1
        public_62676ac : nop
        mov ecx, 1
        public_62676b1 : nop
        test edx, edx
        jne public_62676b9
        xor eax, eax
        jmp public_62676bd
        public_62676b9 : nop
        sub eax, edx
        sar eax, 1
        public_62676bd : nop
        add eax, ecx
        test eax, eax
        mov dword ptr ss : [esp+0x10], eax
        jge public_62676c9
        xor eax, eax
        public_62676c9 : nop
        lea edx, ds:[eax+eax]
        push edx
        call public_6391d9c
        mov ebx, dword ptr ds : [esi+4]
        add esp, 4
        cmp ebx, edi
        mov dword ptr ss : [esp+0x1C], eax
        mov ebp, eax
        je public_62676f6
        public_62676e2 : nop
        push ebx
        push ebp
        call public_626c1c0
        add ebx, 2
        add esp, 8
        add ebp, 2
        cmp ebx, edi
        jne public_62676e2
        public_62676f6 : nop
        mov eax, dword ptr ss : [esp+0x20]
        push eax
        push ebp
        call public_626c1c0
        mov ecx, dword ptr ds : [esi+8]
        add esp, 8
        add ebp, 2
        push ebp
        push ecx
        push edi
        mov ecx, esi
        call public_6267db0
        mov edx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [esi+4]
        push edx
        push eax
        mov ecx, esi
        call public_628f050
        mov ecx, dword ptr ds : [esi+4]
        push ecx
        call public_6391d5a
        mov edx, dword ptr ss : [esp+0x14]
        mov edi, dword ptr ss : [esp+0x20]
        lea eax, ds:[edi+edx*2]
        add esp, 4
        mov ecx, esi
        mov dword ptr ds : [esi+0xC], eax
        call public_6266ff0
        mov ebp, dword ptr ss : [esp+0x14]
        lea ecx, ds:[edi+eax*2+2]
        mov dword ptr ds : [esi+4], edi
        mov eax, edi
        pop edi
        mov dword ptr ds : [esi+8], ecx
        pop esi
        lea eax, ds:[eax+ebp*2]
        pop ebp
        pop ebx
        add esp, 8
        ret 8
        public_6267761 : nop
        mov edx, eax
        sub edx, edi
        sar edx, 1
        cmp edx, 1
        jae public_62677af
        lea ecx, ds:[edi+2]
        push ecx
        push eax
        push edi
        mov ecx, esi
        call public_6267db0
        mov eax, dword ptr ds : [esi+8]
        mov ebx, dword ptr ss : [esp+0x20]
        mov edx, eax
        sub edx, edi
        sar edx, 1
        push ebx
        mov ecx, 1
        sub ecx, edx
        push ecx
        push eax
        mov ecx, esi
        call public_6267de0
        mov ecx, dword ptr ds : [esi+8]
        cmp edi, ecx
        mov eax, edi
        je public_62677ef
        public_62677a0 : nop
        mov dx, word ptr ds : [ebx]
        mov word ptr ds : [eax], dx
        add eax, 2
        cmp eax, ecx
        jne public_62677a0
        jmp public_62677ef
        public_62677af : nop
        push eax
        push eax
        add eax, 0xFFFFFFFE
        push eax
        mov ecx, esi
        call public_6267db0
        mov ecx, dword ptr ds : [esi+8]
        lea eax, ds:[ecx-2]
        cmp edi, eax
        je public_62677d7
        public_62677c6 : nop
        mov dx, word ptr ds : [eax-2]
        sub eax, 2
        sub ecx, 2
        cmp eax, edi
        mov word ptr ds : [ecx], dx
        jne public_62677c6
        public_62677d7 : nop
        lea eax, ds:[edi+2]
        cmp edi, eax
        je public_62677ef
        mov ecx, dword ptr ss : [esp+0x20]
        public_62677e2 : nop
        mov dx, word ptr ds : [ecx]
        mov word ptr ds : [edi], dx
        add edi, 2
        cmp edi, eax
        jne public_62677e2
        public_62677ef : nop
        add dword ptr ds : [esi+8], 2
        mov eax, dword ptr ds : [esi+4]
        pop edi
        pop esi
        lea eax, ds:[eax+ebp*2]
        pop ebp
        pop ebx
        add esp, 8
        ret 8
        UNREACHABLE_TRAP(0x6267670)
    }
}

#undef public_62676ac
#undef public_62676b1
#undef public_62676b9
#undef public_62676bd
#undef public_62676c9
#undef public_62676e2
#undef public_62676f6
#undef public_6267761
#undef public_62677a0
#undef public_62677af
#undef public_62677c6
#undef public_62677d7
#undef public_62677e2
#undef public_62677ef
