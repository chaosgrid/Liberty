#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f224f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f22a20);
CLANG_FORWARD_PROC_SYMBOL(public_6f22ca0);

#define public_6f22ce0 _public_6f22ce0
#define public_6f22cf2 _public_6f22cf2

PROC_DECLARE(0x6f22ca0, internal_6f22ca0, public_6f22ca0);
extern "C" NAKED register_t __cdecl internal_6f22ca0()
{
    __asm
    {
        sub esp, 0x10
        push ebx
        push esi
        push edi
        mov edi, ecx
        call public_6f224f0
        mov ebx, eax
        test ebx, ebx
        je public_6f22cf2
        xor esi, esi
        test ebx, ebx
        mov byte ptr ds : [edi+0x5D], 1
        mov dword ptr ss : [esp+0xC], 0x3F800000
        mov dword ptr ss : [esp+0x18], 0
        mov dword ptr ss : [esp+0x14], 0
        mov dword ptr ss : [esp+0x10], 0
        jbe public_6f22cf2
        lea ecx, ds:[ecx]
        public_6f22ce0 : nop
        lea eax, ss:[esp+0xC]
        push eax
        push esi
        mov ecx, edi
        call public_6f22a20
        inc esi
        cmp esi, ebx
        jb public_6f22ce0
        public_6f22cf2 : nop
        pop edi
        pop esi
        pop ebx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6f22ca0)
    }
}

#undef public_6f22ce0
#undef public_6f22cf2
