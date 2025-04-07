#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63441a0);
CLANG_FORWARD_PROC_SYMBOL(public_635c200);

#define public_635c215 _public_635c215
#define public_635c240 _public_635c240

PROC_DECLARE(0x635c200, internal_635c200, public_635c200);
extern "C" NAKED register_t __cdecl internal_635c200()
{
    __asm
    {
        mov ax, word ptr ds : [ecx+0x2A]
        cmp ax, word ptr ds : [ecx+0x28]
        push esi
        lea esi, ds:[ecx+0x28]
        jb public_635c215
        mov ecx, esi
        call public_63441a0
        public_635c215 : nop
        mov eax, dword ptr ds : [esi+4]
        xor ecx, ecx
        mov cx, word ptr ds : [esi+2]
        mov edx, ecx
        mov ecx, dword ptr ss : [esp+8]
        mov dword ptr ds : [eax+edx*4], ecx
        mov edx, dword ptr ds : [ecx+0xC]
        xor eax, eax
        cmp edx, 0xFFFFFFFF
        mov ax, word ptr ds : [esi+2]
        jne public_635c240
        mov dword ptr ds : [ecx+0xC], eax
        inc word ptr ds : [esi+2]
        pop esi
        ret 4
        public_635c240 : nop
        mov dword ptr ds : [ecx+0x10], eax
        inc word ptr ds : [esi+2]
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x635c200)
    }
}

#undef public_635c215
#undef public_635c240
