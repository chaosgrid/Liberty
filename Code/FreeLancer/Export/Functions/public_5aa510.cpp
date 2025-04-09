#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5a89b0);
CLANG_FORWARD_PROC_SYMBOL(public_5a9440);
CLANG_FORWARD_PROC_SYMBOL(public_5aa510);
CLANG_FORWARD_PROC_SYMBOL(public_5b3510);

#define public_5aa52d _public_5aa52d
#define public_5aa555 _public_5aa555
#define public_5aa577 _public_5aa577
#define public_5aa5f3 _public_5aa5f3
#define public_5aa623 _public_5aa623
#define public_5aa64d _public_5aa64d
#define public_5aa64f _public_5aa64f

PROC_DECLARE(0x5aa510, internal_5aa510, public_5aa510);
extern "C" NAKED register_t __cdecl internal_5aa510()
{
    __asm
    {
        sub esp, 0xC4
        push esi
        mov esi, ecx
        mov al, byte ptr ds : [esi+0x184]
        test al, al
        jne public_5aa52d
        xor eax, eax
        pop esi
        add esp, 0xC4
        ret 
        public_5aa52d : nop
        mov al, byte ptr ds : [esi+0x1A8]
        push ebp
        lea ebp, ds:[esi+0x1B0]
        mov byte ptr ss : [ebp], 0
        mov byte ptr ss : [esp+0xC8], al
        mov eax, dword ptr ds : [esi+0x18C]
        test eax, eax
        push edi
        jne public_5aa555
        mov eax, dword ptr ds : [public_5c700c]
        public_5aa555 : nop
        mov edi, dword ptr ds : [public_5c71c0]
        push 0x28
        push eax
        lea ecx, ss:[esp+0x14]
        push ecx
        call edi
        mov eax, dword ptr ds : [esi+0x19C]
        add esp, 0xC
        test eax, eax
        jne public_5aa577
        mov eax, dword ptr ds : [public_5c700c]
        public_5aa577 : nop
        push 0x10
        push eax
        lea edx, ss:[esp+0xB4]
        push edx
        call edi
        mov edx, dword ptr ds : [public_673344]
        mov ecx, dword ptr ds : [public_67ecd0]
        add esp, 0xC
        push edx
        lea edx, ss:[esp+0x10]
        mov word ptr ss : [esp+0x5E], 0
        mov word ptr ss : [esp+0xCE], 0
        mov eax, dword ptr ds : [ecx]
        push edx
        call dword ptr ds : [eax+0x48]
        push 0x42700000
        push 0x40A00000
        push ebp
        call public_5a89b0
        mov edi, eax
        add esp, 0xC
        cmp edi, 1
        jne public_5aa64d
        cmp byte ptr ds : [esi+0x1B1], 3
        jne public_5aa64d
        call dword ptr ds : [public_5c60d0]
        test al, al
        jne public_5aa5f3
        mov ecx, esi
        call public_5a9440
        mov eax, edi
        pop edi
        pop ebp
        pop esi
        add esp, 0xC4
        ret 
        public_5aa5f3 : nop
        mov ecx, dword ptr ds : [public_67ecd0]
        test ecx, ecx
        je public_5aa64f
        mov al, byte ptr ds : [public_67ecc0]
        test al, al
        je public_5aa623
        mov edx, dword ptr ds : [public_673344]
        mov eax, dword ptr ds : [ecx]
        push edx
        push 0
        call dword ptr ds : [eax+0x15C]
        mov eax, edi
        pop edi
        pop ebp
        pop esi
        add esp, 0xC4
        ret 
        public_5aa623 : nop
        mov eax, dword ptr ds : [public_673344]
        mov esi, dword ptr ds : [ecx]
        push eax
        push 6
        call public_5b3510
        fstp dword ptr ss : [esp]
        mov ecx, dword ptr ds : [public_67ecd0]
        call dword ptr ds : [esi+0x15C]
        mov eax, edi
        pop edi
        pop ebp
        pop esi
        add esp, 0xC4
        ret 
        public_5aa64d : nop
        xor edi, edi
        public_5aa64f : nop
        mov eax, edi
        pop edi
        pop ebp
        pop esi
        add esp, 0xC4
        ret 
        UNREACHABLE_TRAP(0x5aa510)
    }
}

#undef public_5aa52d
#undef public_5aa555
#undef public_5aa577
#undef public_5aa5f3
#undef public_5aa623
#undef public_5aa64d
#undef public_5aa64f
