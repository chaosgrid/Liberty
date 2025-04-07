#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63470e0);
CLANG_FORWARD_PROC_SYMBOL(public_6347c40);
CLANG_FORWARD_PROC_SYMBOL(public_6347d50);
CLANG_FORWARD_PROC_SYMBOL(public_634b850);
CLANG_FORWARD_PROC_SYMBOL(public_634b8d0);
CLANG_FORWARD_PROC_SYMBOL(public_634ba50);
CLANG_FORWARD_PROC_SYMBOL(public_6355200);
CLANG_FORWARD_PROC_SYMBOL(public_6355310);
CLANG_FORWARD_PROC_SYMBOL(public_6355370);
CLANG_FORWARD_PROC_SYMBOL(public_6355490);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_63554de _public_63554de
#define public_6355531 _public_6355531
#define public_6355572 _public_6355572
#define public_6355586 _public_6355586

PROC_DECLARE(0x6355490, internal_6355490, public_6355490);
extern "C" NAKED register_t __cdecl internal_6355490()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [ebp+0x10]
        push esi
        mov esi, ecx
        mov ecx, dword ptr ss : [ebp+0x24]
        mov ebx, dword ptr ds : [ecx+0x98]
        push edi
        mov edi, dword ptr ds : [eax+0x98]
        mov ecx, edi
        call public_63470e0
        mov ecx, ebx
        call public_63470e0
        push ebp
        mov ecx, esi
        call public_634b8d0
        push ebp
        mov ecx, esi
        call public_634b850
        cmp eax, 1
        jne public_63554de
        mov edx, dword ptr ds : [esi+0x44]
        and edx, 0xFFFFFF01
        or edx, eax
        mov dword ptr ds : [esi+0x44], edx
        public_63554de : nop
        push esi
        mov ecx, edi
        call public_6347c40
        push esi
        mov ecx, ebx
        mov ebp, eax
        call public_6347c40
        mov dword ptr ss : [esp+0x10], eax
        mov eax, dword ptr ss : [esp+0x18]
        push eax
        mov ecx, ebp
        call public_6355310
        mov ecx, ebp
        call public_6355370
        test eax, eax
        jne public_6355531
        push ebp
        mov ecx, edi
        call public_6347d50
        push edi
        mov ecx, esi
        call public_634ba50
        mov edi, dword ptr ds : [edi+0x15C]
        mov ecx, dword ptr ds : [edi]
        and ecx, 0xFFFFFDFF
        or ecx, 0x100
        mov dword ptr ds : [edi], ecx
        public_6355531 : nop
        mov ebp, dword ptr ss : [esp+0x18]
        mov edi, dword ptr ss : [esp+0x10]
        push ebp
        mov ecx, edi
        call public_6355310
        mov ecx, edi
        call public_6355370
        test eax, eax
        jne public_6355572
        push edi
        mov ecx, ebx
        call public_6347d50
        push ebx
        mov ecx, esi
        call public_634ba50
        mov ebx, dword ptr ds : [ebx+0x15C]
        mov edx, dword ptr ds : [ebx]
        and edx, 0xFFFFFDFF
        or edx, 0x100
        mov dword ptr ds : [ebx], edx
        public_6355572 : nop
        test ebp, ebp
        je public_6355586
        mov ecx, ebp
        call public_6355200
        push ebp
        call public_6391d5a
        add esp, 4
        public_6355586 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x6355490)
    }
}

#undef public_63554de
#undef public_6355531
#undef public_6355572
#undef public_6355586
