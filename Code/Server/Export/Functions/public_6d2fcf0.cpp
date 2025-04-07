#include "Server-PCH.h"


#define public_6d2fd25 _public_6d2fd25
#define public_6d2fd60 _public_6d2fd60
#define public_6d2fd73 _public_6d2fd73
#define public_6d2fd75 _public_6d2fd75
#define public_6d2fd84 _public_6d2fd84
#define public_6d2fd90 _public_6d2fd90

PROC_DECLARE(0x6d2fcf0, internal_6d2fcf0, public_6d2fcf0);
extern "C" NAKED register_t __cdecl internal_6d2fcf0()
{
    __asm
    {
        sub esp, 8
        mov edx, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [ecx+8]
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ds : [edx]
        mov esi, dword ptr ds : [esi+4]
        shl eax, 5
        mov bl, byte ptr ds : [eax+esi+8]
        add eax, esi
        test bl, bl
        push edi
        mov dword ptr ss : [esp+0x14], ecx
        je public_6d2fd90
        mov esi, dword ptr ds : [eax]
        mov eax, dword ptr ds : [eax+4]
        cmp esi, eax
        mov edi, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x10], eax
        je public_6d2fd60
        public_6d2fd25 : nop
        cmp dword ptr ds : [edx+0xC], edi
        je public_6d2fd90
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
        jne public_6d2fd90
        mov eax, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+0x1C]
        add esi, 2
        add edi, 2
        cmp esi, eax
        jne public_6d2fd25
        mov ecx, dword ptr ss : [esp+0x14]
        public_6d2fd60 : nop
        mov ecx, dword ptr ds : [ecx+4]
        test ecx, ecx
        je public_6d2fd84
        mov eax, dword ptr ds : [ecx]
        push edi
        push edx
        call dword ptr ds : [eax+4]
        movzx eax, al
        test al, al
        public_6d2fd73 : nop
        je public_6d2fd90
        public_6d2fd75 : nop
        pop edi
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        add esp, 8
        ret 8
        public_6d2fd84 : nop
        mov al, byte ptr ds : [edx+0x1C]
        test al, al
        je public_6d2fd75
        cmp dword ptr ds : [edx+8], edi
        jmp public_6d2fd73
        public_6d2fd90 : nop
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 8
        ret 8
        UNREACHABLE_TRAP(0x6d2fcf0)
    }
}

#undef public_6d2fd25
#undef public_6d2fd60
#undef public_6d2fd73
#undef public_6d2fd75
#undef public_6d2fd84
#undef public_6d2fd90
