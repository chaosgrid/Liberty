#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41f720);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_41f736 _public_41f736
#define public_41f750 _public_41f750
#define public_41f777 _public_41f777
#define public_41f7a0 _public_41f7a0

PROC_DECLARE(0x41f720, internal_41f720, public_41f720);
extern "C" NAKED register_t __cdecl internal_41f720()
{
    __asm
    {
        push esi
        mov esi, ecx
        test byte ptr ds : [esi+0x14], 8
        jne public_41f7a0
        mov eax, dword ptr ds : [esi+0x10]
        test eax, eax
        je public_41f736
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x20]
        public_41f736 : nop
        mov cl, byte ptr ds : [esi+0x14]
        push ebx
        mov ebx, dword ptr ds : [esi+4]
        and cl, 0xF3
        push edi
        mov byte ptr ds : [esi+0x14], cl
        mov edi, dword ptr ds : [ebx]
        cmp edi, ebx
        je public_41f777
        lea ebx, ds:[ebx]
        public_41f750 : nop
        mov eax, edi
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [eax]
        mov edi, dword ptr ds : [edi]
        mov dword ptr ds : [edx], ecx
        mov edx, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [edx+4], ecx
        call public_5b7e1d
        mov ecx, dword ptr ds : [esi+8]
        add esp, 4
        dec ecx
        cmp edi, ebx
        mov dword ptr ds : [esi+8], ecx
        jne public_41f750
        public_41f777 : nop
        mov ecx, dword ptr ds : [public_67eca0]
        mov eax, dword ptr ds : [esi+0x10]
        mov edx, dword ptr ds : [eax]
        push 5
        push ecx
        push eax
        call dword ptr ds : [edx+0x34]
        mov cl, byte ptr ds : [esi+0x14]
        test eax, eax
        setge dl
        shl dl, 3
        xor dl, cl
        and dl, 8
        xor dl, cl
        pop edi
        mov byte ptr ds : [esi+0x14], dl
        pop ebx
        public_41f7a0 : nop
        mov al, byte ptr ds : [esi+0x14]
        shr al, 3
        and al, 1
        pop esi
        ret 
        UNREACHABLE_TRAP(0x41f720)
    }
}

#undef public_41f736
#undef public_41f750
#undef public_41f777
#undef public_41f7a0
