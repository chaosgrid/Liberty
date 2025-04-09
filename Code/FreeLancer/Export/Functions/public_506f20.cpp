#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41bd10);
CLANG_FORWARD_PROC_SYMBOL(public_422b80);
CLANG_FORWARD_PROC_SYMBOL(public_507340);
CLANG_FORWARD_PROC_SYMBOL(public_5097c0);
CLANG_FORWARD_PROC_SYMBOL(public_550d40);

#define public_506f50 _public_506f50
#define public_506f7a _public_506f7a
#define public_506f7c _public_506f7c
#define public_506f82 _public_506f82
#define public_506f98 _public_506f98
#define public_506f9c _public_506f9c
#define public_506feb _public_506feb
#define public_50700a _public_50700a
#define public_50705a _public_50705a
#define public_50706b _public_50706b
#define public_50712e _public_50712e
#define public_50714d _public_50714d
#define public_507157 _public_507157
#define public_5071bf _public_5071bf
#define public_507217 _public_507217
#define public_50721f _public_50721f
#define public_507230 _public_507230
#define public_507274 _public_507274
#define public_5072aa _public_5072aa
#define public_5072ac _public_5072ac
#define public_5072d0 _public_5072d0
#define public_5072ef _public_5072ef
#define public_50730e _public_50730e

