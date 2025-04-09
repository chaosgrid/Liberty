#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40f130);
CLANG_FORWARD_PROC_SYMBOL(public_423b60);
CLANG_FORWARD_PROC_SYMBOL(public_4cbb40);
CLANG_FORWARD_PROC_SYMBOL(public_4cbc40);
CLANG_FORWARD_PROC_SYMBOL(public_4cbf40);
CLANG_FORWARD_PROC_SYMBOL(public_4cbf60);
CLANG_FORWARD_PROC_SYMBOL(public_4cbf80);
CLANG_FORWARD_PROC_SYMBOL(public_4cbfa0);
CLANG_FORWARD_PROC_SYMBOL(public_4cbfc0);
CLANG_FORWARD_PROC_SYMBOL(public_4cc060);
CLANG_FORWARD_PROC_SYMBOL(public_4cecd0);
CLANG_FORWARD_PROC_SYMBOL(public_54bc90);

#define public_4cbc78 _public_4cbc78
#define public_4cbdc3 _public_4cbdc3
#define public_4cbdec _public_4cbdec
#define public_4cbe18 _public_4cbe18
#define public_4cbe42 _public_4cbe42
#define public_4cbe44 _public_4cbe44
#define public_4cbe49 _public_4cbe49
#define public_4cbe5e _public_4cbe5e
#define public_4cbe76 _public_4cbe76
#define public_4cbe7a _public_4cbe7a
#define public_4cbea4 _public_4cbea4
#define public_4cbebb _public_4cbebb
#define public_4cbebd _public_4cbebd
#define public_4cbebf _public_4cbebf
#define public_4cbf0e _public_4cbf0e
#define public_4cbf10 _public_4cbf10
#define public_4cbf1b _public_4cbf1b

