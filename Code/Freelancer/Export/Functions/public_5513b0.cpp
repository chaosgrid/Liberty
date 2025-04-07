#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5513b0);

#define public_5513d7 _public_5513d7
#define public_5514be _public_5514be
#define public_5514cb _public_5514cb
#define public_5514d8 _public_5514d8
#define public_5514dd _public_5514dd
#define public_5514f6 _public_5514f6

PROC_DECLARE(0x5513b0, internal_5513b0, public_5513b0);
extern "C" NAKED register_t __cdecl internal_5513b0()
{
    __asm
    {
        sub esp, 0x30
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0xC]
        xor eax, eax
        test ecx, ecx
        push edi
        mov edi, dword ptr ds : [esi]
        mov dword ptr ss : [esp+0xC], eax
        jle public_5514f6
        push ebx
        push ebp
        mov ebp, dword ptr ds : [public_5c69c4]
        mov ebx, 1
        public_5513d7 : nop
        cmp eax, dword ptr ds : [esi+0x10]
        jge public_5514cb
        mov eax, dword ptr ds : [esi+0x100]
        push eax
        lea ecx, ss:[esp+0x2C]
        push ecx
        call ebp
        fld dword ptr ds : [esi+0xF4]
        fadd dword ptr ds : [eax]
        mov edx, dword ptr ds : [edi]
        fstp dword ptr ss : [esp+0x24]
        fld dword ptr ds : [esi+0xF8]
        fadd dword ptr ds : [eax+4]
        fstp dword ptr ss : [esp+0x28]
        fld dword ptr ds : [esi+0xFC]
        mov ecx, dword ptr ss : [esp+0x28]
        fadd dword ptr ds : [eax+8]
        mov eax, dword ptr ss : [esp+0x24]
        mov dword ptr ds : [edx], eax
        mov dword ptr ds : [edx+4], ecx
        fstp dword ptr ss : [esp+0x2C]
        mov eax, dword ptr ss : [esp+0x2C]
        mov dword ptr ds : [edx+8], eax
        mov ecx, dword ptr ds : [esi+0xB0]
        push ecx
        lea edx, ss:[esp+0x40]
        push edx
        call ebp
        mov ecx, dword ptr ds : [edi]
        mov edx, dword ptr ds : [eax]
        add ecx, 0x44
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+8], eax
        mov ecx, dword ptr ds : [esi+0xC4]
        add esp, 0x10
        test ecx, ecx
        je public_5514be
        mov eax, dword ptr ds : [edi]
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx]
        fcomp qword ptr ds : [public_5c8ba8]
        fnstsw ax
        test ah, 0x41
        jne public_5514be
        mov ecx, dword ptr ds : [edi]
        mov byte ptr ds : [ecx+0x50], bl
        mov ecx, dword ptr ss : [esp+0x44]
        test ecx, ecx
        mov edx, dword ptr ds : [edi]
        mov byte ptr ds : [edx+0x51], 0
        je public_5514dd
        push ebx
        lea eax, ss:[esp+0x14]
        push eax
        mov eax, dword ptr ds : [edi]
        lea edx, ss:[esp+0x20]
        push edx
        push eax
        mov dword ptr ss : [esp+0x20], 0xBF800000
        call dword ptr ds : [public_5c6604]
        test al, al
        je public_5514d8
        fld dword ptr ss : [esp+0x10]
        fcomp dword ptr ds : [public_5e0e00]
        fnstsw ax
        test ah, 0x41
        jne public_5514d8
        mov ecx, dword ptr ds : [edi]
        mov ebx, 1
        mov byte ptr ds : [ecx+0x51], bl
        jmp public_5514dd
        public_5514be : nop
        mov edx, dword ptr ds : [edi]
        mov byte ptr ds : [edx+0x50], 0
        mov eax, dword ptr ds : [edi]
        mov byte ptr ds : [eax+0x51], bl
        jmp public_5514dd
        public_5514cb : nop
        mov ecx, dword ptr ds : [edi]
        mov byte ptr ds : [ecx+0x50], 0
        mov edx, dword ptr ds : [edi]
        mov byte ptr ds : [edx+0x51], bl
        jmp public_5514dd
        public_5514d8 : nop
        mov ebx, 1
        public_5514dd : nop
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [esi+0xC]
        inc eax
        add edi, 4
        cmp eax, ecx
        mov dword ptr ss : [esp+0x14], eax
        jl public_5513d7
        pop ebp
        pop ebx
        public_5514f6 : nop
        pop edi
        pop esi
        add esp, 0x30
        ret 4
        UNREACHABLE_TRAP(0x5513b0)
    }
}

#undef public_5513d7
#undef public_5514be
#undef public_5514cb
#undef public_5514d8
#undef public_5514dd
#undef public_5514f6
