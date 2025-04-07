#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_422440);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec0);

#define public_422468 _public_422468
#define public_422477 _public_422477
#define public_422497 _public_422497
#define public_4224a6 _public_4224a6
#define public_4224be _public_4224be
#define public_4224cb _public_4224cb
#define public_42250c _public_42250c
#define public_42253d _public_42253d

PROC_DECLARE(0x422440, internal_422440, public_422440);
extern "C" NAKED register_t __cdecl internal_422440()
{
    __asm
    {
        sub esp, 8
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0x14]
        fld dword ptr ds : [esi]
        fmul dword ptr ds : [public_5c75d8]
        call public_5b7ec0
        test eax, eax
        mov dword ptr ss : [esp+0x14], eax
        jge public_422468
        mov dword ptr ss : [esp+0x14], 0
        jmp public_422477
        public_422468 : nop
        cmp eax, 0xFF
        jle public_422477
        mov dword ptr ss : [esp+0x14], 0xFF
        public_422477 : nop
        fld dword ptr ds : [esi+4]
        fmul dword ptr ds : [public_5c75d8]
        call public_5b7ec0
        test eax, eax
        mov dword ptr ss : [esp+8], eax
        jge public_422497
        mov dword ptr ss : [esp+8], 0
        jmp public_4224a6
        public_422497 : nop
        cmp eax, 0xFF
        jle public_4224a6
        mov dword ptr ss : [esp+8], 0xFF
        public_4224a6 : nop
        fld dword ptr ds : [esi+8]
        fmul dword ptr ds : [public_5c75d8]
        call public_5b7ec0
        mov ebx, eax
        test ebx, ebx
        jge public_4224be
        xor ebx, ebx
        jmp public_4224cb
        public_4224be : nop
        cmp ebx, 0xFF
        jle public_4224cb
        mov ebx, 0xFF
        public_4224cb : nop
        mov eax, dword ptr ds : [public_5c6de0]
        lea edx, ss:[esp+0xC]
        push edx
        mov dword ptr ss : [esp+0x10], 0
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push 0xD
        push eax
        call dword ptr ds : [ecx+0x20]
        mov eax, dword ptr ss : [esp+0xC]
        test eax, eax
        jne public_42250c
        mov eax, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push 0
        push 0x23
        push eax
        call dword ptr ds : [ecx+0xF0]
        push 3
        push 0x8C
        jmp public_42253d
        public_42250c : nop
        mov edx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push 3
        push 0x23
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov edx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push 0
        push 0x8C
        push eax
        call dword ptr ds : [ecx+0xF0]
        push 0
        push 0x30
        public_42253d : nop
        mov edx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov edx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [edx]
        movzx edx, byte ptr ss : [esp+0x14]
        movzx esi, byte ptr ss : [esp+8]
        mov ecx, dword ptr ds : [eax]
        or edx, 0xFFFFFF00
        shl edx, 8
        or edx, esi
        movzx esi, bl
        shl edx, 8
        or edx, esi
        push edx
        push 0x22
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [public_5c6de0]
        mov dword ptr ss : [esp+0x14], eax
        mov eax, dword ptr ds : [ecx]
        mov ecx, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ds : [eax]
        push ecx
        push 0x24
        push eax
        call dword ptr ds : [edx+0xF0]
        mov edx, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push edx
        push 0x25
        push eax
        mov dword ptr ss : [esp+0x20], edx
        call dword ptr ds : [ecx+0xF0]
        mov eax, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push 1
        push 0x1C
        push eax
        call dword ptr ds : [ecx+0xF0]
        pop esi
        pop ebx
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x422440)
    }
}

#undef public_422468
#undef public_422477
#undef public_422497
#undef public_4224a6
#undef public_4224be
#undef public_4224cb
#undef public_42250c
#undef public_42253d
