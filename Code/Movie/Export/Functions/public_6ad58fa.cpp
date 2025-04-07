#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ad246b);
CLANG_FORWARD_PROC_SYMBOL(public_6ad24de);
CLANG_FORWARD_PROC_SYMBOL(public_6ad58fa);
CLANG_FORWARD_PROC_SYMBOL(public_6ad873e);

#define public_6ad5919 _public_6ad5919
#define public_6ad5939 _public_6ad5939
#define public_6ad593b _public_6ad593b
#define public_6ad5946 _public_6ad5946
#define public_6ad594b _public_6ad594b
#define public_6ad596a _public_6ad596a

PROC_DECLARE(0x6ad58fa, internal_6ad58fa, public_6ad58fa);
extern "C" NAKED register_t __cdecl internal_6ad58fa()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push edi
        push esi
        call public_6ad873e
        cmp eax, 0xFFFFFFFF
        pop ecx
        jne public_6ad5919
        call public_6ad24de
        mov dword ptr ds : [eax], 9
        jmp public_6ad5946
        public_6ad5919 : nop
        push dword ptr ss : [esp+0x14]
        push 0
        push dword ptr ss : [esp+0x18]
        push eax
        call dword ptr ds : [public_6ada0a8]
        mov edi, eax
        cmp edi, 0xFFFFFFFF
        jne public_6ad5939
        call dword ptr ds : [public_6ada140]
        jmp public_6ad593b
        public_6ad5939 : nop
        xor eax, eax
        public_6ad593b : nop
        test eax, eax
        je public_6ad594b
        push eax
        call public_6ad246b
        pop ecx
        public_6ad5946 : nop
        or eax, 0xFFFFFFFF
        jmp public_6ad596a
        public_6ad594b : nop
        mov ecx, esi
        and esi, 0x1F
        sar ecx, 5
        mov eax, esi
        mov ecx, dword ptr ds : [ecx*4+public_6ae2480]
        lea eax, ds:[eax+eax*8]
        and byte ptr ds : [ecx+eax*4+4], 0xFD
        lea eax, ds:[ecx+eax*4+4]
        mov eax, edi
        public_6ad596a : nop
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6ad58fa)
    }
}

#undef public_6ad5919
#undef public_6ad5939
#undef public_6ad593b
#undef public_6ad5946
#undef public_6ad594b
#undef public_6ad596a
