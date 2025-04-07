#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_530fa0);
CLANG_FORWARD_PROC_SYMBOL(public_5312d0);
CLANG_FORWARD_PROC_SYMBOL(public_5316a0);
CLANG_FORWARD_PROC_SYMBOL(public_531930);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_530fd1 _public_530fd1
#define public_530ffb _public_530ffb
#define public_53101d _public_53101d
#define public_531021 _public_531021
#define public_531044 _public_531044

PROC_DECLARE(0x530fa0, internal_530fa0, public_530fa0);
extern "C" NAKED register_t __cdecl internal_530fa0()
{
    __asm
    {
        sub esp, 8
        mov ecx, dword ptr ds : [public_6754f8]
        mov edx, dword ptr ds : [public_675504]
        test edx, edx
        mov eax, dword ptr ds : [ecx]
        push esi
        push edi
        mov edi, ecx
        mov dword ptr ss : [esp+8], eax
        je public_53101d
        mov edx, eax
        cmp eax, edx
        jne public_53101d
        mov edi, dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [public_6754fc]
        cmp edi, eax
        mov esi, edi
        je public_530ffb
        public_530fd1 : nop
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov ecx, offset public_6754f4
        call public_5316a0
        mov esi, dword ptr ds : [esi]
        push edi
        call public_5b7e1d
        mov eax, dword ptr ds : [public_6754fc]
        add esp, 4
        cmp esi, eax
        mov edi, esi
        jne public_530fd1
        mov ecx, dword ptr ds : [public_6754f8]
        public_530ffb : nop
        mov dword ptr ds : [ecx+4], eax
        mov eax, dword ptr ds : [public_6754f8]
        mov dword ptr ds : [public_675504], 0
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [public_6754f8]
        pop edi
        mov dword ptr ds : [eax+8], eax
        pop esi
        add esp, 8
        ret 
        public_53101d : nop
        cmp eax, ecx
        je public_531044
        public_531021 : nop
        lea ecx, ss:[esp+8]
        mov esi, eax
        call public_531930
        push esi
        lea ecx, ss:[esp+0x10]
        push ecx
        mov ecx, offset public_6754f4
        call public_5312d0
        mov eax, dword ptr ss : [esp+8]
        cmp eax, edi
        jne public_531021
        public_531044 : nop
        pop edi
        pop esi
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x530fa0)
    }
}

#undef public_530fd1
#undef public_530ffb
#undef public_53101d
#undef public_531021
#undef public_531044
