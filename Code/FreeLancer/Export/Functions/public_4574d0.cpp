#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_428680);
CLANG_FORWARD_PROC_SYMBOL(public_44f610);

#define public_457512 _public_457512
#define public_4575bc _public_4575bc
#define public_4575cc _public_4575cc
#define public_4575d6 _public_4575d6

PROC_DECLARE(0x4574d0, internal_4574d0, public_4574d0);
extern "C" NAKED register_t __cdecl internal_4574d0()
{
    __asm
    {
        sub esp, 0x18
        push ebp
        mov ebp, dword ptr ss : [esp+0x24]
        push esi
        mov esi, dword ptr ss : [esp+0x24]
        mov eax, dword ptr ds : [esi]
        push ebp
        push esi
        call dword ptr ds : [eax+0x10]
        mov ecx, dword ptr ds : [esi+0x58]
        mov al, byte ptr ds : [ecx+0x44]
        test al, al
        jne public_4575d6
        mov edx, dword ptr ss : [ebp+4]
        mov ecx, dword ptr ss : [esp+0x2C]
        mov al, byte ptr ss : [ebp+8]
        push edi
        mov edi, dword ptr ss : [ebp+0x2C]
        sub edi, edx
        add edi, ecx
        test al, 8
        mov byte ptr ss : [esp+0x28], 0
        je public_457512
        mov byte ptr ss : [esp+0x28], 1
        public_457512 : nop
        mov ecx, dword ptr ds : [esi+0x78]
        test ecx, ecx
        je public_4575cc
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x24]
        test al, al
        jne public_4575bc
        mov al, byte ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [esi+0x78]
        and al, 0xF8
        mov dword ptr ss : [esp+0xC], 0
        mov byte ptr ss : [esp+0x10], al
        mov dword ptr ss : [esp+0x14], 0
        mov dword ptr ss : [esp+0x18], 0
        mov dword ptr ss : [esp+0x1C], 0
        mov dword ptr ss : [esp+0x20], 0
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x24]
        mov cl, byte ptr ss : [esp+0x10]
        mov dl, byte ptr ds : [esi+0x71]
        shl al, 2
        xor al, cl
        and al, 4
        xor cl, al
        shl dl, 1
        xor dl, cl
        and dl, 2
        xor cl, dl
        mov dl, byte ptr ss : [esp+0x28]
        mov al, cl
        xor al, dl
        and al, 1
        xor cl, al
        mov eax, dword ptr ds : [esi+0x78]
        mov byte ptr ss : [esp+0x10], cl
        push 0
        lea ecx, ds:[esi+0x7C]
        push ecx
        lea edx, ss:[esp+0x14]
        push edx
        push eax
        mov dword ptr ss : [esp+0x1C], edi
        call public_428680
        mov edx, dword ptr ds : [esi-4]
        lea ecx, ds:[esi-4]
        add esp, 0x10
        call dword ptr ds : [edx+0x54]
        pop edi
        pop esi
        xor eax, eax
        pop ebp
        add esp, 0x18
        ret 0xC
        public_4575bc : nop
        mov ecx, dword ptr ss : [ebp+0x14]
        push edi
        push ecx
        mov ecx, dword ptr ds : [esi+0x58]
        call public_44f610
        mov dword ptr ds : [esi+0x7C], eax
        public_4575cc : nop
        mov edx, dword ptr ds : [esi-4]
        lea ecx, ds:[esi-4]
        call dword ptr ds : [edx+0x54]
        pop edi
        public_4575d6 : nop
        pop esi
        xor eax, eax
        pop ebp
        add esp, 0x18
        ret 0xC
        UNREACHABLE_TRAP(0x4574d0)
    }
}

#undef public_457512
#undef public_4575bc
#undef public_4575cc
#undef public_4575d6
