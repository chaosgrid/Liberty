#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391dae);

#define public_6326360 _public_6326360
#define public_6326365 _public_6326365
#define public_6326374 _public_6326374
#define public_632638c _public_632638c
#define public_63263f7 _public_63263f7

PROC_DECLARE(0x6326340, internal_6326340, public_6326340);
extern "C" NAKED register_t __cdecl internal_6326340()
{
    __asm
    {
        mov al, byte ptr ds : [public_640a708]
        sub esp, 0x94
        test al, al
        je public_632638c
        push ebp
        mov ebp, dword ptr ds : [public_639907c]
        push esi
        push edi
        mov esi, offset public_64019a8
        lea ecx, ds:[ecx]
        public_6326360 : nop
        mov edi, 8
        public_6326365 : nop
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_6326374
        push eax
        call ebp
        mov dword ptr ds : [esi], 0
        public_6326374 : nop
        add esi, 0x7C
        dec edi
        jne public_6326365
        cmp esi, offset public_64095a8
        jl public_6326360
        pop edi
        pop esi
        mov byte ptr ds : [public_640a708], 0
        pop ebp
        public_632638c : nop
        fild dword ptr ss : [esp+0x98]
        fld dword ptr ds : [public_63a3db8]
        fdivr st, st(1)
        fstp dword ptr ds : [public_63ed668]
        fdiv dword ptr ds : [public_63a3dbc]
        fstp dword ptr ds : [public_63ed66c]
        fld dword ptr ds : [public_63ed668]
        fadd st(0), st
        call public_6391dae
        mov dword ptr ds : [public_63ed670], eax
        mov dword ptr ds : [public_63ed674], eax
        lea eax, ss:[esp]
        push eax
        mov dword ptr ss : [esp+4], 0x94
        call dword ptr ds : [public_63990e0]
        test eax, eax
        je public_63263f7
        cmp dword ptr ss : [esp+4], 4
        seta cl
        mov al, 1
        mov byte ptr ds : [public_640a709], cl
        mov byte ptr ds : [public_640a708], al
        add esp, 0x94
        ret 
        public_63263f7 : nop
        mov al, 1
        mov byte ptr ds : [public_640a709], 0
        mov byte ptr ds : [public_640a708], al
        add esp, 0x94
        ret 
        UNREACHABLE_TRAP(0x6326340)
    }
}

#undef public_6326360
#undef public_6326365
#undef public_6326374
#undef public_632638c
#undef public_63263f7
