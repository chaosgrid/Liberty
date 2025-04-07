#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d3e6f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d3eb00);

#define public_6d3eb16 _public_6d3eb16
#define public_6d3eb26 _public_6d3eb26
#define public_6d3eb41 _public_6d3eb41
#define public_6d3eb50 _public_6d3eb50
#define public_6d3eb63 _public_6d3eb63
#define public_6d3eb67 _public_6d3eb67
#define public_6d3eb76 _public_6d3eb76

PROC_DECLARE(0x6d3eb00, internal_6d3eb00, public_6d3eb00);
extern "C" NAKED register_t __cdecl internal_6d3eb00()
{
    __asm
    {
        push ecx
        push ebp
        mov ebp, ecx
        mov al, byte ptr ss : [ebp+5]
        test al, al
        mov dword ptr ss : [esp+4], ebp
        je public_6d3eb16
        xor al, al
        pop ebp
        pop ecx
        ret 4
        public_6d3eb16 : nop
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        push esi
        push edi
        mov edi, dword ptr ss : [ebp+0x40]
        mov esi, dword ptr ds : [edi]
        cmp esi, edi
        je public_6d3eb41
        public_6d3eb26 : nop
        xor eax, eax
        mov ax, word ptr ds : [esi+8]
        push eax
        push ebx
        call dword ptr ds : [public_6d64bb0]
        add esp, 8
        test eax, eax
        je public_6d3eb41
        mov esi, dword ptr ds : [esi]
        cmp esi, edi
        jne public_6d3eb26
        public_6d3eb41 : nop
        cmp dword ptr ss : [ebp+0x40], esi
        jne public_6d3eb76
        mov edi, dword ptr ss : [ebp+0x4C]
        mov esi, dword ptr ds : [edi]
        cmp esi, edi
        je public_6d3eb67
        nop 
        public_6d3eb50 : nop
        mov ecx, dword ptr ds : [esi+8]
        push ebx
        call public_6d3e6f0
        test al, al
        jne public_6d3eb63
        mov esi, dword ptr ds : [esi]
        cmp esi, edi
        jne public_6d3eb50
        public_6d3eb63 : nop
        mov ebp, dword ptr ss : [esp+0x10]
        public_6d3eb67 : nop
        cmp dword ptr ss : [ebp+0x4C], esi
        jne public_6d3eb76
        pop edi
        pop esi
        pop ebx
        xor eax, eax
        pop ebp
        pop ecx
        ret 4
        public_6d3eb76 : nop
        pop edi
        pop esi
        pop ebx
        mov eax, 1
        pop ebp
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x6d3eb00)
    }
}

#undef public_6d3eb16
#undef public_6d3eb26
#undef public_6d3eb41
#undef public_6d3eb50
#undef public_6d3eb63
#undef public_6d3eb67
#undef public_6d3eb76
