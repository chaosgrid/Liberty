#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62bbb50);

#define public_62bbb82 _public_62bbb82

PROC_DECLARE(0x62bbb50, internal_62bbb50, public_62bbb50);
extern "C" NAKED register_t __cdecl internal_62bbb50()
{
    __asm
    {
        mov ax, word ptr ds : [ecx]
        mov edx, dword ptr ss : [esp+4]
        cmp ax, word ptr ds : [edx]
        jne public_62bbb82
        fld dword ptr ds : [ecx+4]
        fcomp dword ptr ds : [edx+4]
        fnstsw ax
        test ah, 0x44
        jp public_62bbb82
        mov ecx, dword ptr ds : [ecx+8]
        cmp ecx, dword ptr ds : [edx+8]
        jne public_62bbb82
        mov eax, 1
        xor edx, edx
        test al, al
        sete dl
        mov al, dl
        ret 4
        public_62bbb82 : nop
        xor eax, eax
        xor edx, edx
        test al, al
        sete dl
        mov al, dl
        ret 4
        UNREACHABLE_TRAP(0x62bbb50)
    }
}

#undef public_62bbb82
