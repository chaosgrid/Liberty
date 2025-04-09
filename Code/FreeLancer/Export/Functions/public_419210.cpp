#include "FreeLancer-PCH.h"


#define public_419233 _public_419233
#define public_419235 _public_419235
#define public_41924b _public_41924b
#define public_419265 _public_419265
#define public_41927a _public_41927a
#define public_419298 _public_419298
#define public_4192b0 _public_4192b0
#define public_4192c3 _public_4192c3
#define public_4192c5 _public_4192c5
#define public_4192d9 _public_4192d9
#define public_4192e2 _public_4192e2

PROC_DECLARE(0x419210, internal_419210, public_419210);
extern "C" NAKED register_t __cdecl internal_419210()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [edi]
        mov ebp, ecx
        mov dword ptr ss : [ebp+0x14], eax
        mov eax, dword ptr ss : [ebp+0x1C]
        cmp dword ptr ds : [edi+8], eax
        jne public_419233
        mov ecx, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ss : [ebp+0x18]
        ja public_419233
        mov bl, 1
        jmp public_419235
        public_419233 : nop
        xor bl, bl
        public_419235 : nop
        mov esi, dword ptr ds : [edi+4]
        mov ecx, dword ptr ss : [ebp+0x18]
        cmp esi, ecx
        je public_41927a
        test esi, esi
        jbe public_419265
        test eax, eax
        je public_41924b
        cmp esi, ecx
        je public_41927a
        public_41924b : nop
        lea edx, ds:[esi*8]
        push edx
        push eax
        call dword ptr ds : [public_5c71bc]
        add esp, 8
        mov dword ptr ss : [ebp+0x1C], eax
        mov dword ptr ss : [ebp+0x18], esi
        jmp public_41927a
        public_419265 : nop
        test eax, eax
        je public_41927a
        push eax
        call dword ptr ds : [public_5c71d8]
        add esp, 4
        mov dword ptr ss : [ebp+0x1C], 0
        public_41927a : nop
        test bl, bl
        jne public_419298
        mov ecx, dword ptr ds : [edi+4]
        mov esi, dword ptr ds : [edi+8]
        mov edi, dword ptr ss : [ebp+0x1C]
        shl ecx, 3
        mov eax, ecx
        shr ecx, 2
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        public_419298 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        fld dword ptr ds : [eax]
        mov edx, dword ptr ss : [ebp+0x18]
        cmp edx, 1
        fst dword ptr ss : [ebp+0x28]
        fstp dword ptr ss : [ebp+0x24]
        jbe public_4192e2
        lea ecx, ds:[eax+8]
        dec edx
        nop 
        public_4192b0 : nop
        fld dword ptr ds : [ecx]
        fld dword ptr ss : [ebp+0x24]
        fcomp 
        fnstsw ax
        test ah, 5
        jp public_4192c3
        fld dword ptr ss : [ebp+0x24]
        jmp public_4192c5
        public_4192c3 : nop
        fld st(0)
        public_4192c5 : nop
        fstp dword ptr ss : [ebp+0x24]
        fld dword ptr ss : [ebp+0x28]
        fcomp 
        fnstsw ax
        test ah, 0x41
        jne public_4192d9
        fstp st(0)
        fld dword ptr ss : [ebp+0x28]
        public_4192d9 : nop
        add ecx, 8
        fstp dword ptr ss : [ebp+0x28]
        dec edx
        jne public_4192b0
        public_4192e2 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x419210)
    }
}

#undef public_419233
#undef public_419235
#undef public_41924b
#undef public_419265
#undef public_41927a
#undef public_419298
#undef public_4192b0
#undef public_4192c3
#undef public_4192c5
#undef public_4192d9
#undef public_4192e2
