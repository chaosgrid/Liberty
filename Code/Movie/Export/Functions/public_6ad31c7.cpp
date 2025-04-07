#include "Movie-PCH.h"


#define public_6ad31de _public_6ad31de
#define public_6ad31e2 _public_6ad31e2

PROC_DECLARE(0x6ad31c7, internal_6ad31c7, public_6ad31c7);
extern "C" NAKED register_t __cdecl internal_6ad31c7()
{
    __asm
    {
        cmp byte ptr ds : [edx+0xE], 5
        jne public_6ad31de
        mov bx, word ptr ss : [ebp-0xA4]
        or bh, 2
        and bh, 0xFE
        mov bl, 0x3F
        jmp public_6ad31e2
        public_6ad31de : nop
        mov bx, 0x133F
        public_6ad31e2 : nop
        mov word ptr ss : [ebp-0xA2], bx
        fldcw word ptr ss : [ebp-0xA2]
        mov ebx, offset public_6addbfc
        fxam 
        mov dword ptr ss : [ebp-0x94], edx
        wait 
        fnstsw word ptr ss : [ebp-0xA0]
        mov byte ptr ss : [ebp-0x90], 0
        fxch 
        mov cl, byte ptr ss : [ebp-0x9F]
        fxam 
        wait 
        fnstsw word ptr ss : [ebp-0xA0]
        fxch 
        mov ch, byte ptr ss : [ebp-0x9F]
        shl ch, 1
        sar ch, 1
        rol ch, 1
        mov al, ch
        and al, 0xF
        xlatb 
        mov ah, al
        shl cl, 1
        sar cl, 1
        rol cl, 1
        mov al, cl
        and al, 0xF
        xlatb 
        shl ah, 1
        shl ah, 1
        or al, ah
        movsx eax, al
        and ecx, 0x404
        mov ebx, edx
        add ebx, eax
        add ebx, 0x10
        jmp dword ptr ds : [ebx]
        UNREACHABLE_TRAP(0x6ad31c7)
    }
}

#undef public_6ad31de
#undef public_6ad31e2
