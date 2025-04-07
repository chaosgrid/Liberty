#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d006c0);
CLANG_FORWARD_PROC_SYMBOL(public_6d0ebf0);
CLANG_FORWARD_PROC_SYMBOL(public_6d43650);

#define public_6d55039 _public_6d55039
#define public_6d55042 _public_6d55042
#define public_6d5505b _public_6d5505b
#define public_6d55099 _public_6d55099
#define public_6d5509b _public_6d5509b

PROC_DECLARE(0x6d54fb0, internal_6d54fb0, public_6d54fb0);
extern "C" NAKED register_t __cdecl internal_6d54fb0()
{
    __asm
    {
        push ecx
        mov ecx, dword ptr ss : [esp+8]
        mov ecx, dword ptr ds : [ecx]
        test ecx, ecx
        push esi
        push edi
        mov eax, 0xFFFFFFFE
        jbe public_6d5509b
        mov esi, dword ptr ds : [public_6d90264]
        lea edx, ds:[ecx-1]
        cmp edx, esi
        jae public_6d5509b
        mov esi, dword ptr ds : [public_6d90260]
        imul edx, 0x418
        mov edi, dword ptr ds : [edx+esi+0x348]
        test edi, edi
        je public_6d5509b
        imul ecx, 0x418
        add esi, ecx
        mov ecx, dword ptr ds : [esi-0x34]
        test ecx, ecx
        lea eax, ds:[esi-0x34]
        je public_6d55042
        lea edx, ss:[esp+8]
        push edx
        lea ecx, ss:[esp+0x14]
        push ecx
        push eax
        call public_6d006c0
        add esp, 0xC
        test al, al
        je public_6d55039
        mov edx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [esp+0x10]
        push edx
        push eax
        push ecx
        mov ecx, dword ptr ss : [esp+0x14]
        call public_6d0ebf0
        pop edi
        xor eax, eax
        pop esi
        pop ecx
        ret 
        public_6d55039 : nop
        pop edi
        mov eax, 0xFFFFFFFE
        pop esi
        pop ecx
        ret 
        public_6d55042 : nop
        call dword ptr ds : [public_6d647e8]
        test al, al
        je public_6d5505b
        mov dl, byte ptr ds : [esi-0x3B4]
        test dl, dl
        setne al
        test al, al
        je public_6d55099
        public_6d5505b : nop
        mov edi, dword ptr ss : [esp+0x18]
        push ebx
        mov ebx, dword ptr ss : [esp+0x18]
        push edi
        push ebx
        lea ecx, ds:[esi-0x1A0]
        call dword ptr ds : [public_6d64400]
        mov ecx, dword ptr ds : [public_6d8fb14]
        mov edx, dword ptr ds : [ecx]
        push edi
        push ebx
        push eax
        mov eax, dword ptr ds : [esi-0xD0]
        add esi, 0xFFFFFF30
        push eax
        call dword ptr ds : [edx+0x6C]
        push esi
        push 0
        call public_6d43650
        add esp, 8
        pop ebx
        public_6d55099 : nop
        xor eax, eax
        public_6d5509b : nop
        pop edi
        pop esi
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6d54fb0)
    }
}

#undef public_6d55039
#undef public_6d55042
#undef public_6d5505b
#undef public_6d55099
#undef public_6d5509b
