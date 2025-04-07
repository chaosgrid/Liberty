#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6269110);
CLANG_FORWARD_PROC_SYMBOL(public_628f050);
CLANG_FORWARD_PROC_SYMBOL(public_630d3f0);
CLANG_FORWARD_PROC_SYMBOL(public_6315b10);
CLANG_FORWARD_PROC_SYMBOL(public_631c870);
CLANG_FORWARD_PROC_SYMBOL(public_631cd20);
CLANG_FORWARD_PROC_SYMBOL(public_631cf30);
CLANG_FORWARD_PROC_SYMBOL(public_631d440);
CLANG_FORWARD_PROC_SYMBOL(public_631d580);
CLANG_FORWARD_PROC_SYMBOL(public_6333ca0);
CLANG_FORWARD_PROC_SYMBOL(public_6333e30);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_JUMP_SYMBOL(public_6396c07);

#define public_631c923 _public_631c923
#define public_631c930 _public_631c930
#define public_631c96c _public_631c96c

PROC_DECLARE(0x631c870, internal_631c870, public_631c870);
extern "C" NAKED register_t __cdecl internal_631c870()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6396c07 @0x631c872*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6396c07
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x84
        mov eax, dword ptr ss : [esp+0x98]
        push ebx
        push ebp
        push esi
        push edi
        push eax
        mov dword ptr ss : [esp+0x18], ecx
        call public_630d3f0
        mov cl, byte ptr ss : [esp+0x17]
        add esp, 4
        mov byte ptr ss : [esp+0x24], cl
        xor ebx, ebx
        push ebx
        lea ecx, ss:[esp+0x28]
        mov esi, eax
        call dword ptr ds : [public_63991b8]
        lea edx, ss:[esp+0x13]
        push edx
        lea ecx, ss:[esp+0x38]
        mov dword ptr ss : [esp+0xA0], ebx
        call public_6315b10
        mov dword ptr ss : [esp+0x20], esi
        mov esi, dword ptr ss : [esp+0xAC]
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov ebp, ecx
        push 1
        push ebp
        lea ecx, ss:[esp+0x2C]
        mov dword ptr ss : [esp+0xA4], 1
        call dword ptr ds : [public_63991d4]
        test al, al
        je public_631c923
        mov edi, dword ptr ss : [esp+0x28]
        mov ecx, ebp
        mov eax, ecx
        shr ecx, 2
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        push ebp
        lea ecx, ss:[esp+0x28]
        call dword ptr ds : [public_63991d8]
        public_631c923 : nop
        mov ebp, dword ptr ss : [esp+0xB4]
        xor esi, esi
        cmp ebp, ebx
        jle public_631c96c
        public_631c930 : nop
        mov ecx, dword ptr ss : [esp+0xB0]
        mov edi, dword ptr ds : [ecx+esi*4]
        lea ecx, ss:[esp+0x18]
        call public_6333e30
        push 1
        push edi
        call public_6333ca0
        add esp, 8
        lea edx, ss:[esp+0x18]
        push edx
        mov dword ptr ss : [esp+0x1C], eax
        mov eax, dword ptr ss : [esp+0x40]
        push 1
        push eax
        lea ecx, ss:[esp+0x40]
        call public_631cf30
        inc esi
        cmp esi, ebp
        jl public_631c930
        public_631c96c : nop
        lea ecx, ss:[esp+0x20]
        push ecx
        lea edx, ss:[esp+0x24]
        push edx
        lea eax, ss:[esp+0x4C]
        push eax
        call public_631d440
        add esp, 0xC
        mov esi, eax
        mov ecx, dword ptr ds : [esi]
        mov dword ptr ss : [esp+0x6C], ecx
        mov eax, dword ptr ds : [esi+4]
        lea ecx, ds:[esi+8]
        lea edx, ss:[esp+0x70]
        push ecx
        lea ecx, ss:[esp+0x78]
        mov byte ptr ss : [esp+0xA0], 2
        mov dword ptr ss : [esp+0x1C], edx
        mov dword ptr ss : [esp+0x74], eax
        call dword ptr ds : [public_6399154]
        add esi, 0x18
        push esi
        lea ecx, ss:[esp+0x88]
        mov byte ptr ss : [esp+0xA0], 3
        call public_631d580
        lea edx, ss:[esp+0x6C]
        push edx
        mov edx, dword ptr ss : [esp+0x18]
        lea eax, ss:[esp+0x1C]
        push eax
        mov eax, dword ptr ss : [esp+0xAC]
        lea ecx, ds:[eax+eax*4]
        lea ecx, ds:[edx+ecx*4]
        mov byte ptr ss : [esp+0xA4], 4
        call public_631cd20
        lea eax, ss:[esp+0x70]
        mov dword ptr ss : [esp+0x14], eax
        lea ecx, ss:[esp+0x84]
        mov byte ptr ss : [esp+0x9C], 5
        call public_6269110
        push 1
        lea ecx, ss:[esp+0x78]
        mov byte ptr ss : [esp+0xA0], 2
        call dword ptr ds : [public_63991b8]
        lea ecx, ss:[esp+0x48]
        mov dword ptr ss : [esp+0x14], ecx
        mov edx, dword ptr ss : [esp+0x64]
        mov eax, dword ptr ss : [esp+0x60]
        push edx
        push eax
        lea ecx, ss:[esp+0x64]
        mov byte ptr ss : [esp+0xA4], 6
        call public_628f050
        mov ecx, dword ptr ss : [esp+0x60]
        push ecx
        call public_6391d5a
        add esp, 4
        push 1
        lea ecx, ss:[esp+0x50]
        mov dword ptr ss : [esp+0x64], ebx
        mov dword ptr ss : [esp+0x68], ebx
        mov dword ptr ss : [esp+0x6C], ebx
        mov byte ptr ss : [esp+0xA0], 1
        call dword ptr ds : [public_63991b8]
        mov edx, dword ptr ss : [esp+0x3C]
        mov eax, dword ptr ss : [esp+0x38]
        push edx
        push eax
        lea ecx, ss:[esp+0x3C]
        mov dword ptr ss : [esp+0xA4], 7
        call public_628f050
        mov ecx, dword ptr ss : [esp+0x38]
        push ecx
        call public_6391d5a
        add esp, 4
        push 1
        lea ecx, ss:[esp+0x28]
        mov dword ptr ss : [esp+0x3C], ebx
        mov dword ptr ss : [esp+0x40], ebx
        mov dword ptr ss : [esp+0x44], ebx
        mov dword ptr ss : [esp+0xA0], 0xFFFFFFFF
        call dword ptr ds : [public_63991b8]
        mov ecx, dword ptr ss : [esp+0x94]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x90
        ret 0x14
        UNREACHABLE_TRAP(0x631c870)
    }
}

#undef public_631c923
#undef public_631c930
#undef public_631c96c
