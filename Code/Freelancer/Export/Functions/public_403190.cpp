#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_403190);
CLANG_FORWARD_PROC_SYMBOL(public_4031e0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_403194 _public_403194
#define public_4031a7 _public_4031a7
#define public_4031ab _public_4031ab
#define public_4031b9 _public_4031b9
#define public_4031bf _public_4031bf
#define public_4031d8 _public_4031d8

PROC_DECLARE(0x403190, internal_403190, public_403190);
extern "C" NAKED register_t __cdecl internal_403190()
{
    __asm
    {
        push esi
        push edi
        mov edi, ecx
        public_403194 : nop
        mov esi, dword ptr ds : [edi]
        test esi, esi
        je public_4031d8
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        jne public_4031a7
        mov eax, dword ptr ds : [esi]
        mov dword ptr ds : [edi], eax
        jmp public_4031ab
        public_4031a7 : nop
        mov ecx, dword ptr ds : [esi]
        mov dword ptr ds : [eax], ecx
        public_4031ab : nop
        mov eax, dword ptr ds : [esi]
        test eax, eax
        jne public_4031b9
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edi+4], edx
        jmp public_4031bf
        public_4031b9 : nop
        mov ecx, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+4], ecx
        public_4031bf : nop
        mov edx, dword ptr ds : [edi+8]
        dec edx
        mov ecx, esi
        mov dword ptr ds : [edi+8], edx
        call public_4031e0
        push esi
        call public_5b7e1d
        add esp, 4
        jmp public_403194
        public_4031d8 : nop
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x403190)
    }
}

#undef public_403194
#undef public_4031a7
#undef public_4031ab
#undef public_4031b9
#undef public_4031bf
#undef public_4031d8
