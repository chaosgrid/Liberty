#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_57fcb0);

#define public_57fcd3 _public_57fcd3

PROC_DECLARE(0x57fcb0, internal_57fcb0, public_57fcb0);
extern "C" NAKED register_t __cdecl internal_57fcb0()
{
    __asm
    {
        mov eax, ecx
        push ebp
        mov ebp, dword ptr ss : [esp+8]
        mov ecx, dword ptr ss : [ebp]
        push esi
        mov dword ptr ds : [eax], ecx
        mov dx, word ptr ss : [ebp]
        push edi
        mov esi, ebp
        mov edi, 0xFFFFFFFE
        mov word ptr ds : [eax], dx
        sub esi, eax
        lea edx, ds:[eax+2]
        sub edi, eax
        public_57fcd3 : nop
        mov cl, byte ptr ds : [esi+edx]
        mov byte ptr ds : [edx], cl
        inc edx
        lea ecx, ds:[edi+edx]
        cmp ecx, 2
        jb public_57fcd3
        mov edx, dword ptr ss : [ebp+4]
        pop edi
        pop esi
        mov dword ptr ds : [eax+4], edx
        pop ebp
        ret 4
        UNREACHABLE_TRAP(0x57fcb0)
    }
}

#undef public_57fcd3
