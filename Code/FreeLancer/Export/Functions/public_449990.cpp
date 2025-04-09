#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_449990);
CLANG_FORWARD_PROC_SYMBOL(public_454910);
CLANG_FORWARD_PROC_SYMBOL(public_556cd0);
CLANG_FORWARD_PROC_SYMBOL(public_556ce0);
CLANG_FORWARD_PROC_SYMBOL(public_556e00);
CLANG_FORWARD_PROC_SYMBOL(public_556f10);
CLANG_FORWARD_PROC_SYMBOL(public_5b73e0);

#define public_4499ce _public_4499ce
#define public_4499e1 _public_4499e1
#define public_4499e9 _public_4499e9
#define public_449a0a _public_449a0a
#define public_449ac2 _public_449ac2
#define public_449b61 _public_449b61
#define public_449bb2 _public_449bb2
#define public_449c75 _public_449c75

PROC_DECLARE(0x449990, internal_449990, public_449990);
extern "C" NAKED register_t __cdecl internal_449990()
{
    __asm
    {
        sub esp, 0x84
        push ebx
        push ebp
        mov ebp, ecx
        mov al, byte ptr ss : [ebp+0x1338]
        test al, al
        push esi
        push edi
        je public_449c75
        fld dword ptr ss : [esp+0x98]
        xor bl, bl
        fadd dword ptr ss : [ebp+0x1344]
        fst dword ptr ss : [ebp+0x1344]
        fcomp dword ptr ss : [ebp+0x133C]
        fnstsw ax
        test ah, 0x41
        jne public_4499ce
        mov bl, 1
        public_4499ce : nop
        call public_454910
        test al, al
        je public_4499e1
        mov al, byte ptr ss : [ebp+0x1340]
        test al, al
        jne public_4499e9
        public_4499e1 : nop
        test bl, bl
        je public_449ac2
        public_4499e9 : nop
        mov byte ptr ss : [ebp+0x1338], 0
        mov eax, dword ptr ds : [public_668ac0]
        test eax, eax
        mov byte ptr ds : [public_66d359], 0
        jne public_449a0a
        call public_5b73e0
        mov dword ptr ds : [public_668ac0], eax
        public_449a0a : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[ebp+0x1348]
        push edx
        lea edx, ss:[esp+0x74]
        push edx
        push eax
        call dword ptr ds : [ecx+0x54]
        mov ecx, 9
        lea esi, ss:[esp+0x70]
        lea edi, ss:[esp+0x40]
        rep movsd
        lea eax, ss:[ebp+0x1358]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x64], ecx
        lea ecx, ss:[esp+0x40]
        mov dword ptr ss : [esp+0x68], edx
        mov edx, dword ptr ss : [ebp+0x500]
        push ecx
        push edx
        mov dword ptr ss : [esp+0x74], eax
        call public_556cd0
        mov eax, dword ptr ss : [ebp+0x1364]
        mov ecx, dword ptr ss : [ebp+0x500]
        push eax
        push ecx
        call public_556ce0
        mov edx, dword ptr ss : [ebp+0x1368]
        mov eax, dword ptr ss : [ebp+0x500]
        push edx
        push eax
        call public_556e00
        mov ecx, dword ptr ss : [ebp+0x136C]
        mov edx, dword ptr ss : [ebp+0x500]
        push ecx
        push edx
        call public_556f10
        mov eax, dword ptr ss : [ebp+0x1398]
        add esp, 0x20
        test eax, eax
        je public_449c75
        mov ecx, dword ptr ss : [ebp+0x13A0]
        mov edx, dword ptr ss : [ebp+0x139C]
        push 0
        push ecx
        push edx
        call eax
        add esp, 0xC
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x84
        ret 4
        public_449ac2 : nop
        fld dword ptr ss : [ebp+0x1344]
        mov eax, dword ptr ds : [public_668ac0]
        test eax, eax
        fdiv dword ptr ss : [ebp+0x133C]
        fmul dword ptr ds : [public_5c8a5c]
        fcos 
        fadd dword ptr ds : [public_5c75dc]
        fmul dword ptr ds : [public_5c75e0]
        fsubr dword ptr ds : [public_5c75dc]
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ss : [ebp+0x1358]
        fsub dword ptr ss : [ebp+0x1380]
        fld dword ptr ss : [ebp+0x135C]
        fsub dword ptr ss : [ebp+0x1384]
        fld dword ptr ss : [ebp+0x1360]
        fsub dword ptr ss : [ebp+0x1388]
        fstp dword ptr ss : [esp+0x1C]
        fxch 
        fmul dword ptr ss : [esp+0x10]
        fstp dword ptr ss : [esp+0x14]
        fmul dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x14]
        fadd dword ptr ss : [ebp+0x1380]
        fstp dword ptr ss : [esp+0x14]
        fxch 
        fadd dword ptr ss : [ebp+0x1384]
        fstp dword ptr ss : [esp+0x18]
        fadd dword ptr ss : [ebp+0x1388]
        fstp dword ptr ss : [esp+0x1C]
        jne public_449b61
        call public_5b73e0
        mov dword ptr ds : [public_668ac0], eax
        public_449b61 : nop
        mov edx, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [eax]
        push edx
        lea edx, ss:[ebp+0x1348]
        push edx
        lea edx, ss:[ebp+0x1370]
        push edx
        lea edx, ss:[esp+0x2C]
        push edx
        push eax
        call dword ptr ds : [ecx+0x58]
        mov eax, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ss : [esp+0x24]
        mov edx, dword ptr ss : [esp+0x28]
        mov dword ptr ss : [esp+0x30], eax
        mov eax, dword ptr ss : [esp+0x2C]
        mov dword ptr ss : [esp+0x3C], eax
        mov eax, dword ptr ds : [public_668ac0]
        test eax, eax
        mov dword ptr ss : [esp+0x34], ecx
        mov dword ptr ss : [esp+0x38], edx
        jne public_449bb2
        call public_5b73e0
        mov dword ptr ds : [public_668ac0], eax
        public_449bb2 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x30]
        push edx
        lea edx, ss:[esp+0x74]
        push edx
        push eax
        call dword ptr ds : [ecx+0x54]
        mov eax, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0x1C]
        mov ecx, 9
        lea esi, ss:[esp+0x70]
        lea edi, ss:[esp+0x40]
        rep movsd
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x64], eax
        lea eax, ss:[esp+0x40]
        mov dword ptr ss : [esp+0x68], ecx
        mov ecx, dword ptr ss : [ebp+0x500]
        push eax
        push ecx
        mov dword ptr ss : [esp+0x74], edx
        call public_556cd0
        mov edx, dword ptr ss : [ebp+0x500]
        fld dword ptr ss : [ebp+0x1364]
        add esp, 4
        fsub dword ptr ss : [ebp+0x138C]
        fmul dword ptr ss : [esp+0x14]
        fadd dword ptr ss : [ebp+0x138C]
        fstp dword ptr ss : [esp]
        push edx
        call public_556ce0
        fld dword ptr ss : [ebp+0x1368]
        fsub dword ptr ss : [ebp+0x1390]
        mov eax, dword ptr ss : [ebp+0x500]
        add esp, 4
        fmul dword ptr ss : [esp+0x14]
        fadd dword ptr ss : [ebp+0x1390]
        fstp dword ptr ss : [esp]
        push eax
        call public_556e00
        fld dword ptr ss : [ebp+0x136C]
        fsub dword ptr ss : [ebp+0x1394]
        mov ecx, dword ptr ss : [ebp+0x500]
        add esp, 4
        fmul dword ptr ss : [esp+0x14]
        fadd dword ptr ss : [ebp+0x1394]
        fstp dword ptr ss : [esp]
        push ecx
        call public_556f10
        add esp, 8
        public_449c75 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x84
        ret 4
        UNREACHABLE_TRAP(0x449990)
    }
}

#undef public_4499ce
#undef public_4499e1
#undef public_4499e9
#undef public_449a0a
#undef public_449ac2
#undef public_449b61
#undef public_449bb2
#undef public_449c75
