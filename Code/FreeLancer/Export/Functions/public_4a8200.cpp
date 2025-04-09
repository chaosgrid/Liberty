#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_421670);
CLANG_FORWARD_PROC_SYMBOL(public_421690);
CLANG_FORWARD_PROC_SYMBOL(public_421b70);
CLANG_FORWARD_PROC_SYMBOL(public_421cc0);
CLANG_FORWARD_PROC_SYMBOL(public_421dd0);
CLANG_FORWARD_PROC_SYMBOL(public_421ed0);
CLANG_FORWARD_PROC_SYMBOL(public_4220c0);
CLANG_FORWARD_PROC_SYMBOL(public_422690);
CLANG_FORWARD_PROC_SYMBOL(public_42d680);
CLANG_FORWARD_PROC_SYMBOL(public_45a650);
CLANG_FORWARD_PROC_SYMBOL(public_45a6e0);
CLANG_FORWARD_PROC_SYMBOL(public_4c4670);
CLANG_FORWARD_PROC_SYMBOL(public_561f20);
CLANG_FORWARD_PROC_SYMBOL(public_5792b0);
CLANG_FORWARD_PROC_SYMBOL(public_5a0760);
CLANG_FORWARD_PROC_SYMBOL(public_5a4b50);

#define public_4a824f _public_4a824f
#define public_4a8265 _public_4a8265
#define public_4a82f3 _public_4a82f3
#define public_4a8323 _public_4a8323
#define public_4a832c _public_4a832c
#define public_4a8348 _public_4a8348
#define public_4a835d _public_4a835d
#define public_4a8396 _public_4a8396
#define public_4a852d _public_4a852d
#define public_4a8694 _public_4a8694
#define public_4a86ca _public_4a86ca
#define public_4a8740 _public_4a8740
#define public_4a8742 _public_4a8742

