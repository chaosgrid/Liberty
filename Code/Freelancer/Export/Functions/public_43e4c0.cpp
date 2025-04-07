#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_43e4c0);

#define public_43e4e0 _public_43e4e0
#define public_43e4e8 _public_43e4e8
#define public_43e4f8 _public_43e4f8
#define public_43e504 _public_43e504
#define public_43e538 _public_43e538
#define public_43e542 _public_43e542

PROC_DECLARE(0x43e4c0, internal_43e4c0, public_43e4c0);
extern "C" NAKED register_t __cdecl internal_43e4c0()
{
    __asm
    {
        sub esp, 0xC
        push ebx
        push ebp
        mov ebp, ecx
        mov ecx, dword ptr ss : [ebp+0x380]
        push esi
        mov esi, dword ptr ds : [ecx]
        mov eax, esi
        xor ebx, ebx
        cmp eax, ecx
        push edi
        je public_43e4f8
        lea esp, ss:[esp]
        public_43e4e0 : nop
        mov dl, byte ptr ds : [eax+9]
        test dl, dl
        je public_43e4e8
        inc ebx
        public_43e4e8 : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        jne public_43e4e0
        cmp ebx, 5
        jle public_43e4f8
        mov ebx, 5
        public_43e4f8 : nop
        mov edi, dword ptr ds : [ebx*4+public_610c50]
        dec ebx
        cmp esi, ecx
        je public_43e542
        public_43e504 : nop
        mov al, byte ptr ds : [esi+9]
        test al, al
        je public_43e538
        fld dword ptr ds : [edi]
        mov ecx, dword ptr ds : [esi+0x20]
        push 0
        fstp dword ptr ss : [esp+0x14]
        lea edx, ss:[esp+0x14]
        push edx
        mov dword ptr ss : [esp+0x1C], 0x3BE56042
        mov dword ptr ss : [esp+0x20], 0
        mov eax, dword ptr ds : [ecx]
        push 6
        add edi, 4
        call dword ptr ds : [eax+0xA8]
        public_43e538 : nop
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ss : [ebp+0x380]
        jne public_43e504
        public_43e542 : nop
        mov edx, dword ptr ds : [ebx*4+public_610c68]
        mov ecx, dword ptr ss : [ebp+0x3D8]
        mov eax, dword ptr ds : [ecx]
        push 0
        push edx
        push 4
        call dword ptr ds : [eax+0xA8]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x43e4c0)
    }
}

#undef public_43e4e0
#undef public_43e4e8
#undef public_43e4f8
#undef public_43e504
#undef public_43e538
#undef public_43e542
