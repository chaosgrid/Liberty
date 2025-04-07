#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62e6c60);

#define public_62e6c97 _public_62e6c97
#define public_62e6c99 _public_62e6c99
#define public_62e6cc9 _public_62e6cc9
#define public_62e6ccb _public_62e6ccb
#define public_62e6cf8 _public_62e6cf8
#define public_62e6cfa _public_62e6cfa
#define public_62e6d2a _public_62e6d2a

PROC_DECLARE(0x62e6c60, internal_62e6c60, public_62e6c60);
extern "C" NAKED register_t __cdecl internal_62e6c60()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        sub esp, 0xC
        test eax, eax
        push esi
        mov esi, ecx
        je public_62e6d2a
        mov ecx, dword ptr ds : [eax+8]
        test ecx, ecx
        je public_62e6d2a
        add ecx, 0xFFFFFFF8
        test ecx, ecx
        je public_62e6d2a
        mov dword ptr ds : [esi+4], eax
        mov eax, dword ptr ds : [eax+8]
        test eax, eax
        je public_62e6c97
        lea ecx, ds:[eax-8]
        jmp public_62e6c99
        public_62e6c97 : nop
        xor ecx, ecx
        public_62e6c99 : nop
        mov eax, dword ptr ds : [ecx]
        push 0x80000
        push 1
        lea edx, ds:[esi+8]
        push edx
        call dword ptr ds : [eax+0x114]
        test eax, eax
        jne public_62e6d2a
        mov dword ptr ss : [esp+4], eax
        mov dword ptr ss : [esp+0xC], eax
        mov eax, dword ptr ds : [esi+4]
        add eax, 8
        mov eax, dword ptr ds : [eax]
        test eax, eax
        je public_62e6cc9
        lea ecx, ds:[eax-8]
        jmp public_62e6ccb
        public_62e6cc9 : nop
        xor ecx, ecx
        public_62e6ccb : nop
        mov eax, dword ptr ds : [ecx]
        lea edx, ss:[esp+0xC]
        push edx
        lea edx, ss:[esp+8]
        push edx
        call dword ptr ds : [eax+0x3C]
        mov eax, dword ptr ds : [esi+4]
        add eax, 8
        mov dword ptr ss : [esp+8], 0
        mov byte ptr ss : [esp+0x14], 0
        mov eax, dword ptr ds : [eax]
        test eax, eax
        je public_62e6cf8
        lea ecx, ds:[eax-8]
        jmp public_62e6cfa
        public_62e6cf8 : nop
        xor ecx, ecx
        public_62e6cfa : nop
        mov eax, dword ptr ds : [ecx]
        lea edx, ss:[esp+0x14]
        push edx
        lea edx, ss:[esp+0xC]
        push edx
        lea edx, ss:[esp+0xC]
        push edx
        call dword ptr ds : [eax+0x44]
        fld dword ptr ss : [esp+8]
        fadd dword ptr ss : [esp+0xC]
        mov byte ptr ds : [esi+0x1C], 0
        mov byte ptr ds : [esi+0x1D], 0
        mov al, 1
        fstp dword ptr ds : [esi+0x20]
        pop esi
        add esp, 0xC
        ret 4
        public_62e6d2a : nop
        xor al, al
        pop esi
        add esp, 0xC
        ret 4
        UNREACHABLE_TRAP(0x62e6c60)
    }
}

#undef public_62e6c97
#undef public_62e6c99
#undef public_62e6cc9
#undef public_62e6ccb
#undef public_62e6cf8
#undef public_62e6cfa
#undef public_62e6d2a
