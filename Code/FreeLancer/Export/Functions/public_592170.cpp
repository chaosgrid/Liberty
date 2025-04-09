#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_46dfb0);
CLANG_FORWARD_PROC_SYMBOL(public_53e430);
CLANG_FORWARD_PROC_SYMBOL(public_592170);
CLANG_FORWARD_PROC_SYMBOL(public_594900);
CLANG_FORWARD_PROC_SYMBOL(public_595150);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_5921a0 _public_5921a0
#define public_5921bf _public_5921bf
#define public_5921e4 _public_5921e4
#define public_5921e8 _public_5921e8
#define public_592208 _public_592208

PROC_DECLARE(0x592170, internal_592170, public_592170);
extern "C" NAKED register_t __cdecl internal_592170()
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
        je public_5921e4
        mov ecx, eax
        cmp eax, ecx
        jne public_5921e4
        mov ebx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_5921bf
        nop 
        lea esp, ss:[esp]
        public_5921a0 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_594900
        mov edi, dword ptr ds : [edi]
        push ebx
        call public_5b7e1d
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_5921a0
        public_5921bf : nop
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
        jmp public_592208
        public_5921e4 : nop
        cmp eax, edi
        je public_592208
        public_5921e8 : nop
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
        jne public_5921e8
        public_592208 : nop
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
        UNREACHABLE_TRAP(0x592170)
    }
}

#undef public_5921a0
#undef public_5921bf
#undef public_5921e4
#undef public_5921e8
#undef public_592208
