#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62ee530);

#define public_62ee552 _public_62ee552
#define public_62ee55e _public_62ee55e
#define public_62ee570 _public_62ee570
#define public_62ee59f _public_62ee59f
#define public_62ee5b9 _public_62ee5b9
#define public_62ee5c5 _public_62ee5c5

PROC_DECLARE(0x62ee530, internal_62ee530, public_62ee530);
extern "C" NAKED register_t __cdecl internal_62ee530()
{
    __asm
    {
        sub esp, 8
        mov eax, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [eax+0x1834]
        push ebx
        push ebp
        add eax, 0x1834
        push esi
        push edi
        xor edi, edi
        xor ebx, ebx
        cmp edx, 0xC
        mov dword ptr ss : [esp+0x14], ecx
        je public_62ee55e
        public_62ee552 : nop
        mov edx, dword ptr ds : [eax+0xC]
        add eax, 0xC
        inc ebx
        cmp edx, 0xC
        jne public_62ee552
        public_62ee55e : nop
        cmp ebx, edi
        mov dword ptr ss : [esp+0x10], edi
        jle public_62ee5b9
        mov esi, dword ptr ss : [esp+0x1C]
        lea eax, ds:[esi+8]
        lea ecx, ds:[ecx]
        public_62ee570 : nop
        mov edx, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edx+edi+0x1834]
        mov ebp, dword ptr ds : [edx*4+public_63a0848]
        mov dl, byte ptr ds : [esi+0x7D]
        test dl, dl
        jne public_62ee59f
        mov ecx, dword ptr ds : [esi+0x84]
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx+0x88]
        mov ecx, dword ptr ss : [esp+0x14]
        mov byte ptr ds : [esi+0x7D], 1
        public_62ee59f : nop
        mov edx, dword ptr ds : [esi+8]
        test ebp, edx
        lea eax, ds:[esi+8]
        jne public_62ee5c5
        mov edx, dword ptr ss : [esp+0x10]
        inc edx
        add edi, 0xC
        cmp edx, ebx
        mov dword ptr ss : [esp+0x10], edx
        jl public_62ee570
        public_62ee5b9 : nop
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        add esp, 8
        ret 4
        public_62ee5c5 : nop
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x62ee530)
    }
}

#undef public_62ee552
#undef public_62ee55e
#undef public_62ee570
#undef public_62ee59f
#undef public_62ee5b9
#undef public_62ee5c5
