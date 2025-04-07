#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_409840);
CLANG_FORWARD_PROC_SYMBOL(public_40cdc0);
CLANG_FORWARD_PROC_SYMBOL(public_40ce70);
CLANG_FORWARD_PROC_SYMBOL(public_418996);

#define public_409454 _public_409454
#define public_409480 _public_409480
#define public_40948c _public_40948c
#define public_4094a2 _public_4094a2

PROC_DECLARE(0x409430, internal_409430, public_409430);
extern "C" NAKED register_t __cdecl internal_409430()
{
    __asm
    {
        push ebx
        push esi
        push edi
        mov edi, ecx
        call public_418996
        call public_40cdc0
        mov eax, dword ptr ds : [edi+0x200]
        add eax, 4
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        jne public_409454
        mov eax, offset public_41c3f4
        public_409454 : nop
        push eax
        mov eax, dword ptr ds : [edi+0x1E0]
        push eax
        call public_409840
        mov ecx, dword ptr ds : [edi+0x200]
        mov eax, dword ptr ds : [ecx+0x28]
        mov esi, dword ptr ds : [eax]
        add esp, 8
        cmp esi, eax
        je public_4094a2
        lea ebx, ds:[edi+0xA0]
        lea esp, ss:[esp]
        public_409480 : nop
        mov eax, dword ptr ds : [esi+0xC]
        test eax, eax
        jne public_40948c
        mov eax, offset public_41c3f4
        public_40948c : nop
        mov edx, dword ptr ds : [ebx]
        push 0
        push eax
        mov ecx, ebx
        call dword ptr ds : [edx]
        mov eax, dword ptr ds : [edi+0x200]
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ds : [eax+0x28]
        jne public_409480
        public_4094a2 : nop
        mov ecx, dword ptr ds : [edi+0x200]
        mov bl, byte ptr ds : [ecx+0x31]
        mov eax, dword ptr ds : [edi+0x80]
        xor edx, edx
        test bl, bl
        sete dl
        push 0
        push edx
        push 0xF1
        push eax
        call dword ptr ds : [public_41bbe8]
        call public_40ce70
        pop edi
        pop esi
        mov eax, 1
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x409430)
    }
}

#undef public_409454
#undef public_409480
#undef public_40948c
#undef public_4094a2
