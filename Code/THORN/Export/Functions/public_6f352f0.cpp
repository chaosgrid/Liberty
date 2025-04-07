#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f57de0);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e26);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e9c);

#define public_6f35340 _public_6f35340
#define public_6f35368 _public_6f35368
#define public_6f35388 _public_6f35388
#define public_6f353b7 _public_6f353b7

PROC_DECLARE(0x6f352f0, internal_6f352f0, public_6f352f0);
extern "C" NAKED register_t __cdecl internal_6f352f0()
{
    __asm
    {
        sub esp, 8
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [esi+0xC]
        test eax, eax
        je public_6f353b7
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x20]
        lea eax, ss:[ebp+ebp*2]
        shl eax, 2
        push edi
        push eax
        call public_6f57e9c
        mov ecx, ebp
        shl ecx, 4
        mov ebx, eax
        push ecx
        mov dword ptr ss : [esp+0x18], ebx
        call public_6f57e9c
        add esp, 8
        test ebp, ebp
        mov dword ptr ss : [esp+0x14], eax
        jbe public_6f35388
        mov esi, dword ptr ss : [esp+0x20]
        mov edi, eax
        lea esp, ss:[esp]
        public_6f35340 : nop
        lea edx, ds:[esi+0x24]
        mov ecx, dword ptr ds : [edx]
        mov eax, ebx
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ds : [edx+4]
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ds : [eax+8], edx
        mov eax, dword ptr ds : [public_6f61e18]
        test eax, eax
        jne public_6f35368
        call public_6f57de0
        mov dword ptr ds : [public_6f61e18], eax
        public_6f35368 : nop
        mov ecx, dword ptr ds : [eax]
        push esi
        push edi
        push eax
        call dword ptr ds : [ecx+0x50]
        add ebx, 0xC
        add edi, 0x10
        add esi, 0x30
        dec ebp
        jne public_6f35340
        mov ebp, dword ptr ss : [esp+0x24]
        mov esi, dword ptr ss : [esp+0x1C]
        mov ebx, dword ptr ss : [esp+0x10]
        public_6f35388 : nop
        mov edx, dword ptr ds : [esi]
        push ebp
        push ebx
        push esi
        call dword ptr ds : [edx+0x10]
        mov edi, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [esi]
        push ebp
        push edi
        push esi
        call dword ptr ds : [eax+0x2C]
        push ebx
        call public_6f57e26
        push edi
        call public_6f57e26
        add esp, 8
        pop edi
        pop ebp
        pop ebx
        xor eax, eax
        pop esi
        add esp, 8
        ret 0xC
        public_6f353b7 : nop
        or eax, 0xFFFFFFFF
        pop esi
        add esp, 8
        ret 0xC
        UNREACHABLE_TRAP(0x6f352f0)
    }
}

#undef public_6f35340
#undef public_6f35368
#undef public_6f35388
#undef public_6f353b7
