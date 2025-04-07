#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eea860);
CLANG_FORWARD_PROC_SYMBOL(public_6f57b00);
CLANG_FORWARD_PROC_SYMBOL(public_6f57c60);
CLANG_FORWARD_PROC_SYMBOL(public_6f57c80);
CLANG_FORWARD_PROC_SYMBOL(public_6f73ac0);

#define public_6f27198 _public_6f27198
#define public_6f271b6 _public_6f271b6
#define public_6f271cd _public_6f271cd

PROC_DECLARE(0x6f27150, internal_6f27150, public_6f27150);
extern "C" NAKED register_t __cdecl internal_6f27150()
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
        cmp dword ptr ds : [edi+0x118], 1
        jne public_6f271b6
        mov eax, dword ptr ds : [edi+0x154]
        test eax, eax
        lea ebx, ds:[edi+0x154]
        je public_6f271b6
        push ebp
        mov ecx, esi
        xor ebp, ebp
        call public_6eea860
        test eax, eax
        je public_6f27198
        mov ecx, dword ptr ds : [esi+0x170]
        push ecx
        push ebx
        mov ecx, eax
        call public_6f73ac0
        mov ebp, eax
        public_6f27198 : nop
        mov dword ptr ds : [edi+0x11C], ebp
        test ebp, 0x3FFFFFFF
        pop ebp
        jne public_6f271b6
        mov ecx, esi
        call public_6f57b00
        pop edi
        pop esi
        mov al, 1
        pop ebx
        ret 4
        public_6f271b6 : nop
        mov eax, dword ptr ds : [edi+0x114]
        test eax, eax
        jne public_6f271cd
        mov ecx, esi
        call public_6f57c80
        mov dword ptr ds : [edi+0x114], eax
        public_6f271cd : nop
        add edi, 0x10C
        push edi
        mov ecx, esi
        call public_6f57c60
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6f27150)
    }
}

#undef public_6f27198
#undef public_6f271b6
#undef public_6f271cd
