#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_42d680);
CLANG_FORWARD_PROC_SYMBOL(public_55e5e0);
CLANG_FORWARD_PROC_SYMBOL(public_5b73e0);

#define public_55e610 _public_55e610
#define public_55e63f _public_55e63f
#define public_55e654 _public_55e654
#define public_55e664 _public_55e664
#define public_55e746 _public_55e746
#define public_55e796 _public_55e796
#define public_55e7aa _public_55e7aa
#define public_55e7b7 _public_55e7b7

PROC_DECLARE(0x55e5e0, internal_55e5e0, public_55e5e0);
extern "C" NAKED register_t __cdecl internal_55e5e0()
{
    __asm
    {
        sub esp, 0x40
        push edi
        mov edi, ecx
        mov al, byte ptr ds : [edi+0x18]
        test al, al
        je public_55e7b7
        call public_42d680
        fadd dword ptr ds : [edi+0x14]
        fst dword ptr ds : [edi+0x14]
        fcomp dword ptr ds : [edi+0x1C]
        fnstsw ax
        test ah, 1
        jne public_55e610
        mov eax, dword ptr ds : [edi+0x1C]
        mov dword ptr ds : [edi+0x14], eax
        mov byte ptr ds : [edi+0x18], 0
        public_55e610 : nop
        fld dword ptr ds : [edi+0x14]
        mov eax, dword ptr ds : [edi+8]
        test eax, eax
        fdiv dword ptr ds : [edi+0x1C]
        fmul dword ptr ds : [public_5c8a5c]
        fcos 
        fadd dword ptr ds : [public_5c75dc]
        fmul dword ptr ds : [public_5c75e0]
        fsubr dword ptr ds : [public_5c75dc]
        fstp dword ptr ss : [esp+0xC]
        jne public_55e63f
        xor edx, edx
        jmp public_55e654
        public_55e63f : nop
        mov ecx, dword ptr ds : [edi+0xC]
        sub ecx, eax
        mov eax, 0x2AAAAAAB
        imul ecx
        sar edx, 1
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        public_55e654 : nop
        test edx, edx
        jle public_55e7aa
        push ebx
        push esi
        xor ebx, ebx
        mov dword ptr ss : [esp+0x10], edx
        public_55e664 : nop
        mov esi, dword ptr ds : [edi+8]
        fld dword ptr ds : [esi+ebx+4]
        add esi, ebx
        fsub dword ptr ds : [esi]
        fmul dword ptr ss : [esp+0x14]
        fadd dword ptr ds : [esi]
        fstp dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [esi+8]
        test eax, eax
        je public_55e796
        mov edx, dword ptr ds : [edi]
        lea ecx, ss:[esp+0xC]
        push ecx
        push eax
        mov ecx, edi
        call dword ptr ds : [edx+4]
        test al, al
        jne public_55e796
        mov edx, dword ptr ds : [public_5c6d90]
        mov dword ptr ss : [esp+0x3C], 0x3F800000
        mov dword ptr ss : [esp+0x2C], 0x3F800000
        mov dword ptr ss : [esp+0x1C], 0x3F800000
        mov dword ptr ss : [esp+0x38], 0
        mov dword ptr ss : [esp+0x34], 0
        mov dword ptr ss : [esp+0x30], 0
        mov dword ptr ss : [esp+0x28], 0
        mov dword ptr ss : [esp+0x24], 0
        mov dword ptr ss : [esp+0x20], 0
        mov dword ptr ss : [esp+0x48], 0
        mov dword ptr ss : [esp+0x44], 0
        mov dword ptr ss : [esp+0x40], 0
        mov eax, dword ptr ds : [edx]
        mov edx, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [edx+0x84]
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0xA0]
        add eax, 0x24
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x40], ecx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr ss : [esp+0x44], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x48], eax
        mov eax, dword ptr ds : [public_679b10]
        test eax, eax
        mov dword ptr ss : [esp+0x18], ecx
        jne public_55e746
        call public_5b73e0
        mov dword ptr ds : [public_679b10], eax
        public_55e746 : nop
        mov ecx, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ds : [eax]
        push ecx
        lea ecx, ss:[esp+0x20]
        push ecx
        lea ecx, ss:[esp+0x24]
        push ecx
        push eax
        call dword ptr ds : [edx+0x10]
        mov edx, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x1C]
        push edx
        mov edx, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [edx+0x84]
        push edx
        push eax
        call dword ptr ds : [ecx+0x9C]
        mov edx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [public_5c6d90]
        mov edx, dword ptr ds : [edx+0x84]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push 0
        push 0
        push edx
        push eax
        call dword ptr ds : [ecx+0x6C]
        public_55e796 : nop
        mov eax, dword ptr ss : [esp+0x10]
        add ebx, 0xC
        dec eax
        mov dword ptr ss : [esp+0x10], eax
        jne public_55e664
        pop esi
        pop ebx
        public_55e7aa : nop
        mov al, byte ptr ds : [edi+0x18]
        test al, al
        jne public_55e7b7
        mov eax, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [eax]
        public_55e7b7 : nop
        pop edi
        add esp, 0x40
        ret 
        UNREACHABLE_TRAP(0x55e5e0)
    }
}

#undef public_55e610
#undef public_55e63f
#undef public_55e654
#undef public_55e664
#undef public_55e746
#undef public_55e796
#undef public_55e7aa
#undef public_55e7b7
