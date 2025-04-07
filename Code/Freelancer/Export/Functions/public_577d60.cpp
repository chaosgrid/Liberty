#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_577d60);

#define public_577d80 _public_577d80
#define public_577d9c _public_577d9c
#define public_577da7 _public_577da7
#define public_577dae _public_577dae

PROC_DECLARE(0x577d60, internal_577d60, public_577d60);
extern "C" NAKED register_t __cdecl internal_577d60()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+0x14]
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        push edi
        je public_577da7
        mov ebp, dword ptr ss : [esp+0x20]
        mov ebx, dword ptr ss : [esp+0x1C]
        mov edi, dword ptr ss : [esp+0x18]
        lea ecx, ds:[ecx]
        public_577d80 : nop
        mov ecx, dword ptr ds : [esi+8]
        cmp dword ptr ds : [ecx], edi
        jne public_577d9c
        mov dword ptr ds : [ebx], edi
        mov edx, dword ptr ds : [ecx+0x14]
        test edx, edx
        je public_577d9c
        mov eax, dword ptr ds : [ecx+0x18]
        sub eax, edx
        sar eax, 3
        cmp ebp, eax
        jb public_577dae
        public_577d9c : nop
        mov ecx, dword ptr ss : [esp+0x14]
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ds : [ecx+0x14]
        jne public_577d80
        public_577da7 : nop
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        ret 
        public_577dae : nop
        mov edx, dword ptr ds : [ecx+0x14]
        mov ecx, dword ptr ds : [edx+ebp*8]
        lea eax, ds:[edx+ebp*8]
        pop edi
        mov dword ptr ds : [ebx+4], ecx
        mov edx, dword ptr ds : [eax+4]
        pop esi
        pop ebp
        mov dword ptr ds : [ebx+8], edx
        mov al, 1
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x577d60)
    }
}

#undef public_577d80
#undef public_577d9c
#undef public_577da7
#undef public_577dae
