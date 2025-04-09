#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_450070);

#define public_450090 _public_450090
#define public_4500b0 _public_4500b0
#define public_4500b4 _public_4500b4
#define public_4500b9 _public_4500b9
#define public_4500c0 _public_4500c0

PROC_DECLARE(0x450070, internal_450070, public_450070);
extern "C" NAKED register_t __cdecl internal_450070()
{
    __asm
    {
        mov dl, byte ptr ds : [ecx+0x68]
        xor al, al
        test dl, dl
        push esi
        jne public_4500c0
        mov edx, dword ptr ds : [ecx+0x60]
        cmp edx, dword ptr ss : [esp+8]
        jne public_4500c0
        mov esi, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ds : [ecx+0x64]
        push ebx
        nop 
        lea esp, ss:[esp]
        public_450090 : nop
        mov bl, byte ptr ds : [ecx]
        mov dl, bl
        cmp bl, byte ptr ds : [esi]
        jne public_4500b4
        test dl, dl
        je public_4500b0
        mov bl, byte ptr ds : [ecx+1]
        mov dl, bl
        cmp bl, byte ptr ds : [esi+1]
        jne public_4500b4
        add ecx, 2
        add esi, 2
        test dl, dl
        jne public_450090
        public_4500b0 : nop
        xor ecx, ecx
        jmp public_4500b9
        public_4500b4 : nop
        sbb ecx, ecx
        sbb ecx, 0xFFFFFFFF
        public_4500b9 : nop
        test ecx, ecx
        pop ebx
        jne public_4500c0
        mov al, 1
        public_4500c0 : nop
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x450070)
    }
}

#undef public_450090
#undef public_4500b0
#undef public_4500b4
#undef public_4500b9
#undef public_4500c0
