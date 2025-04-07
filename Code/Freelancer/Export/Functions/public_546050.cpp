#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_406880);
CLANG_FORWARD_PROC_SYMBOL(public_420d60);
CLANG_FORWARD_PROC_SYMBOL(public_421050);
CLANG_FORWARD_PROC_SYMBOL(public_50c620);
CLANG_FORWARD_PROC_SYMBOL(public_5125f0);
CLANG_FORWARD_PROC_SYMBOL(public_533780);
CLANG_FORWARD_PROC_SYMBOL(public_533880);
CLANG_FORWARD_PROC_SYMBOL(public_533930);
CLANG_FORWARD_PROC_SYMBOL(public_5462d0);
CLANG_FORWARD_PROC_SYMBOL(public_546380);
CLANG_FORWARD_PROC_SYMBOL(public_546400);
CLANG_FORWARD_PROC_SYMBOL(public_54baf0);
CLANG_FORWARD_PROC_SYMBOL(public_54bc80);
CLANG_FORWARD_PROC_SYMBOL(public_5792b0);
CLANG_FORWARD_PROC_SYMBOL(public_5b73e0);

#define public_546087 _public_546087
#define public_546105 _public_546105
#define public_546107 _public_546107
#define public_546152 _public_546152
#define public_54617a _public_54617a
#define public_5461cf _public_5461cf
#define public_546283 _public_546283

PROC_DECLARE(0x546050, internal_546050, public_546050);
extern "C" NAKED register_t __cdecl internal_546050()
{
    __asm
    {
        sub esp, 0x88
        push esi
        mov esi, ecx
        call public_54bc80
        test al, al
        je public_546087
        call public_54baf0
        cmp eax, esi
        jne public_546087
        mov eax, dword ptr ss : [esp+0x90]
        mov word ptr ds : [eax], 0
        mov word ptr ds : [eax+2], 0xFFFF
        pop esi
        add esp, 0x88
        ret 0x14
        public_546087 : nop
        push ebx
        push ebp
        push 0x1D
        call public_5792b0
        mov ebx, dword ptr ss : [esp+0xA0]
        add esp, 4
        test eax, eax
        jle public_5461cf
        cmp word ptr ss : [esp+0xA0], 3
        jb public_5461cf
        mov ax, word ptr ss : [esp+0xA2]
        cmp ax, 2
        jge public_5461cf
        cmp ax, 1
        jge public_5461cf
        lea ebp, ds:[esi+0x108]
        mov ecx, ebp
        call public_420d60
        test al, al
        je public_5461cf
        test esi, esi
        je public_546105
        lea eax, ds:[esi+0xC]
        test eax, eax
        je public_546105
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        je public_546105
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x103
        cmp ecx, 0x103
        je public_546107
        public_546105 : nop
        xor eax, eax
        public_546107 : nop
        fld dword ptr ds : [eax+0x140]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x41
        jne public_546152
        lea edx, ss:[esp+0xA8]
        push edx
        push 3
        call public_533930
        mov edx, dword ptr ds : [esi]
        add esp, 8
        lea eax, ss:[esp+0xC]
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+0x1C]
        push eax
        call public_5462d0
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [esi+0x10C]
        push eax
        push ecx
        call public_533880
        add esp, 0x10
        public_546152 : nop
        mov edx, dword ptr ds : [esi]
        push edi
        push ebx
        mov ecx, esi
        call dword ptr ds : [edx+0x184]
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x10]
        mov edi, eax
        mov eax, dword ptr ds : [public_678b68]
        test eax, eax
        jne public_54617a
        call public_5b73e0
        mov dword ptr ds : [public_678b68], eax
        public_54617a : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ds:[esi+0x118]
        push edx
        push edi
        lea edx, ss:[esp+0x40]
        push edx
        push eax
        call dword ptr ds : [ecx+0x1C]
        lea eax, ss:[esp+0x38]
        push eax
        lea ecx, ss:[esp+0x6C]
        call public_406880
        lea ecx, ss:[esp+0x68]
        push ecx
        mov ecx, ebp
        call public_421050
        mov edx, dword ptr ds : [public_5c6df0]
        mov eax, dword ptr ds : [edx]
        mov edx, dword ptr ss : [esp+0xAC]
        mov ecx, dword ptr ds : [eax]
        push edx
        mov edx, dword ptr ds : [esi+0x10C]
        push 0
        push 8
        push 0x3F800000
        push edx
        push ebx
        push eax
        call dword ptr ds : [ecx+0x1C]
        pop edi
        public_5461cf : nop
        push 0
        call public_546400
        add esp, 4
        call public_50c620
        test eax, eax
        je public_546283
        mov ecx, dword ptr ds : [eax+8]
        test ecx, ecx
        je public_546283
        mov eax, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [ecx+8]
        test ecx, ecx
        je public_546283
        lea edx, ss:[esp+0x28]
        push edx
        call public_5125f0
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax]
        fld dword ptr ds : [eax+8]
        fsub dword ptr ss : [esp+0x30]
        lea ecx, ss:[esp+0x10]
        fld dword ptr ds : [eax+4]
        push ecx
        fsub dword ptr ss : [esp+0x30]
        lea edx, ss:[esp+0x20]
        fld dword ptr ds : [eax]
        push edx
        fsub dword ptr ss : [esp+0x30]
        mov dword ptr ss : [esp+0x18], 0x3F800000
        fld st(0)
        mov dword ptr ss : [esp+0x1C], 0x3F800000
        fmul st, st(1)
        mov dword ptr ss : [esp+0x20], 0x3F800000
        fld st(2)
        fmul st, st(3)
        faddp 
        fld st(3)
        fmul st, st(4)
        faddp 
        fsqrt 
        fdivr dword ptr ds : [public_5c75dc]
        fstp dword ptr ss : [esp+0x14]
        fmul dword ptr ss : [esp+0x14]
        fstp dword ptr ss : [esp+0x24]
        fmul dword ptr ss : [esp+0x14]
        fstp dword ptr ss : [esp+0x28]
        fmul dword ptr ss : [esp+0x14]
        fstp dword ptr ss : [esp+0x2C]
        call public_546380
        add esp, 8
        public_546283 : nop
        mov eax, dword ptr ss : [esp+0xA8]
        mov ecx, dword ptr ss : [esp+0xA4]
        mov edx, dword ptr ss : [esp+0xA0]
        push eax
        push ecx
        push edx
        push ebx
        lea eax, ss:[esp+0x1C]
        push eax
        mov ecx, esi
        call public_533780
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ss : [esp+0x98]
        pop ebp
        pop ebx
        mov dword ptr ds : [ecx], eax
        mov eax, ecx
        pop esi
        add esp, 0x88
        ret 0x14
        UNREACHABLE_TRAP(0x546050)
    }
}

#undef public_546087
#undef public_546105
#undef public_546107
#undef public_546152
#undef public_54617a
#undef public_5461cf
#undef public_546283
