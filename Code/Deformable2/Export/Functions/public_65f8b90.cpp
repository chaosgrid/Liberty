#include "Deformable2-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65f8b90);
CLANG_FORWARD_PROC_SYMBOL(public_65f9170);
CLANG_FORWARD_PROC_SYMBOL(public_65f9430);
CLANG_FORWARD_PROC_SYMBOL(public_65f9ba0);
CLANG_FORWARD_PROC_SYMBOL(public_6600bb0);

#define public_65f8bb8 _public_65f8bb8
#define public_65f8bd1 _public_65f8bd1
#define public_65f8bda _public_65f8bda
#define public_65f8c36 _public_65f8c36
#define public_65f8c43 _public_65f8c43
#define public_65f8c4c _public_65f8c4c
#define public_65f8c56 _public_65f8c56
#define public_65f8c66 _public_65f8c66

PROC_DECLARE(0x65f8b90, internal_65f8b90, public_65f8b90);
extern "C" NAKED register_t __cdecl internal_65f8b90()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0x1C]
        test ecx, ecx
        push edi
        mov dword ptr ds : [esi], offset public_660135c
        je public_65f8bda
        mov eax, dword ptr ds : [ecx-4]
        lea ebp, ds:[ecx-4]
        lea edx, ds:[eax+eax*8]
        dec eax
        lea ecx, ds:[ecx+edx*4]
        js public_65f8bd1
        lea edi, ds:[ecx+8]
        lea ebx, ds:[eax+1]
        public_65f8bb8 : nop
        mov eax, dword ptr ds : [edi-0x14]
        sub edi, 0x24
        push eax
        call public_6600bb0
        add esp, 4
        mov ecx, edi
        call public_65f9170
        dec ebx
        jne public_65f8bb8
        public_65f8bd1 : nop
        push ebp
        call public_6600bb0
        add esp, 4
        public_65f8bda : nop
        mov ecx, dword ptr ds : [esi+0x14]
        push ecx
        call public_6600bb0
        mov edx, dword ptr ds : [esi+0x28]
        push edx
        call public_6600bb0
        mov eax, dword ptr ds : [esi+0x2C]
        push eax
        call public_6600bb0
        mov ecx, dword ptr ds : [esi+0x30]
        push ecx
        call public_6600bb0
        mov edx, dword ptr ds : [esi+0x54]
        push edx
        call public_6600bb0
        mov eax, dword ptr ds : [esi+0x50]
        push eax
        call public_6600bb0
        mov ecx, dword ptr ds : [esi+0x5C]
        push ecx
        call public_6600bb0
        mov eax, dword ptr ds : [esi+0x34]
        add esp, 0x1C
        test eax, eax
        je public_65f8c4c
        mov ecx, dword ptr ds : [eax-4]
        lea ebp, ds:[eax-4]
        mov edi, ecx
        shl edi, 4
        add edi, eax
        dec ecx
        js public_65f8c43
        lea ebx, ds:[ecx+1]
        public_65f8c36 : nop
        sub edi, 0x10
        mov ecx, edi
        call public_65f9430
        dec ebx
        jne public_65f8c36
        public_65f8c43 : nop
        push ebp
        call public_6600bb0
        add esp, 4
        public_65f8c4c : nop
        mov ebx, dword ptr ds : [esi+0x68]
        mov edi, dword ptr ds : [esi+0x64]
        cmp edi, ebx
        je public_65f8c66
        public_65f8c56 : nop
        push 0
        mov ecx, edi
        call public_65f9ba0
        add edi, 0x10
        cmp edi, ebx
        jne public_65f8c56
        public_65f8c66 : nop
        mov edx, dword ptr ds : [esi+0x64]
        push edx
        call public_6600bb0
        xor eax, eax
        mov dword ptr ds : [esi+0x64], eax
        mov dword ptr ds : [esi+0x68], eax
        mov dword ptr ds : [esi+0x6C], eax
        mov eax, dword ptr ds : [esi+0x38]
        push eax
        call public_6600bb0
        add esp, 8
        pop edi
        mov dword ptr ds : [esi], offset public_6601378
        pop esi
        pop ebp
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x65f8b90)
    }
}

#undef public_65f8bb8
#undef public_65f8bd1
#undef public_65f8bda
#undef public_65f8c36
#undef public_65f8c43
#undef public_65f8c4c
#undef public_65f8c56
#undef public_65f8c66
