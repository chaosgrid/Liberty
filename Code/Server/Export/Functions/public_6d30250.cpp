#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d30250);

#define public_6d3026c _public_6d3026c
#define public_6d30275 _public_6d30275
#define public_6d30288 _public_6d30288
#define public_6d302bc _public_6d302bc

PROC_DECLARE(0x6d30250, internal_6d30250, public_6d30250);
extern "C" NAKED register_t __cdecl internal_6d30250()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+8]
        mov ecx, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [ecx]
        mov ecx, dword ptr ds : [edx+4]
        push ebx
        shl eax, 5
        add eax, ecx
        mov cl, byte ptr ds : [eax+8]
        test cl, cl
        push ebp
        push esi
        push edi
        jne public_6d30275
        public_6d3026c : nop
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        ret 8
        public_6d30275 : nop
        mov esi, dword ptr ds : [eax]
        mov eax, dword ptr ds : [eax+4]
        cmp esi, eax
        mov edx, dword ptr ss : [esp+0x18]
        mov ebp, dword ptr ds : [edx]
        mov dword ptr ss : [esp+0x14], eax
        je public_6d302bc
        public_6d30288 : nop
        mov di, word ptr ss : [ebp]
        test di, di
        je public_6d3026c
        xor eax, eax
        mov ax, word ptr ds : [esi]
        push eax
        call dword ptr ds : [public_6d64ba0]
        push edi
        mov ebx, eax
        call dword ptr ds : [public_6d64ba0]
        add esp, 8
        cmp ax, bx
        jne public_6d3026c
        mov eax, dword ptr ss : [esp+0x14]
        add esi, 2
        add ebp, 2
        cmp esi, eax
        jne public_6d30288
        public_6d302bc : nop
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        mov dword ptr ds : [eax], ebp
        pop ebp
        mov al, 1
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6d30250)
    }
}

#undef public_6d3026c
#undef public_6d30275
#undef public_6d30288
#undef public_6d302bc
