#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ac8d40);

#define public_6ac8d49 _public_6ac8d49
#define public_6ac8d57 _public_6ac8d57
#define public_6ac8d61 _public_6ac8d61

PROC_DECLARE(0x6ac8d40, internal_6ac8d40, public_6ac8d40);
extern "C" NAKED register_t __cdecl internal_6ac8d40()
{
    __asm
    {
        push ebp
        mov ebp, esp
        mov eax, dword ptr ss : [ebp+0xC]
        mov edx, dword ptr ss : [ebp+8]
        public_6ac8d49 : nop
        test eax, eax
        je public_6ac8d57
        mov ecx, dword ptr ds : [edx+eax*4-4]
        dec eax
        test ecx, ecx
        je public_6ac8d49
        inc eax
        public_6ac8d57 : nop
        mov ecx, eax
        test ecx, ecx
        jne public_6ac8d61
        pop ebp
        ret 8
        public_6ac8d61 : nop
        mov eax, dword ptr ss : [ebp+8]
        mov edx, dword ptr ds : [eax+ecx*4-4]
        mov dword ptr ss : [ebp+8], edx
        mov eax, dword ptr ss : [ebp+8]
        bsr eax, eax
        add eax, 1
        mov edx, eax
        lea eax, ds:[ecx+0x7FFFFFF]
        shl eax, 5
        add eax, edx
        pop ebp
        ret 8
        UNREACHABLE_TRAP(0x6ac8d40)
    }
}

#undef public_6ac8d49
#undef public_6ac8d57
#undef public_6ac8d61
