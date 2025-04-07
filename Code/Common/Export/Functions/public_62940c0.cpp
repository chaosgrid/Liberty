#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62940c0);
CLANG_FORWARD_PROC_SYMBOL(public_6391cf0);

#define public_629420a _public_629420a
#define public_629424d _public_629424d
#define public_62942b0 _public_62942b0
#define public_62942c0 _public_62942c0
#define public_62942d3 _public_62942d3
#define public_62942e0 _public_62942e0
#define public_62942f3 _public_62942f3
#define public_6294326 _public_6294326
#define public_6294333 _public_6294333
#define public_6294346 _public_6294346
#define public_6294353 _public_6294353
#define public_6294366 _public_6294366
#define public_629438e _public_629438e
#define public_62943a7 _public_62943a7
#define public_62943cf _public_62943cf
#define public_6294410 _public_6294410
#define public_6294425 _public_6294425
#define public_629442d _public_629442d
#define public_629443d _public_629443d

PROC_DECLARE(0x62940c0, internal_62940c0, public_62940c0);
extern "C" NAKED register_t __cdecl internal_62940c0()
{
    __asm
    {
        sub esp, 0x130
        mov eax, dword ptr ds : [public_6399040]
        mov edx, dword ptr ss : [esp+0x134]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push ebx
        push esi
        push edi
        push edx
        push eax
        mov dword ptr ss : [esp+0x2C], 0
        call dword ptr ds : [ecx+0x64]
        mov esi, eax
        cmp esi, 0xFFFFFFFF
        mov dword ptr ss : [esp+0x20], esi
        je public_629443d
        mov ebx, dword ptr ss : [esp+0x144]
        mov edi, dword ptr ds : [public_6399024]
        push ebx
        mov dword ptr ss : [esp+0x1C], ebx
        call edi
        add esp, 4
        lea edx, ss:[esp+0xD0]
        push edx
        mov dword ptr ss : [esp+0x20], eax
        mov eax, dword ptr ds : [public_6399064]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x1C]
        push edx
        push esi
        push eax
        call dword ptr ds : [ecx+0xC]
        test al, al
        je public_629443d
        mov eax, dword ptr ds : [public_6399040]
        mov edx, dword ptr ss : [esp+0x148]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push ebp
        push edx
        push eax
        call dword ptr ds : [ecx+0x64]
        mov ebp, eax
        cmp ebp, 0xFFFFFFFF
        mov dword ptr ss : [esp+0x1C], ebp
        je public_629442d
        mov esi, dword ptr ss : [esp+0x150]
        push esi
        mov dword ptr ss : [esp+0x14], esi
        call edi
        add esp, 4
        lea edx, ss:[esp+0x8C]
        push edx
        mov dword ptr ss : [esp+0x18], eax
        mov eax, dword ptr ds : [public_6399064]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x14]
        push edx
        push ebp
        push eax
        call dword ptr ds : [ecx+0xC]
        test al, al
        je public_6294425
        mov ecx, dword ptr ss : [esp+0x8C]
        mov eax, 2
        cmp ecx, eax
        jne public_62943cf
        cmp dword ptr ss : [esp+0xD4], eax
        jne public_62943cf
        mov ecx, dword ptr ss : [esp+0xDC]
        mov edx, dword ptr ss : [esp+0xE0]
        mov dword ptr ss : [esp+0x30], eax
        mov eax, dword ptr ss : [esp+0xD8]
        mov dword ptr ss : [esp+0x34], eax
        mov eax, dword ptr ss : [esp+0x90]
        mov dword ptr ss : [esp+0x40], eax
        mov eax, dword ptr ds : [public_63fc114]
        test eax, eax
        mov dword ptr ss : [esp+0x38], ecx
        mov ecx, dword ptr ss : [esp+0x94]
        mov dword ptr ss : [esp+0x3C], edx
        mov edx, dword ptr ss : [esp+0x98]
        mov dword ptr ss : [esp+0x44], ecx
        mov dword ptr ss : [esp+0x48], edx
        jne public_629420a
        call public_6391cf0
        mov dword ptr ds : [public_63fc114], eax
        public_629420a : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x9C]
        push edx
        lea edx, ss:[esp+0xE8]
        push edx
        lea edx, ss:[esp+0x124]
        push edx
        push eax
        call dword ptr ds : [ecx+0x20]
        mov eax, dword ptr ds : [public_63fc114]
        test eax, eax
        mov ecx, 9
        lea esi, ss:[esp+0x11C]
        lea edi, ss:[esp+0x4C]
        rep movsd
        jne public_629424d
        call public_6391cf0
        mov dword ptr ds : [public_63fc114], eax
        public_629424d : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0xC0]
        push edx
        lea edx, ss:[esp+0x50]
        push edx
        lea edx, ss:[esp+0x18]
        push edx
        push eax
        call dword ptr ds : [ecx+0x2C]
        fld dword ptr ss : [esp+0x118]
        fsub dword ptr ss : [esp+0x114]
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0x18]
        fcom dword ptr ds : [public_639c9e8]
        mov dword ptr ss : [esp+0x70], eax
        mov dword ptr ss : [esp+0x74], ecx
        mov dword ptr ss : [esp+0x78], edx
        fnstsw ax
        test ah, 1
        jne public_62942b0
        mov dword ptr ss : [esp+0x114], 0xC0490FDB
        mov dword ptr ss : [esp+0x118], 0x40490FDB
        jmp public_62942f3
        public_62942b0 : nop
        fcom qword ptr ds : [public_639c430]
        fnstsw ax
        test ah, 5
        jp public_62942d3
        lea ecx, ds:[ecx]
        public_62942c0 : nop
        fadd qword ptr ds : [public_639c9e0]
        fcom qword ptr ds : [public_639c430]
        fnstsw ax
        test ah, 5
        jnp public_62942c0
        public_62942d3 : nop
        fcom qword ptr ds : [public_639c9d8]
        fnstsw ax
        test ah, 1
        jne public_62942f3
        public_62942e0 : nop
        fsub qword ptr ds : [public_639c9e0]
        fcom qword ptr ds : [public_639c9d8]
        fnstsw ax
        test ah, 1
        je public_62942e0
        public_62942f3 : nop
        fld dword ptr ss : [esp+0xD0]
        fsub dword ptr ss : [esp+0xCC]
        fcom dword ptr ds : [public_639c9e8]
        fnstsw ax
        test ah, 1
        jne public_6294326
        mov dword ptr ss : [esp+0xCC], 0xC0490FDB
        mov dword ptr ss : [esp+0xD0], 0x40490FDB
        jmp public_6294366
        public_6294326 : nop
        fcom qword ptr ds : [public_639c430]
        fnstsw ax
        test ah, 5
        jp public_6294346
        public_6294333 : nop
        fadd qword ptr ds : [public_639c9e0]
        fcom qword ptr ds : [public_639c430]
        fnstsw ax
        test ah, 5
        jnp public_6294333
        public_6294346 : nop
        fcom qword ptr ds : [public_639c9d8]
        fnstsw ax
        test ah, 1
        jne public_6294366
        public_6294353 : nop
        fsub qword ptr ds : [public_639c9e0]
        fcom qword ptr ds : [public_639c9d8]
        fnstsw ax
        test ah, 1
        je public_6294353
        public_6294366 : nop
        fxch 
        fcomp 
        fnstsw ax
        fstp st(0)
        test ah, 5
        jp public_629438e
        mov eax, dword ptr ss : [esp+0x114]
        mov ecx, dword ptr ss : [esp+0x118]
        mov dword ptr ss : [esp+0x7C], eax
        mov dword ptr ss : [esp+0x80], ecx
        jmp public_62943a7
        public_629438e : nop
        mov edx, dword ptr ss : [esp+0xCC]
        mov eax, dword ptr ss : [esp+0xD0]
        mov dword ptr ss : [esp+0x7C], edx
        mov dword ptr ss : [esp+0x80], eax
        public_62943a7 : nop
        mov ecx, dword ptr ds : [public_6399040]
        mov eax, dword ptr ds : [ecx]
        mov esi, dword ptr ss : [esp+0x14C]
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x30]
        push ecx
        mov ecx, dword ptr ss : [esp+0x148]
        push esi
        push ecx
        push eax
        call dword ptr ds : [edx+0xBC]
        jmp public_6294410
        public_62943cf : nop
        push esi
        mov dword ptr ss : [esp+0x14], esi
        call edi
        push ebx
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ss : [esp+0x30], ebx
        call edi
        mov edx, dword ptr ds : [public_6399064]
        mov esi, dword ptr ss : [esp+0x154]
        add esp, 8
        mov dword ptr ss : [esp+0x2C], eax
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x10]
        push edx
        push esi
        lea edx, ss:[esp+0x30]
        push edx
        mov edx, dword ptr ss : [esp+0x150]
        push edx
        push eax
        call dword ptr ds : [ecx+0x18]
        public_6294410 : nop
        mov eax, dword ptr ds : [public_6399040]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push esi
        push eax
        call dword ptr ds : [ecx+0xC4]
        mov dword ptr ss : [esp+0x28], eax
        public_6294425 : nop
        mov ebp, dword ptr ss : [esp+0x1C]
        mov esi, dword ptr ss : [esp+0x24]
        public_629442d : nop
        mov edx, dword ptr ds : [public_6399040]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push ebp
        push eax
        call dword ptr ds : [ecx+0x3C]
        pop ebp
        public_629443d : nop
        mov edx, dword ptr ds : [public_6399040]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push esi
        push eax
        call dword ptr ds : [ecx+0x3C]
        mov eax, dword ptr ss : [esp+0x24]
        pop edi
        pop esi
        pop ebx
        add esp, 0x130
        ret 
        UNREACHABLE_TRAP(0x62940c0)
    }
}

#undef public_629420a
#undef public_629424d
#undef public_62942b0
#undef public_62942c0
#undef public_62942d3
#undef public_62942e0
#undef public_62942f3
#undef public_6294326
#undef public_6294333
#undef public_6294346
#undef public_6294353
#undef public_6294366
#undef public_629438e
#undef public_62943a7
#undef public_62943cf
#undef public_6294410
#undef public_6294425
#undef public_629442d
#undef public_629443d
