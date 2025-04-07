#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_42d680);
CLANG_FORWARD_PROC_SYMBOL(public_55e170);

#define public_55e1a0 _public_55e1a0
#define public_55e1b5 _public_55e1b5
#define public_55e1cd _public_55e1cd
#define public_55e1e0 _public_55e1e0
#define public_55e259 _public_55e259
#define public_55e26d _public_55e26d
#define public_55e27a _public_55e27a

PROC_DECLARE(0x55e170, internal_55e170, public_55e170);
extern "C" NAKED register_t __cdecl internal_55e170()
{
    __asm
    {
        sub esp, 0x20
        push edi
        mov edi, ecx
        mov al, byte ptr ds : [edi+0x18]
        test al, al
        je public_55e27a
        call public_42d680
        fadd dword ptr ds : [edi+0x14]
        fst dword ptr ds : [edi+0x14]
        fcomp dword ptr ds : [edi+0x1C]
        fnstsw ax
        test ah, 1
        jne public_55e1a0
        mov eax, dword ptr ds : [edi+0x1C]
        mov dword ptr ds : [edi+0x14], eax
        mov byte ptr ds : [edi+0x18], 0
        public_55e1a0 : nop
        fld dword ptr ds : [edi+0x14]
        mov eax, dword ptr ds : [edi+8]
        test eax, eax
        fdiv dword ptr ds : [edi+0x1C]
        fstp dword ptr ss : [esp+4]
        jne public_55e1b5
        xor edx, edx
        jmp public_55e1cd
        public_55e1b5 : nop
        mov ecx, dword ptr ds : [edi+0xC]
        sub ecx, eax
        mov eax, 0x92492493
        imul ecx
        add edx, ecx
        sar edx, 4
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        public_55e1cd : nop
        test edx, edx
        jle public_55e26d
        push ebx
        push esi
        xor ebx, ebx
        mov dword ptr ss : [esp+0x10], edx
        lea ecx, ds:[ecx]
        public_55e1e0 : nop
        mov esi, dword ptr ds : [edi+8]
        fld dword ptr ds : [esi+ebx+0xC]
        add esi, ebx
        fsub dword ptr ds : [esi]
        mov edx, dword ptr ds : [edi]
        fld dword ptr ds : [esi+0x10]
        lea eax, ss:[esp+0x20]
        fsub dword ptr ds : [esi+4]
        push eax
        fld dword ptr ds : [esi+0x14]
        fsub dword ptr ds : [esi+8]
        fstp dword ptr ss : [esp+0x20]
        fxch 
        fmul dword ptr ss : [esp+0x10]
        fstp dword ptr ss : [esp+0x18]
        fmul dword ptr ss : [esp+0x10]
        fstp dword ptr ss : [esp+0x1C]
        fld dword ptr ss : [esp+0x20]
        fmul dword ptr ss : [esp+0x10]
        fadd dword ptr ds : [esi+8]
        fld dword ptr ss : [esp+0x1C]
        fadd dword ptr ds : [esi+4]
        fld dword ptr ss : [esp+0x18]
        fadd dword ptr ds : [esi]
        fstp dword ptr ss : [esp+0x24]
        fstp dword ptr ss : [esp+0x28]
        fstp dword ptr ss : [esp+0x2C]
        mov ecx, dword ptr ds : [esi+0x18]
        push ecx
        mov ecx, edi
        call dword ptr ds : [edx+4]
        test al, al
        jne public_55e259
        mov ecx, dword ptr ds : [esi+0x18]
        mov edx, dword ptr ds : [ecx]
        push 0
        lea eax, ss:[esp+0x24]
        push eax
        push 6
        call dword ptr ds : [edx+0xA8]
        public_55e259 : nop
        mov eax, dword ptr ss : [esp+0x10]
        add ebx, 0x1C
        dec eax
        mov dword ptr ss : [esp+0x10], eax
        jne public_55e1e0
        pop esi
        pop ebx
        public_55e26d : nop
        mov al, byte ptr ds : [edi+0x18]
        test al, al
        jne public_55e27a
        mov edx, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [edx]
        public_55e27a : nop
        pop edi
        add esp, 0x20
        ret 
        UNREACHABLE_TRAP(0x55e170)
    }
}

#undef public_55e1a0
#undef public_55e1b5
#undef public_55e1cd
#undef public_55e1e0
#undef public_55e259
#undef public_55e26d
#undef public_55e27a
