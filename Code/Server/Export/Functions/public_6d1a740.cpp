#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d19180);
CLANG_FORWARD_PROC_SYMBOL(public_6d191a0);
CLANG_FORWARD_PROC_SYMBOL(public_6d1a740);
CLANG_FORWARD_PROC_SYMBOL(public_6d5b920);

#define public_6d1a76a _public_6d1a76a
#define public_6d1a770 _public_6d1a770
#define public_6d1a7a4 _public_6d1a7a4
#define public_6d1a7ef _public_6d1a7ef

PROC_DECLARE(0x6d1a740, internal_6d1a740, public_6d1a740);
extern "C" NAKED register_t __cdecl internal_6d1a740()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        mov al, byte ptr ds : [edx+2]
        sub esp, 8
        test al, al
        jne public_6d1a7ef
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [eax+4]
        test ecx, ecx
        je public_6d1a76a
        mov eax, dword ptr ds : [eax+8]
        sub eax, ecx
        sar eax, 4
        cmp eax, 2
        jae public_6d1a770
        public_6d1a76a : nop
        xor al, al
        add esp, 8
        ret 
        public_6d1a770 : nop
        movzx eax, word ptr ds : [edx]
        mov ecx, dword ptr ds : [public_6d90260]
        imul eax, 0x418
        push esi
        lea esi, ds:[eax+ecx-0x418]
        mov ecx, dword ptr ds : [esi+0x404]
        test ecx, ecx
        je public_6d1a7a4
        mov edx, dword ptr ds : [esi+0x348]
        push edx
        call public_6d5b920
        pop esi
        mov al, 1
        add esp, 8
        ret 
        public_6d1a7a4 : nop
        push edi
        mov ecx, esi
        call public_6d191a0
        mov ecx, esi
        mov di, ax
        call public_6d191a0
        push eax
        lea ecx, ss:[esp+0x18]
        call public_6d19180
        mov ecx, dword ptr ds : [public_6d8fb18]
        xor eax, eax
        mov ax, di
        mov dword ptr ss : [esp+8], 0x12
        mov dword ptr ss : [esp+0xC], eax
        mov edx, dword ptr ds : [ecx]
        lea eax, ss:[esp+8]
        push eax
        mov eax, dword ptr ds : [public_6d8f5dc]
        push 8
        push eax
        mov eax, dword ptr ss : [esp+0x20]
        push eax
        call dword ptr ds : [edx]
        pop edi
        pop esi
        public_6d1a7ef : nop
        mov al, 1
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6d1a740)
    }
}

#undef public_6d1a76a
#undef public_6d1a770
#undef public_6d1a7a4
#undef public_6d1a7ef
