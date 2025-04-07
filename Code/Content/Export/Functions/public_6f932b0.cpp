#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f932b0);
CLANG_FORWARD_PROC_SYMBOL(public_6f93f70);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6f932de _public_6f932de
#define public_6f932e4 _public_6f932e4
#define public_6f93302 _public_6f93302
#define public_6f9331c _public_6f9331c

PROC_DECLARE(0x6f932b0, internal_6f932b0, public_6f932b0);
extern "C" NAKED register_t __cdecl internal_6f932b0()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        mov al, byte ptr ds : [esi]
        mov ebp, ecx
        mov byte ptr ss : [ebp], al
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        push edi
        je public_6f932de
        mov ecx, dword ptr ds : [esi+8]
        sub ecx, eax
        mov eax, 0x3E0F83E1
        imul ecx
        sar edx, 6
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        mov eax, edx
        public_6f932de : nop
        test eax, eax
        jge public_6f932e4
        xor eax, eax
        public_6f932e4 : nop
        imul eax, 0x108
        push eax
        call public_6fa912a
        mov dword ptr ss : [ebp+4], eax
        mov ebx, dword ptr ds : [esi+8]
        mov esi, dword ptr ds : [esi+4]
        add esp, 4
        cmp esi, ebx
        mov edi, eax
        je public_6f9331c
        public_6f93302 : nop
        push esi
        push edi
        call public_6f93f70
        add esi, 0x108
        add esp, 8
        add edi, 0x108
        cmp esi, ebx
        jne public_6f93302
        public_6f9331c : nop
        mov dword ptr ss : [ebp+8], edi
        mov dword ptr ss : [ebp+0xC], edi
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6f932b0)
    }
}

#undef public_6f932de
#undef public_6f932e4
#undef public_6f93302
#undef public_6f9331c
