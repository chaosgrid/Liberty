#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6273c30);
CLANG_FORWARD_PROC_SYMBOL(public_62795d0);
CLANG_FORWARD_PROC_SYMBOL(public_6334430);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_62795e0 _public_62795e0
#define public_6279605 _public_6279605
#define public_6279634 _public_6279634
#define public_6279641 _public_6279641
#define public_6279650 _public_6279650
#define public_627965e _public_627965e

PROC_DECLARE(0x62795d0, internal_62795d0, public_62795d0);
extern "C" NAKED register_t __cdecl internal_62795d0()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov dword ptr ss : [esp+0x10], esi
        xor ebp, ebp
        lea ecx, ds:[ecx]
        public_62795e0 : nop
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        je public_6279641
        mov eax, dword ptr ds : [esi+8]
        sub eax, ecx
        sar eax, 2
        cmp ebp, eax
        jae public_6279641
        mov edi, dword ptr ds : [ecx+ebp*4]
        test edi, edi
        je public_6279634
        lea esi, ds:[edi+0x120]
        mov ebx, 0x40
        public_6279605 : nop
        lea eax, ds:[esi-0x100]
        push eax
        call public_6334430
        push esi
        call public_6334430
        add esp, 8
        add esi, 4
        dec ebx
        jne public_6279605
        mov ecx, edi
        call public_6273c30
        push edi
        call public_6391d5a
        mov esi, dword ptr ss : [esp+0x14]
        add esp, 4
        public_6279634 : nop
        mov ecx, dword ptr ds : [esi+4]
        mov dword ptr ds : [ecx+ebp*4], 0
        inc ebp
        jmp public_62795e0
        public_6279641 : nop
        mov edx, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [esi+4]
        mov eax, edx
        cmp eax, edx
        je public_627965e
        lea ecx, ds:[ecx]
        public_6279650 : nop
        mov edi, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edi
        add eax, 4
        add ecx, 4
        cmp eax, edx
        jne public_6279650
        public_627965e : nop
        pop edi
        mov dword ptr ds : [esi+8], ecx
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x62795d0)
    }
}

#undef public_62795e0
#undef public_6279605
#undef public_6279634
#undef public_6279641
#undef public_6279650
#undef public_627965e
