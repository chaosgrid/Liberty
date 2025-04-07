#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65db9ce);

#define public_65db9fa _public_65db9fa
#define public_65dba2c _public_65dba2c
#define public_65dba40 _public_65dba40
#define public_65dba4c _public_65dba4c
#define public_65dba61 _public_65dba61
#define public_65dba67 _public_65dba67

PROC_DECLARE(0x65db9ce, internal_65db9ce, public_65db9ce);
extern "C" NAKED register_t __cdecl internal_65db9ce()
{
    __asm
    {
        mov eax, dword ptr ds : [public_65e7924]
        push esi
        cmp eax, 3
        push edi
        jne public_65dba40
        push ebx
        xor ebx, ebx
        cmp dword ptr ds : [public_65e7914], ebx
        push ebp
        mov ebp, dword ptr ds : [public_65e1058]
        jle public_65dba2c
        mov eax, dword ptr ds : [public_65e7918]
        mov edi, dword ptr ds : [public_65e10cc]
        lea esi, ds:[eax+0xC]
        public_65db9fa : nop
        push 0x4000
        push 0x100000
        push dword ptr ds : [esi]
        call edi
        push 0x8000
        push 0
        push dword ptr ds : [esi]
        call edi
        push dword ptr ds : [esi+4]
        push 0
        push dword ptr ds : [public_65e7920]
        call ebp
        add esi, 0x14
        inc ebx
        cmp ebx, dword ptr ds : [public_65e7914]
        jl public_65db9fa
        public_65dba2c : nop
        push dword ptr ds : [public_65e7918]
        push 0
        push dword ptr ds : [public_65e7920]
        call ebp
        pop ebp
        pop ebx
        jmp public_65dba67
        public_65dba40 : nop
        cmp eax, 2
        jne public_65dba67
        mov edi, offset public_65e35c8
        mov esi, edi
        public_65dba4c : nop
        mov eax, dword ptr ds : [esi+0x10]
        test eax, eax
        je public_65dba61
        push 0x8000
        push 0
        push eax
        call dword ptr ds : [public_65e10cc]
        public_65dba61 : nop
        mov esi, dword ptr ds : [esi]
        cmp esi, edi
        jne public_65dba4c
        public_65dba67 : nop
        push dword ptr ds : [public_65e7920]
        call dword ptr ds : [public_65e10c4]
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x65db9ce)
    }
}

#undef public_65db9fa
#undef public_65dba2c
#undef public_65dba40
#undef public_65dba4c
#undef public_65dba61
#undef public_65dba67
