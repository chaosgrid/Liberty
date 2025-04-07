#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6298f40);
CLANG_FORWARD_PROC_SYMBOL(public_62b1290);
CLANG_FORWARD_PROC_SYMBOL(public_62b14f0);

#define public_62b130f _public_62b130f
#define public_62b13db _public_62b13db
#define public_62b13df _public_62b13df
#define public_62b13f0 _public_62b13f0
#define public_62b1409 _public_62b1409
#define public_62b144a _public_62b144a
#define public_62b1460 _public_62b1460
#define public_62b146a _public_62b146a

PROC_DECLARE(0x62b1290, internal_62b1290, public_62b1290);
extern "C" NAKED register_t __cdecl internal_62b1290()
{
    __asm
    {
        sub esp, 0x40
        push ebp
        mov ebp, dword ptr ss : [esp+0x48]
        test ebp, ebp
        push esi
        mov esi, ecx
        je public_62b146a
        push ebx
        push edi
        mov byte ptr ss : [esp+0x54], 0
        call public_62b14f0
        mov ebx, dword ptr ss : [esp+0x58]
        mov edi, eax
        cmp dword ptr ds : [edi], 0
        mov dword ptr ss : [esp+0x10], 0
        jle public_62b144a
        mov eax, dword ptr ss : [ebp]
        lea ecx, ss:[esp+0x2C]
        push ecx
        mov ecx, ebp
        call dword ptr ds : [eax+4]
        mov edx, dword ptr ss : [ebp]
        xor ecx, ecx
        mov cx, word ptr ds : [esi+0x228]
        lea eax, ss:[esp+0x14]
        push eax
        push ecx
        mov ecx, ebp
        call dword ptr ds : [edx+0x18]
        test eax, eax
        je public_62b130f
        mov edx, dword ptr ss : [ebp]
        lea eax, ss:[esp+0x44]
        push eax
        mov ecx, ebp
        call dword ptr ds : [edx+0x14]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x14], ecx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x18], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x1C], eax
        public_62b130f : nop
        fld dword ptr ss : [esp+0x14]
        mov edx, dword ptr ds : [esi]
        fsub dword ptr ds : [esi+0x2C]
        lea eax, ss:[esp+0x44]
        push eax
        mov ecx, esi
        fstp dword ptr ss : [esp+0x3C]
        fld dword ptr ss : [esp+0x1C]
        fsub dword ptr ds : [esi+0x30]
        fstp dword ptr ss : [esp+0x40]
        fld dword ptr ss : [esp+0x20]
        fsub dword ptr ds : [esi+0x34]
        fstp dword ptr ss : [esp+0x44]
        call dword ptr ds : [edx+0x54]
        fld dword ptr ss : [esp+0x34]
        fsub dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [edi+4]
        fld dword ptr ss : [esp+0x30]
        lea ecx, ss:[esp+0x10]
        fsub dword ptr ds : [eax+4]
        push ecx
        fld dword ptr ss : [esp+0x30]
        push edx
        fsub dword ptr ds : [eax]
        lea eax, ss:[esp+0x28]
        push eax
        lea ecx, ss:[esp+0x44]
        fstp dword ptr ss : [esp+0x2C]
        push ecx
        fstp dword ptr ss : [esp+0x34]
        mov dword ptr ss : [esp+0x20], 0
        fstp dword ptr ss : [esp+0x38]
        call public_6298f40
        mov ebx, dword ptr ss : [esp+0x68]
        add esp, 0x10
        test al, al
        je public_62b13db
        fld dword ptr ss : [esp+0x20]
        mov edx, ebx
        fmul dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x24]
        fmul dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x28]
        fmul dword ptr ss : [esp+0x10]
        fstp dword ptr ss : [esp+0x40]
        fxch 
        fadd dword ptr ss : [esp+0x14]
        fstp dword ptr ss : [esp+0x20]
        mov eax, dword ptr ss : [esp+0x20]
        fadd dword ptr ss : [esp+0x18]
        mov dword ptr ds : [edx], eax
        fstp dword ptr ss : [esp+0x24]
        fld dword ptr ss : [esp+0x40]
        mov ecx, dword ptr ss : [esp+0x24]
        fadd dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [edx+4], ecx
        fstp dword ptr ss : [esp+0x28]
        mov eax, dword ptr ss : [esp+0x28]
        mov dword ptr ds : [edx+8], eax
        mov al, 1
        jmp public_62b13df
        public_62b13db : nop
        mov al, byte ptr ss : [esp+0x54]
        public_62b13df : nop
        test al, al
        fld dword ptr ds : [edi+8]
        fld st(0)
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x10]
        fstp st(0)
        jne public_62b1409
        public_62b13f0 : nop
        mov edx, dword ptr ss : [ebp]
        mov ecx, ebp
        call dword ptr ds : [edx]
        mov edx, dword ptr ds : [eax]
        mov ecx, ebx
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+8], eax
        public_62b1409 : nop
        fld dword ptr ds : [ebx]
        pop edi
        fsub dword ptr ds : [esi+0x2C]
        fld dword ptr ds : [ebx+4]
        fsub dword ptr ds : [esi+0x30]
        fld dword ptr ds : [ebx+8]
        fsub dword ptr ds : [esi+0x34]
        pop ebx
        fld st(0)
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp 
        fld st(3)
        fmul st, st(4)
        faddp 
        fcomp dword ptr ss : [esp+8]
        fstp st(0)
        fnstsw ax
        fstp st(0)
        test ah, 5
        fstp st(0)
        jp public_62b1460
        pop esi
        mov eax, 1
        pop ebp
        add esp, 0x40
        ret 8
        public_62b144a : nop
        mov eax, dword ptr ds : [edi+0xC]
        test eax, eax
        jle public_62b13f0
        fld dword ptr ds : [edi+0x10]
        fld st(0)
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x10]
        fstp st(0)
        jmp public_62b13f0
        public_62b1460 : nop
        pop esi
        xor eax, eax
        pop ebp
        add esp, 0x40
        ret 8
        public_62b146a : nop
        pop esi
        xor al, al
        pop ebp
        add esp, 0x40
        ret 8
        UNREACHABLE_TRAP(0x62b1290)
    }
}

#undef public_62b130f
#undef public_62b13db
#undef public_62b13df
#undef public_62b13f0
#undef public_62b1409
#undef public_62b144a
#undef public_62b1460
#undef public_62b146a
