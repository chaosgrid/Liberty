#include "Deformable2-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65f5400);
CLANG_FORWARD_PROC_SYMBOL(public_65f5950);
CLANG_FORWARD_PROC_SYMBOL(public_65fb030);
CLANG_FORWARD_PROC_SYMBOL(public_6600bb6);
CLANG_FORWARD_PROC_SYMBOL(public_6600de0);

#define public_65f542b _public_65f542b
#define public_65f5437 _public_65f5437
#define public_65f5450 _public_65f5450
#define public_65f5483 _public_65f5483
#define public_65f54e4 _public_65f54e4
#define public_65f54fd _public_65f54fd
#define public_65f5510 _public_65f5510
#define public_65f551e _public_65f551e
#define public_65f5549 _public_65f5549
#define public_65f5560 _public_65f5560
#define public_65f5584 _public_65f5584
#define public_65f55b8 _public_65f55b8
#define public_65f55bb _public_65f55bb
#define public_65f55c6 _public_65f55c6
#define public_65f5603 _public_65f5603
#define public_65f5605 _public_65f5605
#define public_65f56f0 _public_65f56f0
#define public_65f5758 _public_65f5758
#define public_65f5760 _public_65f5760
#define public_65f58aa _public_65f58aa
#define public_65f58e6 _public_65f58e6
#define public_65f58f4 _public_65f58f4
#define public_65f5902 _public_65f5902
#define public_65f5922 _public_65f5922

PROC_DECLARE(0x65f5400, internal_65f5400, public_65f5400);
extern "C" NAKED register_t __cdecl internal_65f5400()
{
    __asm
    {
        sub esp, 0x9C
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov eax, dword ptr ds : [edi+8]
        xor ebx, ebx
        test eax, eax
        mov dword ptr ss : [esp+0x14], edi
        mov dword ptr ss : [esp+0x24], ebx
        mov byte ptr ss : [esp+0x12], bl
        jne public_65f542b
        mov dword ptr ss : [esp+0x28], 0xFFFFFFFF
        jmp public_65f5437
        public_65f542b : nop
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ss : [esp+0x28], edx
        public_65f5437 : nop
        mov eax, dword ptr ss : [esp+0xB0]
        mov esi, dword ptr ds : [eax+8]
        cmp esi, dword ptr ds : [eax+4]
        je public_65f54fd
        lea ebx, ds:[ebx]
        public_65f5450 : nop
        mov eax, dword ptr ds : [public_6603138]
        test eax, eax
        je public_65f5483
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x13]
        push edx
        push esi
        push eax
        call dword ptr ds : [ecx+0x94]
        mov al, byte ptr ss : [esp+0x13]
        test al, al
        jne public_65f5549
        mov eax, dword ptr ds : [public_6603138]
        mov ecx, dword ptr ds : [eax]
        push esi
        push eax
        call dword ptr ds : [ecx+0x90]
        public_65f5483 : nop
        mov eax, dword ptr ds : [public_6603134]
        mov edx, dword ptr ds : [eax]
        push esi
        push eax
        mov dword ptr ss : [esp+ebx*4+0x34], esi
        call dword ptr ds : [edx+0xD4]
        mov ebp, eax
        mov eax, dword ptr ds : [public_6603134]
        mov ecx, dword ptr ds : [eax]
        push esi
        push eax
        call dword ptr ds : [ecx+0xC4]
        cmp dword ptr ds : [eax], 4
        jne public_65f54e4
        fld dword ptr ds : [eax+0x18]
        mov byte ptr ss : [esp+0x12], 1
        fld dword ptr ds : [eax+0x14]
        fld dword ptr ds : [eax+0x10]
        fld st(0)
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp 
        fld st(3)
        fmul st, st(4)
        faddp 
        fsqrt 
        fstp st(3)
        fstp st(0)
        fstp st(0)
        fcomp qword ptr ds : [public_6601348]
        fnstsw ax
        test ah, 0x41
        je public_65f54e4
        mov byte ptr ss : [esp+0x12], 0
        public_65f54e4 : nop
        mov edx, dword ptr ss : [esp+0xB0]
        mov eax, dword ptr ds : [edx+4]
        inc ebx
        cmp ebp, eax
        mov esi, ebp
        jne public_65f5450
        mov dword ptr ss : [esp+0x24], ebx
        public_65f54fd : nop
        xor ebp, ebp
        xor eax, eax
        cmp ebx, ebp
        jle public_65f551e
        lea ecx, ss:[esp+ebx*4+0x28]
        lea esp, ss:[esp]
        public_65f5510 : nop
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+eax*4+0x68], edx
        inc eax
        sub ecx, 4
        cmp eax, ebx
        jl public_65f5510
        public_65f551e : nop
        push 0x14
        call public_6600bb6
        add esp, 4
        cmp eax, ebp
        je public_65f55c6
        mov byte ptr ds : [eax], 0
        mov dword ptr ds : [eax+4], 0xFFFFFFFF
        mov ecx, dword ptr ds : [edi+0x10]
        cmp ecx, ebp
        mov dword ptr ds : [edi+0x10], eax
        jne public_65f55b8
        mov dword ptr ds : [edi+0xC], eax
        jmp public_65f55bb
        public_65f5549 : nop
        mov eax, dword ptr ss : [esp+0xB0]
        mov edi, dword ptr ds : [eax+8]
        cmp edi, esi
        mov dword ptr ss : [esp+0x24], ebx
        je public_65f5584
        nop 
        lea esp, ss:[esp]
        public_65f5560 : nop
        mov eax, dword ptr ds : [public_6603138]
        mov ecx, dword ptr ds : [eax]
        push edi
        push eax
        call dword ptr ds : [ecx+0x98]
        mov eax, dword ptr ds : [public_6603134]
        mov edx, dword ptr ds : [eax]
        push edi
        push eax
        call dword ptr ds : [edx+0xD4]
        mov edi, eax
        cmp edi, esi
        jne public_65f5560
