#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_635d270);
CLANG_FORWARD_PROC_SYMBOL(public_635d2e0);

#define public_635d30b _public_635d30b
#define public_635d317 _public_635d317
#define public_635d328 _public_635d328
#define public_635d33d _public_635d33d
#define public_635d34a _public_635d34a
#define public_635d356 _public_635d356

PROC_DECLARE(0x635d2e0, internal_635d2e0, public_635d2e0);
extern "C" NAKED register_t __cdecl internal_635d2e0()
{
    __asm
    {
        push ebx
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        mov ebx, ecx
        mov ecx, dword ptr ds : [edi+8]
        test ecx, ecx
        je public_635d356
        push esi
        mov dword ptr ds : [edi+8], 0
        mov si, word ptr ds : [ecx+0x22]
        mov eax, esi
        and eax, 0xFFFF
        dec eax
        js public_635d317
        mov edx, dword ptr ds : [ecx+0x24]
        lea edx, ds:[edx+eax*4]
        public_635d30b : nop
        cmp dword ptr ds : [edx], edi
        je public_635d317
        dec eax
        sub edx, 4
        test eax, eax
        jge public_635d30b
        public_635d317 : nop
        lea edx, ds:[esi-1]
        mov word ptr ds : [ecx+0x22], dx
        and edx, 0xFFFF
        cmp eax, edx
        jge public_635d33d
        public_635d328 : nop
        mov edx, dword ptr ds : [ecx+0x24]
        mov esi, dword ptr ds : [edx+eax*4+4]
        mov dword ptr ds : [edx+eax*4], esi
        xor edx, edx
        mov dx, word ptr ds : [ecx+0x22]
        inc eax
        cmp eax, edx
        jl public_635d328
        public_635d33d : nop
        push ecx
        mov ecx, ebx
        call public_635d270
        test eax, eax
        pop esi
        je public_635d356
        public_635d34a : nop
        push eax
        mov ecx, ebx
        call public_635d270
        test eax, eax
        jne public_635d34a
        public_635d356 : nop
        pop edi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x635d2e0)
    }
}

#undef public_635d30b
#undef public_635d317
#undef public_635d328
#undef public_635d33d
#undef public_635d34a
#undef public_635d356
