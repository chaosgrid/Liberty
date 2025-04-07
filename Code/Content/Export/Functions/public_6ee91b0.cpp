#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea1490);
CLANG_FORWARD_PROC_SYMBOL(public_6eedfe0);
CLANG_FORWARD_PROC_SYMBOL(public_6eee010);
CLANG_FORWARD_PROC_SYMBOL(public_6eee050);
CLANG_FORWARD_PROC_SYMBOL(public_6eee7a0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6ee923b _public_6ee923b
#define public_6ee9240 _public_6ee9240
#define public_6ee9248 _public_6ee9248
#define public_6ee925b _public_6ee925b
#define public_6ee9268 _public_6ee9268
#define public_6ee9284 _public_6ee9284
#define public_6ee9298 _public_6ee9298
#define public_6ee9301 _public_6ee9301
#define public_6ee9360 _public_6ee9360
#define public_6ee9387 _public_6ee9387
#define public_6ee93a0 _public_6ee93a0
#define public_6ee93b5 _public_6ee93b5
#define public_6ee93c0 _public_6ee93c0
#define public_6ee93d4 _public_6ee93d4

PROC_DECLARE(0x6ee91b0, internal_6ee91b0, public_6ee91b0);
extern "C" NAKED register_t __cdecl internal_6ee91b0()
{
    __asm
    {
        sub esp, 0x18
        mov eax, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp], edx
        mov edx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x24]
        mov dword ptr ss : [esp+4], edx
        mov edx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x28]
        mov dword ptr ss : [esp+8], edx
        mov edx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x2C]
        fld dword ptr ds : [eax]
        push ebx
        mov dword ptr ss : [esp+0x10], edx
        mov edx, dword ptr ds : [ecx+0x20]
        lea ebx, ds:[ecx+0x14]
        mov ecx, dword ptr ds : [ebx+8]
        sub edx, ecx
        mov eax, 0x2AAAAAAB
        imul edx
        sar edx, 2
        mov eax, edx
        push ebp
        shr eax, 0x1F
        add edx, eax
        cmp edx, 1
        push esi
        push edi
        fstp dword ptr ss : [esp+0x24]
        mov dword ptr ss : [esp+0x20], 0
        mov ebp, ecx
        jae public_6ee9301
        mov esi, dword ptr ds : [ebx+4]
        test esi, esi
        je public_6ee923b
        mov edx, ecx
        sub edx, esi
        mov eax, 0x2AAAAAAB
        imul edx
        sar edx, 2
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edx, 1
        mov edi, edx
        ja public_6ee9240
        public_6ee923b : nop
        mov edi, 1
        public_6ee9240 : nop
        test esi, esi
        jne public_6ee9248
        xor edx, edx
        jmp public_6ee925b
        public_6ee9248 : nop
        sub ecx, esi
        mov eax, 0x2AAAAAAB
        imul ecx
        sar edx, 2
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        public_6ee925b : nop
        lea eax, ds:[edx+edi]
        test eax, eax
        mov dword ptr ss : [esp+0x2C], eax
        jge public_6ee9268
        xor eax, eax
        public_6ee9268 : nop
        lea edx, ds:[eax+eax*2]
        shl edx, 3
        push edx
        call public_6fa912a
        mov edi, dword ptr ds : [ebx+4]
        add esp, 4
        cmp edi, ebp
        mov dword ptr ss : [esp+0x30], eax
        mov esi, eax
        je public_6ee9298
        public_6ee9284 : nop
        push edi
        push esi
        call public_6eee7a0
        add edi, 0x18
        add esp, 8
        add esi, 0x18
        cmp edi, ebp
        jne public_6ee9284
        public_6ee9298 : nop
        lea eax, ss:[esp+0x10]
        push eax
        push 1
        push esi
        mov ecx, ebx
        call public_6eee050
        mov ecx, dword ptr ds : [ebx+8]
        add esi, 0x18
        push esi
        push ecx
        push ebp
        mov ecx, ebx
        call public_6eee010
        mov edx, dword ptr ds : [ebx+8]
        mov eax, dword ptr ds : [ebx+4]
        push edx
        push eax
        mov ecx, ebx
        call public_6ea1490
        mov ecx, dword ptr ds : [ebx+4]
        push ecx
        call public_6fa8fe0
        mov eax, dword ptr ss : [esp+0x30]
        mov esi, dword ptr ss : [esp+0x34]
        lea edx, ds:[eax+eax*2]
        lea eax, ds:[esi+edx*8]
        add esp, 4
        mov ecx, ebx
        mov dword ptr ds : [ebx+0xC], eax
        call public_6eedfe0
        inc eax
        pop edi
        lea ecx, ds:[eax+eax*2]
        lea edx, ds:[esi+ecx*8]
        mov dword ptr ds : [ebx+4], esi
        pop esi
        pop ebp
        mov dword ptr ds : [ebx+8], edx
        pop ebx
        add esp, 0x18
        ret 0x14
        public_6ee9301 : nop
        mov edx, ecx
        sub edx, ebp
        mov eax, 0x2AAAAAAB
        imul edx
        sar edx, 2
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edx, 1
        jae public_6ee9387
        lea edx, ss:[ebp+0x18]
        push edx
        push ecx
        push ebp
        mov ecx, ebx
        call public_6eee010
        mov esi, dword ptr ds : [ebx+8]
        lea eax, ss:[esp+0x10]
        push eax
        mov ecx, esi
        sub ecx, ebp
        mov eax, 0x2AAAAAAB
        imul ecx
        sar edx, 2
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        mov eax, 1
        sub eax, edx
        push eax
        push esi
        mov ecx, ebx
        call public_6eee050
        mov eax, dword ptr ds : [ebx+8]
        cmp ebp, eax
        je public_6ee93d4
        lea esp, ss:[esp]
        public_6ee9360 : nop
        mov edi, ebp
        add ebp, 0x18
        cmp ebp, eax
        mov ecx, 6
        lea esi, ss:[esp+0x10]
        rep movsd
        jne public_6ee9360
        mov eax, dword ptr ds : [ebx+8]
        pop edi
        pop esi
        add eax, 0x18
        pop ebp
        mov dword ptr ds : [ebx+8], eax
        pop ebx
        add esp, 0x18
        ret 0x14
        public_6ee9387 : nop
        push ecx
        push ecx
        add ecx, 0xFFFFFFE8
        push ecx
        mov ecx, ebx
        call public_6eee010
        mov edx, dword ptr ds : [ebx+8]
        lea eax, ds:[edx-0x18]
        cmp ebp, eax
        je public_6ee93b5
        mov edi, edi
        public_6ee93a0 : nop
        sub eax, 0x18
        sub edx, 0x18
        cmp eax, ebp
        mov ecx, 6
        mov esi, eax
        mov edi, edx
        rep movsd
        jne public_6ee93a0
        public_6ee93b5 : nop
        lea edx, ss:[ebp+0x18]
        cmp ebp, edx
        mov eax, ebp
        je public_6ee93d4
        mov edi, edi
        public_6ee93c0 : nop
        mov edi, eax
        add eax, 0x18
        cmp eax, edx
        mov ecx, 6
        lea esi, ss:[esp+0x10]
        rep movsd
        jne public_6ee93c0
        public_6ee93d4 : nop
        mov eax, dword ptr ds : [ebx+8]
        pop edi
        pop esi
        add eax, 0x18
        pop ebp
        mov dword ptr ds : [ebx+8], eax
        pop ebx
        add esp, 0x18
        ret 0x14
        UNREACHABLE_TRAP(0x6ee91b0)
    }
}

#undef public_6ee923b
#undef public_6ee9240
#undef public_6ee9248
#undef public_6ee925b
#undef public_6ee9268
#undef public_6ee9284
#undef public_6ee9298
#undef public_6ee9301
#undef public_6ee9360
#undef public_6ee9387
#undef public_6ee93a0
#undef public_6ee93b5
#undef public_6ee93c0
#undef public_6ee93d4
