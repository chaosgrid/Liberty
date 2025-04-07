#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6382930);

#define public_638295e _public_638295e
#define public_63829c3 _public_63829c3

PROC_DECLARE(0x6382930, internal_6382930, public_6382930);
extern "C" NAKED register_t __cdecl internal_6382930()
{
    __asm
    {
        sub esp, 0x10
        fild dword ptr ss : [esp+0x14]
        fld st(0)
        fsqrt 
        fmul qword ptr ss : [esp+0x18]
        fst qword ptr ss : [esp]
        fcomp qword ptr ss : [esp+0x20]
        fnstsw ax
        test ah, 0x41
        jne public_638295e
        mov eax, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ss : [esp+0x24]
        mov dword ptr ss : [esp], eax
        mov dword ptr ss : [esp+4], ecx
        public_638295e : nop
        fmul qword ptr ss : [esp]
        mov eax, dword ptr ds : [public_658b078]
        cmp eax, 4
        fmul qword ptr ds : [public_63a5a18]
        fadd qword ptr ss : [esp+0x18]
        fmul qword ptr ds : [public_63a5a10]
        fst qword ptr ss : [esp+8]
        jl public_63829c3
        mov edx, dword ptr ss : [esp+4]
        fstp st(0)
        mov eax, dword ptr ss : [esp]
        mov ecx, dword ptr ss : [esp+0x24]
        push edx
        mov edx, dword ptr ss : [esp+0x24]
        push eax
        mov eax, dword ptr ss : [esp+0x24]
        push ecx
        mov ecx, dword ptr ss : [esp+0x24]
        push edx
        mov edx, dword ptr ss : [esp+0x1C]
        push eax
        mov eax, dword ptr ss : [esp+0x1C]
        push ecx
        mov ecx, dword ptr ds : [public_658b7fc]
        push edx
        push eax
/*FIXUP push offset public_63f6cec @0x63829b0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f6cec
        push ecx
        call dword ptr ds : [public_63991e8]
        fld qword ptr ss : [esp+0x30]
        add esp, 0x28
        public_63829c3 : nop
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6382930)
    }
}

#undef public_638295e
#undef public_63829c3