PROC_DECLARE(0x4a8200, internal_4a8200, public_4a8200);
extern "C" NAKED register_t __cdecl internal_4a8200()
{
    __asm
    {
        sub esp, 0xA4
        push ebp
        mov ebp, ecx
        push 0xA
        mov dword ptr ss : [esp+0x18], ebp
        call public_5792b0
        add esp, 4
        test eax, eax
        je public_4a8742
        mov dword ptr ss : [esp+0x10], 0xFFFFFFFF
        call dword ptr ds : [public_5c60d0]
        test al, al
        jne public_4a824f
        call public_4c4670
        mov dword ptr ss : [esp+8], eax
        push 0
        lea eax, ss:[esp+0x14]
        push eax
        lea ecx, ss:[esp+0x10]
        push ecx
        call dword ptr ds : [public_5c6320]
        add esp, 0xC
        public_4a824f : nop
        push ebx
        push esi
        xor ecx, ecx
        push edi
        mov dword ptr ss : [esp+0x18], ecx
        lea esi, ss:[ebp+0x34C]
        mov ebx, 3
        mov dl, 0xFC
        public_4a8265 : nop
        mov eax, dword ptr ss : [ebp+0x420]
        mov edi, dword ptr ss : [ebp+0x41C]
        add eax, ecx
        cmp eax, edi
        mov eax, dword ptr ds : [esi]
        jge public_4a8348
        or byte ptr ds : [eax+0x6C], bl
        mov eax, dword ptr ds : [esi-0x18]
        or byte ptr ds : [eax+0x6C], bl
        mov eax, dword ptr ds : [esi+0x18]
        or byte ptr ds : [eax+0x6C], bl
        mov eax, dword ptr ds : [esi+0x30]
        or byte ptr ds : [eax+0x6C], bl
        mov edx, dword ptr ss : [ebp+0x420]
        mov eax, dword ptr ss : [ebp+0x410]
        add edx, ecx
        mov ecx, dword ptr ds : [esi]
        mov ebx, dword ptr ds : [ecx]
        lea edi, ds:[eax+edx*8]
        mov edx, dword ptr ds : [edi]
        push 0
        push edx
        call dword ptr ds : [public_5c608c]
        mov ecx, dword ptr ds : [esi]
        add esp, 4
        push eax
        push 0x1E
        call dword ptr ds : [ebx+0xA8]
        mov eax, dword ptr ds : [edi+4]
        push eax
        lea ecx, ss:[esp+0x18]
        push ecx
        call public_45a650
        mov edx, dword ptr ss : [esp+0x24]
        mov eax, dword ptr ds : [edi]
        add esp, 8
        cmp edx, eax
        jne public_4a82f3
        mov eax, dword ptr ss : [esp+0x14]
        push eax
        lea ecx, ss:[esp+0x14]
        push ecx
        call public_561f20
        mov edx, dword ptr ds : [eax]
        add esp, 8
        mov dword ptr ss : [esp+0x14], edx
        public_4a82f3 : nop
        mov ecx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [ecx]
        push 1
        lea edx, ss:[esp+0x18]
        push edx
        push 0x33
        call dword ptr ds : [eax+0xA8]
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_45a6e0
        add esp, 4
        cmp eax, 4
        mov edx, 0x635
        jne public_4a8323
        mov edx, 0x634
        jmp public_4a832c
        public_4a8323 : nop
        test eax, eax
        jne public_4a832c
        mov edx, 0x636
        public_4a832c : nop
        mov ecx, dword ptr ds : [esi-0x18]
        mov eax, dword ptr ds : [ecx]
        push 0
        push edx
        mov ebx, 3
        push ebx
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ss : [esp+0x18]
        mov dl, 0xFC
        jmp public_4a835d
        public_4a8348 : nop
        and byte ptr ds : [eax+0x6C], dl
        mov eax, dword ptr ds : [esi-0x18]
        and byte ptr ds : [eax+0x6C], dl
        mov eax, dword ptr ds : [esi+0x18]
        and byte ptr ds : [eax+0x6C], dl
        mov eax, dword ptr ds : [esi+0x30]
        and byte ptr ds : [eax+0x6C], dl
        public_4a835d : nop
        inc ecx
        add esi, 4
        cmp ecx, 6
        mov dword ptr ss : [esp+0x18], ecx
        jl public_4a8265
        lea ecx, ss:[ebp+0x334]
        push 6
        push ecx
        call public_5a4b50
        add esp, 8
        mov ecx, ebp
        call public_5a0760
        xor eax, eax
        lea edx, ss:[ebp+0x37C]
        mov dword ptr ss : [esp+0x18], eax
        mov dword ptr ss : [esp+0x14], edx
        public_4a8396 : nop
        mov ecx, dword ptr ss : [ebp+0x420]
        add eax, ecx
        cmp eax, dword ptr ss : [ebp+0x41C]
        jge public_4a86ca
        mov ecx, dword ptr ss : [ebp+0x410]
        fld dword ptr ds : [ecx+eax*8+4]
        lea ecx, ds:[ecx+eax*8]
        fcomp dword ptr ds : [public_5c7474]
        push 1
        push 7
        fnstsw ax
        test ah, 5
        jp public_4a852d
        mov ebx, dword ptr ds : [edx-0x18]
        lea edx, ds:[ebx+0xB4]
        mov eax, dword ptr ds : [edx]
        mov ebp, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ss : [esp+0x38], eax
        fld dword ptr ss : [esp+0x38]
        mov eax, dword ptr ds : [public_5c6de0]
        fadd st(0), st
        mov eax, dword ptr ds : [eax]
        push eax
        fmul dword ptr ds : [ecx+4]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x40], ebp
        fchs 
        mov dword ptr ss : [esp+0x44], edx
        fsubr dword ptr ss : [esp+0x3C]
        fstp dword ptr ss : [esp+0x1C]
        call dword ptr ds : [ecx+0xF0]
        mov edx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push 8
        push 0x17
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov edx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push 1
        push 0xE
        push eax
        call dword ptr ds : [ecx+0xF0]
        fld dword ptr ds : [ebx+0xA8]
        fadd dword ptr ds : [ebx+0x60]
        lea esi, ds:[ebx+0x3C]
        mov ecx, 9
        lea edi, ss:[esp+0x54]
        fstp dword ptr ss : [esp+0x48]
        fld dword ptr ds : [ebx+0xAC]
        mov edx, dword ptr ss : [esp+0x48]
        fadd dword ptr ds : [ebx+0x64]
        fstp dword ptr ss : [esp+0x4C]
        fld dword ptr ds : [ebx+0xB0]
        mov eax, dword ptr ss : [esp+0x4C]
        fadd dword ptr ds : [ebx+0x68]
        rep movsd
        mov dword ptr ss : [esp+0x78], edx
        lea edx, ss:[esp+0x54]
        push edx
        fstp dword ptr ss : [esp+0x54]
        mov ecx, dword ptr ss : [esp+0x54]
        push 0
        mov dword ptr ss : [esp+0x84], eax
        mov dword ptr ss : [esp+0x88], ecx
        call public_422690
        push 0xDE1
        call public_421ed0
        push 0xBE2
        call public_421dd0
        push 4
        push 2
        call public_4220c0
        push 0xA
        push 0
        push 0
        push 0
        call public_421b70
        push 8
        call public_421670
        mov esi, dword ptr ss : [esp+0x3C]
        push 0x3A83126F
        push ebp
        push esi
        call public_421cc0
        fld dword ptr ss : [esp+0x6C]
        fchs 
        push 0x3A83126F
        fstp dword ptr ss : [esp+0x4C]
        mov edi, dword ptr ss : [esp+0x4C]
        push edi
        push esi
        call public_421cc0
        fld dword ptr ss : [esp+0x74]
        add esp, 0x44
        fchs 
        push 0x3A83126F
        fstp dword ptr ss : [esp+0x14]
        mov esi, dword ptr ss : [esp+0x14]
        push edi
        push esi
        call public_421cc0
        push 0x3A83126F
        push ebp
        push esi
        call public_421cc0
        add esp, 0x18
        call public_421690
        mov eax, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [eax]
        jmp public_4a8694
        public_4a852d : nop
        mov ebx, dword ptr ds : [edx]
        lea eax, ds:[ebx+0xB4]
        mov ebp, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x2C], ebp
        fld dword ptr ss : [esp+0x2C]
        fadd st(0), st
        mov dword ptr ss : [esp+0x34], eax
        mov dword ptr ss : [esp+0x30], edx
        fmul dword ptr ds : [ecx+4]
        mov ecx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax]
        fsubr dword ptr ss : [esp+0x2C]
        push eax
        fstp dword ptr ss : [esp+0x1C]
        call dword ptr ds : [edx+0xF0]
        mov eax, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push 8
        push 0x17
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov edx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push 1
        push 0xE
        push eax
        call dword ptr ds : [ecx+0xF0]
        fld dword ptr ds : [ebx+0x60]
        fadd dword ptr ds : [ebx+0xA8]
        lea esi, ds:[ebx+0x3C]
        mov ecx, 9
        lea edi, ss:[esp+0x84]
        fstp dword ptr ss : [esp+0x3C]
        fld dword ptr ds : [ebx+0x64]
        mov edx, dword ptr ss : [esp+0x3C]
        fadd dword ptr ds : [ebx+0xAC]
        fstp dword ptr ss : [esp+0x40]
        fld dword ptr ds : [ebx+0x68]
        mov eax, dword ptr ss : [esp+0x40]
        fadd dword ptr ds : [ebx+0xB0]
        rep movsd
        mov dword ptr ss : [esp+0xA8], edx
        lea edx, ss:[esp+0x84]
        push edx
        fstp dword ptr ss : [esp+0x48]
        mov ecx, dword ptr ss : [esp+0x48]
        push 0
        mov dword ptr ss : [esp+0xB4], eax
        mov dword ptr ss : [esp+0xB8], ecx
        call public_422690
        push 0xDE1
        call public_421ed0
        push 0xBE2
        call public_421dd0
        push 4
        push 2
        call public_4220c0
        push 0xA
        push 0
        push 0
        push 0
        call public_421b70
        push 8
        call public_421670
        fld dword ptr ss : [esp+0x3C]
        mov eax, dword ptr ss : [esp+0x54]
        fchs 
        push 0x3A83126F
        fstp dword ptr ss : [esp+0x40]
        mov esi, dword ptr ss : [esp+0x40]
        push eax
        push esi
        call public_421cc0
        fld dword ptr ss : [esp+0x60]
        fchs 
        push 0x3A83126F
        fstp dword ptr ss : [esp+0x4C]
        mov edi, dword ptr ss : [esp+0x4C]
        push edi
        push esi
        call public_421cc0
        add esp, 0x44
        push 0x3A83126F
        push edi
        push ebp
        call public_421cc0
        mov ecx, dword ptr ss : [esp+0x34]
        push 0x3A83126F
        push ecx
        push ebp
        call public_421cc0
        add esp, 0x18
        call public_421690
        mov edx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [edx]
        public_4a8694 : nop
        mov ecx, dword ptr ds : [eax]
        push 4
        push 0x17
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov edx, dword ptr ds : [public_5c6df0]
        mov eax, dword ptr ds : [edx]
        mov edx, dword ptr ds : [ebx+0x84]
        mov ecx, dword ptr ds : [eax]
        push 0
        push 0
        push 0
        push 0x3F800000
        push edx
