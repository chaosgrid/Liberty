#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62e74e0);

#define public_62e751f _public_62e751f
#define public_62e7521 _public_62e7521
#define public_62e754a _public_62e754a
#define public_62e754c _public_62e754c
#define public_62e7572 _public_62e7572

PROC_DECLARE(0x62e74e0, internal_62e74e0, public_62e74e0);
extern "C" NAKED register_t __cdecl internal_62e74e0()
{
    __asm
    {
        sub esp, 8
        push ebx
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+8]
        xor bl, bl
        test ecx, ecx
        je public_62e7572
        add ecx, 0xFFFFFFF8
        test ecx, ecx
        je public_62e7572
        mov cl, byte ptr ss : [esp+8]
        mov edx, dword ptr ss : [esp+0xC]
        and cl, 0xF8
        and edx, 0xE0000000
        mov byte ptr ss : [esp+8], cl
        mov dword ptr ss : [esp+0xC], edx
        mov eax, dword ptr ds : [eax+8]
        test eax, eax
        je public_62e751f
        lea ecx, ds:[eax-8]
        jmp public_62e7521
        public_62e751f : nop
        xor ecx, ecx
        public_62e7521 : nop
        mov eax, dword ptr ds : [ecx]
        lea edx, ds:[esi+8]
        push edx
        lea edx, ss:[esp+0xC]
        push edx
        call dword ptr ds : [eax+0x118]
        test byte ptr ss : [esp+8], 2
        jne public_62e7572
        mov eax, dword ptr ds : [esi+4]
        add eax, 8
        mov eax, dword ptr ds : [eax]
        test eax, eax
        je public_62e754a
        lea ecx, ds:[eax-8]
        jmp public_62e754c
        public_62e754a : nop
        xor ecx, ecx
        public_62e754c : nop
        mov eax, dword ptr ds : [ecx]
        xor edx, edx
        mov dl, byte ptr ds : [esi+0x1D]
        push edx
        mov edx, dword ptr ss : [esp+0x1C]
        push edx
        mov edx, dword ptr ss : [esp+0x1C]
        push edx
        call dword ptr ds : [eax+0x104]
        neg eax
        sbb al, al
        pop esi
        inc al
        pop ebx
        add esp, 8
        ret 8
        public_62e7572 : nop
        pop esi
        mov al, bl
        pop ebx
        add esp, 8
        ret 8
        UNREACHABLE_TRAP(0x62e74e0)
    }
}

#undef public_62e751f
#undef public_62e7521
#undef public_62e754a
#undef public_62e754c
#undef public_62e7572
