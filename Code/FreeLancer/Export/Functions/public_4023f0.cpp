#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_402310);
CLANG_FORWARD_PROC_SYMBOL(public_4023f0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_402414 _public_402414
#define public_40244d _public_40244d
#define public_40244f _public_40244f
#define public_40246a _public_40246a
#define public_402480 _public_402480
#define public_4024b3 _public_4024b3
#define public_4024be _public_4024be

PROC_DECLARE(0x4023f0, internal_4023f0, public_4023f0);
extern "C" NAKED register_t __cdecl internal_4023f0()
{
    __asm
    {
        sub esp, 8
        push ebx
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x18]
        xor ebx, ebx
        mov ecx, edi
        mov byte ptr ss : [esp+0xF], bl
        mov dword ptr ss : [esp+0x10], ebx
        call dword ptr ds : [public_5c669c]
        test al, al
        je public_4024be
/*FIXUP public_402414 : nop
        push offset public_5c751c @0x402414*/
  FIXUP public_402414 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c751c
        mov ecx, edi
        call dword ptr ds : [public_5c6cf4]
        test al, al
        je public_40246a
        push 0x34
        call public_5b7e84
        add esp, 4
        cmp eax, ebx
        je public_40244d
        mov dword ptr ds : [eax+0x24], ebx
        mov byte ptr ds : [eax+0x28], bl
        mov dword ptr ds : [eax+0x2C], 1
        mov dword ptr ds : [eax+0x30], ebx
        mov dword ptr ds : [eax], 0xBF800000
        mov esi, eax
        jmp public_40244f
        public_40244d : nop
        xor esi, esi
        public_40244f : nop
        mov ecx, edi
        mov dword ptr ss : [esp+0x10], esi
        call dword ptr ds : [public_5c6698]
        push eax
        call dword ptr ds : [public_5c6d14]
        add esp, 4
        mov dword ptr ds : [esi+0x24], eax
        jmp public_402480
        public_40246a : nop
        lea eax, ss:[esp+0x10]
        push eax
        push edi
        call public_402310
        mov esi, dword ptr ss : [esp+0x18]
        add esp, 8
        mov byte ptr ss : [esp+0xF], al
        public_402480 : nop
        mov ecx, edi
        call dword ptr ds : [public_5c669c]
        test al, al
        jne public_402414
        cmp esi, ebx
        je public_4024be
        fld dword ptr ds : [esi]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 5
        jp public_4024b3
        push esi
        call public_5b7e1d
        mov al, byte ptr ss : [esp+0x13]
        add esp, 4
        pop edi
        pop esi
        pop ebx
        add esp, 8
        ret 
        public_4024b3 : nop
        mov eax, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [esi+0x30], ecx
        mov dword ptr ds : [eax], esi
        public_4024be : nop
        mov al, byte ptr ss : [esp+0xF]
        pop edi
        pop esi
        pop ebx
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x4023f0)
    }
}

#undef public_402414
#undef public_40244d
#undef public_40244f
#undef public_40246a
#undef public_402480
#undef public_4024b3
#undef public_4024be
