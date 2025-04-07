#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_496d40);

#define public_496d64 _public_496d64
#define public_496d7e _public_496d7e
#define public_496dcd _public_496dcd
#define public_496de9 _public_496de9
#define public_496e0e _public_496e0e
#define public_496e10 _public_496e10
#define public_496e29 _public_496e29
#define public_496e33 _public_496e33
#define public_496e3f _public_496e3f

PROC_DECLARE(0x496d40, internal_496d40, public_496d40);
extern "C" NAKED register_t __cdecl internal_496d40()
{
    __asm
    {
        sub esp, 0x10
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ds : [ecx+0x400]
        mov esi, dword ptr ds : [edi]
        cmp esi, edi
        mov dword ptr ss : [esp+0x10], ecx
        je public_496e33
        mov bl, byte ptr ss : [esp+0x28]
        mov ecx, 4
        public_496d64 : nop
        test bl, bl
        mov edx, dword ptr ds : [esi+8]
        je public_496d7e
        mov eax, dword ptr ds : [edx]
        cmp eax, 3
        je public_496e29
        cmp eax, ecx
        je public_496e29
        public_496d7e : nop
        mov al, byte ptr ds : [edx+0x48]
        test al, al
        je public_496e29
        mov eax, dword ptr ss : [esp+0x24]
        mov ebp, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x14], ebp
        fld dword ptr ss : [esp+0x14]
        fsub dword ptr ds : [edx+0x30]
        mov ebp, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x1C], eax
        fld dword ptr ss : [esp+0x1C]
        fsub dword ptr ds : [edx+0x38]
        mov al, byte ptr ds : [edx+4]
        test cl, al
        mov dword ptr ss : [esp+0x18], ebp
        fld st(0)
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp 
        fstp st(2)
        fstp st(0)
        fld dword ptr ds : [edx+0x3C]
        je public_496dcd
        fmul dword ptr ds : [public_5ca220]
        public_496dcd : nop
        mov eax, dword ptr ds : [edx]
        cmp eax, 2
        je public_496de9
        cmp eax, 3
        je public_496de9
        cmp eax, ecx
        je public_496de9
        mov eax, dword ptr ss : [esp+0x10]
        fmul dword ptr ds : [eax+0xF48]
        jmp public_496e10
        public_496de9 : nop
        mov eax, dword ptr ss : [esp+0x10]
        fld dword ptr ds : [eax+0x3F8]
        fmul dword ptr ds : [public_5c75e0]
        fcom dword ptr ds : [public_5c75dc]
        fnstsw ax
        test ah, 5
        jp public_496e0e
        fstp st(0)
        fld dword ptr ds : [public_5c75dc]
        public_496e0e : nop
        fdivp 
        public_496e10 : nop
        fmul dword ptr ds : [public_5d3e6c]
        fld st(0)
        fmul st, st(1)
        fxch 
        fxch st(2)
        fcompp 
        fnstsw ax
        fstp st(0)
        test ah, 0x41
        jnp public_496e3f
        public_496e29 : nop
        mov esi, dword ptr ds : [esi]
        cmp esi, edi
        jne public_496d64
        public_496e33 : nop
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 0x10
        ret 8
        public_496e3f : nop
        pop edi
        pop esi
        pop ebp
        mov eax, edx
        pop ebx
        add esp, 0x10
        ret 8
        UNREACHABLE_TRAP(0x496d40)
    }
}

#undef public_496d64
#undef public_496d7e
#undef public_496dcd
#undef public_496de9
#undef public_496e0e
#undef public_496e10
#undef public_496e29
#undef public_496e33
#undef public_496e3f
