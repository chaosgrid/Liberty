#include "Server-PCH.h"


#define public_6d2fdc3 _public_6d2fdc3
#define public_6d2fdcd _public_6d2fdcd
#define public_6d2fde0 _public_6d2fde0
#define public_6d2fe17 _public_6d2fe17

PROC_DECLARE(0x6d2fda0, internal_6d2fda0, public_6d2fda0);
extern "C" NAKED register_t __cdecl internal_6d2fda0()
{
    __asm
    {
        push ecx
        mov edx, dword ptr ds : [ecx+4]
        mov eax, dword ptr ss : [esp+8]
        mov dword ptr ds : [eax+0x18], edx
        mov ecx, dword ptr ds : [ecx+8]
        mov edx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [edx+4]
        push ebx
        shl ecx, 5
        add ecx, edx
        mov dl, byte ptr ds : [ecx+8]
        test dl, dl
        push ebp
        push esi
        push edi
        jne public_6d2fdcd
        public_6d2fdc3 : nop
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        pop ecx
        ret 4
        public_6d2fdcd : nop
        mov esi, dword ptr ds : [ecx]
        mov ecx, dword ptr ds : [ecx+4]
        cmp esi, ecx
        mov edi, dword ptr ds : [eax+0x10]
        mov dword ptr ss : [esp+0x10], ecx
        je public_6d2fe17
        lea ecx, ds:[ecx]
        public_6d2fde0 : nop
        cmp dword ptr ds : [eax+0xC], edi
        je public_6d2fdc3
        mov bx, word ptr ds : [edi]
        xor eax, eax
        mov ax, word ptr ds : [esi]
        push eax
        call dword ptr ds : [public_6d64ba0]
        push ebx
        mov ebp, eax
        call dword ptr ds : [public_6d64ba0]
        add esp, 8
        cmp ax, bp
        jne public_6d2fdc3
        mov eax, dword ptr ss : [esp+0x10]
        add esi, 2
        add edi, 2
        cmp esi, eax
        mov eax, dword ptr ss : [esp+0x18]
        jne public_6d2fde0
        public_6d2fe17 : nop
        mov dword ptr ds : [eax+0x10], edi
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x6d2fda0)
    }
}

#undef public_6d2fdc3
#undef public_6d2fdcd
#undef public_6d2fde0
#undef public_6d2fe17
