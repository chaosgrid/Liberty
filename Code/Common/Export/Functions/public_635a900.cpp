#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6356810);
CLANG_FORWARD_PROC_SYMBOL(public_635a900);

#define public_635a915 _public_635a915
#define public_635a928 _public_635a928
#define public_635a934 _public_635a934
#define public_635a93a _public_635a93a
#define public_635a941 _public_635a941

PROC_DECLARE(0x635a900, internal_635a900, public_635a900);
extern "C" NAKED register_t __cdecl internal_635a900()
{
    __asm
    {
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ss : [ebp+0x28]
        mov ebx, dword ptr ss : [ebp+0x44]
        push esi
        push edi
        mov edi, dword ptr ds : [eax+0x28]
        test edi, edi
        je public_635a93a
        public_635a915 : nop
        movsx esi, word ptr ds : [edi+0xC]
        mov eax, dword ptr ds : [esi+edi+0x10]
        add esi, edi
        cmp eax, ebx
        je public_635a928
        cmp dword ptr ds : [esi+0x24], ebx
        jne public_635a934
        public_635a928 : nop
        push ebp
        mov ecx, esi
        call public_6356810
        test eax, eax
        jne public_635a941
        public_635a934 : nop
        mov edi, dword ptr ds : [edi]
        test edi, edi
        jne public_635a915
        public_635a93a : nop
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 
        public_635a941 : nop
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x635a900)
    }
}

#undef public_635a915
#undef public_635a928
#undef public_635a934
#undef public_635a93a
#undef public_635a941
