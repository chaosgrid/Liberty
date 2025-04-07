#include "Server-PCH.h"


#define public_6d302f3 _public_6d302f3
#define public_6d302fd _public_6d302fd
#define public_6d30310 _public_6d30310
#define public_6d30348 _public_6d30348

PROC_DECLARE(0x6d302d0, internal_6d302d0, public_6d302d0);
extern "C" NAKED register_t __cdecl internal_6d302d0()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ds : [ecx+4]
        mov edx, dword ptr ss : [esp+8]
        mov dword ptr ds : [edx+0x18], eax
        mov ecx, dword ptr ds : [ecx+8]
        mov eax, dword ptr ds : [edx]
        mov eax, dword ptr ds : [eax+4]
        shl ecx, 5
        push ebx
        add eax, ecx
        mov cl, byte ptr ds : [eax+8]
        test cl, cl
        push ebp
        push esi
        push edi
        jne public_6d302fd
        public_6d302f3 : nop
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        pop ecx
        ret 4
        public_6d302fd : nop
        mov esi, dword ptr ds : [eax]
        mov eax, dword ptr ds : [eax+4]
        cmp esi, eax
        mov ebp, dword ptr ds : [edx+0x10]
        mov dword ptr ss : [esp+0x10], eax
        je public_6d30348
        lea ecx, ds:[ecx]
        public_6d30310 : nop
        mov di, word ptr ss : [ebp]
        test di, di
        je public_6d302f3
        xor eax, eax
        mov ax, word ptr ds : [esi]
        push eax
        call dword ptr ds : [public_6d64ba0]
        push edi
        mov ebx, eax
        call dword ptr ds : [public_6d64ba0]
        add esp, 8
        cmp ax, bx
        jne public_6d302f3
        mov eax, dword ptr ss : [esp+0x10]
        add esi, 2
        add ebp, 2
        cmp esi, eax
        jne public_6d30310
        mov edx, dword ptr ss : [esp+0x18]
        public_6d30348 : nop
        pop edi
        pop esi
        mov dword ptr ds : [edx+0x10], ebp
        pop ebp
        mov al, 1
        pop ebx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x6d302d0)
    }
}

#undef public_6d302f3
#undef public_6d302fd
#undef public_6d30310
#undef public_6d30348