/*FIXUP public_65f5584 : nop
        push offset public_66026dc @0x65f5584*/
  FIXUP public_65f5584 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_66026dc
        push 0x44D
/*FIXUP push offset public_6602570 @0x65f558e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6602570
        mov eax, 0x100002
/*FIXUP push offset public_66024c8 @0x65f5598*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66024c8
        push eax
        mov eax, dword ptr ds : [public_6601008]
        call dword ptr ds : [eax]
        add esp, 0x14
        pop edi
        pop esi
        pop ebp
        or eax, 0xFFFFFFFF
        pop ebx
        add esp, 0x9C
        ret 8
        public_65f55b8 : nop
        mov dword ptr ds : [ecx+0x10], eax
        public_65f55bb : nop
        mov dword ptr ds : [eax+0x10], ebp
        mov dword ptr ds : [eax+0xC], ecx
        inc dword ptr ds : [edi+0x14]
        mov ebp, eax
        public_65f55c6 : nop
        push 0x44
        mov byte ptr ss : [ebp], 1
        call public_6600bb6
        add esp, 4
        test eax, eax
        je public_65f5603
        mov edx, dword ptr ss : [esp+0xB0]
        mov ecx, dword ptr ds : [edx+0x14]
        mov edx, dword ptr ds : [edx+0x10]
        mov dword ptr ds : [eax+0x24], ecx
        mov cl, byte ptr ds : [eax+0x34]
        and cl, 0xFE
        mov dword ptr ds : [eax+0x20], edx
        mov byte ptr ds : [eax+0x34], cl
        mov dword ptr ds : [eax], offset public_6601340
        mov dword ptr ds : [eax+0x3C], 0
        jmp public_65f5605
        public_65f5603 : nop
        xor eax, eax
        public_65f5605 : nop
        lea esi, ds:[ebx*4]
        mov dword ptr ss : [ebp+4], eax
        push esi
        mov dword ptr ds : [eax+4], ebp
        call public_6600bb6
        mov ecx, dword ptr ss : [ebp+4]
        mov dword ptr ds : [ecx+8], eax
        mov edx, dword ptr ss : [ebp+4]
        mov edi, dword ptr ds : [edx+8]
        mov ecx, esi
        mov eax, ecx
        shr ecx, 2
        lea esi, ss:[esp+0x6C]
        rep movsd
        mov ecx, eax
        lea eax, ds:[ebx*4]
        and ecx, 3
        push eax
        rep movsb
        call public_6600bb6
        mov ecx, dword ptr ss : [ebp+4]
        mov edx, ebx
        shl edx, 4
        push edx
        mov dword ptr ds : [ecx+0x18], eax
        call public_6600bb6
        mov ecx, dword ptr ss : [ebp+4]
        mov esi, dword ptr ss : [esp+0xBC]
        mov dword ptr ds : [ecx+0x1C], eax
        mov edx, dword ptr ss : [ebp+4]
        mov eax, dword ptr ds : [esi+0xC]
        mov dword ptr ds : [edx+0x28], eax
        mov ecx, dword ptr ss : [ebp+4]
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [ecx+0x10], edx
        mov eax, dword ptr ss : [ebp+4]
        mov ecx, dword ptr ds : [esi+8]
        lea edx, ds:[ebx+ebx*8]
        shl edx, 2
        push edx
        mov dword ptr ds : [eax+0x14], ecx
        call public_6600bb6
        mov ecx, dword ptr ss : [ebp+4]
        push ebx
        mov dword ptr ds : [ecx+0xC], eax
        call public_6600bb6
        mov edx, dword ptr ss : [ebp+4]
        mov dword ptr ds : [edx+0x2C], eax
        mov edx, dword ptr ss : [ebp+4]
        mov edi, dword ptr ds : [edx+0x2C]
        mov ecx, ebx
        mov edx, ecx
        shr ecx, 2
        xor eax, eax
        rep stosd
        mov ecx, edx
        and ecx, 3
        rep stosb
        mov eax, dword ptr ss : [ebp+4]
        mov ecx, dword ptr ds : [esi+0x18]
        mov dword ptr ds : [eax+0x38], ecx
        mov edx, dword ptr ss : [ebp+4]
        mov eax, dword ptr ds : [esi+0x1C]
        add esp, 0x14
        mov dword ptr ds : [edx+0x30], eax
        mov ecx, dword ptr ss : [ebp+4]
        push ebx
        call public_65fb030
        test al, al
        jne public_65f56f0
        mov ecx, dword ptr ss : [esp+0x14]
        push ebp
        call public_65f5950
        pop edi
        pop esi
        pop ebp
        or eax, 0xFFFFFFFF
        pop ebx
        add esp, 0x9C
        ret 8
        public_65f56f0 : nop
        mov edx, dword ptr ds : [esi+0xC]
        mov ecx, dword ptr ss : [esp+0xB4]
        xor edi, edi
        shr edx, 1
        and edx, 0x80
        cmp ebx, edi
        mov dword ptr ss : [esp+0x4C], 0
        mov dword ptr ss : [esp+0x54], 0x3F800000
        mov dword ptr ss : [esp+0x5C], 0x3F800000
        mov dword ptr ss : [esp+0x60], 0x3F800000
        mov dword ptr ss : [esp+0x64], edi
        mov dword ptr ss : [esp+0x58], ecx
        mov dword ptr ss : [esp+0x50], edx
        mov dword ptr ss : [esp+0x48], 0xFFFFFFFF
        mov dword ptr ss : [esp+0x40], edi
        mov dword ptr ss : [esp+0x44], edi
        mov dword ptr ss : [esp+0x3C], edi
        mov dword ptr ss : [esp+0x1C], edi
        jle public_65f5922
        xor esi, esi
        mov dword ptr ss : [esp+0x20], esi
        jmp public_65f5760
        public_65f5758 : nop
        mov esi, dword ptr ss : [esp+0x20]
        mov edi, dword ptr ss : [esp+0x1C]
        public_65f5760 : nop
        mov edx, dword ptr ss : [esp+0x28]
        mov ebx, dword ptr ss : [esp+edi*4+0x68]
        mov eax, dword ptr ds : [public_660313c]
        push edx
        lea edx, ss:[esp+0x40]
        push edx
        mov dword ptr ss : [esp+0x50], ebx
        mov edx, dword ptr ss : [ebp+4]
        mov ecx, dword ptr ds : [eax]
        push 4
        push edx
        push eax
        call dword ptr ds : [ecx+0xC]
        mov ecx, dword ptr ss : [ebp+4]
        mov edx, dword ptr ds : [ecx+0x18]
        mov dword ptr ds : [edx+edi*4], eax
        mov ecx, dword ptr ds : [public_660313c]
        mov edx, dword ptr ds : [ecx]
        lea edi, ss:[esp+0x4C]
        push edi
        push eax
        push ecx
        call dword ptr ds : [edx+0x1C]
        mov eax, dword ptr ds : [public_6603134]
        mov ecx, dword ptr ds : [eax]
        push ebx
        push eax
        call dword ptr ds : [ecx+0xC4]
        fld dword ptr ds : [eax+0x50]
        fadd dword ptr ds : [eax+0x4C]
        mov edx, dword ptr ss : [ebp+4]
        fmul qword ptr ds : [public_6601338]
        fstp dword ptr ss : [esp+0x2C]
        fld dword ptr ds : [eax+0x58]
        fadd dword ptr ds : [eax+0x54]
        fmul qword ptr ds : [public_6601338]
        fstp dword ptr ss : [esp+0x18]
        fld dword ptr ds : [eax+0x44]
        fadd dword ptr ds : [eax+0x40]
        mov eax, dword ptr ds : [edx+0xC]
        add eax, esi
        fmul qword ptr ds : [public_6601338]
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp+0x2C]
        fsin 
        fld dword ptr ss : [esp+0x2C]
        fcos 
        fld dword ptr ss : [esp+0x18]
        fsin 
        fld dword ptr ss : [esp+0x18]
        fcos 
        fstp qword ptr ss : [esp+0x2C]
        fld dword ptr ss : [esp+0x14]
        fsin 
        fld dword ptr ss : [esp+0x14]
        fcos 
        fld st(2)
        fmul st, st(5)
        fld st(2)
        fmul st, st(5)
        fstp dword ptr ss : [esp+0x18]
        fld st(1)
        fmul st, st(5)
        fstp dword ptr ss : [esp+0x14]
        fld st(1)
        fmul qword ptr ss : [esp+0x2C]
        fstp dword ptr ds : [eax]
        fld st(0)
        fmul st, st(2)
        fsub dword ptr ss : [esp+0x18]
        fstp dword ptr ds : [eax+4]
        fld dword ptr ss : [esp+0x14]
        fmul st, st(4)
        fld st(3)
        fmul st, st(7)
        faddp 
        fstp dword ptr ds : [eax+8]
        fld st(2)
        fmul qword ptr ss : [esp+0x2C]
        lea edx, ss:[esp+0x78]
        push edx
        push 0
        fstp dword ptr ds : [eax+0xC]
        push ebx
        fmul st, st(2)
        fadd dword ptr ss : [esp+0x20]
        fstp dword ptr ds : [eax+0x10]
        fld dword ptr ss : [esp+0x24]
        fmul st, st(3)
        fxch 
        fmul st, st(5)
        fsubp 
        fstp dword ptr ds : [eax+0x14]
        fstp st(0)
        fchs 
        fstp dword ptr ds : [eax+0x18]
        fld qword ptr ss : [esp+0x38]
        fmul st, st(2)
        fstp dword ptr ds : [eax+0x1C]
        fld qword ptr ss : [esp+0x38]
        fmul st, st(1)
        fstp dword ptr ds : [eax+0x20]
        mov eax, dword ptr ds : [public_6603134]
        mov ecx, dword ptr ds : [eax]
        fstp st(0)
        push eax
        fstp st(0)
        call dword ptr ds : [ecx+0xCC]
        mov eax, dword ptr ds : [public_6603170]
        test eax, eax
        jne public_65f58aa
        call public_6600de0
        mov dword ptr ds : [public_6603170], eax
        public_65f58aa : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x78]
        push edx
        lea edx, ss:[esp+0x8C]
        push edx
        push eax
        call dword ptr ds : [ecx+0x54]
        mov eax, dword ptr ss : [ebp+4]
        mov edi, dword ptr ds : [eax+0xC]
        mov edx, dword ptr ss : [esp+0xB0]
        add edi, esi
        mov ecx, 9
        lea esi, ss:[esp+0x88]
        rep movsd
        mov ecx, dword ptr ds : [edx+0x1C]
        xor eax, eax
        test ecx, ecx
        jle public_65f5902
        add edx, 0x20
        public_65f58e6 : nop
        cmp dword ptr ds : [edx], ebx
        je public_65f58f4
        inc eax
        add edx, 4
        cmp eax, ecx
        jl public_65f58e6
        jmp public_65f5902
        public_65f58f4 : nop
        mov ecx, dword ptr ss : [ebp+4]
        mov edx, dword ptr ds : [ecx+0x2C]
        mov eax, dword ptr ss : [esp+0x1C]
        mov byte ptr ds : [eax+edx], 1
        public_65f5902 : nop
        mov eax, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ss : [esp+0x24]
        inc eax
        add edx, 0x24
        cmp eax, ecx
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ss : [esp+0x20], edx
        jl public_65f5758
        public_65f5922 : nop
        mov ecx, dword ptr ss : [ebp+4]
        mov al, byte ptr ss : [esp+0x12]
        mov dl, byte ptr ds : [ecx+0x34]
        shl al, 1
        xor al, dl
        and al, 2
        pop edi
        xor al, dl
        pop esi
        mov byte ptr ds : [ecx+0x34], al
        mov eax, ebp
        pop ebp
        pop ebx
        add esp, 0x9C
        ret 8
        UNREACHABLE_TRAP(0x65f5400)
    }
}

#undef public_65f542b
#undef public_65f5437
#undef public_65f5450
#undef public_65f5483
#undef public_65f54e4
#undef public_65f54fd
#undef public_65f5510
#undef public_65f551e
#undef public_65f5549
#undef public_65f5560
#undef public_65f5584
#undef public_65f55b8
#undef public_65f55bb
#undef public_65f55c6
#undef public_65f5603
#undef public_65f5605
#undef public_65f56f0
#undef public_65f5758
#undef public_65f5760
#undef public_65f58aa
#undef public_65f58e6
#undef public_65f58f4
#undef public_65f5902
#undef public_65f5922