PROC_DECLARE(0x506f20, internal_506f20, public_506f20);
extern "C" NAKED register_t __cdecl internal_506f20()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        sub esp, 0x28
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov dword ptr ds : [esi+0x1C], eax
        mov al, byte ptr ds : [esi+0x4C]
        xor ebp, ebp
        test al, al
        push edi
        je public_506f9c
        mov edx, dword ptr ds : [esi+0xF8]
        mov dword ptr ds : [esi+0x2B4], ebp
        mov ecx, dword ptr ds : [edx]
        cmp ecx, edx
        je public_506f82
        nop 
        lea esp, ss:[esp]
        public_506f50 : nop
        mov eax, dword ptr ds : [ecx+8]
        fld dword ptr ds : [eax+0xC0]
        fmul dword ptr ds : [public_5c75e0]
        fadd dword ptr ds : [eax+0xA8]
        fcom dword ptr ds : [esi+0x2B4]
        fnstsw ax
        test ah, 0x41
        jne public_506f7a
        fstp dword ptr ds : [esi+0x2B4]
        jmp public_506f7c
        public_506f7a : nop
        fstp st(0)
        public_506f7c : nop
        mov ecx, dword ptr ds : [ecx]
        cmp ecx, edx
        jne public_506f50
        public_506f82 : nop
        mov eax, dword ptr ds : [esi+0x34]
        cmp eax, ebp
        je public_506f98
        fld dword ptr ds : [esi+0x2B4]
        fld st(0)
        fmul st, st(1)
        fstp dword ptr ds : [eax+0x14]
        fstp st(0)
        public_506f98 : nop
        mov byte ptr ds : [esi+0x4C], 0
        public_506f9c : nop
        mov edi, dword ptr ss : [esp+0x3C]
        mov ecx, dword ptr ds : [edi]
        push edi
        call dword ptr ds : [ecx+0xC]
        fld dword ptr ds : [esi+0x294]
        fcomp qword ptr ds : [public_5c89b8]
        mov ecx, eax
        mov edx, ecx
        mov eax, dword ptr ds : [edx]
        mov dword ptr ss : [esp+0x2C], eax
        mov eax, dword ptr ds : [edx+4]
        mov dword ptr ss : [esp+0x30], eax
        fnstsw ax
        mov edx, dword ptr ds : [edx+8]
        test ah, 5
        mov dword ptr ss : [esp+0x34], edx
        jp public_50700a
        fld dword ptr ds : [esi+0x58]
        fcomp dword ptr ds : [public_5c75dc]
        fnstsw ax
        test ah, 0x41
        je public_506feb
        mov al, byte ptr ds : [edi+0xBC]
        test al, al
        je public_50700a
        public_506feb : nop
        mov edx, dword ptr ds : [ecx]
        sub esp, 0xC
        mov eax, esp
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ds : [eax+8], ecx
        mov ecx, esi
        call public_507340
        mov dword ptr ds : [esi+0x58], ebp
        public_50700a : nop
        fld dword ptr ds : [esi+0x294]
        fcomp qword ptr ds : [public_5c8ba8]
        fnstsw ax
        test ah, 0x41
        jne public_50706b
        mov al, byte ptr ds : [edi+0xBC]
        test al, al
        jne public_50705a
        fld dword ptr ds : [esi+0x294]
        fcomp qword ptr ds : [public_5c8ba8]
        fnstsw ax
        test ah, 0x41
        jne public_50706b
        fld dword ptr ds : [esi+0x50]
        fcomp dword ptr ds : [public_5c94f8]
        fnstsw ax
        test ah, 0x41
        jne public_50706b
        fld dword ptr ds : [esi+0x58]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x44
        jnp public_50706b
        public_50705a : nop
        mov ecx, dword ptr ds : [esi+0x34]
        cmp ecx, ebp
        je public_50706b
        mov edx, dword ptr ds : [ecx]
        lea eax, ss:[esp+0x2C]
        push eax
        call dword ptr ds : [edx+8]
        public_50706b : nop
        mov ecx, dword ptr ds : [esi+0x20]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x10]
        fld dword ptr ss : [esp+0x34]
        fsub dword ptr ds : [eax+8]
        sub esp, 0xC
        lea ecx, ss:[esp+0x2C]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x3C]
        fsub dword ptr ds : [eax+4]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x38]
        fsub dword ptr ds : [eax]
        fstp dword ptr ss : [esp]
        call public_422b80
        mov ecx, dword ptr ds : [esi+0x20]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x30]
        fstp st(0)
        fld dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ds : [esi+0x20]
        fmul dword ptr ss : [esp+0x24]
        lea eax, ss:[esp+0x20]
        fld dword ptr ss : [esp+0x28]
        push eax
        fmul dword ptr ss : [esp+0x2C]
        faddp 
        fld dword ptr ss : [esp+0x24]
        fmul dword ptr ss : [esp+0x24]
        faddp 
        fsqrt 
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ds : [esi+0x298]
        fadd dword ptr ds : [esi+0x29C]
        fstp dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0x14]
        fdivr qword ptr ds : [public_5c89b8]
        fld dword ptr ss : [esp+0x24]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x24]
        fld dword ptr ss : [esp+0x28]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x28]
        fld dword ptr ss : [esp+0x2C]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x2C]
        mov edx, dword ptr ds : [ecx]
        fstp st(0)
        call dword ptr ds : [edx+0x40]
        fsubr dword ptr ss : [esp+0x10]
        fst dword ptr ss : [esp+0x10]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x41
        jne public_50712e
        mov dword ptr ds : [esi+0x294], ebp
        jmp public_507157
        public_50712e : nop
        fld dword ptr ss : [esp+0x10]
        fchs 
        fcom dword ptr ss : [esp+0x14]
        fnstsw ax
        test ah, 0x41
        jne public_50714d
        fstp st(0)
        mov dword ptr ds : [esi+0x294], 0x3F800000
        jmp public_507157
        public_50714d : nop
        fdiv dword ptr ss : [esp+0x14]
        fstp dword ptr ds : [esi+0x294]
        public_507157 : nop
        fld dword ptr ds : [esi+0x294]
        fcomp qword ptr ds : [public_5c8ba8]
        fnstsw ax
        test ah, 0x41
        jne public_507274
        fld dword ptr ds : [esi+0x298]
        mov eax, dword ptr ds : [esi+0x24]
        cmp eax, ebp
        fadd dword ptr ds : [esi+0x29C]
        mov ecx, dword ptr ds : [esi+0x29C]
        lea edi, ds:[esi+0x24]
        fstp dword ptr ds : [esi+0x2B0]
        mov dword ptr ds : [esi+0x2AC], ecx
        je public_5071bf
        mov eax, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x2C]
        push ecx
        mov ecx, eax
        call dword ptr ds : [edx]
        fst dword ptr ds : [esi+0x28]
        fcomp dword ptr ds : [public_5db098]
        fnstsw ax
        test ah, 5
        jp public_5071bf
        mov dword ptr ds : [edi], ebp
        mov dword ptr ds : [edi+4], ebp
        mov byte ptr ds : [edi+8], 0
        mov dword ptr ds : [edi+0xC], ebp
        public_5071bf : nop
        cmp dword ptr ds : [edi], ebp
        jne public_507230
        mov ecx, dword ptr ds : [esi+0x34]
        cmp ecx, ebp
        je public_507230
        push 1
        lea edx, ds:[esi+0x28]
        push edx
        push edi
        lea eax, ss:[esp+0x38]
        push eax
        call dword ptr ds : [public_5c6604]
        mov eax, dword ptr ds : [edi]
        cmp eax, ebp
        je public_507230
        mov ecx, dword ptr ds : [eax+0xC]
        lea edx, ss:[esp+0x14]
        push edx
        lea eax, ss:[esp+0x1C]
        mov dword ptr ss : [esp+0x18], ecx
        lea ebx, ds:[esi+0x38]
        push eax
        mov ecx, ebx
        call public_41bd10
        mov ebx, dword ptr ds : [ebx+4]
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, ebx
        je public_507217
        mov ecx, dword ptr ss : [esp+0x14]
        cmp ecx, dword ptr ds : [eax+0xC]
        jb public_507217
        lea eax, ss:[esp+0x18]
        jmp public_50721f
        public_507217 : nop
        mov dword ptr ss : [esp+0x1C], ebx
        lea eax, ss:[esp+0x1C]
        public_50721f : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, dword ptr ds : [esi+0x3C]
        je public_507230
        mov byte ptr ds : [esi+0x2C], 1
        mov edx, dword ptr ds : [eax+0x10]
        mov dword ptr ds : [esi+0x30], edx
        public_507230 : nop
        mov edi, dword ptr ds : [edi]
        cmp edi, ebp
        je public_5072ac
        fld dword ptr ds : [esi+0x28]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x41
        jne public_5072ac
        fld dword ptr ds : [edi+8]
        fcom dword ptr ds : [esi+0x2AC]
        fnstsw ax
        test ah, 0x41
        jne public_5072aa
        fld dword ptr ds : [public_5c75dc]
        fsub dword ptr ds : [esi+0x28]
        fmul dword ptr ds : [esi+0x2B0]
        fxch 
        fmul dword ptr ds : [esi+0x28]
        faddp 
        fstp dword ptr ds : [esi+0x2B0]
        jmp public_5072ac
        public_507274 : nop
        fld dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [esi+0x270]
        cmp ecx, ebp
        fadd dword ptr ds : [esi+0x29C]
        fst dword ptr ds : [esi+0x2AC]
        fadd dword ptr ds : [esi+0x298]
        fstp dword ptr ds : [esi+0x2B0]
        je public_5072ac
        test byte ptr ds : [ecx+0xB4], 8
        je public_5072ac
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+8]
        jmp public_5072ac
        public_5072aa : nop
        fstp st(0)
        public_5072ac : nop
        fld dword ptr ss : [esp+0x10]
        fcomp qword ptr ds : [public_5db090]
        fnstsw ax
        test ah, 5
        jp public_5072ef
        mov ebx, dword ptr ds : [esi+0xF8]
        mov edi, dword ptr ds : [ebx]
        cmp edi, ebx
        je public_5072ef
        mov ebp, dword ptr ss : [esp+0x40]
        lea ecx, ds:[ecx]
        public_5072d0 : nop
        mov ecx, dword ptr ds : [esi+0x34]
        mov edx, dword ptr ds : [esi+0x294]
        mov eax, dword ptr ss : [esp+0x3C]
        push ecx
        mov ecx, dword ptr ds : [edi+8]
        push edx
        push ebp
        push eax
        call public_550d40
        mov edi, dword ptr ds : [edi]
        cmp edi, ebx
        jne public_5072d0
        public_5072ef : nop
        fld dword ptr ds : [esi+0x294]
        fcomp dword ptr ds : [public_5c75dc]
        fnstsw ax
        test ah, 1
        jne public_50730e
        lea ecx, ss:[esp+0x2C]
        push ecx
        mov ecx, esi
        call public_5097c0
        public_50730e : nop
        fld dword ptr ss : [esp+0x40]
        pop edi
        fadd dword ptr ds : [esi+0x58]
        fstp dword ptr ds : [esi+0x58]
        fld dword ptr ss : [esp+0x3C]
        fadd dword ptr ds : [esi+0x50]
        fstp dword ptr ds : [esi+0x50]
        fld dword ptr ss : [esp+0x3C]
        fadd dword ptr ds : [esi+0x54]
        fstp dword ptr ds : [esi+0x54]
        pop esi
        pop ebp
        pop ebx
        add esp, 0x28
        ret 8
        UNREACHABLE_TRAP(0x506f20)
    }
}

#undef public_506f50
#undef public_506f7a
#undef public_506f7c
#undef public_506f82
#undef public_506f98
#undef public_506f9c
#undef public_506feb
#undef public_50700a
#undef public_50705a
#undef public_50706b
#undef public_50712e
#undef public_50714d
#undef public_507157
#undef public_5071bf
#undef public_507217
#undef public_50721f
#undef public_507230
#undef public_507274
#undef public_5072aa
#undef public_5072ac
#undef public_5072d0
#undef public_5072ef
#undef public_50730e
