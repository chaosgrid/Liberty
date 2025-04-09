#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_42a7e0);
CLANG_FORWARD_PROC_SYMBOL(public_4684e0);
CLANG_FORWARD_PROC_SYMBOL(public_4686e0);
CLANG_FORWARD_PROC_SYMBOL(public_468a80);
CLANG_FORWARD_PROC_SYMBOL(public_468bf0);
CLANG_FORWARD_PROC_SYMBOL(public_46bb50);
CLANG_FORWARD_PROC_SYMBOL(public_46c860);
CLANG_FORWARD_PROC_SYMBOL(public_516f70);
CLANG_FORWARD_PROC_SYMBOL(public_53ab20);
CLANG_FORWARD_PROC_SYMBOL(public_53e430);
CLANG_FORWARD_PROC_SYMBOL(public_5556b0);
CLANG_FORWARD_PROC_SYMBOL(public_5999b0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);

#define public_468ab1 _public_468ab1
#define public_468b1f _public_468b1f
#define public_468be6 _public_468be6

PROC_DECLARE(0x468a80, internal_468a80, public_468a80);
extern "C" NAKED register_t __cdecl internal_468a80()
{
    __asm
    {
        mov cl, byte ptr ds : [public_66d44c]
        mov al, 1
        sub esp, 0x1C
        test al, cl
        jne public_468ab1
        mov dl, cl
        or dl, al
        mov ecx, offset public_66d440
        mov byte ptr ds : [public_66d44c], dl
        call dword ptr ds : [public_5c62dc]
/*FIXUP push offset _public_468bf0 @0x468aa4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_468bf0
        call public_5b7e6c
        add esp, 4
        public_468ab1 : nop
        push esi
        mov esi, dword ptr ds : [public_66da60]
        test esi, esi
        je public_468be6
        mov eax, dword ptr ds : [esi+0x14]
        test eax, eax
        push edi
        jne public_468b1f
        mov eax, dword ptr ds : [esi+8]
        test eax, eax
        jbe public_468b1f
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0xC], ecx
        mov edi, ecx
        call public_46bb50
        lea edx, ss:[esp+0xC]
        push edx
        lea ecx, ds:[esi+0xC]
        mov dword ptr ds : [edi+0xC], 0
        call public_5556b0
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, esi
        call public_53e430
        mov ecx, dword ptr ds : [eax]
        push ecx
        lea edx, ss:[esp+0x1C]
        push edx
        mov ecx, esi
        call public_516f70
        mov ecx, esi
        call public_4686e0
        mov ecx, esi
        call public_4684e0
        public_468b1f : nop
        mov eax, dword ptr ds : [esi+0x10]
        mov dword ptr ss : [esp+8], 0
        mov ecx, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+8], ecx
        mov eax, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [eax]
        push eax
        push edx
        lea edx, ss:[esp+0x24]
        push edx
        mov edi, ecx
        call public_46c860
        mov dword ptr ds : [edi+0xC], 0
        call dword ptr ds : [public_5c70f0]
        mov ecx, eax
        mov eax, 0x10624DD3
        imul ecx
        mov ecx, dword ptr ss : [esp+8]
        sar edx, 6
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        imul edx, 0x3E8
        mov dword ptr ds : [ecx+0xC], edx
        mov edx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [edx]
        push 0
        lea ecx, ss:[esp+0x24]
        push ecx
        lea ecx, ss:[esp+0x18]
        mov dword ptr ss : [esp+0x18], eax
        call public_53ab20
        mov eax, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [edx], ecx
        mov edx, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [edx+4], ecx
        call public_5b7e1d
        mov edx, dword ptr ds : [esi+0x14]
        add esp, 4
        dec edx
        mov dword ptr ds : [esi+0x14], edx
        mov edi, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [edi+4]
        push edx
        push edi
        mov ecx, esi
        call public_42a7e0
        mov dword ptr ds : [edi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        lea edx, ss:[esp+8]
        mov dword ptr ds : [ecx], eax
        push edx
        add eax, 8
        push eax
        call public_5999b0
        mov eax, dword ptr ds : [esi+8]
        add esp, 8
        inc eax
        mov dword ptr ds : [esi+8], eax
        mov eax, dword ptr ss : [esp+8]
        pop edi
        pop esi
        add esp, 0x1C
        ret 
        public_468be6 : nop
        mov eax, offset public_66d440
        pop esi
        add esp, 0x1C
        ret 
        UNREACHABLE_TRAP(0x468a80)
    }
}

#undef public_468ab1
#undef public_468b1f
#undef public_468be6
