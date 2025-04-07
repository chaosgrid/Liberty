#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65dc749);
CLANG_FORWARD_PROC_SYMBOL(public_65ddb10);

#define public_65dc75d _public_65dc75d
#define public_65dc77a _public_65dc77a
#define public_65dc7c9 _public_65dc7c9
#define public_65dc7d9 _public_65dc7d9
#define public_65dc7ee _public_65dc7ee
#define public_65dc810 _public_65dc810
#define public_65dc839 _public_65dc839
#define public_65dc85d _public_65dc85d
#define public_65dc861 _public_65dc861
#define public_65dc86f _public_65dc86f
#define public_65dc886 _public_65dc886
#define public_65dc888 _public_65dc888

PROC_DECLARE(0x65dc749, internal_65dc749, public_65dc749);
extern "C" NAKED register_t __cdecl internal_65dc749()
{
    __asm
    {
        cmp dword ptr ds : [public_65e35d8], 0xFFFFFFFF
        push ebx
        push ebp
        push esi
        push edi
        jne public_65dc75d
        mov esi, offset public_65e35c8
        jmp public_65dc77a
        public_65dc75d : nop
        push 0x2020
        push 0
        push dword ptr ds : [public_65e7920]
        call dword ptr ds : [public_65e1060]
        mov esi, eax
        test esi, esi
        je public_65dc886
        public_65dc77a : nop
        mov ebp, dword ptr ds : [public_65e10d4]
        push 4
        push 0x2000
        push 0x400000
        push 0
        call ebp
        mov edi, eax
        test edi, edi
        je public_65dc86f
        push 4
        mov ebx, 0x10000
        push 0x1000
        push ebx
        push edi
        call ebp
        test eax, eax
        je public_65dc861
        mov eax, offset public_65e35c8
        cmp esi, eax
        jne public_65dc7d9
        cmp dword ptr ds : [public_65e35c8], 0
        jne public_65dc7c9
        mov dword ptr ds : [public_65e35c8], eax
        public_65dc7c9 : nop
        cmp dword ptr ds : [public_65e35cc], 0
        jne public_65dc7ee
        mov dword ptr ds : [public_65e35cc], eax
        jmp public_65dc7ee
        public_65dc7d9 : nop
        mov dword ptr ds : [esi], eax
        mov eax, dword ptr ds : [public_65e35cc]
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [public_65e35cc], esi
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax], esi
        public_65dc7ee : nop
        lea eax, ds:[edi+0x400000]
        lea ecx, ds:[esi+0x98]
        mov dword ptr ds : [esi+0x14], eax
        lea eax, ds:[esi+0x18]
        mov dword ptr ds : [esi+0xC], ecx
        mov dword ptr ds : [esi+0x10], edi
        mov dword ptr ds : [esi+8], eax
        xor ebp, ebp
        mov ecx, 0xF1
        public_65dc810 : nop
        xor edx, edx
        cmp ebp, 0x10
        setge dl
        dec edx
        and edx, ecx
        dec edx
        inc ebp
        mov dword ptr ds : [eax], edx
        mov dword ptr ds : [eax+4], ecx
        add eax, 8
        cmp ebp, 0x400
        jl public_65dc810
        push ebx
        push 0
        push edi
        call public_65ddb10
        add esp, 0xC
        public_65dc839 : nop
        mov eax, dword ptr ds : [esi+0x10]
        add eax, ebx
        cmp edi, eax
        jae public_65dc85d
        or byte ptr ds : [edi+0xF8], 0xFF
        lea eax, ds:[edi+8]
        mov dword ptr ds : [edi], eax
        mov dword ptr ds : [edi+4], 0xF0
        add edi, 0x1000
        jmp public_65dc839
        public_65dc85d : nop
        mov eax, esi
        jmp public_65dc888
        public_65dc861 : nop
        push 0x8000
        push 0
        push edi
        call dword ptr ds : [public_65e10cc]
        public_65dc86f : nop
        cmp esi, offset public_65e35c8
        je public_65dc886
        push esi
        push 0
        push dword ptr ds : [public_65e7920]
        call dword ptr ds : [public_65e1058]
        public_65dc886 : nop
        xor eax, eax
        public_65dc888 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x65dc749)
    }
}

#undef public_65dc75d
#undef public_65dc77a
#undef public_65dc7c9
#undef public_65dc7d9
#undef public_65dc7ee
#undef public_65dc810
#undef public_65dc839
#undef public_65dc85d
#undef public_65dc861
#undef public_65dc86f
#undef public_65dc886
#undef public_65dc888
