#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_565d90);
CLANG_FORWARD_PROC_SYMBOL(public_579220);

#define public_579239 _public_579239
#define public_579255 _public_579255

PROC_DECLARE(0x579220, internal_579220, public_579220);
extern "C" NAKED register_t __cdecl internal_579220()
{
    __asm
    {
        mov ecx, dword ptr ds : [public_67c3bc]
        push ebx
        xor ebx, ebx
        cmp ecx, ebx
        je public_579239
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        mov dword ptr ds : [public_67c3bc], ebx
        public_579239 : nop
        call public_565d90
        cmp eax, ebx
        mov dword ptr ds : [public_67c3bc], eax
        je public_579255
        mov ecx, dword ptr ss : [esp+8]
        mov edx, dword ptr ds : [eax]
        push ecx
        mov ecx, eax
        call dword ptr ds : [edx+4]
        pop ebx
        ret 
        public_579255 : nop
        mov al, bl
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x579220)
    }
}

#undef public_579239
#undef public_579255
