#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cecba0);
CLANG_FORWARD_PROC_SYMBOL(public_6ced1f0);
CLANG_FORWARD_PROC_SYMBOL(public_6cf3040);
CLANG_FORWARD_PROC_SYMBOL(public_6cf3250);
CLANG_FORWARD_PROC_SYMBOL(public_6cf3290);
CLANG_FORWARD_PROC_SYMBOL(public_6d28880);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);
CLANG_FORWARD_PROC_SYMBOL(public_6d60012);

#define public_6cf30ab _public_6cf30ab
#define public_6cf30b0 _public_6cf30b0
#define public_6cf30b8 _public_6cf30b8
#define public_6cf30cb _public_6cf30cb
#define public_6cf30d8 _public_6cf30d8
#define public_6cf30f1 _public_6cf30f1
#define public_6cf3105 _public_6cf3105
#define public_6cf3163 _public_6cf3163
#define public_6cf31c0 _public_6cf31c0
#define public_6cf31d6 _public_6cf31d6
#define public_6cf31f0 _public_6cf31f0
#define public_6cf3205 _public_6cf3205
#define public_6cf3210 _public_6cf3210
#define public_6cf3222 _public_6cf3222
#define public_6cf3228 _public_6cf3228

PROC_DECLARE(0x6cf3040, internal_6cf3040, public_6cf3040);
extern "C" NAKED register_t __cdecl internal_6cf3040()
{
    __asm
    {
        sub esp, 8
        push ebx
        mov ebx, ecx
        push ebp
        mov ebp, dword ptr ss : [esp+0x14]
        push esi
        mov esi, dword ptr ds : [ebx+4]
        mov ecx, ebp
        sub ecx, esi
        mov eax, 0x4BDA12F7
        imul ecx
        mov ecx, dword ptr ds : [ebx+8]
        sar edx, 5
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov dword ptr ss : [esp+0x10], edx
        mov edx, dword ptr ds : [ebx+0xC]
        sub edx, ecx
        mov eax, 0x4BDA12F7
        imul edx
        sar edx, 5
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edx, 1
        push edi
        jae public_6cf3163
        test esi, esi
        je public_6cf30ab
        mov edx, ecx
        sub edx, esi
        mov eax, 0x4BDA12F7
        imul edx
        sar edx, 5
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edx, 1
        mov edi, edx
        ja public_6cf30b0
        public_6cf30ab : nop
        mov edi, 1
        public_6cf30b0 : nop
        test esi, esi
        jne public_6cf30b8
        xor edx, edx
        jmp public_6cf30cb
        public_6cf30b8 : nop
        sub ecx, esi
        mov eax, 0x4BDA12F7
        imul ecx
        sar edx, 5
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        public_6cf30cb : nop
        lea eax, ds:[edx+edi]
        test eax, eax
        mov dword ptr ss : [esp+0x1C], eax
        jge public_6cf30d8
        xor eax, eax
        public_6cf30d8 : nop
        imul eax, 0x6C
        push eax
        call public_6d60012
        mov esi, dword ptr ds : [ebx+4]
        add esp, 4
        cmp esi, ebp
        mov dword ptr ss : [esp+0x10], eax
        mov edi, eax
        je public_6cf3105
        public_6cf30f1 : nop
        push esi
        push edi
        call public_6ced1f0
        add esi, 0x6C
        add esp, 8
        add edi, 0x6C
        cmp esi, ebp
        jne public_6cf30f1
        public_6cf3105 : nop
        mov edx, dword ptr ss : [esp+0x20]
        push edx
        push edi
        call public_6ced1f0
        mov eax, dword ptr ds : [ebx+8]
        add esp, 8
        add edi, 0x6C
        push edi
        push eax
        push ebp
        mov ecx, ebx
        call public_6cf3250
        mov ecx, dword ptr ds : [ebx+8]
        mov edx, dword ptr ds : [ebx+4]
        push ecx
        push edx
        mov ecx, ebx
        call public_6d28880
        mov eax, dword ptr ds : [ebx+4]
        push eax
        call public_6d5ffb0
        mov eax, dword ptr ss : [esp+0x20]
        mov esi, dword ptr ss : [esp+0x14]
        imul eax, 0x6C
        add eax, esi
        add esp, 4
        mov ecx, ebx
        mov dword ptr ds : [ebx+0xC], eax
        call public_6cecba0
        inc eax
        imul eax, 0x6C
        add eax, esi
        mov dword ptr ds : [ebx+4], esi
        jmp public_6cf3228
        public_6cf3163 : nop
        mov edx, ecx
        sub edx, ebp
        mov eax, 0x4BDA12F7
        imul edx
        sar edx, 5
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edx, 1
        jae public_6cf31d6
        lea edx, ss:[ebp+0x6C]
        push edx
        push ecx
        push ebp
        mov ecx, ebx
        call public_6cf3250
        mov esi, dword ptr ds : [ebx+8]
        mov eax, dword ptr ss : [esp+0x20]
        push eax
        mov ecx, esi
        sub ecx, ebp
        mov eax, 0x4BDA12F7
        imul ecx
        sar edx, 5
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        mov eax, 1
        sub eax, edx
        push eax
        push esi
        mov ecx, ebx
        call public_6cf3290
        mov eax, dword ptr ds : [ebx+8]
        cmp ebp, eax
        je public_6cf3222
        mov edi, edi
        public_6cf31c0 : nop
        mov esi, dword ptr ss : [esp+0x20]
        mov edi, ebp
        add ebp, 0x6C
        cmp ebp, eax
        mov ecx, 0x1B
        rep movsd
        jne public_6cf31c0
        jmp public_6cf3222
        public_6cf31d6 : nop
        push ecx
        push ecx
        add ecx, 0xFFFFFF94
        push ecx
        mov ecx, ebx
        call public_6cf3250
        mov edx, dword ptr ds : [ebx+8]
        lea eax, ds:[edx-0x6C]
        cmp ebp, eax
        je public_6cf3205
        lea ecx, ds:[ecx]
        public_6cf31f0 : nop
        sub eax, 0x6C
        sub edx, 0x6C
        cmp eax, ebp
        mov ecx, 0x1B
        mov esi, eax
        mov edi, edx
        rep movsd
        jne public_6cf31f0
        public_6cf3205 : nop
        lea eax, ss:[ebp+0x6C]
        cmp ebp, eax
        je public_6cf3222
        mov edx, dword ptr ss : [esp+0x20]
        public_6cf3210 : nop
        mov edi, ebp
        add ebp, 0x6C
        cmp ebp, eax
        mov ecx, 0x1B
        mov esi, edx
        rep movsd
        jne public_6cf3210
        public_6cf3222 : nop
        mov eax, dword ptr ds : [ebx+8]
        add eax, 0x6C
        public_6cf3228 : nop
        mov ecx, dword ptr ds : [ebx+4]
        mov dword ptr ds : [ebx+8], eax
        mov eax, dword ptr ss : [esp+0x14]
        imul eax, 0x6C
        pop edi
        pop esi
        pop ebp
        add eax, ecx
        pop ebx
        add esp, 8
        ret 8
        UNREACHABLE_TRAP(0x6cf3040)
    }
}

#undef public_6cf30ab
#undef public_6cf30b0
#undef public_6cf30b8
#undef public_6cf30cb
#undef public_6cf30d8
#undef public_6cf30f1
#undef public_6cf3105
#undef public_6cf3163
#undef public_6cf31c0
#undef public_6cf31d6
#undef public_6cf31f0
#undef public_6cf3205
#undef public_6cf3210
#undef public_6cf3222
#undef public_6cf3228
