#include "zlib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_10004010);
CLANG_FORWARD_PROC_SYMBOL(public_10004090);

#define public_100040cd _public_100040cd
#define public_100040d2 _public_100040d2
#define public_10004107 _public_10004107

PROC_DECLARE(0x10004090, internal_10004090, public_10004090);
extern "C" NAKED register_t __cdecl internal_10004090()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [edi+0x28]
        push 0x40
        push 1
        push eax
        call dword ptr ds : [edi+0x20]
        mov esi, eax
        add esp, 0xC
        test esi, esi
        je public_100040cd
        mov ecx, dword ptr ds : [edi+0x28]
        push 0x5A0
        push 8
        push ecx
        call dword ptr ds : [edi+0x20]
        add esp, 0xC
        test eax, eax
        mov dword ptr ds : [esi+0x24], eax
        jne public_100040d2
        mov edx, dword ptr ds : [edi+0x28]
        push esi
        push edx
        call dword ptr ds : [edi+0x24]
        add esp, 8
        public_100040cd : nop
        pop edi
        xor eax, eax
        pop esi
        ret 
        public_100040d2 : nop
        mov eax, dword ptr ds : [edi+0x28]
        push ebx
        mov ebx, dword ptr ss : [esp+0x18]
        push ebx
        push 1
        push eax
        call dword ptr ds : [edi+0x20]
        add esp, 0xC
        test eax, eax
        mov dword ptr ds : [esi+0x28], eax
        jne public_10004107
        mov ecx, dword ptr ds : [esi+0x24]
        mov edx, dword ptr ds : [edi+0x28]
        push ecx
        push edx
        call dword ptr ds : [edi+0x24]
        mov eax, dword ptr ds : [edi+0x28]
        push esi
        push eax
        call dword ptr ds : [edi+0x24]
        add esp, 0x10
        pop ebx
        pop edi
        xor eax, eax
        pop esi
        ret 
        public_10004107 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        push 0
        add eax, ebx
        push edi
        push esi
        mov dword ptr ds : [esi+0x2C], eax
        mov dword ptr ds : [esi+0x38], ecx
        mov dword ptr ds : [esi], 0
        call public_10004010
        add esp, 0xC
        pop ebx
        pop edi
        mov eax, esi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x10004090)
    }
}

#undef public_100040cd
#undef public_100040d2
#undef public_10004107
