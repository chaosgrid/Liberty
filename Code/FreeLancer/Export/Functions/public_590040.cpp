#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_58e360);
CLANG_FORWARD_PROC_SYMBOL(public_590040);
CLANG_FORWARD_PROC_SYMBOL(public_591150);

#define public_590060 _public_590060
#define public_59008e _public_59008e
#define public_590097 _public_590097
#define public_5900b7 _public_5900b7

PROC_DECLARE(0x590040, internal_590040, public_590040);
extern "C" NAKED register_t __cdecl internal_590040()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ss : [esp+8]
        push ebx
        mov ebx, dword ptr ds : [ecx+8]
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x18]
        cmp edi, ebx
        mov dword ptr ss : [esp+0xC], ecx
        mov esi, eax
        je public_59008e
        push ebp
        mov ebp, edi
        sub ebp, eax
        mov edi, edi
        public_590060 : nop
        push edi
        mov ecx, esi
        call public_591150
        lea eax, ds:[esi+ebp+0xC]
        push eax
        lea ecx, ds:[esi+0xC]
        call public_591150
        mov cl, byte ptr ds : [edi+0x18]
        mov byte ptr ds : [esi+0x18], cl
        add edi, 0x1C
        add esi, 0x1C
        cmp edi, ebx
        jne public_590060
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0x18]
        pop ebp
        public_59008e : nop
        mov ebx, dword ptr ds : [ecx+8]
        cmp esi, ebx
        mov edi, esi
        je public_5900b7
        public_590097 : nop
        mov ecx, edi
        call public_58e360
        add edi, 0x1C
        cmp edi, ebx
        jne public_590097
        mov edx, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ss : [esp+0x14]
        pop edi
        mov dword ptr ds : [edx+8], esi
        pop esi
        pop ebx
        pop ecx
        ret 8
        public_5900b7 : nop
        pop edi
        mov dword ptr ds : [ecx+8], esi
        pop esi
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x590040)
    }
}

#undef public_590060
#undef public_59008e
#undef public_590097
#undef public_5900b7
