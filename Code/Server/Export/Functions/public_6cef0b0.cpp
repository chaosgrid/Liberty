#include "Server-PCH.h"


#define public_6cef0d8 _public_6cef0d8
#define public_6cef0e6 _public_6cef0e6
#define public_6cef0e8 _public_6cef0e8

PROC_DECLARE(0x6cef0b0, internal_6cef0b0, public_6cef0b0);
extern "C" NAKED register_t __cdecl internal_6cef0b0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [eax+0x10]
        push ebx
        xor bl, bl
        cmp edx, 0x10
        jge public_6cef0e6
        mov edx, dword ptr ds : [eax+0x18]
        test edx, edx
        je public_6cef0d8
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x198]
        test al, al
        je public_6cef0e6
        mov al, 1
        pop ebx
        ret 4
        public_6cef0d8 : nop
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x19C]
        test al, al
        mov al, 1
        jne public_6cef0e8
        public_6cef0e6 : nop
        mov al, bl
        public_6cef0e8 : nop
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6cef0b0)
    }
}

#undef public_6cef0d8
#undef public_6cef0e6
#undef public_6cef0e8
