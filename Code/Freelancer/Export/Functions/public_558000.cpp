#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_421670);
CLANG_FORWARD_PROC_SYMBOL(public_421690);
CLANG_FORWARD_PROC_SYMBOL(public_421dd0);
CLANG_FORWARD_PROC_SYMBOL(public_421ed0);
CLANG_FORWARD_PROC_SYMBOL(public_4220a0);
CLANG_FORWARD_PROC_SYMBOL(public_4220c0);
CLANG_FORWARD_PROC_SYMBOL(public_422120);
CLANG_FORWARD_PROC_SYMBOL(public_422190);
CLANG_FORWARD_PROC_SYMBOL(public_422610);
CLANG_FORWARD_PROC_SYMBOL(public_422950);
CLANG_FORWARD_PROC_SYMBOL(public_5579b0);
CLANG_FORWARD_PROC_SYMBOL(public_557d70);
CLANG_FORWARD_PROC_SYMBOL(public_558000);
CLANG_FORWARD_PROC_SYMBOL(public_5792b0);

#define public_5580d0 _public_5580d0
#define public_5580df _public_5580df
#define public_558120 _public_558120
#define public_55812f _public_55812f
#define public_55816f _public_55816f

PROC_DECLARE(0x558000, internal_558000, public_558000);
extern "C" NAKED register_t __cdecl internal_558000()
{
    __asm
    {
        sub esp, 0x28
        push ebx
        push 0x25
        call public_5792b0
        add esp, 4
        test eax, eax
        je public_55816f
        push 0x29
        call public_5792b0
        add esp, 4
        test eax, eax
        je public_55816f
        mov ebx, dword ptr ss : [esp+0x34]
        test ebx, ebx
        je public_55816f
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x40]
        push edi
        push 0x339
/*FIXUP push offset public_5e13ec @0x558040*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e13ec
        push esi
        call public_422610
        push esi
        call public_422950
        push 0xB44
        call public_421ed0
        push 0xBE2
        call public_421dd0
        push 2
        push 2
        call public_4220c0
        push 0
        call public_422190
        push 0xB71
        call public_421dd0
        push 4
        call public_422120
        push 0xB60
        call public_421ed0
        mov eax, dword ptr ds : [public_5c6d4c]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        add esp, 0x30
        lea edx, ss:[esp+0x10]
        push edx
        mov edx, dword ptr ds : [public_6799c4]
        push 0
        push edx
        push eax
        call dword ptr ds : [ecx+0x58]
        mov eax, dword ptr ss : [esp+0x10]
        push eax
        call public_4220a0
        push 8
        call public_421670
        mov ebp, dword ptr ss : [esp+0x44]
        add esp, 8
        xor edi, edi
        test ebx, ebx
        jle public_5580df
        lea esp, ss:[esp]
        public_5580d0 : nop
        mov ecx, dword ptr ss : [ebp+edi*4]
        push esi
        call public_5579b0
        inc edi
        cmp edi, ebx
        jl public_5580d0
        public_5580df : nop
        call public_421690
        mov ecx, dword ptr ds : [public_5c6d4c]
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x24]
        push ecx
        mov ecx, dword ptr ds : [public_6799c0]
        push 0
        push ecx
        push eax
        call dword ptr ds : [edx+0x58]
        mov edx, dword ptr ss : [esp+0x24]
        push edx
        call public_4220a0
        push 8
        call public_421670
        add esp, 8
        xor edi, edi
        test ebx, ebx
        jle public_55812f
        lea ebx, ds:[ebx]
        public_558120 : nop
        mov ecx, dword ptr ss : [ebp+edi*4]
        push esi
        call public_557d70
        inc edi
        cmp edi, ebx
        jl public_558120
        public_55812f : nop
        call public_421690
        push 2
        call public_422120
        push 0xB71
        call public_421dd0
        push 1
        call public_422190
        push 0xB44
        call public_421dd0
        push 0xBE2
        call public_421dd0
        push 6
        push 5
        call public_4220c0
        add esp, 0x1C
        pop edi
        pop esi
        pop ebp
        public_55816f : nop
        pop ebx
        add esp, 0x28
        ret 
        UNREACHABLE_TRAP(0x558000)
    }
}

#undef public_5580d0
#undef public_5580df
#undef public_558120
#undef public_55812f
#undef public_55816f
