#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62814f0);
CLANG_FORWARD_PROC_SYMBOL(public_62853c0);
CLANG_FORWARD_PROC_SYMBOL(public_6285490);
CLANG_FORWARD_PROC_SYMBOL(public_6345450);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_62853d7 _public_62853d7
#define public_62853f4 _public_62853f4
#define public_628540c _public_628540c
#define public_628541a _public_628541a
#define public_6285440 _public_6285440
#define public_6285461 _public_6285461
#define public_628546b _public_628546b
#define public_6285487 _public_6285487

PROC_DECLARE(0x62853c0, internal_62853c0, public_62853c0);
extern "C" NAKED register_t __cdecl internal_62853c0()
{
    __asm
    {
        push ebx
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [edi+0x60]
        xor ebx, ebx
        cmp ecx, ebx
        je public_62853d7
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax+0x18]
        public_62853d7 : nop
        mov esi, dword ptr ds : [edi+0x84]
        cmp esi, ebx
        mov dword ptr ds : [edi+0x60], ebx
        je public_62853f4
        mov ecx, esi
        call public_62814f0
        push esi
        call public_6391d5a
        add esp, 4
        public_62853f4 : nop
        mov ecx, dword ptr ds : [edi+0x54]
        cmp ecx, ebx
        mov dword ptr ds : [edi+0x84], ebx
        je public_628540c
        mov dword ptr ds : [edi+0x54], ebx
        mov dword ptr ds : [edi+0x50], ebx
        call public_6345450
        public_628540c : nop
        mov ecx, dword ptr ds : [edi+0x5C]
        cmp ecx, ebx
        je public_628541a
        mov edx, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [edx+0x24]
        public_628541a : nop
        mov dword ptr ds : [edi+0x5C], ebx
        mov ebx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [public_6399040]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push 0xFFFFFFFF
        push 1
        push ebx
        push eax
        call dword ptr ds : [ecx+0xD8]
        mov esi, eax
        cmp esi, 0xFFFFFFFF
        je public_6285487
        lea esp, ss:[esp]
        public_6285440 : nop
        mov edx, dword ptr ds : [public_6399040]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push esi
        push eax
        call dword ptr ds : [ecx+0x80]
        cmp eax, edi
        je public_6285461
        push eax
        call public_62853c0
        add esp, 4
        jmp public_628546b
        public_6285461 : nop
        push esi
        push eax
        call public_6285490
        add esp, 8
        public_628546b : nop
        mov edx, dword ptr ds : [public_6399040]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push esi
        push 1
        push ebx
        push eax
        call dword ptr ds : [ecx+0xD8]
        mov esi, eax
        cmp esi, 0xFFFFFFFF
        jne public_6285440
        public_6285487 : nop
        pop edi
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x62853c0)
    }
}

#undef public_62853d7
#undef public_62853f4
#undef public_628540c
#undef public_628541a
#undef public_6285440
#undef public_6285461
#undef public_628546b
#undef public_6285487
