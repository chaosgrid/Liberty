#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_590d10);

#define public_590d40 _public_590d40
#define public_590d54 _public_590d54
#define public_590d5b _public_590d5b
#define public_590d68 _public_590d68

PROC_DECLARE(0x590d10, internal_590d10, public_590d10);
extern "C" NAKED register_t __cdecl internal_590d10()
{
    __asm
    {
        push esi
        mov esi, ecx
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        mov al, byte ptr ds : [edi]
        mov byte ptr ds : [esi], al
        mov cl, byte ptr ds : [edi+1]
        mov byte ptr ds : [esi+1], cl
        mov dl, byte ptr ds : [edi+2]
        mov byte ptr ds : [esi+2], dl
        mov eax, dword ptr ds : [edi+4]
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [esi+8]
        test ecx, ecx
        je public_590d5b
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jbe public_590d40
        dec eax
        mov dword ptr ds : [ecx+4], eax
        public_590d40 : nop
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jne public_590d54
        mov dword ptr ds : [ecx+4], 1
        mov edx, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [edx]
        public_590d54 : nop
        mov dword ptr ds : [esi+8], 0
        public_590d5b : nop
        mov eax, dword ptr ds : [edi+8]
        test eax, eax
        mov dword ptr ds : [esi+8], eax
        je public_590d68
        inc dword ptr ds : [eax+4]
        public_590d68 : nop
        pop edi
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x590d10)
    }
}

#undef public_590d40
#undef public_590d54
#undef public_590d5b
#undef public_590d68
