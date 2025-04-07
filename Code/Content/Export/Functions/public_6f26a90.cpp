#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eea860);
CLANG_FORWARD_PROC_SYMBOL(public_6f33e80);
CLANG_FORWARD_PROC_SYMBOL(public_6f33ff0);
CLANG_FORWARD_PROC_SYMBOL(public_6f57b00);
CLANG_FORWARD_PROC_SYMBOL(public_6f57c60);
CLANG_FORWARD_PROC_SYMBOL(public_6f57c80);
CLANG_FORWARD_PROC_SYMBOL(public_6f68630);
CLANG_FORWARD_PROC_SYMBOL(public_6f73ac0);

#define public_6f26aca _public_6f26aca
#define public_6f26b00 _public_6f26b00
#define public_6f26b35 _public_6f26b35
#define public_6f26b81 _public_6f26b81
#define public_6f26b99 _public_6f26b99

PROC_DECLARE(0x6f26a90, internal_6f26a90, public_6f26a90);
extern "C" NAKED register_t __cdecl internal_6f26a90()
{
    __asm
    {
        sub esp, 0x30
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x40]
        mov eax, dword ptr ds : [esi]
        push edi
        mov edi, ecx
        mov ecx, esi
        call dword ptr ds : [eax+4]
        mov ecx, esi
        mov bl, 1
        xor ebp, ebp
        call public_6eea860
        test eax, eax
        je public_6f26aca
        mov ecx, dword ptr ds : [esi+0x170]
        push ecx
        lea ecx, ds:[edi+0x200]
        push ecx
        mov ecx, eax
        call public_6f73ac0
        mov ebp, eax
        public_6f26aca : nop
        test ebp, 0x3FFFFFFF
        mov dword ptr ds : [edi+0x174], ebp
        je public_6f26b99
        mov ecx, esi
        xor ebp, ebp
        call public_6eea860
        test eax, eax
        je public_6f26b00
        mov ecx, dword ptr ds : [esi+0x170]
        push ecx
        lea edx, ds:[edi+0x1CC]
        push edx
        mov ecx, eax
        call public_6f73ac0
        mov ebp, eax
        public_6f26b00 : nop
        test ebp, 0x3FFFFFFF
        mov dword ptr ds : [edi+0x134], ebp
        je public_6f26b99
        mov eax, dword ptr ds : [edi+0x174]
        mov dword ptr ds : [edi+0x194], eax
        mov eax, dword ptr ds : [edi+0x114]
        test eax, eax
        jne public_6f26b35
        mov ecx, esi
        call public_6f57c80
        mov dword ptr ds : [edi+0x114], eax
        public_6f26b35 : nop
        mov eax, dword ptr ds : [edi+0x134]
        lea ecx, ss:[esp+0x1C]
        push ecx
        lea edx, ss:[esp+0x14]
        push edx
        push eax
        call dword ptr ds : [public_6fb3664]
        mov edx, dword ptr ds : [esi]
        add esp, 0xC
        mov ecx, esi
        call dword ptr ds : [edx+4]
        test al, al
        je public_6f26b81
        mov ecx, esi
        call public_6f33e80
        test al, al
        jne public_6f26b81
        mov ecx, esi
        call public_6f33ff0
        test al, al
        jne public_6f26b81
        mov eax, dword ptr ds : [public_6fb8e24]
        push eax
        push esi
        mov ecx, offset public_6fd1bd8
        call public_6f68630
        public_6f26b81 : nop
        add edi, 0x10C
        push edi
        mov ecx, esi
        call public_6f57c60
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x30
        ret 4
        public_6f26b99 : nop
        mov ecx, esi
        call public_6f57b00
        pop edi
        pop esi
        pop ebp
        mov al, bl
        pop ebx
        add esp, 0x30
        ret 4
        UNREACHABLE_TRAP(0x6f26a90)
    }
}

#undef public_6f26aca
#undef public_6f26b00
#undef public_6f26b35
#undef public_6f26b81
#undef public_6f26b99
