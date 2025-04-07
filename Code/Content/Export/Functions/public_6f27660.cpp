#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eea860);
CLANG_FORWARD_PROC_SYMBOL(public_6f57b00);
CLANG_FORWARD_PROC_SYMBOL(public_6f57c60);
CLANG_FORWARD_PROC_SYMBOL(public_6f57c80);
CLANG_FORWARD_PROC_SYMBOL(public_6f73ac0);

#define public_6f27698 _public_6f27698
#define public_6f276b6 _public_6f276b6
#define public_6f276cd _public_6f276cd

PROC_DECLARE(0x6f27660, internal_6f27660, public_6f27660);
extern "C" NAKED register_t __cdecl internal_6f27660()
{
    __asm
    {
        push ebx
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x138]
        test eax, eax
        lea ebx, ds:[esi+0x138]
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        je public_6f276b6
        push ebp
        mov ecx, edi
        xor ebp, ebp
        call public_6eea860
        test eax, eax
        je public_6f27698
        mov ecx, dword ptr ds : [edi+0x170]
        push ecx
        push ebx
        mov ecx, eax
        call public_6f73ac0
        mov ebp, eax
        public_6f27698 : nop
        mov dword ptr ds : [esi+0x128], ebp
        test ebp, 0x3FFFFFFF
        pop ebp
        jne public_6f276b6
        mov ecx, edi
        call public_6f57b00
        pop edi
        pop esi
        mov al, 1
        pop ebx
        ret 4
        public_6f276b6 : nop
        mov eax, dword ptr ds : [esi+0x114]
        test eax, eax
        jne public_6f276cd
        mov ecx, edi
        call public_6f57c80
        mov dword ptr ds : [esi+0x114], eax
        public_6f276cd : nop
        add esi, 0x10C
        push esi
        mov ecx, edi
        call public_6f57c60
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6f27660)
    }
}

#undef public_6f27698
#undef public_6f276b6
#undef public_6f276cd
