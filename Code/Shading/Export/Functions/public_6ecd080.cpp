#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ec6120);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0c50);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0c5c);

#define public_6ecd090 _public_6ecd090
#define public_6ecd0cb _public_6ecd0cb
#define public_6ecd0d3 _public_6ecd0d3
#define public_6ecd110 _public_6ecd110
#define public_6ecd11a _public_6ecd11a
#define public_6ecd11c _public_6ecd11c

PROC_DECLARE(0x6ecd080, internal_6ecd080, public_6ecd080);
extern "C" NAKED register_t __cdecl internal_6ecd080()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ss : [esp+0xC]
        cmp eax, 0xFFFFFFFF
        jne public_6ecd090
        or eax, eax
        pop ecx
        ret 0xC
        public_6ecd090 : nop
        push ebx
        push esi
        or ebx, 0xFFFFFFFF
        test eax, eax
        push edi
        je public_6ecd11c
        mov edi, dword ptr ss : [esp+0x14]
        lea eax, ss:[esp+0x18]
        lea esi, ds:[edi+0x28]
        push eax
        mov ecx, esi
        call public_6ec6120
        mov esi, dword ptr ds : [esi+4]
        cmp eax, esi
        mov dword ptr ss : [esp+0x14], eax
        je public_6ecd0cb
        mov ecx, dword ptr ss : [esp+0x18]
        cmp ecx, dword ptr ds : [eax+0xC]
        jb public_6ecd0cb
        lea eax, ss:[esp+0x14]
        jmp public_6ecd0d3
        public_6ecd0cb : nop
        mov dword ptr ss : [esp+0xC], esi
        lea eax, ss:[esp+0xC]
        public_6ecd0d3 : nop
        mov esi, dword ptr ds : [eax]
        cmp esi, dword ptr ds : [edi+0x2C]
        je public_6ecd11c
        mov edx, dword ptr ds : [esi+0x10]
        push edx
        call public_6ed0c50
        mov ebx, dword ptr ss : [esp+0x20]
        add esp, 4
        test ebx, ebx
        mov dword ptr ds : [esi+0x10], 0
        je public_6ecd11a
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, ebx
        repne scasb
        not ecx
        push ecx
        call public_6ed0c5c
        add esp, 4
        mov dword ptr ds : [esi+0x10], eax
        mov ecx, ebx
        mov edx, eax
        public_6ecd110 : nop
        mov al, byte ptr ds : [ecx]
        inc ecx
        mov byte ptr ds : [edx], al
        inc edx
        test al, al
        jne public_6ecd110
        public_6ecd11a : nop
        xor ebx, ebx
        public_6ecd11c : nop
        pop edi
        pop esi
        mov eax, ebx
        pop ebx
        pop ecx
        ret 0xC
        UNREACHABLE_TRAP(0x6ecd080)
    }
}

#undef public_6ecd090
#undef public_6ecd0cb
#undef public_6ecd0d3
#undef public_6ecd110
#undef public_6ecd11a
#undef public_6ecd11c
