#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6273db0);

#define public_6277010 _public_6277010
#define public_627701e _public_627701e
#define public_6277029 _public_6277029
#define public_6277041 _public_6277041

PROC_DECLARE(0x6277000, internal_6277000, public_6277000);
extern "C" NAKED register_t __cdecl internal_6277000()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        push ebp
        mov ebp, dword ptr ss : [esp+0xC]
        push esi
        push edi
        mov esi, ecx
        xor edi, edi
        public_6277010 : nop
        mov ecx, dword ptr ds : [esi+0x1A8]
        test ecx, ecx
        jne public_627701e
        xor eax, eax
        jmp public_6277029
        public_627701e : nop
        mov eax, dword ptr ds : [esi+0x1AC]
        sub eax, ecx
        sar eax, 2
        public_6277029 : nop
        cmp edi, eax
        jge public_6277041
        mov eax, dword ptr ds : [esi+0x1A8]
        mov ecx, dword ptr ds : [eax+edi*4]
        push esi
        push ebx
        push ebp
        call public_6273db0
        inc edi
        jmp public_6277010
        public_6277041 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6277000)
    }
}

#undef public_6277010
#undef public_627701e
#undef public_6277029
#undef public_6277041
