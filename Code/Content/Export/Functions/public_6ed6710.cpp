#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ed6710);
CLANG_FORWARD_PROC_SYMBOL(public_6f49b00);

#define public_6ed6720 _public_6ed6720
#define public_6ed6734 _public_6ed6734
#define public_6ed673e _public_6ed673e
#define public_6ed6743 _public_6ed6743
#define public_6ed6758 _public_6ed6758
#define public_6ed676b _public_6ed676b

PROC_DECLARE(0x6ed6710, internal_6ed6710, public_6ed6710);
extern "C" NAKED register_t __cdecl internal_6ed6710()
{
    __asm
    {
        push esi
        push edi
        mov edi, ecx
        mov esi, dword ptr ds : [edi+0x34]
        cmp esi, dword ptr ds : [edi+0x38]
        je public_6ed673e
        lea esp, ss:[esp]
        public_6ed6720 : nop
        push esi
        call public_6f49b00
        add esp, 4
        test eax, eax
        je public_6ed6734
        mov ecx, dword ptr ds : [eax+0x10]
        test ecx, ecx
        jne public_6ed6743
        public_6ed6734 : nop
        mov eax, dword ptr ds : [edi+0x38]
        add esi, 4
        cmp esi, eax
        jne public_6ed6720
        public_6ed673e : nop
        pop edi
        xor al, al
        pop esi
        ret 
        public_6ed6743 : nop
        mov eax, dword ptr ds : [edi+4]
        test eax, eax
        je public_6ed6758
        push eax
        call dword ptr ds : [public_6fb3440]
        add esp, 4
        test eax, eax
        jne public_6ed673e
        public_6ed6758 : nop
        mov ecx, dword ptr ds : [edi+0x18]
        test ecx, ecx
        jne public_6ed676b
        xor eax, eax
        test eax, eax
        setne cl
        pop edi
        mov al, cl
        pop esi
        ret 
        public_6ed676b : nop
        mov eax, dword ptr ds : [edi+0x1C]
        sub eax, ecx
        sar eax, 2
        xor ecx, ecx
        test eax, eax
        setne cl
        pop edi
        mov al, cl
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6ed6710)
    }
}

#undef public_6ed6720
#undef public_6ed6734
#undef public_6ed673e
#undef public_6ed6743
#undef public_6ed6758
#undef public_6ed676b
