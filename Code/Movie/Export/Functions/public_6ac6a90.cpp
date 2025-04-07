#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ac3140);
CLANG_FORWARD_PROC_SYMBOL(public_6ac31d0);
CLANG_FORWARD_PROC_SYMBOL(public_6ac3450);
CLANG_FORWARD_PROC_SYMBOL(public_6ac69a0);
CLANG_FORWARD_PROC_SYMBOL(public_6ac6a90);
CLANG_FORWARD_PROC_SYMBOL(public_6ac6b70);

#define public_6ac6af5 _public_6ac6af5
#define public_6ac6b65 _public_6ac6b65
#define public_6ac6b69 _public_6ac6b69

PROC_DECLARE(0x6ac6a90, internal_6ac6a90, public_6ac6a90);
extern "C" NAKED register_t __cdecl internal_6ac6a90()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ss : [esp+0x10]
        push edi
        mov eax, dword ptr ds : [esi+0x10]
        mov ebx, dword ptr ds : [eax]
        mov eax, dword ptr ds : [esi]
        test eax, eax
        mov ecx, dword ptr ds : [ebx]
        lea ebp, ds:[edx+ecx*8]
        je public_6ac6b69
        push ebx
        push ebp
        call public_6ac3450
        test eax, eax
        jne public_6ac6b69
        mov edi, dword ptr ss : [esp+0x18]
        test edi, edi
        je public_6ac6b69
        lea eax, ds:[ebx+0x12C]
        push ebx
        push eax
        push ebp
        call public_6ac31d0
        test eax, eax
        je public_6ac6af5
        mov ecx, dword ptr ss : [esp+0x20]
        mov edx, dword ptr ss : [esp+0x14]
        push ecx
        push esi
        push edi
        push edx
        call public_6ac69a0
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0x10
        public_6ac6af5 : nop
        push esi
        call public_6ac6b70
        mov ecx, eax
        shl ecx, 6
        add ecx, eax
        mov edx, dword ptr ss : [esp+0x20]
        shl ecx, 4
        lea eax, ds:[ecx+esi]
        mov ecx, edi
        shl ecx, 7
        add ecx, edi
        mov dword ptr ds : [eax+0x881C], 1
        mov dword ptr ds : [eax+0x8820], edi
        mov dword ptr ds : [eax+0x8818], edx
        mov edx, dword ptr ds : [esi+ecx*4+0x314]
        lea ecx, ds:[esi+ecx*4+0x314]
        inc edx
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [esi]
        test ecx, ecx
        je public_6ac6b65
        mov edx, dword ptr ss : [esp+0x14]
        push ebx
        add eax, 0x8418
        push 3
        push eax
        push edx
        call public_6ac3140
        test eax, eax
        je public_6ac6b65
        mov eax, 1
        pop edi
        mov dword ptr ds : [esi], eax
        pop esi
        pop ebp
        pop ebx
        ret 0x10
        public_6ac6b65 : nop
        xor eax, eax
        mov dword ptr ds : [esi], eax
        public_6ac6b69 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0x10
        UNREACHABLE_TRAP(0x6ac6a90)
    }
}

#undef public_6ac6af5
#undef public_6ac6b65
#undef public_6ac6b69
