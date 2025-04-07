#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65de560);

#define public_65de58f _public_65de58f
#define public_65de591 _public_65de591

PROC_DECLARE(0x65de560, internal_65de560, public_65de560);
extern "C" NAKED register_t __cdecl internal_65de560()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push edi
        push esi
        push ebx
        mov ecx, dword ptr ss : [ebp+0x10]
        jecxz public_65de591
        mov ebx, ecx
        mov edi, dword ptr ss : [ebp+8]
        mov esi, edi
        xor eax, eax
        repne scasb
        neg ecx
        add ecx, ebx
        mov edi, esi
        mov esi, dword ptr ss : [ebp+0xC]
        repe cmpsb
        mov al, byte ptr ds : [esi-1]
        xor ecx, ecx
        cmp al, byte ptr ds : [edi-1]
        ja public_65de58f
        je public_65de591
        dec ecx
        dec ecx
        public_65de58f : nop
        not ecx
        public_65de591 : nop
        mov eax, ecx
        pop ebx
        pop esi
        pop edi
        leave 
        ret 
        UNREACHABLE_TRAP(0x65de560)
    }
}

#undef public_65de58f
#undef public_65de591
