#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41bd90);
CLANG_FORWARD_PROC_SYMBOL(public_46d430);
CLANG_FORWARD_PROC_SYMBOL(public_46dfb0);
CLANG_FORWARD_PROC_SYMBOL(public_46e380);
CLANG_FORWARD_PROC_SYMBOL(public_46e8e0);
CLANG_FORWARD_PROC_SYMBOL(public_595150);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_46d456 _public_46d456
#define public_46d460 _public_46d460
#define public_46d464 _public_46d464
#define public_46d468 _public_46d468
#define public_46d474 _public_46d474
#define public_46d48a _public_46d48a
#define public_46d492 _public_46d492
#define public_46d49c _public_46d49c
#define public_46d4a3 _public_46d4a3
#define public_46d4ab _public_46d4ab
#define public_46d4d0 _public_46d4d0
#define public_46d4ef _public_46d4ef
#define public_46d518 _public_46d518
#define public_46d520 _public_46d520
#define public_46d54e _public_46d54e

PROC_DECLARE(0x46d430, internal_46d430, public_46d430);
extern "C" NAKED register_t __cdecl internal_46d430()
{
    __asm
    {
        sub esp, 8
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x1C]
        push edi
        mov esi, ecx
        call public_41bd90
        mov ecx, dword ptr ds : [esi+4]
        mov ebp, eax
        mov eax, dword ptr ds : [ecx+4]
        mov ebx, ecx
        mov ecx, dword ptr ds : [esi+8]
        cmp eax, ecx
        je public_46d468
        mov edi, dword ptr ds : [edi]
        public_46d456 : nop
        cmp dword ptr ds : [eax+0xC], edi
        jae public_46d460
        mov eax, dword ptr ds : [eax+8]
        jmp public_46d464
        public_46d460 : nop
        mov ebx, eax
        mov eax, dword ptr ds : [eax]
        public_46d464 : nop
        cmp eax, ecx
        jne public_46d456
        public_46d468 : nop
        xor edi, edi
        cmp ebx, ebp
        mov dword ptr ss : [esp+0x1C], edi
        mov eax, ebx
        je public_46d4ab
        public_46d474 : nop
        mov ecx, dword ptr ds : [eax+8]
        mov dl, byte ptr ds : [ecx+0x11]
        inc edi
        test dl, dl
        jne public_46d48a
        push ecx
        call public_46e8e0
        add esp, 4
        jmp public_46d4a3
        public_46d48a : nop
        mov ecx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [ecx+8]
        jne public_46d49c
        public_46d492 : nop
        mov eax, ecx
        mov ecx, dword ptr ds : [ecx+4]
        cmp eax, dword ptr ds : [ecx+8]
        je public_46d492
        public_46d49c : nop
        cmp dword ptr ds : [eax+8], ecx
        je public_46d4a3
        mov eax, ecx
        public_46d4a3 : nop
        cmp eax, ebp
        jne public_46d474
        mov dword ptr ss : [esp+0x1C], edi
        public_46d4ab : nop
        mov ecx, dword ptr ds : [esi+0x10]
        test ecx, ecx
        mov eax, ebx
        mov dword ptr ss : [esp+0x10], eax
        je public_46d518
        mov ecx, dword ptr ds : [esi+4]
        cmp ebx, dword ptr ds : [ecx]
        jne public_46d518
        cmp ebp, ecx
        jne public_46d518
        mov ebx, dword ptr ds : [ecx+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_46d4ef
        lea ecx, ds:[ecx]
        public_46d4d0 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_46e380
        mov edi, dword ptr ds : [edi]
        push ebx
        call public_5b7e1d
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_46d4d0
        public_46d4ef : nop
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], 0
        mov dword ptr ds : [eax], eax
        mov esi, dword ptr ds : [esi+4]
        mov eax, dword ptr ss : [esp+0x1C]
        pop edi
        mov dword ptr ds : [esi+8], esi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 4
        public_46d518 : nop
        cmp ebx, ebp
        je public_46d54e
        lea esp, ss:[esp]
        public_46d520 : nop
        lea ecx, ss:[esp+0x10]
        mov edi, eax
        call public_595150
        push edi
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, esi
        call public_46dfb0
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, ebp
        jne public_46d520
        mov eax, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 4
        public_46d54e : nop
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x46d430)
    }
}

#undef public_46d456
#undef public_46d460
#undef public_46d464
#undef public_46d468
#undef public_46d474
#undef public_46d48a
#undef public_46d492
#undef public_46d49c
#undef public_46d4a3
#undef public_46d4ab
#undef public_46d4d0
#undef public_46d4ef
#undef public_46d518
#undef public_46d520
#undef public_46d54e
