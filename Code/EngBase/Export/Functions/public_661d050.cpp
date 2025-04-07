#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_661d050);

#define public_661d065 _public_661d065
#define public_661d0a3 _public_661d0a3

PROC_DECLARE(0x661d050, internal_661d050, public_661d050);
extern "C" NAKED register_t __cdecl internal_661d050()
{
    __asm
    {
        push ecx
        mov al, byte ptr ds : [public_662b0fc]
        test al, al
        jne public_661d0a3
        xor eax, eax
        mov ecx, offset public_662acf8
        mov dword ptr ss : [esp], eax
        public_661d065 : nop
        fild dword ptr ss : [esp]
        inc eax
        add ecx, 4
        cmp eax, 0x100
        mov dword ptr ss : [esp], eax
        fmul qword ptr ds : [public_6629508]
        fcos 
        fsubr qword ptr ds : [public_6629220]
        fmul qword ptr ds : [public_6629500]
        fstp dword ptr ds : [ecx-4]
        jl public_661d065
        mov eax, dword ptr ss : [esp+8]
        mov byte ptr ds : [public_662b0fc], 1
        fld dword ptr ds : [eax*4+public_662acf8]
        pop ecx
        ret 
        public_661d0a3 : nop
        mov ecx, dword ptr ss : [esp+8]
        fld dword ptr ds : [ecx*4+public_662acf8]
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x661d050)
    }
}

#undef public_661d065
#undef public_661d0a3