/*FIXUP push offset public_67dbf8 @0x4a86bd*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67dbf8
        push eax
        call dword ptr ds : [ecx+0x1C]
        mov ebp, dword ptr ss : [esp+0x20]
        public_4a86ca : nop
        mov eax, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ss : [esp+0x14]
        inc eax
        add edx, 4
        cmp eax, 6
        mov dword ptr ss : [esp+0x18], eax
        mov dword ptr ss : [esp+0x14], edx
        jl public_4a8396
        call public_42d680
        fadd dword ptr ss : [ebp+0x424]
        pop edi
        pop esi
        fcom dword ptr ds : [public_5c75dc]
        pop ebx
        fst dword ptr ss : [ebp+0x424]
        fnstsw ax
        test ah, 0x41
        jne public_4a8740
        fsub dword ptr ds : [public_5c75dc]
        push 4
        lea edx, ss:[esp+8]
        push edx
        fstp dword ptr ss : [ebp+0x424]
        mov ecx, dword ptr ds : [public_67ecd0]
        mov edx, dword ptr ds : [public_673344]
        mov dword ptr ss : [esp+0xC], 0
        mov eax, dword ptr ds : [ecx]
        push edx
        call dword ptr ds : [eax+0x124]
        pop ebp
        add esp, 0xA4
        ret 
        public_4a8740 : nop
        fstp st(0)
        public_4a8742 : nop
        pop ebp
        add esp, 0xA4
        ret 
        UNREACHABLE_TRAP(0x4a8200)
    }
}

#undef public_4a824f
#undef public_4a8265
#undef public_4a82f3
#undef public_4a8323
#undef public_4a832c
#undef public_4a8348
#undef public_4a835d
#undef public_4a8396
#undef public_4a852d
#undef public_4a8694
#undef public_4a86ca
#undef public_4a8740
#undef public_4a8742
