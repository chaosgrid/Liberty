#include "ImeUi-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6712760);
CLANG_FORWARD_PROC_SYMBOL(public_67169d0);
CLANG_FORWARD_PROC_SYMBOL(public_67169dc);

#define public_67127a7 _public_67127a7
#define public_67127c3 _public_67127c3
#define public_67127d9 _public_67127d9
#define public_67127f6 _public_67127f6

PROC_DECLARE(0x6712760, internal_6712760, public_6712760);
extern "C" NAKED register_t __cdecl internal_6712760()
{
    __asm
    {
        push ebp
        mov ebp, dword ptr ss : [esp+8]
        push esi
        mov esi, ecx
        cmp ebp, dword ptr ds : [esi+0x80]
        je public_67127f6
        push ebx
        push edi
        lea edi, ss:[ebp+ebp+2]
        push edi
        call public_67169dc
        mov ecx, edi
        mov ebx, eax
        mov edx, ecx
        xor eax, eax
        mov edi, ebx
        add esp, 4
        shr ecx, 2
        rep stosd
        mov ecx, edx
        and ecx, 3
        rep stosb
        mov eax, dword ptr ds : [esi+0x80]
        mov edi, ebp
        cmp eax, ebp
        jae public_67127a7
        mov edi, eax
        public_67127a7 : nop
        test edi, edi
        je public_67127c3
        mov eax, dword ptr ds : [esi+0x84]
        push edi
        push eax
        push ebx
        call dword ptr ds : [public_67170d4]
        add esp, 0xC
        mov word ptr ds : [ebx+edi*2], 0
        public_67127c3 : nop
        mov eax, dword ptr ds : [esi+0x80]
        mov ecx, dword ptr ds : [esi+0x88]
        cmp ecx, eax
        jbe public_67127d9
        mov dword ptr ds : [esi+0x88], eax
        public_67127d9 : nop
        mov ecx, dword ptr ds : [esi+0x84]
        push ecx
        call public_67169d0
        add esp, 4
        mov dword ptr ds : [esi+0x84], ebx
        mov dword ptr ds : [esi+0x80], ebp
        pop edi
        pop ebx
        public_67127f6 : nop
        pop esi
        pop ebp
        ret 4
        UNREACHABLE_TRAP(0x6712760)
    }
}

#undef public_67127a7
#undef public_67127c3
#undef public_67127d9
#undef public_67127f6
