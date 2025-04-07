#include "ImeUi-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6712b80);

#define public_6712b9b _public_6712b9b
#define public_6712bac _public_6712bac

PROC_DECLARE(0x6712b80, internal_6712b80, public_6712b80);
extern "C" NAKED register_t __cdecl internal_6712b80()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x88]
        test eax, eax
        jge public_6712b9b
        mov dword ptr ds : [esi+0x88], 0
        xor al, al
        pop esi
        ret 
        public_6712b9b : nop
        mov ecx, dword ptr ds : [esi+0x80]
        cmp eax, ecx
        jb public_6712bac
        dec ecx
        mov dword ptr ds : [esi+0x88], ecx
        public_6712bac : nop
        mov eax, dword ptr ds : [esi+0x88]
        mov ecx, dword ptr ds : [esi+0x84]
        mov word ptr ds : [ecx+eax*2], 0
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x28]
        mov ecx, dword ptr ds : [esi+0x84]
        mov eax, dword ptr ds : [esi]
        push ecx
        mov ecx, esi
        call dword ptr ds : [eax+0x18]
        mov al, 1
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6712b80)
    }
}

#undef public_6712b9b
#undef public_6712bac
