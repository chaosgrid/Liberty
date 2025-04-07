#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ad24de);
CLANG_FORWARD_PROC_SYMBOL(public_6ad24e7);
CLANG_FORWARD_PROC_SYMBOL(public_6ad86bf);

#define public_6ad870d _public_6ad870d
#define public_6ad8712 _public_6ad8712
#define public_6ad8715 _public_6ad8715
#define public_6ad871b _public_6ad871b
#define public_6ad8725 _public_6ad8725
#define public_6ad873b _public_6ad873b

PROC_DECLARE(0x6ad86bf, internal_6ad86bf, public_6ad86bf);
extern "C" NAKED register_t __cdecl internal_6ad86bf()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        push esi
        cmp ecx, dword ptr ds : [public_6ae2580]
        push edi
        jae public_6ad8725
        mov eax, ecx
        sar eax, 5
        lea edi, ds : [eax*4+public_6ae2480]
        mov eax, ecx
        and eax, 0x1F
        lea esi, ds:[eax+eax*8]
        mov eax, dword ptr ds : [edi]
        shl esi, 2
        add eax, esi
        test byte ptr ds : [eax+4], 1
        je public_6ad8725
        cmp dword ptr ds : [eax], 0xFFFFFFFF
        je public_6ad8725
        cmp dword ptr ds : [public_6ae0ea4], 1
        jne public_6ad871b
        xor eax, eax
        sub ecx, eax
        je public_6ad8712
        dec ecx
        je public_6ad870d
        dec ecx
        jne public_6ad871b
        push eax
        push 0xFFFFFFF4
        jmp public_6ad8715
        public_6ad870d : nop
        push eax
        push 0xFFFFFFF5
        jmp public_6ad8715
        public_6ad8712 : nop
        push eax
        push 0xFFFFFFF6
        public_6ad8715 : nop
        call dword ptr ds : [public_6ada088]
        public_6ad871b : nop
        mov eax, dword ptr ds : [edi]
        or dword ptr ds : [eax+esi], 0xFFFFFFFF
        xor eax, eax
        jmp public_6ad873b
        public_6ad8725 : nop
        call public_6ad24de
        mov dword ptr ds : [eax], 9
        call public_6ad24e7
        and dword ptr ds : [eax], 0
        or eax, 0xFFFFFFFF
        public_6ad873b : nop
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6ad86bf)
    }
}

#undef public_6ad870d
#undef public_6ad8712
#undef public_6ad8715
#undef public_6ad871b
#undef public_6ad8725
#undef public_6ad873b
