#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eea860);
CLANG_FORWARD_PROC_SYMBOL(public_6f57b00);
CLANG_FORWARD_PROC_SYMBOL(public_6f57c60);
CLANG_FORWARD_PROC_SYMBOL(public_6f57c80);
CLANG_FORWARD_PROC_SYMBOL(public_6f73ac0);

#define public_6f2755f _public_6f2755f
#define public_6f2757d _public_6f2757d
#define public_6f27594 _public_6f27594

PROC_DECLARE(0x6f27520, internal_6f27520, public_6f27520);
extern "C" NAKED register_t __cdecl internal_6f27520()
{
    __asm
    {
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [esi]
        push edi
        mov edi, ecx
        mov ecx, esi
        call dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [edi+0x128]
        test eax, eax
        lea ebx, ds:[edi+0x128]
        je public_6f2757d
        push ebp
        mov ecx, esi
        xor ebp, ebp
        call public_6eea860
        test eax, eax
        je public_6f2755f
        mov ecx, dword ptr ds : [esi+0x170]
        push ecx
        push ebx
        mov ecx, eax
        call public_6f73ac0
        mov ebp, eax
        public_6f2755f : nop
        mov dword ptr ds : [edi+0x118], ebp
        test ebp, 0x3FFFFFFF
        pop ebp
        jne public_6f2757d
        mov ecx, esi
        call public_6f57b00
        pop edi
        pop esi
        mov al, 1
        pop ebx
        ret 4
        public_6f2757d : nop
        mov eax, dword ptr ds : [edi+0x114]
        test eax, eax
        jne public_6f27594
        mov ecx, esi
        call public_6f57c80
        mov dword ptr ds : [edi+0x114], eax
        public_6f27594 : nop
        add edi, 0x10C
        push edi
        mov ecx, esi
        call public_6f57c60
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6f27520)
    }
}

#undef public_6f2755f
#undef public_6f2757d
#undef public_6f27594
