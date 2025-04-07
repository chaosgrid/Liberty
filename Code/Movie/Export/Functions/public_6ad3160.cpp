#include "Movie-PCH.h"


#define public_6ad3177 _public_6ad3177
#define public_6ad317b _public_6ad317b

PROC_DECLARE(0x6ad3160, internal_6ad3160, public_6ad3160);
extern "C" NAKED register_t __cdecl internal_6ad3160()
{
    __asm
    {
        cmp byte ptr ds : [edx+0xE], 5
        jne public_6ad3177
        mov bx, word ptr ss : [ebp-0xA4]
        or bh, 2
        and bh, 0xFE
        mov bl, 0x3F
        jmp public_6ad317b
        public_6ad3177 : nop
        mov bx, 0x133F
        public_6ad317b : nop
        mov word ptr ss : [ebp-0xA2], bx
        fldcw word ptr ss : [ebp-0xA2]
        mov ebx, offset public_6addbfc
        fxam 
        mov dword ptr ss : [ebp-0x94], edx
        wait 
        fnstsw word ptr ss : [ebp-0xA0]
        mov byte ptr ss : [ebp-0x90], 0
        wait 
        mov cl, byte ptr ss : [ebp-0x9F]
        shl cl, 1
        sar cl, 1
        rol cl, 1
        mov al, cl
        and al, 0xF
        xlatb 
        movsx eax, al
        and ecx, 0x404
        mov ebx, edx
        add ebx, eax
        add ebx, 0x10
        jmp dword ptr ds : [ebx]
        UNREACHABLE_TRAP(0x6ad3160)
    }
}

#undef public_6ad3177
#undef public_6ad317b
