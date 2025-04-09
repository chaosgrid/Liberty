#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_528d70);
CLANG_FORWARD_PROC_SYMBOL(public_5295d0);
CLANG_FORWARD_PROC_SYMBOL(public_5296d0);

#define public_529714 _public_529714
#define public_529794 _public_529794
#define public_5297b4 _public_5297b4
#define public_5297d4 _public_5297d4
#define public_5297f4 _public_5297f4
#define public_529814 _public_529814
#define public_529834 _public_529834
#define public_529854 _public_529854
#define public_529874 _public_529874
#define public_529894 _public_529894

PROC_DECLARE(0x5296d0, internal_5296d0, public_5296d0);
extern "C" NAKED register_t __cdecl internal_5296d0()
{
    __asm
    {
        sub esp, 0x3C
        push esi
        push edi
        lea eax, ss:[esp+8]
        push eax
        mov esi, ecx
        mov dword ptr ss : [esp+0xC], 0
        mov dword ptr ss : [esp+0x10], 0
        mov dword ptr ss : [esp+0x14], 0
        call public_528d70
        test eax, eax
        jne public_529714
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx+0xC]
        mov al, byte ptr ds : [edx+0x84]
        test al, al
        jne public_529714
        mov ecx, esi
        call public_5295d0
        public_529714 : nop
        mov eax, dword ptr ss : [esp+8]
        mov ecx, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x38], eax
        mov eax, dword ptr ds : [esi+0x38]
        test eax, eax
        mov dword ptr ss : [esp+0x34], 0x3F800000
        mov dword ptr ss : [esp+0x24], 0x3F800000
        mov dword ptr ss : [esp+0x14], 0x3F800000
        mov dword ptr ss : [esp+0x30], 0
        mov dword ptr ss : [esp+0x2C], 0
        mov dword ptr ss : [esp+0x28], 0
        mov dword ptr ss : [esp+0x20], 0
        mov dword ptr ss : [esp+0x1C], 0
        mov dword ptr ss : [esp+0x18], 0
        mov dword ptr ss : [esp+0x3C], ecx
        mov dword ptr ss : [esp+0x40], edx
        je public_529794
        mov edi, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [ecx]
        lea eax, ss:[esp+0x14]
        push eax
        call dword ptr ds : [edx+0x1C]
        mov ecx, dword ptr ds : [esi+0x38]
        push eax
        call dword ptr ds : [edi+0x94]
        public_529794 : nop
        mov eax, dword ptr ds : [esi+0x3C]
        test eax, eax
        je public_5297b4
        mov edi, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [ecx]
        lea eax, ss:[esp+0x14]
        push eax
        call dword ptr ds : [edx+0x1C]
        mov ecx, dword ptr ds : [esi+0x3C]
        push eax
        call dword ptr ds : [edi+0x94]
        public_5297b4 : nop
        mov eax, dword ptr ds : [esi+0x40]
        test eax, eax
        je public_5297d4
        mov edi, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [ecx]
        lea eax, ss:[esp+0x14]
        push eax
        call dword ptr ds : [edx+0x1C]
        mov ecx, dword ptr ds : [esi+0x40]
        push eax
        call dword ptr ds : [edi+0x94]
        public_5297d4 : nop
        mov eax, dword ptr ds : [esi+0x44]
        test eax, eax
        je public_5297f4
        mov edi, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [ecx]
        lea eax, ss:[esp+0x14]
        push eax
        call dword ptr ds : [edx+0x1C]
        mov ecx, dword ptr ds : [esi+0x44]
        push eax
        call dword ptr ds : [edi+0x94]
        public_5297f4 : nop
        mov eax, dword ptr ds : [esi+0x48]
        test eax, eax
        je public_529814
        mov edi, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [ecx]
        lea eax, ss:[esp+0x14]
        push eax
        call dword ptr ds : [edx+0x1C]
        mov ecx, dword ptr ds : [esi+0x48]
        push eax
        call dword ptr ds : [edi+0x94]
        public_529814 : nop
        mov eax, dword ptr ds : [esi+0x4C]
        test eax, eax
        je public_529834
        mov edi, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [ecx]
        lea eax, ss:[esp+0x14]
        push eax
        call dword ptr ds : [edx+0x1C]
        mov ecx, dword ptr ds : [esi+0x4C]
        push eax
        call dword ptr ds : [edi+0x94]
        public_529834 : nop
        mov eax, dword ptr ds : [esi+0x50]
        test eax, eax
        je public_529854
        mov edi, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [ecx]
        lea eax, ss:[esp+0x14]
        push eax
        call dword ptr ds : [edx+0x1C]
        mov ecx, dword ptr ds : [esi+0x50]
        push eax
        call dword ptr ds : [edi+0x94]
        public_529854 : nop
        mov eax, dword ptr ds : [esi+0x54]
        test eax, eax
        je public_529874
        mov edi, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [ecx]
        lea eax, ss:[esp+0x14]
        push eax
        call dword ptr ds : [edx+0x1C]
        mov ecx, dword ptr ds : [esi+0x54]
        push eax
        call dword ptr ds : [edi+0x94]
        public_529874 : nop
        mov eax, dword ptr ds : [esi+0x58]
        test eax, eax
        je public_529894
        mov edi, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [ecx]
        lea eax, ss:[esp+0x14]
        push eax
        call dword ptr ds : [edx+0x1C]
        mov ecx, dword ptr ds : [esi+0x58]
        push eax
        call dword ptr ds : [edi+0x94]
        public_529894 : nop
        pop edi
        pop esi
        add esp, 0x3C
        ret 
        UNREACHABLE_TRAP(0x5296d0)
    }
}

#undef public_529714
#undef public_529794
#undef public_5297b4
#undef public_5297d4
#undef public_5297f4
#undef public_529814
#undef public_529834
#undef public_529854
#undef public_529874
#undef public_529894
