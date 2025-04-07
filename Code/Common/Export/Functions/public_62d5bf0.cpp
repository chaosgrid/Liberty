#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62e90a0);

#define public_62d5c33 _public_62d5c33
#define public_62d5c35 _public_62d5c35
#define public_62d5c4b _public_62d5c4b
#define public_62d5c4d _public_62d5c4d
#define public_62d5ca3 _public_62d5ca3
#define public_62d5cbf _public_62d5cbf
#define public_62d5ccc _public_62d5ccc

PROC_DECLARE(0x62d5bf0, internal_62d5bf0, public_62d5bf0);
extern "C" NAKED register_t __cdecl internal_62d5bf0()
{
    __asm
    {
        sub esp, 0x10
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x14]
        test eax, eax
        je public_62d5ccc
        add eax, 0xFFFFFFF8
        test eax, eax
        je public_62d5ccc
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        je public_62d5ccc
        mov al, byte ptr ds : [esi+0x38]
        test al, al
        je public_62d5cbf
        mov eax, dword ptr ds : [esi+0x14]
        test eax, eax
        mov byte ptr ss : [esp+7], 0
        je public_62d5c33
        lea ecx, ds:[eax-8]
        jmp public_62d5c35
        public_62d5c33 : nop
        xor ecx, ecx
        public_62d5c35 : nop
        mov eax, dword ptr ds : [ecx]
        lea edx, ss:[esp+7]
        push edx
        call dword ptr ds : [eax+0x60]
        mov eax, dword ptr ds : [esi+0x14]
        test eax, eax
        je public_62d5c4b
        lea ecx, ds:[eax-8]
        jmp public_62d5c4d
        public_62d5c4b : nop
        xor ecx, ecx
        public_62d5c4d : nop
        mov eax, dword ptr ds : [ecx]
        lea edx, ss:[esp+8]
        push edx
        call dword ptr ds : [eax+4]
        mov al, byte ptr ss : [esp+7]
        test al, al
        mov ecx, dword ptr ds : [esi+8]
        mov dl, byte ptr ds : [ecx+0x2C]
        je public_62d5ca3
        fld dword ptr ss : [esp+0xC]
        fmul dword ptr ss : [esp+0xC]
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ss : [esp+0x10]
        faddp 
        fld dword ptr ss : [esp+8]
        fmul dword ptr ss : [esp+8]
        faddp 
        fcomp dword ptr ds : [public_63a0494]
        fnstsw ax
        test ah, 0x41
        jne public_62d5ccc
        test dl, dl
        jne public_62d5ccc
        push 1
        add ecx, 0x18
        call public_62e90a0
        pop esi
        add esp, 0x10
        ret 4
        public_62d5ca3 : nop
        test dl, dl
        je public_62d5ccc
        mov al, byte ptr ds : [esi+0x3D]
        test al, al
        jne public_62d5ccc
        push 1
        add ecx, 0x18
        call public_62e90a0
        pop esi
        add esp, 0x10
        ret 4
        public_62d5cbf : nop
        mov ecx, dword ptr ds : [esi+8]
        push 0
        add ecx, 0x18
        call public_62e90a0
        public_62d5ccc : nop
        pop esi
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x62d5bf0)
    }
}

#undef public_62d5c33
#undef public_62d5c35
#undef public_62d5c4b
#undef public_62d5c4d
#undef public_62d5ca3
#undef public_62d5cbf
#undef public_62d5ccc
