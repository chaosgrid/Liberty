#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_46dfb0);
CLANG_FORWARD_PROC_SYMBOL(public_53e430);
CLANG_FORWARD_PROC_SYMBOL(public_595150);
CLANG_FORWARD_PROC_SYMBOL(public_5af900);
CLANG_FORWARD_PROC_SYMBOL(public_5afde0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_5af930 _public_5af930
#define public_5af94f _public_5af94f
#define public_5af974 _public_5af974
#define public_5af978 _public_5af978
#define public_5af998 _public_5af998

PROC_DECLARE(0x5af900, internal_5af900, public_5af900);
extern "C" NAKED register_t __cdecl internal_5af900()
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
        je public_5af974
        mov ecx, eax
        cmp eax, ecx
        jne public_5af974
        mov ebx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_5af94f
        nop 
        lea esp, ss:[esp]
        public_5af930 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_5afde0
        mov edi, dword ptr ds : [edi]
        push ebx
        call public_5b7e1d
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_5af930
        public_5af94f : nop
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
        jmp public_5af998
        public_5af974 : nop
        cmp eax, edi
        je public_5af998
        public_5af978 : nop
        lea ecx, ss:[esp+0x10]
        mov ebx, eax
        call public_595150
        push ebx
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, esi
        call public_46dfb0
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, edi
        jne public_5af978
        public_5af998 : nop
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
        UNREACHABLE_TRAP(0x5af900)
    }
}

#undef public_5af930
#undef public_5af94f
#undef public_5af974
#undef public_5af978
#undef public_5af998
