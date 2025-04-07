#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ed0540);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0630);

#define public_6ed0577 _public_6ed0577
#define public_6ed05a1 _public_6ed05a1
#define public_6ed05a8 _public_6ed05a8
#define public_6ed05ac _public_6ed05ac
#define public_6ed05c8 _public_6ed05c8
#define public_6ed05e1 _public_6ed05e1
#define public_6ed0606 _public_6ed0606
#define public_6ed0620 _public_6ed0620

PROC_DECLARE(0x6ed0540, internal_6ed0540, public_6ed0540);
extern "C" NAKED register_t __cdecl internal_6ed0540()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        test esi, esi
        push edi
        je public_6ed05a1
        mov ebp, dword ptr ss : [esp+0x18]
        test ebp, ebp
        je public_6ed05a1
        cmp byte ptr ds : [esi+0x5C], 0x9C
        jne public_6ed05a1
        mov eax, dword ptr ds : [esi+0x54]
        test eax, eax
        mov ebx, dword ptr ds : [public_6ed1048]
        je public_6ed05ac
        movsx eax, byte ptr ds : [eax]
        push eax
        push ebp
        call ebx
        mov edi, eax
        add esp, 8
        test edi, edi
        je public_6ed05a1
        public_6ed0577 : nop
        mov ecx, dword ptr ds : [esi+0x58]
        mov edx, dword ptr ds : [esi+0x54]
        push ecx
        push edx
        push edi
        call dword ptr ds : [public_6ed106c]
        add esp, 0xC
        test eax, eax
        je public_6ed05a8
        mov eax, dword ptr ds : [esi+0x54]
        movsx ecx, byte ptr ds : [eax]
        push ecx
        inc edi
        push edi
        call ebx
        mov edi, eax
        add esp, 8
        test edi, edi
        jne public_6ed0577
        public_6ed05a1 : nop
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 
        public_6ed05a8 : nop
        test edi, edi
        je public_6ed05a1
        public_6ed05ac : nop
        mov dword ptr ds : [public_6ed584c], ebp
        mov al, byte ptr ds : [esi+0x51]
        test al, al
        je public_6ed05c8
        push ebp
        push esi
        call public_6ed0630
        add esp, 8
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 
        public_6ed05c8 : nop
        mov al, byte ptr ds : [esi+0x50]
        test al, al
        mov edi, ebp
        je public_6ed0606
        movsx edx, al
        push edx
        push ebp
        call ebx
        mov edi, eax
        add esp, 8
        test edi, edi
        je public_6ed05a1
        public_6ed05e1 : nop
        push edi
        push esi
        call public_6ed0630
        add esp, 8
        test eax, eax
        jne public_6ed0620
        movsx eax, byte ptr ds : [esi+0x50]
        push eax
        inc edi
        push edi
        call ebx
        mov edi, eax
        add esp, 8
        test edi, edi
        jne public_6ed05e1
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 
        public_6ed0606 : nop
        push edi
        push esi
        call public_6ed0630
        add esp, 8
        test eax, eax
        jne public_6ed0620
        mov cl, byte ptr ds : [edi]
        inc edi
        test cl, cl
        jne public_6ed0606
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 
        public_6ed0620 : nop
        pop edi
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6ed0540)
    }
}

#undef public_6ed0577
#undef public_6ed05a1
#undef public_6ed05a8
#undef public_6ed05ac
#undef public_6ed05c8
#undef public_6ed05e1
#undef public_6ed0606
#undef public_6ed0620
