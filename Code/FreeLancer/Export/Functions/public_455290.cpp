#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41a0f0);
CLANG_FORWARD_PROC_SYMBOL(public_41dda0);
CLANG_FORWARD_PROC_SYMBOL(public_428be0);
CLANG_FORWARD_PROC_SYMBOL(public_428c50);
CLANG_FORWARD_PROC_SYMBOL(public_428d00);
CLANG_FORWARD_PROC_SYMBOL(public_4353a0);
CLANG_FORWARD_PROC_SYMBOL(public_4356c0);
CLANG_FORWARD_PROC_SYMBOL(public_44fa90);
CLANG_FORWARD_PROC_SYMBOL(public_44faf0);
CLANG_FORWARD_PROC_SYMBOL(public_44fb80);
CLANG_FORWARD_PROC_SYMBOL(public_455290);
CLANG_FORWARD_PROC_SYMBOL(public_559290);

#define public_455315 _public_455315
#define public_455351 _public_455351
#define public_455360 _public_455360
#define public_45536e _public_45536e
#define public_4553d1 _public_4553d1
#define public_45543c _public_45543c
#define public_455446 _public_455446
#define public_45546d _public_45546d
#define public_455477 _public_455477
#define public_455481 _public_455481
#define public_4554a6 _public_4554a6

PROC_DECLARE(0x455290, internal_455290, public_455290);
extern "C" NAKED register_t __cdecl internal_455290()
{
    __asm
    {
        sub esp, 0x10
        push ebx
        push ebp
        push esi
        push edi
        mov ebp, ecx
        call dword ptr ds : [public_5c60f8]
        mov eax, dword ptr ss : [ebp+0xB0]
        mov ebx, dword ptr ds : [eax+0x500]
        mov ecx, dword ptr ds : [ebx]
        push ebx
        call dword ptr ds : [ecx+0x10]
        lea edx, ds:[eax+0x24]
        mov edi, dword ptr ds : [edx]
        lea ecx, ss:[ebp+0x70]
        mov esi, ecx
        mov dword ptr ds : [esi], edi
        mov edi, dword ptr ds : [edx+4]
        mov dword ptr ds : [esi+4], edi
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+8], edx
        lea edi, ds:[ecx+0xC]
        mov esi, eax
        mov ecx, 9
        rep movsd
        mov eax, dword ptr ds : [ebx]
        push ebx
        call dword ptr ds : [eax+0x18]
        push ebx
        fstp dword ptr ss : [ebp+0xA0]
        mov ecx, dword ptr ds : [ebx]
        call dword ptr ds : [ecx+0x20]
        fstp dword ptr ss : [ebp+0xA4]
        mov edx, dword ptr ds : [ebx]
        push ebx
        call dword ptr ds : [edx+0x24]
        fstp dword ptr ss : [ebp+0xA8]
        mov eax, dword ptr ss : [ebp+0xBC]
        xor ebx, ebx
        test eax, eax
        mov byte ptr ss : [ebp+0xAC], 0
        mov byte ptr ss : [ebp+0xAD], 0
        jle public_45536e
        xor edi, edi
        public_455315 : nop
        mov eax, dword ptr ss : [ebp+0xB4]
        mov esi, dword ptr ds : [eax+edi+4]
        push 1
        push esi
        call public_44fa90
        lea ecx, ss:[esp+0x1B]
        push ecx
        lea edx, ss:[esp+0x1E]
        push edx
        push esi
        call public_44faf0
        push 1
        push esi
        call public_44fb80
        mov al, byte ptr ss : [esp+0x2E]
        add esp, 0x1C
        test al, al
        je public_455351
        mov byte ptr ss : [ebp+0xAC], 1
        public_455351 : nop
        mov al, byte ptr ss : [esp+0x13]
        test al, al
        je public_455360
        mov byte ptr ss : [ebp+0xAD], 1
        public_455360 : nop
        mov eax, dword ptr ss : [ebp+0xBC]
        inc ebx
        add edi, 0x40
        cmp ebx, eax
        jl public_455315
        public_45536e : nop
        call dword ptr ds : [public_5c60f8]
        call public_4356c0
        mov ecx, eax
        call public_4353a0
        mov al, byte ptr ss : [ebp+0xA]
        test al, al
        je public_455446
        mov al, byte ptr ss : [ebp+0xAC]
        test al, al
        jne public_455446
        mov al, byte ptr ss : [ebp+0xC]
        test al, al
        je public_4553d1
        mov eax, dword ptr ds : [public_5ce060]
        mov ecx, dword ptr ds : [public_5ce05c]
        push eax
        push ecx
        push 3
        call public_428d00
        fld dword ptr ds : [public_5ce05c]
        fstp dword ptr ds : [public_66d2e8]
        fld dword ptr ds : [public_5ce060]
        add esp, 0xC
        fstp dword ptr ds : [public_66d2ec]
        jmp public_455446
        public_4553d1 : nop
        push 0x501502F9
        push 0x501502F9
        push 3
        call public_428d00
        push 0
        lea edx, ss:[esp+0x2C]
        push 0
        push edx
        call public_428be0
        mov eax, dword ptr ss : [esp+0x34]
        push 0
        lea ecx, ss:[esp+0x34]
        push ecx
        push 0
        mov dword ptr ss : [esp+0x38], eax
        call public_428be0
        fld dword ptr ss : [esp+0x3C]
        fcomp qword ptr ds : [public_5c8ba8]
        mov edx, dword ptr ss : [esp+0x38]
        add esp, 0x24
        mov dword ptr ds : [public_66d2e8], edx
        fnstsw ax
        test ah, 0x41
        jne public_45543c
        fld dword ptr ss : [esp+0x14]
        fsub dword ptr ds : [public_66d2e0]
        fabs 
        fdiv dword ptr ss : [esp+0x18]
        fstp dword ptr ds : [public_66d2ec]
        jmp public_455446
        public_45543c : nop
        mov dword ptr ds : [public_66d2ec], 0x49742400
        public_455446 : nop
        mov al, byte ptr ss : [ebp+0xB]
        test al, al
        je public_455481
        mov al, byte ptr ss : [ebp+0xAD]
        test al, al
        jne public_455481
        mov al, byte ptr ss : [ebp+0xC]
        test al, al
        je public_45546d
        mov eax, dword ptr ds : [public_5ce060]
        mov ecx, dword ptr ds : [public_5ce05c]
        push eax
        push ecx
        jmp public_455477
        public_45546d : nop
        push 0x501502F9
        push 0x501502F9
        public_455477 : nop
        push 3
        call public_428c50
        add esp, 0xC
        public_455481 : nop
        mov al, byte ptr ss : [ebp+6]
        test al, al
        je public_4554a6
        push 0x40400000
        push 0x3F800000
        call public_41a0f0
        call public_559290
        push 0
        call public_41dda0
        add esp, 0xC
        public_4554a6 : nop
        pop edi
        pop esi
        mov byte ptr ss : [ebp+0x2C], 0
        pop ebp
        pop ebx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x455290)
    }
}

#undef public_455315
#undef public_455351
#undef public_455360
#undef public_45536e
#undef public_4553d1
#undef public_45543c
#undef public_455446
#undef public_45546d
#undef public_455477
#undef public_455481
#undef public_4554a6
