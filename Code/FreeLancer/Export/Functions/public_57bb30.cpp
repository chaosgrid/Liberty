#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_53e430);
CLANG_FORWARD_PROC_SYMBOL(public_57bb30);
CLANG_FORWARD_PROC_SYMBOL(public_57f370);
CLANG_FORWARD_PROC_SYMBOL(public_57f780);
CLANG_FORWARD_PROC_SYMBOL(public_57fb00);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_57bb60 _public_57bb60
#define public_57bb7f _public_57bb7f
#define public_57bba4 _public_57bba4
#define public_57bba8 _public_57bba8
#define public_57bbc8 _public_57bbc8

PROC_DECLARE(0x57bb30, internal_57bb30, public_57bb30);
extern "C" NAKED register_t __cdecl internal_57bb30()
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
        je public_57bba4
        mov ecx, eax
        cmp eax, ecx
        jne public_57bba4
        mov ebx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_57bb7f
        nop 
        lea esp, ss:[esp]
        public_57bb60 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_57f780
        mov edi, dword ptr ds : [edi]
        push ebx
        call public_5b7e1d
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_57bb60
        public_57bb7f : nop
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
        jmp public_57bbc8
        public_57bba4 : nop
        cmp eax, edi
        je public_57bbc8
        public_57bba8 : nop
        lea ecx, ss:[esp+0x10]
        mov ebx, eax
        call public_57fb00
        push ebx
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, esi
        call public_57f370
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, edi
        jne public_57bba8
        public_57bbc8 : nop
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
        UNREACHABLE_TRAP(0x57bb30)
    }
}

#undef public_57bb60
#undef public_57bb7f
#undef public_57bba4
#undef public_57bba8
#undef public_57bbc8
