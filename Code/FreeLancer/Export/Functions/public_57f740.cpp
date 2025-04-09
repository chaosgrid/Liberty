#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_57f740);

#define public_57f755 _public_57f755
#define public_57f760 _public_57f760
#define public_57f764 _public_57f764
#define public_57f769 _public_57f769

PROC_DECLARE(0x57f740, internal_57f740, public_57f740);
extern "C" NAKED register_t __cdecl internal_57f740()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [edx+4]
        mov ecx, dword ptr ds : [ecx+8]
        cmp eax, ecx
        je public_57f769
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        mov si, word ptr ds : [esi]
        public_57f755 : nop
        cmp word ptr ds : [eax+0xC], si
        jae public_57f760
        mov eax, dword ptr ds : [eax+8]
        jmp public_57f764
        public_57f760 : nop
        mov edx, eax
        mov eax, dword ptr ds : [eax]
        public_57f764 : nop
        cmp eax, ecx
        jne public_57f755
        pop esi
        public_57f769 : nop
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax], edx
        ret 8
        UNREACHABLE_TRAP(0x57f740)
    }
}

#undef public_57f755
#undef public_57f760
#undef public_57f764
#undef public_57f769
