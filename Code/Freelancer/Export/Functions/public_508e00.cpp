#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4101e0);
CLANG_FORWARD_PROC_SYMBOL(public_421dd0);
CLANG_FORWARD_PROC_SYMBOL(public_421ed0);
CLANG_FORWARD_PROC_SYMBOL(public_422190);
CLANG_FORWARD_PROC_SYMBOL(public_422440);
CLANG_FORWARD_PROC_SYMBOL(public_507ed0);

#define public_508e3e _public_508e3e
#define public_508f18 _public_508f18

PROC_DECLARE(0x508e00, internal_508e00, public_508e00);
extern "C" NAKED register_t __cdecl internal_508e00()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov al, byte ptr ds : [esi+0x2C0]
        test al, al
        je public_508f18
        fld dword ptr ds : [esi+0x2AC]
        fsub dword ptr ds : [esi+0x29C]
        fmul qword ptr ds : [public_5db0a8]
        fdiv dword ptr ds : [esi+0x298]
        fcom dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 5
        jp public_508e3e
        fstp st(0)
        fld dword ptr ds : [public_5c7474]
        public_508e3e : nop
        fadd qword ptr ds : [public_5c89b8]
        mov eax, dword ptr ds : [esi+0x2AC]
        fmul dword ptr ds : [esi+0x298]
        push ecx
        lea ecx, ds:[esi+0x2A0]
        fadd dword ptr ds : [esi+0x2AC]
        fstp dword ptr ss : [esp]
        push eax
        push ecx
        call public_422440
        mov edx, dword ptr ds : [public_5c6dcc]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        add esp, 0xC
        push 0xFFFFFFFF
        push 1
        push eax
        call dword ptr ds : [ecx+0x20]
        mov edx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push 0
        push 0x89
        push eax
        call dword ptr ds : [ecx+0xF0]
        push 0
        call public_422190
        push 0xB71
        call public_421ed0
        add esp, 8
        call public_4101e0
        mov edx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push 0xFFFFFFFF
        push 0x8B
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov edx, dword ptr ss : [esp+8]
        push edx
        mov ecx, esi
        call public_507ed0
        mov eax, dword ptr ds : [public_5c6dcc]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push 1
        push 1
        push eax
        call dword ptr ds : [ecx+0x20]
        mov edx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push 1
        push 0x89
        push eax
        call dword ptr ds : [ecx+0xF0]
        push 1
        call public_422190
        push 0xB71
        call public_421dd0
        push 0xB60
        call public_421ed0
        add esp, 0xC
        public_508f18 : nop
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x508e00)
    }
}

#undef public_508e3e
#undef public_508f18
