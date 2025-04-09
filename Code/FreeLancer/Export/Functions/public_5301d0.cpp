#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40f080);
CLANG_FORWARD_PROC_SYMBOL(public_422b80);
CLANG_FORWARD_PROC_SYMBOL(public_447b60);
CLANG_FORWARD_PROC_SYMBOL(public_447bb0);
CLANG_FORWARD_PROC_SYMBOL(public_447be0);
CLANG_FORWARD_PROC_SYMBOL(public_503070);
CLANG_FORWARD_PROC_SYMBOL(public_5301d0);
CLANG_FORWARD_PROC_SYMBOL(public_536100);
CLANG_FORWARD_PROC_SYMBOL(public_539740);
CLANG_FORWARD_PROC_SYMBOL(public_5553b0);
CLANG_FORWARD_PROC_SYMBOL(public_5b73e0);

#define public_53022f _public_53022f
#define public_530239 _public_530239
#define public_53029d _public_53029d
#define public_5302a3 _public_5302a3
#define public_530386 _public_530386
#define public_5303ef _public_5303ef
#define public_5303f6 _public_5303f6
#define public_53042f _public_53042f
#define public_530447 _public_530447
#define public_53047f _public_53047f

PROC_DECLARE(0x5301d0, internal_5301d0, public_5301d0);
extern "C" NAKED register_t __cdecl internal_5301d0()
{
    __asm
    {
        sub esp, 0xD8
        push ebx
        push esi
        push edi
        mov ebx, ecx
        call public_539740
        mov esi, dword ptr ss : [esp+0xE8]
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [ebx+0xA8], eax
        mov ecx, dword ptr ds : [esi]
        mov dword ptr ds : [ebx+0xAC], ecx
        mov edx, dword ptr ds : [esi+4]
        lea edi, ds:[esi+0xC]
        mov ecx, edi
        mov dword ptr ds : [ebx+0xB0], edx
        call dword ptr ds : [public_5c6040]
        test al, al
        jne public_53022f
        push edi
        call dword ptr ds : [public_5c63c8]
        add esp, 4
        test eax, eax
        mov dword ptr ds : [ebx+0xB4], eax
        je public_530239
        push eax
        call public_536100
        add esp, 4
        jmp public_530239
        public_53022f : nop
        mov dword ptr ds : [ebx+0xB4], 0
        public_530239 : nop
        mov eax, dword ptr ds : [ebx+0xB0]
        mov ecx, dword ptr ds : [ebx+0xAC]
        mov dword ptr ss : [esp+0x28], eax
        mov dword ptr ss : [esp+0xC], ecx
        call dword ptr ds : [public_5c71dc]
        mov dword ptr ss : [esp+0x2C], eax
        fild dword ptr ss : [esp+0x2C]
        lea ecx, ds:[esi+0x10]
        fmul dword ptr ds : [public_5caeec]
        fld dword ptr ss : [esp+0x28]
        fsub dword ptr ss : [esp+0xC]
        fmulp 
        fadd dword ptr ss : [esp+0xC]
        fstp dword ptr ds : [ebx+0xB8]
        call dword ptr ds : [public_5c6040]
        test al, al
        jne public_5303f6
        mov ecx, dword ptr ds : [ebx+0x10]
        mov eax, dword ptr ds : [ecx+0x54]
        test eax, eax
        push ebp
        je public_53029d
        mov edx, dword ptr ds : [ecx]
        lea eax, ss:[esp+0x20]
        push eax
        call dword ptr ds : [edx+0x68]
        jmp public_5302a3
        public_53029d : nop
        mov eax, dword ptr ds : [ebx]
        mov ecx, ebx
        call dword ptr ds : [eax]
        public_5302a3 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax+8]
        mov ebp, dword ptr ds : [eax]
        mov eax, dword ptr ds : [ebx]
        mov dword ptr ss : [esp+0x18], ecx
        lea ecx, ss:[esp+0x20]
        push ecx
        mov ecx, ebx
        mov dword ptr ss : [esp+0x20], edx
        call dword ptr ds : [eax+4]
        push eax
        lea edx, ss:[esp+0x68]
        push edx
        call dword ptr ds : [public_5c65b0]
        mov edx, dword ptr ds : [ebx]
        mov esi, eax
        mov eax, dword ptr ss : [esp+0x20]
        mov ecx, 9
        lea edi, ss:[esp+0x3C]
        rep movsd
        mov ecx, dword ptr ss : [esp+0x24]
        mov dword ptr ss : [esp+0x68], ecx
        add esp, 8
        mov ecx, ebx
        mov dword ptr ss : [esp+0x58], ebp
        mov dword ptr ss : [esp+0x5C], eax
        call dword ptr ds : [edx+0x10]
        mov esi, eax
        lea eax, ds:[esi+0x24]
        push eax
        lea ecx, ss:[esp+0x18]
        push esi
        push ecx
        call public_447be0
        fld dword ptr ss : [esp+0x28]
        lea ecx, ss:[esp+0x2C]
        fchs 
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x24]
        fchs 
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x20]
        fchs 
        fstp dword ptr ss : [esp]
        call public_422b80
        mov edx, dword ptr ds : [esi+0x20]
        mov eax, dword ptr ds : [esi+0x14]
        mov ecx, dword ptr ds : [esi+8]
        push edx
        mov edx, dword ptr ds : [esi+0x1C]
        push eax
        mov eax, dword ptr ds : [esi+0x10]
        push ecx
        mov ecx, dword ptr ds : [esi+4]
        push edx
        mov edx, dword ptr ds : [esi+0x18]
        push eax
        mov eax, dword ptr ds : [esi+0xC]
        push ecx
        mov ecx, dword ptr ds : [esi]
        push edx
        push eax
        push ecx
        lea ecx, ss:[esp+0x88]
        call public_447b60
        lea edx, ss:[esp+0x20]
        push edx
        lea eax, ss:[esp+0x68]
        push eax
        lea ecx, ss:[esp+0x90]
        call public_447bb0
        mov eax, dword ptr ds : [public_675514]
        test eax, eax
        pop ebp
        jne public_530386
        call public_5b73e0
        mov dword ptr ds : [public_675514], eax
        public_530386 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x30]
        push edx
        lea edx, ss:[esp+0x88]
        push edx
        lea edx, ss:[esp+0xBC]
        push edx
        push eax
        call dword ptr ds : [ecx+0x1C]
        mov eax, dword ptr ds : [ebx]
        mov ecx, 0xC
        lea esi, ss:[esp+0xB4]
        lea edi, ss:[esp+0x30]
        rep movsd
        mov ecx, ebx
        call dword ptr ds : [eax+0x1C]
        mov ecx, dword ptr ss : [esp+0xE8]
        lea esi, ds:[ecx+0x10]
        mov ecx, esi
        mov edi, eax
        call dword ptr ds : [public_5c6040]
        test al, al
        jne public_5303ef
        push 0
        lea edx, ss:[esp+0x34]
        push edx
        push edi
        push ebx
        push esi
        call public_40f080
        add esp, 4
        push eax
        mov ecx, offset public_674c60
        call public_503070
        public_5303ef : nop
        mov esi, dword ptr ss : [esp+0xE8]
        public_5303f6 : nop
        mov ecx, dword ptr ds : [ebx+0x10]
        mov eax, dword ptr ds : [ecx+0x54]
        test eax, eax
        je public_53047f
        mov eax, dword ptr ds : [esi+0x14]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0xC], eax
        call dword ptr ds : [edx+0x6C]
        fdivr dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [ebx+0x10]
        mov ecx, dword ptr ds : [eax+0x54]
        test ecx, ecx
        fstp dword ptr ss : [esp+0xC]
        je public_53042f
        push eax
        lea eax, ss:[esp+0x14]
        push eax
        call dword ptr ds : [public_5c6920]
        add esp, 8
        jmp public_530447
        public_53042f : nop
        mov dword ptr ss : [esp+0x10], 0
        mov dword ptr ss : [esp+0x14], 0
        mov dword ptr ss : [esp+0x18], 0
        public_530447 : nop
        fld dword ptr ds : [esi+0x18]
        mov edx, dword ptr ss : [esp+0xC]
        fdiv dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [ebx+0x10]
        lea ecx, ss:[esp+0x1C]
        push ecx
        push edx
        push eax
        fstp dword ptr ss : [esp+0x28]
        fld dword ptr ds : [esi+0x1C]
        fdiv dword ptr ss : [esp+0x20]
        fstp dword ptr ss : [esp+0x2C]
        fld dword ptr ds : [esi+0x20]
        fdiv dword ptr ss : [esp+0x24]
        fstp dword ptr ss : [esp+0x30]
        call dword ptr ds : [public_5c691c]
        add esp, 0xC
        public_53047f : nop
        mov edx, dword ptr ds : [ebx]
        push 0
        lea ecx, ds:[ebx+0x3C]
        push ecx
        mov ecx, ebx
        call dword ptr ds : [edx]
        push eax
        call public_5553b0
        add esp, 0xC
        pop edi
        pop esi
        mov dword ptr ds : [ebx+0x38], eax
        pop ebx
        add esp, 0xD8
        ret 4
        UNREACHABLE_TRAP(0x5301d0)
    }
}

#undef public_53022f
#undef public_530239
#undef public_53029d
#undef public_5302a3
#undef public_530386
#undef public_5303ef
#undef public_5303f6
#undef public_53042f
#undef public_530447
#undef public_53047f
