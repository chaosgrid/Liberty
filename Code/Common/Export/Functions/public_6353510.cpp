#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_634d530);
CLANG_FORWARD_PROC_SYMBOL(public_634d640);
CLANG_FORWARD_PROC_SYMBOL(public_6353510);

#define public_635352c _public_635352c
#define public_6353555 _public_6353555

PROC_DECLARE(0x6353510, internal_6353510, public_6353510);
extern "C" NAKED register_t __cdecl internal_6353510()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x40]
        test eax, eax
        jne public_635352c
        mov eax, dword ptr ds : [esi+0x18]
        mov ecx, dword ptr ds : [eax+0x94]
        push esi
        call public_634d530
        mov dword ptr ds : [esi+0x40], eax
        public_635352c : nop
        mov eax, dword ptr ds : [esi+0x40]
        inc dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [esi+0x78]
        shl ecx, 0x18
        cmp ecx, 0x8000000
        jge public_6353555
        mov edx, dword ptr ds : [esi+0x18]
        mov ecx, dword ptr ds : [esi+0x40]
        mov eax, dword ptr ds : [edx+0x110]
        cmp eax, dword ptr ds : [ecx]
        jle public_6353555
        call public_634d640
        public_6353555 : nop
        mov eax, dword ptr ds : [esi+0x40]
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6353510)
    }
}

#undef public_635352c
#undef public_6353555
