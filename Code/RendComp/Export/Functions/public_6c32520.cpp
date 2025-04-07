#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c31e60);
CLANG_FORWARD_PROC_SYMBOL(public_6c31e80);
CLANG_FORWARD_PROC_SYMBOL(public_6c31e90);
CLANG_FORWARD_PROC_SYMBOL(public_6c33c50);
CLANG_FORWARD_PROC_SYMBOL(public_6c33fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6c34170);
CLANG_FORWARD_PROC_SYMBOL(public_6c34380);
CLANG_FORWARD_PROC_SYMBOL(public_6c34760);
CLANG_FORWARD_PROC_SYMBOL(public_6c34a60);
CLANG_FORWARD_PROC_SYMBOL(public_6c34ab0);
CLANG_FORWARD_PROC_SYMBOL(public_6c34b60);
CLANG_FORWARD_PROC_SYMBOL(public_6c34e00);
CLANG_FORWARD_PROC_SYMBOL(public_6c34ea0);

#define public_6c3259a _public_6c3259a
#define public_6c325b9 _public_6c325b9
#define public_6c325e0 _public_6c325e0
#define public_6c325ef _public_6c325ef
#define public_6c32611 _public_6c32611
#define public_6c3263a _public_6c3263a
#define public_6c32660 _public_6c32660
#define public_6c32664 _public_6c32664
#define public_6c32684 _public_6c32684

PROC_DECLARE(0x6c32520, internal_6c32520, public_6c32520);
extern "C" NAKED register_t __cdecl internal_6c32520()
{
    __asm
    {
        sub esp, 0x34
        push ebx
        push esi
        push edi
        lea ecx, ss:[esp+0x14]
        call public_6c31e60
        mov ecx, dword ptr ss : [esp+0x48]
        mov dword ptr ss : [esp+0x28], ecx
        push eax
        lea ecx, ss:[esp+0x30]
        call public_6c31e90
        mov edi, dword ptr ss : [esp+0x44]
        lea edx, ss:[esp+0x28]
        push edx
        lea eax, ss:[esp+0x10]
        lea esi, ds:[edi+8]
        push eax
        mov ecx, esi
        call public_6c34170
        lea ecx, ss:[esp+0x2C]
        call public_6c31e80
        lea ecx, ss:[esp+0x14]
        call public_6c31e80
        mov al, byte ptr ss : [esp+0x10]
        test al, al
        je public_6c32684
        mov ebx, dword ptr ss : [esp+0x4C]
        mov ecx, dword ptr ss : [esp+0x48]
        push ebx
        push ecx
        mov ecx, edi
        call public_6c33c50
        test eax, eax
        jl public_6c3259a
        pop edi
        pop esi
        mov eax, 1
        pop ebx
        add esp, 0x34
        ret 0xC
        public_6c3259a : nop
        mov edx, dword ptr ss : [esp+0x48]
        push ebx
        push edx
        mov ecx, edi
        call public_6c33fe0
        test eax, eax
        jl public_6c325b9
        pop edi
        pop esi
        mov eax, 1
        pop ebx
        add esp, 0x34
        ret 0xC
        public_6c325b9 : nop
        lea eax, ss:[esp+0x48]
        push eax
        mov ecx, esi
        call public_6c34b60
        lea ecx, ss:[esp+0x48]
        push ecx
        mov ecx, esi
        mov edi, eax
        call public_6c34ab0
        mov ebx, eax
        cmp ebx, edi
        mov dword ptr ss : [esp+0x44], ebx
        je public_6c325ef
        lea ecx, ds:[ecx]
        public_6c325e0 : nop
        lea ecx, ss:[esp+0x44]
        call public_6c34a60
        cmp dword ptr ss : [esp+0x44], edi
        jne public_6c325e0
        public_6c325ef : nop
        mov ecx, dword ptr ds : [esi+0x10]
        test ecx, ecx
        mov eax, ebx
        mov dword ptr ss : [esp+0x4C], eax
        je public_6c32660
        mov ecx, dword ptr ds : [esi+4]
        cmp ebx, dword ptr ds : [ecx]
        jne public_6c32660
        cmp edi, ecx
        jne public_6c32660
        mov ebx, dword ptr ds : [ecx+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_6c3263a
        public_6c32611 : nop
        mov edx, dword ptr ds : [edi+8]
        push edx
        mov ecx, esi
        call public_6c34760
        mov edi, dword ptr ds : [edi]
        push 0
        lea ecx, ds:[ebx+0xC]
        call public_6c34e00
        push ebx
        call public_6c34ea0
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_6c32611
        public_6c3263a : nop
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi+8]
        mov dword ptr ds : [eax+4], ecx
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], 0
        mov dword ptr ds : [eax], eax
        mov esi, dword ptr ds : [esi+4]
        pop edi
        mov dword ptr ds : [esi+8], esi
        pop esi
        xor eax, eax
        pop ebx
        add esp, 0x34
        ret 0xC
        public_6c32660 : nop
        cmp ebx, edi
        je public_6c32684
        public_6c32664 : nop
        lea ecx, ss:[esp+0x4C]
        mov ebx, eax
        call public_6c34a60
        push ebx
        lea edx, ss:[esp+0x10]
        push edx
        mov ecx, esi
        call public_6c34380
        mov eax, dword ptr ss : [esp+0x4C]
        cmp eax, edi
        jne public_6c32664
        public_6c32684 : nop
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        add esp, 0x34
        ret 0xC
        UNREACHABLE_TRAP(0x6c32520)
    }
}

#undef public_6c3259a
#undef public_6c325b9
#undef public_6c325e0
#undef public_6c325ef
#undef public_6c32611
#undef public_6c3263a
#undef public_6c32660
#undef public_6c32664
#undef public_6c32684
