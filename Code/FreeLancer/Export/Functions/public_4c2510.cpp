#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c2510);
CLANG_FORWARD_PROC_SYMBOL(public_5416c0);
CLANG_FORWARD_PROC_SYMBOL(public_543320);

#define public_4c25b5 _public_4c25b5
#define public_4c25f2 _public_4c25f2
#define public_4c260f _public_4c260f

PROC_DECLARE(0x4c2510, internal_4c2510, public_4c2510);
extern "C" NAKED register_t __cdecl internal_4c2510()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        push 1
        push edi
        mov esi, ecx
        call public_5416c0
        add esp, 8
        test eax, eax
        mov dword ptr ds : [esi+0x42C], edi
        je public_4c260f
        push ebx
        mov ecx, eax
        call public_543320
        mov edi, eax
        mov dword ptr ds : [esi+0x43C], edi
        mov eax, dword ptr ds : [edi+0x88]
        fld dword ptr ds : [eax+0x100]
        mov ecx, edi
        fstp qword ptr ds : [esi+0x3F0]
        call dword ptr ds : [public_5c6440]
        fsubr qword ptr ds : [esi+0x3F0]
        mov ecx, dword ptr ds : [esi+0x39C]
        push 0
        fstp qword ptr ds : [esi+0x3E8]
        mov ebx, dword ptr ds : [ecx]
        mov ecx, edi
        call dword ptr ds : [public_5c644c]
        mov ecx, dword ptr ds : [esi+0x39C]
        push eax
        push 0x1D
        call dword ptr ds : [ebx+0xA8]
        mov edx, dword ptr ds : [edi+0xB4]
        mov dword ptr ds : [esi+0x430], edx
        mov eax, dword ptr ds : [edi+0x88]
        mov eax, dword ptr ds : [eax+0x140]
        cmp eax, 0xFFFFFFFF
        mov dword ptr ds : [esi+0x3FC], eax
        jne public_4c25b5
        mov dword ptr ds : [esi+0x3FC], 0x2FAF080
        public_4c25b5 : nop
        mov ebx, dword ptr ds : [edi+0x88]
        mov ecx, edi
        call dword ptr ds : [public_5c6448]
        mov ecx, dword ptr ds : [ebx+0x140]
        sub ecx, eax
        mov dword ptr ds : [esi+0x3F8], ecx
        mov edx, dword ptr ds : [edi+0x88]
        mov eax, dword ptr ds : [edx+0x144]
        cmp eax, 0xFFFFFFFF
        mov dword ptr ds : [esi+0x404], eax
        jne public_4c25f2
        mov dword ptr ds : [esi+0x404], 0x2FAF080
        public_4c25f2 : nop
        mov ebx, dword ptr ds : [edi+0x88]
        mov ecx, edi
        call dword ptr ds : [public_5c6444]
        mov ecx, dword ptr ds : [ebx+0x144]
        sub ecx, eax
        mov dword ptr ds : [esi+0x400], ecx
        pop ebx
        public_4c260f : nop
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x4c2510)
    }
}

#undef public_4c25b5
#undef public_4c25f2
#undef public_4c260f
