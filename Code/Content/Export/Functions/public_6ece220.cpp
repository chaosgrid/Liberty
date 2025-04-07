#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6ece240 _public_6ece240
#define public_6ece262 _public_6ece262
#define public_6ece297 _public_6ece297

PROC_DECLARE(0x6ece220, internal_6ece220, public_6ece220);
extern "C" NAKED register_t __cdecl internal_6ece220()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov eax, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [eax+0x314]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        je public_6ece297
        mov ebp, dword ptr ds : [public_6fb3294]
        lea ebx, ds:[edi+0x10]
        mov edi, edi
        public_6ece240 : nop
        lea ecx, ds:[esi+0xC]
        push ebx
        push ecx
        call ebp
        add esp, 8
        test eax, eax
        je public_6ece262
        mov edx, dword ptr ds : [edi+4]
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ds : [edx+0x314]
        jne public_6ece240
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        ret 
        public_6ece262 : nop
        lea eax, ds:[esi+0x8C]
        push eax
        call dword ptr ds : [public_6fb34e0]
        mov ecx, dword ptr ds : [esi+4]
        mov edi, dword ptr ds : [edi+4]
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        push esi
        add edi, 0x310
        mov dword ptr ds : [eax+4], ecx
        call public_6fa8fe0
        mov eax, dword ptr ds : [edi+8]
        add esp, 8
        dec eax
        mov dword ptr ds : [edi+8], eax
        public_6ece297 : nop
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6ece220)
    }
}

#undef public_6ece240
#undef public_6ece262
#undef public_6ece297
