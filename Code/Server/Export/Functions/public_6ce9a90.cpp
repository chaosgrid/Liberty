#include "Server-PCH.h"


#define public_6ce9abb _public_6ce9abb
#define public_6ce9abd _public_6ce9abd
#define public_6ce9b20 _public_6ce9b20
#define public_6ce9b9a _public_6ce9b9a
#define public_6ce9bb1 _public_6ce9bb1
#define public_6ce9bc8 _public_6ce9bc8
#define public_6ce9bd7 _public_6ce9bd7
#define public_6ce9c1c _public_6ce9c1c
#define public_6ce9c43 _public_6ce9c43

PROC_DECLARE(0x6ce9a90, internal_6ce9a90, public_6ce9a90);
extern "C" NAKED register_t __cdecl internal_6ce9a90()
{
    __asm
    {
        sub esp, 0x34
        push ebx
        push ebp
        mov ebp, ecx
        mov eax, dword ptr ss : [ebp+0x10]
        xor bl, bl
        test eax, eax
        push esi
        push edi
        mov byte ptr ss : [esp+0x13], bl
        je public_6ce9abb
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x103
        cmp ecx, 0x103
        jne public_6ce9abb
        mov esi, eax
        jmp public_6ce9abd
        public_6ce9abb : nop
        xor esi, esi
        public_6ce9abd : nop
        mov edi, dword ptr ss : [esp+0x48]
        mov edx, dword ptr ds : [edi+0x18]
        fld dword ptr ds : [edx+4]
        push 0x100
        fld st(0)
        lea ecx, ss:[esp+0x38]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x20]
        fstp st(0)
        fld dword ptr ss : [esp+0x20]
        fmul dword ptr ds : [public_6d655d4]
        fstp dword ptr ss : [esp+0x24]
        fld dword ptr ss : [esp+0x20]
        fmul dword ptr ds : [public_6d655d0]
        fstp dword ptr ss : [esp+0x28]
        call dword ptr ds : [public_6d64204]
        lea eax, ss:[esp+0x34]
        lea ecx, ds:[esi+0xE4]
        push eax
        mov dword ptr ss : [esp+0x1C], ecx
        call dword ptr ds : [public_6d6428c]
        mov esi, eax
        test esi, esi
        je public_6ce9c43
        nop 
        lea esp, ss:[esp]
        public_6ce9b20 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0xC]
        test al, al
        je public_6ce9c1c
        mov eax, dword ptr ds : [esi]
        lea ecx, ss:[esp+0x14]
        push ecx
        mov ebx, 1
        mov ecx, esi
        mov byte ptr ss : [esp+0x17], bl
        call dword ptr ds : [eax+0x7C]
        mov edx, dword ptr ds : [esi]
        lea eax, ss:[esp+0x28]
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+0x70]
        fld dword ptr ds : [edi+0xC]
        fsub dword ptr ss : [esp+0x28]
        fld dword ptr ds : [edi+0x10]
        fsub dword ptr ss : [esp+0x2C]
        fld dword ptr ds : [edi+0x14]
        fsub dword ptr ss : [esp+0x30]
        fld st(0)
        fmul st, st(1)
        fld st(3)
        fmul st, st(4)
        faddp 
        fld st(2)
        fmul st, st(3)
        faddp 
        fld dword ptr ss : [esp+0x14]
        fmul dword ptr ss : [esp+0x14]
        fsubp 
        fstp st(3)
        fstp st(0)
        fstp st(0)
        fcom dword ptr ds : [public_6d65188]
        fnstsw ax
        test ah, 0x41
        je public_6ce9b9a
        fstp st(0)
        fld dword ptr ds : [public_6d65188]
        public_6ce9b9a : nop
        fcom dword ptr ss : [esp+0x24]
        fnstsw ax
        test ah, 5
        jp public_6ce9bb1
        fstp st(0)
        mov dword ptr ss : [esp+0x48], 3
        jmp public_6ce9bd7
        public_6ce9bb1 : nop
        fcom dword ptr ss : [esp+0x20]
        fnstsw ax
        test ah, 5
        jp public_6ce9bc8
        fstp st(0)
        mov dword ptr ss : [esp+0x48], 2
        jmp public_6ce9bd7
        public_6ce9bc8 : nop
        fcomp dword ptr ss : [esp+0x1C]
        fnstsw ax
        test ah, 5
        jp public_6ce9c1c
        mov dword ptr ss : [esp+0x48], ebx
        public_6ce9bd7 : nop
        mov eax, dword ptr ds : [edi+0x18]
        fld dword ptr ds : [eax+0xC]
        mov ecx, dword ptr ds : [public_6d64270]
        fmul dword ptr ds : [ecx]
        mov ecx, esi
        fadd dword ptr ds : [eax+0x10]
        fild dword ptr ss : [esp+0x48]
        fmul dword ptr ds : [public_6d655cc]
        fmulp 
        fstp dword ptr ss : [esp+0x48]
        call dword ptr ds : [public_6d64288]
        fld dword ptr ds : [eax+0x28]
        mov eax, dword ptr ss : [esp+0x4C]
        fmul dword ptr ss : [esp+0x48]
        mov edx, dword ptr ss : [ebp]
        push eax
        push ecx
        fstp dword ptr ss : [esp]
        push esi
        mov ecx, ebp
        call dword ptr ds : [edx+0x214]
        public_6ce9c1c : nop
        lea ecx, ss:[esp+0x34]
        push ecx
        mov ecx, dword ptr ss : [esp+0x1C]
        call dword ptr ds : [public_6d6428c]
        mov esi, eax
        test esi, esi
        jne public_6ce9b20
        mov al, byte ptr ss : [esp+0x13]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x34
        ret 8
        public_6ce9c43 : nop
        pop edi
        pop esi
        pop ebp
        mov al, bl
        pop ebx
        add esp, 0x34
        ret 8
        UNREACHABLE_TRAP(0x6ce9a90)
    }
}

#undef public_6ce9abb
#undef public_6ce9abd
#undef public_6ce9b20
#undef public_6ce9b9a
#undef public_6ce9bb1
#undef public_6ce9bc8
#undef public_6ce9bd7
#undef public_6ce9c1c
#undef public_6ce9c43
