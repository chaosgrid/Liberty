#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6367a60);
CLANG_FORWARD_PROC_SYMBOL(public_6367b40);

#define public_6367b76 _public_6367b76
#define public_6367b8d _public_6367b8d
#define public_6367b8f _public_6367b8f
#define public_6367ba2 _public_6367ba2

PROC_DECLARE(0x6367b40, internal_6367b40, public_6367b40);
extern "C" NAKED register_t __cdecl internal_6367b40()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x24]
        push ebx
        mov ebx, dword ptr ds : [ecx+8]
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        lea edx, ds:[eax+1]
        imul edx, esi
        mov ebp, esi
        fld dword ptr ds : [ebx+edx*4]
        mov edx, dword ptr ds : [ecx+0x28]
        fabs 
        dec edx
        cmp edx, esi
        fstp dword ptr ss : [esp+0x10]
        jle public_6367ba2
        push edi
        mov edi, eax
        imul eax, edx
        neg edi
        shl edi, 2
        add eax, esi
        lea ebx, ds:[ebx+eax*4]
        public_6367b76 : nop
        fld dword ptr ds : [ebx]
        fabs 
        fcom dword ptr ss : [esp+0x14]
        fnstsw ax
        test ah, 0x41
        jne public_6367b8d
        fstp dword ptr ss : [esp+0x14]
        mov ebp, edx
        jmp public_6367b8f
        public_6367b8d : nop
        fstp st(0)
        public_6367b8f : nop
        dec edx
        add ebx, edi
        cmp edx, esi
        jg public_6367b76
        cmp ebp, esi
        pop edi
        je public_6367ba2
        push ebp
        push esi
        call public_6367a60
        public_6367ba2 : nop
        pop esi
        pop ebp
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6367b40)
    }
}

#undef public_6367b76
#undef public_6367b8d
#undef public_6367b8f
#undef public_6367ba2
