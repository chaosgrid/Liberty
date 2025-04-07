#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c294f0);
CLANG_FORWARD_PROC_SYMBOL(public_6c2a270);

#define public_6c218d4 _public_6c218d4
#define public_6c218f6 _public_6c218f6
#define public_6c21903 _public_6c21903
#define public_6c21913 _public_6c21913
#define public_6c2191b _public_6c2191b
#define public_6c21924 _public_6c21924

PROC_DECLARE(0x6c218b0, internal_6c218b0, public_6c218b0);
extern "C" NAKED register_t __cdecl internal_6c218b0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov ecx, dword ptr ds : [esi+4]
        mov al, byte ptr ds : [esi+0x28]
        inc ecx
        test al, al
        mov dword ptr ds : [esi+4], ecx
        je public_6c218d4
        mov eax, dword ptr ds : [esi+0x24]
        mov ecx, dword ptr ds : [eax+0xC]
        cmp ecx, dword ptr ss : [esp+0x14]
        jne public_6c218d4
        inc dword ptr ds : [esi+8]
        jmp public_6c218f6
        public_6c218d4 : nop
        lea edx, ss:[esp+0x14]
        push edx
        lea eax, ss:[esp+0xC]
        push eax
        lea ecx, ds:[esi+0xC]
        call public_6c2a270
        mov eax, dword ptr ss : [esp+8]
        cmp eax, dword ptr ds : [esi+0x10]
        je public_6c218f6
        mov dword ptr ds : [esi+0x24], eax
        mov byte ptr ds : [esi+0x28], 1
        public_6c218f6 : nop
        mov ecx, eax
        cmp ecx, dword ptr ds : [esi+0x10]
        pop esi
        jne public_6c21903
        xor al, al
        ret 0x1C
        public_6c21903 : nop
        mov edx, dword ptr ss : [esp+0x14]
        xor eax, eax
        test dh, 0x40
        jne public_6c21913
        mov eax, 0x40
        public_6c21913 : nop
        test dh, 0x10
        je public_6c2191b
        or eax, 2
        public_6c2191b : nop
        test dh, dh
        jns public_6c21924
        or eax, 0x80
        public_6c21924 : nop
        mov edx, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ds : [ecx+0x10]
        push edx
        mov edx, dword ptr ss : [esp+0x1C]
        push edx
        push eax
        mov eax, dword ptr ss : [esp+0x14]
        push eax
        call public_6c294f0
        ret 0x1C
        UNREACHABLE_TRAP(0x6c218b0)
    }
}

#undef public_6c218d4
#undef public_6c218f6
#undef public_6c21903
#undef public_6c21913
#undef public_6c2191b
#undef public_6c21924
