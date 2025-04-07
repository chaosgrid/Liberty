#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_434e20);
CLANG_FORWARD_PROC_SYMBOL(public_4356c0);
CLANG_FORWARD_PROC_SYMBOL(public_445540);

#define public_452150 _public_452150
#define public_45218f _public_45218f
#define public_4521a0 _public_4521a0
#define public_4521c4 _public_4521c4
#define public_4521c7 _public_4521c7
#define public_4521e9 _public_4521e9

PROC_DECLARE(0x452130, internal_452130, public_452130);
extern "C" NAKED register_t __cdecl internal_452130()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        lea eax, ds:[edi+0x70]
        push eax
        call dword ptr ds : [public_5c60c8]
        add esp, 4
        lea esi, ds:[edi+0x7C]
        mov ebx, 0x20
        or ebp, 0xFFFFFFFF
        mov edi, edi
        public_452150 : nop
        mov al, byte ptr ds : [esi+8]
        test al, al
        je public_45218f
        mov ecx, dword ptr ds : [public_5c6d58]
        mov eax, dword ptr ds : [ecx]
        mov ecx, dword ptr ds : [esi-4]
        mov edx, dword ptr ds : [eax]
        push ecx
        mov ecx, dword ptr ds : [edi+0x6C]
        mov ecx, dword ptr ds : [ecx+0x30]
        push ecx
        push eax
        call dword ptr ds : [edx+0x28]
        mov edx, dword ptr ds : [esi]
        push edx
        call public_4356c0
        mov ecx, eax
        call public_434e20
        mov dword ptr ds : [esi-4], ebp
        mov dword ptr ds : [esi], 0
        mov dword ptr ds : [esi+4], ebp
        mov byte ptr ds : [esi+8], 0
        public_45218f : nop
        add esi, 0x10
        dec ebx
        jne public_452150
        lea esi, ds:[edi+0x2B0]
        mov ebx, 0x20
        public_4521a0 : nop
        cmp byte ptr ds : [esi], 0
        je public_4521c7
        mov al, byte ptr ds : [esi+1]
        test al, al
        je public_4521c4
        mov edx, dword ptr ds : [esi-0x38]
        mov eax, dword ptr ds : [public_5c6d58]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push edx
        mov edx, dword ptr ds : [edi+0x6C]
        mov edx, dword ptr ds : [edx+0x30]
        push edx
        push eax
        call dword ptr ds : [ecx+0x30]
        public_4521c4 : nop
        mov byte ptr ds : [esi], 0
        public_4521c7 : nop
        add esi, 0x3C
        dec ebx
        jne public_4521a0
        mov eax, dword ptr ds : [edi+0x6C]
        test eax, eax
        je public_4521e9
        mov byte ptr ds : [eax+0x15], 0
        mov eax, dword ptr ds : [edi+0x6C]
        mov byte ptr ds : [eax+0x16], 0
        mov ecx, dword ptr ds : [edi+0x6C]
        mov dword ptr ds : [ecx+0x18], 0
        public_4521e9 : nop
        mov edx, dword ptr ds : [edi+0x5C]
        mov ecx, dword ptr ds : [edi+0x6C]
        xor eax, eax
        mov al, byte ptr ds : [edx+0x55]
        push eax
        call public_445540
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x452130)
    }
}

#undef public_452150
#undef public_45218f
#undef public_4521a0
#undef public_4521c4
#undef public_4521c7
#undef public_4521e9