PROC_DECLARE(0x4cbc40, internal_4cbc40, public_4cbc40);
extern "C" NAKED register_t __cdecl internal_4cbc40()
{
    __asm
    {
        sub esp, 0x90
        push ebx
        push ebp
        mov ebp, ecx
        lea ecx, ss:[ebp+0x24]
        call public_4cecd0
        mov cl, byte ptr ss : [ebp+8]
        neg eax
        sbb al, al
        inc al
        test cl, cl
        je public_4cbc78
        mov ecx, dword ptr ss : [ebp]
        test ecx, ecx
        je public_4cbe42
        add ecx, 0xFFFFFF64
        test ecx, ecx
        je public_4cbe42
        public_4cbc78 : nop
        test al, al
        jne public_4cbe42
        mov ebx, dword ptr ss : [ebp+0x34]
        mov dword ptr ss : [esp+8], 0
        call public_54bc90
        test al, al
        jne public_4cbdc3
        cmp byte ptr ss : [ebp+0x20], 1
        jne public_4cbdc3
        call public_40f130
        mov ecx, dword ptr ss : [ebp]
        test ecx, ecx
        je public_4cbdc3
        add ecx, 0xFFFFFF64
        test ecx, ecx
        je public_4cbdc3
        test eax, eax
        je public_4cbdc3
        add ecx, 0x2C
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x2C], edx
        mov edx, dword ptr ds : [ecx+4]
        push esi
        mov dword ptr ss : [esp+0x34], edx
        mov ecx, dword ptr ds : [ecx+8]
        mov edx, dword ptr ds : [eax]
        push edi
        push eax
        mov dword ptr ss : [esp+0x40], ecx
        call dword ptr ds : [edx+0x10]
        mov esi, eax
        mov ecx, 0xC
        lea edi, ss:[esp+0x70]
        rep movsd
        mov ecx, dword ptr ss : [esp+0x98]
        mov eax, dword ptr ss : [esp+0x94]
        mov edx, dword ptr ss : [esp+0x9C]
        mov dword ptr ss : [esp+0x2C], ecx
        mov dword ptr ss : [esp+0x28], eax
        mov ecx, 9
        lea esi, ss:[esp+0x70]
        lea edi, ss:[esp+0x4C]
        lea eax, ss:[esp+0x28]
        rep movsd
        push eax
        lea ecx, ss:[esp+0x38]
        mov dword ptr ss : [esp+0x34], edx
        push ecx
        lea edx, ss:[esp+0x24]
        push edx
        call public_423b60
        add esp, 0xC
        lea eax, ss:[esp+0x40]
        push eax
        lea ecx, ss:[esp+0x50]
        call public_4cbf60
        fld dword ptr ss : [esp+0x24]
        lea ecx, ss:[esp+0x40]
        fmul dword ptr ds : [eax+8]
        push ecx
        fld dword ptr ss : [esp+0x24]
        lea ecx, ss:[esp+0x50]
        fmul dword ptr ds : [eax+4]
        faddp 
        fld dword ptr ss : [esp+0x20]
        fmul dword ptr ds : [eax]
        faddp 
        fstp dword ptr ss : [esp+0x1C]
        call public_4cbf80
        push eax
        lea edx, ss:[esp+0x20]
        push edx
        call public_4cbf40
        fchs 
        add esp, 8
        fstp dword ptr ss : [esp+0x14]
        lea eax, ss:[esp+0x40]
        push eax
        lea ecx, ss:[esp+0x50]
        call public_4cbfa0
        push eax
        lea ecx, ss:[esp+0x20]
        push ecx
        call public_4cbf40
        fstp dword ptr ss : [esp+0x18]
        mov edx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ss : [esp+0x20]
        add esp, 8
        push edx
        push eax
        push ecx
        mov ecx, ebp
        call public_4cc060
        fstp dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        public_4cbdc3 : nop
        mov ecx, dword ptr ds : [ebx+0xC]
        test ecx, ecx
        je public_4cbdec
        mov eax, dword ptr ss : [esp+8]
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx+0x84]
        fld dword ptr ss : [ebp+0x1C]
        mov ecx, dword ptr ds : [ebx+0xC]
        fadd dword ptr ss : [ebp+0x18]
        mov edx, dword ptr ds : [ecx]
        push ecx
        fstp dword ptr ss : [esp]
        call dword ptr ds : [edx+0x80]
        public_4cbdec : nop
        mov ecx, dword ptr ds : [ebx+0xC]
        test ecx, ecx
        je public_4cbe18
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x74]
        test al, al
        je public_4cbe18
        mov edx, dword ptr ss : [ebp+0x34]
        mov ecx, dword ptr ss : [ebp+0x2C]
        add edx, 0x10
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ss : [ebp+0x34], edx
        mov ecx, ebp
        je public_4cbe44
        push eax
        call public_4cbfc0
        jmp public_4cbe49
        public_4cbe18 : nop
        fld dword ptr ss : [ebp+0x10]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x41
        jne public_4cbe49
        fld dword ptr ss : [ebp+0x10]
        fsub dword ptr ss : [esp+0x9C]
        fst dword ptr ss : [ebp+0x10]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 5
        jp public_4cbe49
        public_4cbe42 : nop
        mov ecx, ebp
        public_4cbe44 : nop
        call public_4cbb40
        public_4cbe49 : nop
        mov cl, byte ptr ss : [ebp+0x38]
        xor al, al
        test cl, cl
        je public_4cbe5e
        mov cl, byte ptr ss : [ebp+0x85]
        test cl, cl
        jne public_4cbe5e
        mov al, 1
        public_4cbe5e : nop
        mov cl, byte ptr ss : [ebp+8]
        test cl, cl
        je public_4cbe76
        mov ecx, dword ptr ss : [ebp]
        test ecx, ecx
        je public_4cbe7a
        add ecx, 0xFFFFFF64
        test ecx, ecx
        je public_4cbe7a
        public_4cbe76 : nop
        mov al, 1
        jmp public_4cbebd
        public_4cbe7a : nop
        test al, al
        jne public_4cbebf
        fld dword ptr ss : [ebp+0x1B8]
        fcomp qword ptr ds : [public_5c8ba8]
        fnstsw ax
        test ah, 0x41
        jne public_4cbea4
        fld dword ptr ss : [ebp+0x1B8]
        fsub dword ptr ss : [esp+0x9C]
        fstp dword ptr ss : [ebp+0x1B8]
        public_4cbea4 : nop
        fld dword ptr ss : [ebp+0x1B8]
        fcomp qword ptr ds : [public_5c8ba8]
        fnstsw ax
        test ah, 0x41
        jne public_4cbebb
        mov al, 1
        jmp public_4cbebd
        public_4cbebb : nop
        xor al, al
        public_4cbebd : nop
        test al, al
        public_4cbebf : nop
        mov edx, dword ptr ss : [ebp+0x1C0]
        mov ecx, 1
        sete bl
        cmp edx, ecx
        jne public_4cbf1b
        test al, al
        jne public_4cbf0e
        mov dword ptr ss : [ebp+0x1C0], 0
        call dword ptr ds : [public_5c60d0]
        test al, al
        je public_4cbf0e
        mov eax, dword ptr ss : [ebp+0x1CC]
        mov ecx, dword ptr ds : [public_67ecd0]
        mov edx, dword ptr ds : [ecx]
        push 0
        push eax
        mov eax, dword ptr ss : [ebp+0x1C8]
        push eax
        mov eax, dword ptr ss : [ebp+0x1C4]
        push eax
        call dword ptr ds : [edx+0xFC]
        public_4cbf0e : nop
        mov al, bl
        public_4cbf10 : nop
        pop ebp
        pop ebx
        add esp, 0x90
        ret 4
        public_4cbf1b : nop
        test al, al
        mov al, bl
        je public_4cbf10
        mov dword ptr ss : [ebp+0x1C0], ecx
        pop ebp
        pop ebx
        add esp, 0x90
        ret 4
        UNREACHABLE_TRAP(0x4cbc40)
    }
}

#undef public_4cbc78
#undef public_4cbdc3
#undef public_4cbdec
#undef public_4cbe18
#undef public_4cbe42
#undef public_4cbe44
#undef public_4cbe49
#undef public_4cbe5e
#undef public_4cbe76
#undef public_4cbe7a
#undef public_4cbea4
#undef public_4cbebb
#undef public_4cbebd
#undef public_4cbebf
#undef public_4cbf0e
#undef public_4cbf10
#undef public_4cbf1b
