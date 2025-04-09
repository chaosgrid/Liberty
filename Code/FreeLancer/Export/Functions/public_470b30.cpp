#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_46fa50);
CLANG_FORWARD_PROC_SYMBOL(public_470b30);
CLANG_FORWARD_PROC_SYMBOL(public_470fd0);
CLANG_FORWARD_PROC_SYMBOL(public_4713b0);
CLANG_FORWARD_PROC_SYMBOL(public_536020);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_470b60 _public_470b60
#define public_470b87 _public_470b87
#define public_470bb3 _public_470bb3
#define public_470bb7 _public_470bb7
#define public_470bd7 _public_470bd7

PROC_DECLARE(0x470b30, internal_470b30, public_470b30);
extern "C" NAKED register_t __cdecl internal_470b30()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x10]
        test eax, eax
        mov ecx, dword ptr ss : [esp+0x10]
        push edi
        je public_470bb3
        mov eax, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [eax]
        jne public_470bb3
        cmp ebx, eax
        jne public_470bb3
        mov ebx, dword ptr ds : [eax+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_470b87
        lea esp, ss:[esp]
        public_470b60 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_4713b0
        mov edi, dword ptr ds : [edi]
        lea ecx, ds:[ebx+0xC]
        call public_46fa50
        push ebx
        call public_5b7e1d
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_470b60
        public_470b87 : nop
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], 0
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+8], eax
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        mov dword ptr ds : [eax], ecx
        pop ebx
        ret 0xC
        public_470bb3 : nop
        cmp ecx, ebx
        je public_470bd7
        public_470bb7 : nop
        mov edi, ecx
        lea ecx, ss:[esp+0x14]
        call public_536020
        push edi
        lea edx, ss:[esp+0x1C]
        push edx
        mov ecx, esi
        call public_470fd0
        mov ecx, dword ptr ss : [esp+0x14]
        cmp ecx, ebx
        jne public_470bb7
        public_470bd7 : nop
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        mov dword ptr ds : [eax], ecx
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x470b30)
    }
}

#undef public_470b60
#undef public_470b87
#undef public_470bb3
#undef public_470bb7
#undef public_470bd7
