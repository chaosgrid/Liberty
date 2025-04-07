#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eea860);
CLANG_FORWARD_PROC_SYMBOL(public_6f33e80);
CLANG_FORWARD_PROC_SYMBOL(public_6f33f80);
CLANG_FORWARD_PROC_SYMBOL(public_6f471a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f49bc0);
CLANG_FORWARD_PROC_SYMBOL(public_6f5a5d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f73990);

#define public_6f5a60a _public_6f5a60a
#define public_6f5a690 _public_6f5a690
#define public_6f5a6ce _public_6f5a6ce
#define public_6f5a6df _public_6f5a6df
#define public_6f5a734 _public_6f5a734
#define public_6f5a773 _public_6f5a773
#define public_6f5a78e _public_6f5a78e

PROC_DECLARE(0x6f5a5d0, internal_6f5a5d0, public_6f5a5d0);
extern "C" NAKED register_t __cdecl internal_6f5a5d0()
{
    __asm
    {
        mov al, byte ptr ds : [public_6fd1c78]
        sub esp, 0x120
        test al, al
        push edi
        mov edi, dword ptr ss : [esp+0x128]
        jne public_6f5a60a
        mov eax, dword ptr ds : [edi+4]
        lea ecx, ss:[esp+0xC]
        push ecx
        mov dword ptr ss : [esp+0x10], eax
        call public_6f49bc0
        add esp, 4
        mov ecx, eax
        call public_6f471a0
        test al, 4
        je public_6f5a78e
        public_6f5a60a : nop
        mov ecx, edi
        call public_6eea860
        mov edx, dword ptr ds : [eax+0x48]
        lea eax, ss:[esp+0xC]
        push eax
        push 0x7F0000
        push 0xBF800000
        lea ecx, ss:[esp+0x24]
        push ecx
        mov dword ptr ss : [esp+0x14], edx
        push 0x40
        lea edx, ss:[esp+0x38]
        push edx
        lea eax, ss:[esp+0x1C]
        push eax
        mov dword ptr ss : [esp+0x34], 0
        mov dword ptr ss : [esp+0x38], 0
        mov dword ptr ss : [esp+0x3C], 0
        call dword ptr ds : [public_6fb3460]
        mov ecx, dword ptr ss : [esp+0x148]
        mov ecx, dword ptr ds : [ecx]
        add esp, 0x1C
        call public_6f33f80
        mov dword ptr ss : [esp+8], eax
        mov eax, dword ptr ss : [esp+0xC]
        test eax, eax
        mov dword ptr ss : [esp+4], 0
        jbe public_6f5a78e
        push ebx
        push ebp
        mov ebp, dword ptr ds : [public_6fb365c]
        push esi
        lea esi, ss:[esp+0x30]
        lea esp, ss:[esp]
        public_6f5a690 : nop
        mov edx, dword ptr ss : [esp+0x138]
        mov ebx, dword ptr ds : [public_6fd0e64]
        mov ecx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [edx+0x6C]
        cmp eax, ebx
        push ecx
        mov ecx, edi
        sete bl
        call public_6eea860
        mov ecx, eax
        call public_6f73990
        test eax, eax
        je public_6f5a6ce
        mov ecx, eax
        call public_6f33e80
        mov ebp, dword ptr ds : [public_6fb365c]
        cmp al, bl
        setne bl
        jmp public_6f5a6df
        public_6f5a6ce : nop
        push esi
        call public_6f49bc0
        add esp, 4
        test eax, eax
        je public_6f5a773
        public_6f5a6df : nop
        test bl, bl
        je public_6f5a773
        mov eax, dword ptr ds : [esi]
        lea edx, ss:[esp+0x1C]
        push edx
        push eax
        call dword ptr ds : [public_6fb364c]
        lea ecx, ss:[esp+0x28]
        push ecx
        lea edx, ss:[esp+0x28]
        push edx
        lea eax, ss:[esp+0x24]
        push eax
        call ebp
        fld dword ptr ss : [esp+0x34]
        fcomp dword ptr ds : [public_6fd0e4c]
        add esp, 0x14
        fnstsw ax
        test ah, 5
        jp public_6f5a734
        mov ecx, dword ptr ds : [public_6fd0e4c]
        push ecx
        lea edx, ss:[esp+0x20]
        push edx
        lea eax, ss:[esp+0x1C]
        push eax
        call dword ptr ds : [public_6fb33f4]
        add esp, 0xC
        public_6f5a734 : nop
        lea ecx, ss:[esp+0x20]
        push ecx
        lea edx, ss:[esp+0x18]
        push edx
        lea eax, ss:[esp+0x24]
        push eax
        call ebp
        fld dword ptr ss : [esp+0x2C]
        fcomp dword ptr ds : [public_6fd0e4c]
        add esp, 0xC
        fnstsw ax
        test ah, 5
        jp public_6f5a773
        mov ecx, dword ptr ds : [public_6fd0e4c]
        push ecx
        lea edx, ss:[esp+0x18]
        push edx
        lea eax, ss:[esp+0x24]
        push eax
        call dword ptr ds : [public_6fb33f4]
        add esp, 0xC
        public_6f5a773 : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0x18]
        inc eax
        add esi, 4
        cmp eax, ecx
        mov dword ptr ss : [esp+0x10], eax
        jb public_6f5a690
        pop esi
        pop ebp
        pop ebx
        public_6f5a78e : nop
        pop edi
        add esp, 0x120
        ret 
        UNREACHABLE_TRAP(0x6f5a5d0)
    }
}

#undef public_6f5a60a
#undef public_6f5a690
#undef public_6f5a6ce
#undef public_6f5a6df
#undef public_6f5a734
#undef public_6f5a773
#undef public_6f5a78e
