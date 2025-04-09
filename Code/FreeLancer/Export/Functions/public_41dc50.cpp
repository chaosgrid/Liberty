#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41dc50);
CLANG_FORWARD_PROC_SYMBOL(public_420800);
CLANG_FORWARD_PROC_SYMBOL(public_420be0);
CLANG_FORWARD_PROC_SYMBOL(public_420c40);
CLANG_FORWARD_PROC_SYMBOL(public_420c90);
CLANG_FORWARD_PROC_SYMBOL(public_53e430);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_41dc80 _public_41dc80
#define public_41dca8 _public_41dca8
#define public_41dccd _public_41dccd
#define public_41dcd1 _public_41dcd1
#define public_41dcf1 _public_41dcf1

PROC_DECLARE(0x41dc50, internal_41dc50, public_41dc50);
extern "C" NAKED register_t __cdecl internal_41dc50()
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
        je public_41dccd
        mov ecx, eax
        cmp eax, ecx
        jne public_41dccd
        mov ebx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_41dca8
        nop 
        lea esp, ss:[esp]
        public_41dc80 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_420be0
        mov edi, dword ptr ds : [edi]
        push ebp
        lea ecx, ds:[ebx+0xC]
        call public_420c90
        push ebx
        call public_5b7e1d
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_41dc80
        public_41dca8 : nop
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
        jmp public_41dcf1
        public_41dccd : nop
        cmp eax, edi
        je public_41dcf1
        public_41dcd1 : nop
        lea ecx, ss:[esp+0x10]
        mov ebx, eax
        call public_420c40
        push ebx
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, esi
        call public_420800
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, edi
        jne public_41dcd1
        public_41dcf1 : nop
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
        UNREACHABLE_TRAP(0x41dc50)
    }
}

#undef public_41dc80
#undef public_41dca8
#undef public_41dccd
#undef public_41dcd1
#undef public_41dcf1
