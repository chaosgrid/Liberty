#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62969c0);
CLANG_FORWARD_PROC_SYMBOL(public_6298e70);
CLANG_FORWARD_PROC_SYMBOL(public_629b430);
CLANG_FORWARD_PROC_SYMBOL(public_629b990);
CLANG_FORWARD_PROC_SYMBOL(public_629fb90);
CLANG_FORWARD_PROC_SYMBOL(public_62b14f0);

#define public_62b1560 _public_62b1560
#define public_62b1584 _public_62b1584
#define public_62b15b5 _public_62b15b5
#define public_62b15d5 _public_62b15d5
#define public_62b15d7 _public_62b15d7
#define public_62b15f2 _public_62b15f2
#define public_62b15f4 _public_62b15f4
#define public_62b160e _public_62b160e
#define public_62b1639 _public_62b1639
#define public_62b1645 _public_62b1645

PROC_DECLARE(0x62b14f0, internal_62b14f0, public_62b14f0);
extern "C" NAKED register_t __cdecl internal_62b14f0()
{
    __asm
    {
        sub esp, 0x18
        push ebx
        push esi
        mov esi, ecx
        mov al, byte ptr ds : [esi+0x2C4]
        xor ebx, ebx
        cmp al, bl
        je public_62b1645
        mov byte ptr ds : [esi+0x2C4], bl
        push edi
        mov dword ptr ds : [esi+0x2C8], ebx
        mov dword ptr ds : [esi+0x2CC], ebx
        mov dword ptr ds : [esi+0x2D0], ebx
        mov dword ptr ds : [esi+0x2D4], ebx
        mov dword ptr ds : [esi+0x2D8], ebx
        mov al, byte ptr ds : [esi+0x2BD]
        push 0x80
        lea ecx, ss:[esp+0x18]
        mov byte ptr ss : [esp+0x13], al
        call public_629b990
        lea edx, ss:[esp+0x14]
        lea ecx, ds:[esi+0xE4]
        push edx
        call public_629b430
        mov edi, eax
        cmp edi, ebx
        je public_62b160e
        mov edi, edi
        public_62b1560 : nop
        mov eax, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [eax+0xC]
        test al, al
        je public_62b15f4
        cmp byte ptr ss : [esp+0xF], bl
        jne public_62b1584
        mov ecx, edi
        call public_629fb90
        cmp byte ptr ds : [eax+0xBA], bl
        jne public_62b15f4
        public_62b1584 : nop
        mov ecx, edi
        call public_62969c0
        cmp dword ptr ds : [eax+0x90], ebx
        mov ecx, edi
        je public_62b15b5
        inc dword ptr ds : [esi+0x2D4]
        call public_6298e70
        fcom dword ptr ds : [esi+0x2D8]
        fnstsw ax
        test ah, 0x41
        jne public_62b15f2
        fstp dword ptr ds : [esi+0x2D8]
        jmp public_62b15f4
        public_62b15b5 : nop
        inc dword ptr ds : [esi+0x2C8]
        call public_6298e70
        fcom dword ptr ds : [esi+0x2D0]
        fnstsw ax
        test ah, 0x41
        jne public_62b15d5
        fstp dword ptr ds : [esi+0x2D0]
        jmp public_62b15d7
        public_62b15d5 : nop
        fstp st(0)
        public_62b15d7 : nop
        mov ecx, edi
        call public_629fb90
        fld dword ptr ds : [eax+0x94]
        fadd dword ptr ds : [esi+0x2CC]
        fstp dword ptr ds : [esi+0x2CC]
        jmp public_62b15f4
        public_62b15f2 : nop
        fstp st(0)
        public_62b15f4 : nop
        lea ecx, ss:[esp+0x14]
        push ecx
        lea ecx, ds:[esi+0xE4]
        call public_629b430
        mov edi, eax
        cmp edi, ebx
        jne public_62b1560
        public_62b160e : nop
        mov eax, dword ptr ds : [esi+0x2C8]
        mov dword ptr ss : [esp+0x10], eax
        cmp eax, ebx
        pop edi
        lea eax, ds:[esi+0x2C8]
        je public_62b1639
        fild dword ptr ss : [esp+0xC]
        fdivr dword ptr ds : [esi+0x2CC]
        fstp dword ptr ds : [esi+0x2CC]
        pop esi
        pop ebx
        add esp, 0x18
        ret 
        public_62b1639 : nop
        mov dword ptr ds : [esi+0x2CC], ebx
        pop esi
        pop ebx
        add esp, 0x18
        ret 
        public_62b1645 : nop
        lea eax, ds:[esi+0x2C8]
        pop esi
        pop ebx
        add esp, 0x18
        ret 
        UNREACHABLE_TRAP(0x62b14f0)
    }
}

#undef public_62b1560
#undef public_62b1584
#undef public_62b15b5
#undef public_62b15d5
#undef public_62b15d7
#undef public_62b15f2
#undef public_62b15f4
#undef public_62b160e
#undef public_62b1639
#undef public_62b1645
