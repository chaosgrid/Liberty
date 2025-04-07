#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d5020);

#define public_65d5037 _public_65d5037
#define public_65d5042 _public_65d5042
#define public_65d5054 _public_65d5054
#define public_65d5064 _public_65d5064
#define public_65d506b _public_65d506b

PROC_DECLARE(0x65d5020, internal_65d5020, public_65d5020);
extern "C" NAKED register_t __cdecl internal_65d5020()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push ebx
        push esi
        mov esi, ecx
        mov ebx, dword ptr ds : [eax+8]
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        jne public_65d5037
        mov eax, offset public_65e13a4
        public_65d5037 : nop
        mov edx, dword ptr ds : [esi+8]
        cmp edx, ebx
        mov ecx, edx
        jb public_65d5042
        mov ecx, ebx
        public_65d5042 : nop
        mov esi, dword ptr ds : [esi+4]
        push edi
        mov edi, eax
        xor eax, eax
        repe cmpsb
        pop edi
        je public_65d5054
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_65d5054 : nop
        test eax, eax
        jne public_65d506b
        cmp edx, ebx
        jae public_65d5064
        pop esi
        or eax, 0xFFFFFFFF
        pop ebx
        ret 4
        public_65d5064 : nop
        xor eax, eax
        cmp edx, ebx
        setne al
        public_65d506b : nop
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x65d5020)
    }
}

#undef public_65d5037
#undef public_65d5042
#undef public_65d5054
#undef public_65d5064
#undef public_65d506b
