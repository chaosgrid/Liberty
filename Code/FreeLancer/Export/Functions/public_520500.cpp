#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_433330);
CLANG_FORWARD_PROC_SYMBOL(public_520500);
CLANG_FORWARD_PROC_SYMBOL(public_526f30);
CLANG_FORWARD_PROC_SYMBOL(public_527460);
CLANG_FORWARD_PROC_SYMBOL(public_527a20);
CLANG_FORWARD_PROC_SYMBOL(public_53e430);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_520530 _public_520530
#define public_520558 _public_520558
#define public_52057d _public_52057d
#define public_520581 _public_520581
#define public_5205a1 _public_5205a1

PROC_DECLARE(0x520500, internal_520500, public_520500);
extern "C" NAKED register_t __cdecl internal_520500()
{
    __asm
    {
        sub esp, 0xC
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0x10]
        push edi
        mov edi, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edi]
        xor ebp, ebp
        cmp ecx, ebp
        mov dword ptr ss : [esp+0x10], eax
        je public_52057d
        mov ecx, eax
        cmp eax, ecx
        jne public_52057d
        mov ebx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_520558
        nop 
        lea esp, ss:[esp]
        public_520530 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_527460
        mov edi, dword ptr ds : [edi]
        push ebp
        lea ecx, ds:[ebx+0xC]
        call public_527a20
        push ebx
        call public_5b7e1d
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_520530
        public_520558 : nop
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], ebp
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+8], eax
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, esi
        call public_53e430
        jmp public_5205a1
        public_52057d : nop
        cmp eax, edi
        je public_5205a1
        public_520581 : nop
        lea ecx, ss:[esp+0x10]
        mov ebx, eax
        call public_433330
        push ebx
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, esi
        call public_526f30
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, edi
        jne public_520581
        public_5205a1 : nop
        mov edx, dword ptr ds : [esi+4]
        push edx
        call public_5b7e1d
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [esi+0x10], ebp
        call public_5b7e1d
        add esp, 8
        pop edi
        mov dword ptr ds : [esi+8], ebp
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x520500)
    }
}

#undef public_520530
#undef public_520558
#undef public_52057d
#undef public_520581
#undef public_5205a1
