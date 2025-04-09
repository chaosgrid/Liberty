#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_435dd0);
CLANG_FORWARD_PROC_SYMBOL(public_449f40);
CLANG_FORWARD_PROC_SYMBOL(public_44a540);
CLANG_FORWARD_PROC_SYMBOL(public_44aca0);

#define public_44acf8 _public_44acf8
#define public_44ad06 _public_44ad06
#define public_44ad11 _public_44ad11
#define public_44ad1d _public_44ad1d
#define public_44ad54 _public_44ad54
#define public_44ad5c _public_44ad5c

PROC_DECLARE(0x44aca0, internal_44aca0, public_44aca0);
extern "C" NAKED register_t __cdecl internal_44aca0()
{
    __asm
    {
        sub esp, 8
        push esi
        mov esi, ecx
        call public_44a540
        mov al, byte ptr ds : [esi+0x515]
        test al, al
        jne public_44ad5c
        mov al, byte ptr ds : [esi+0x514]
        test al, al
        jne public_44ad5c
        push edi
        lea eax, ss:[esp+0xC]
        push eax
        lea ecx, ss:[esp+0xC]
        push ecx
        xor edi, edi
        mov ecx, esi
        mov dword ptr ss : [esp+0x10], edi
        mov dword ptr ss : [esp+0x14], 0xFFFFFFFF
        call public_449f40
        test al, al
        je public_44ad54
        push ebp
        mov ebp, dword ptr ss : [esp+0xC]
        xor eax, eax
        lea edx, ds:[esi+0x518]
        public_44acf8 : nop
        mov ecx, dword ptr ds : [edx]
        test ecx, ecx
        je public_44ad06
        cmp dword ptr ds : [ecx+0x154], ebp
        je public_44ad11
        public_44ad06 : nop
        inc eax
        add edx, 4
        cmp eax, 0x40
        jl public_44acf8
        jmp public_44ad1d
        public_44ad11 : nop
        cmp eax, 0xFFFFFFFF
        je public_44ad1d
        mov edi, dword ptr ds : [esi+eax*4+0x518]
        public_44ad1d : nop
        mov edx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [edi+0x1B8]
        push 0
        push 0
        push edx
        push eax
        push esi
        push edi
        call public_435dd0
        mov eax, dword ptr ds : [public_673344]
        mov ecx, dword ptr ds : [public_67ecd0]
        mov edx, dword ptr ds : [ecx]
        add esp, 0x18
        push eax
        push ebp
        call dword ptr ds : [edx+0xA4]
        mov byte ptr ds : [esi+0x517], 1
        pop ebp
        public_44ad54 : nop
        mov byte ptr ds : [esi+0x514], 1
        pop edi
        public_44ad5c : nop
        pop esi
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x44aca0)
    }
}

#undef public_44acf8
#undef public_44ad06
#undef public_44ad11
#undef public_44ad1d
#undef public_44ad54
#undef public_44ad5c
