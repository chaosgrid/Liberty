#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_434e20);
CLANG_FORWARD_PROC_SYMBOL(public_4356c0);
CLANG_FORWARD_PROC_SYMBOL(public_445620);
CLANG_FORWARD_PROC_SYMBOL(public_4456f0);

#define public_4523b6 _public_4523b6
#define public_4523c3 _public_4523c3
#define public_4523ce _public_4523ce
#define public_4523d0 _public_4523d0
#define public_4523f8 _public_4523f8
#define public_452453 _public_452453

PROC_DECLARE(0x4523a0, internal_4523a0, public_4523a0);
extern "C" NAKED register_t __cdecl internal_4523a0()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+8]
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        or esi, 0xFFFFFFFF
        xor ecx, ecx
        lea eax, ds:[edi+0x80]
        push ebp
        public_4523b6 : nop
        cmp byte ptr ds : [eax+4], 0
        je public_4523c3
        mov ebp, dword ptr ds : [eax]
        cmp ebp, dword ptr ds : [edx+0x14]
        je public_4523ce
        public_4523c3 : nop
        inc ecx
        add eax, 0x10
        cmp ecx, 0x20
        jl public_4523b6
        jmp public_4523d0
        public_4523ce : nop
        mov esi, ecx
        public_4523d0 : nop
        mov eax, dword ptr ds : [edx+0x48]
        test eax, eax
        pop ebp
        je public_4523f8
        mov ecx, dword ptr ds : [edi+0x6C]
        push eax
        call public_445620
        cmp eax, 0xFFFFFFFF
        je public_4523f8
        mov ecx, dword ptr ds : [public_5c6d40]
        mov ecx, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [ecx]
        push eax
        push ecx
        call dword ptr ds : [edx+0x98]
        public_4523f8 : nop
        mov ecx, dword ptr ds : [edi+0x6C]
        shl esi, 4
        mov eax, dword ptr ds : [esi+edi+0x78]
        lea esi, ds:[esi+edi+0x78]
        push eax
        call public_4456f0
        mov al, byte ptr ds : [esi+0xC]
        test al, al
        je public_452453
        mov ecx, dword ptr ds : [public_5c6d58]
        mov eax, dword ptr ds : [ecx]
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [eax]
        push ecx
        mov ecx, dword ptr ds : [edi+0x6C]
        mov ecx, dword ptr ds : [ecx+0x30]
        push ecx
        push eax
        call dword ptr ds : [edx+0x28]
        mov edx, dword ptr ds : [esi+4]
        push edx
        call public_4356c0
        mov ecx, eax
        call public_434e20
        mov dword ptr ds : [esi], 0xFFFFFFFF
        mov dword ptr ds : [esi+4], 0
        mov dword ptr ds : [esi+8], 0xFFFFFFFF
        mov byte ptr ds : [esi+0xC], 0
        public_452453 : nop
        pop edi
        xor eax, eax
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x4523a0)
    }
}

#undef public_4523b6
#undef public_4523c3
#undef public_4523ce
#undef public_4523d0
#undef public_4523f8
#undef public_452453
