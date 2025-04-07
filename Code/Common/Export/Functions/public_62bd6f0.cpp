#include "Common-PCH.h"


#define public_62bd6fc _public_62bd6fc
#define public_62bd710 _public_62bd710
#define public_62bd71c _public_62bd71c
#define public_62bd71e _public_62bd71e

PROC_DECLARE(0x62bd6f0, internal_62bd6f0, public_62bd6f0);
extern "C" NAKED register_t __cdecl internal_62bd6f0()
{
    __asm
    {
        mov al, byte ptr ds : [ecx+0x10]
        test al, al
        jne public_62bd6fc
        xor al, al
        ret 4
        public_62bd6fc : nop
        mov eax, dword ptr ds : [ecx+0x18]
        mov ecx, dword ptr ds : [ecx+0x1C]
        cmp eax, ecx
        je public_62bd71c
        mov dx, word ptr ss : [esp+4]
        nop 
        lea esp, ss:[esp]
        public_62bd710 : nop
        cmp word ptr ds : [eax], dx
        je public_62bd71e
        add eax, 2
        cmp eax, ecx
        jne public_62bd710
        public_62bd71c : nop
        mov eax, ecx
        public_62bd71e : nop
        xor edx, edx
        cmp eax, ecx
        setne dl
        mov al, dl
        ret 4
        UNREACHABLE_TRAP(0x62bd6f0)
    }
}

#undef public_62bd6fc
#undef public_62bd710
#undef public_62bd71c
#undef public_62bd71e
