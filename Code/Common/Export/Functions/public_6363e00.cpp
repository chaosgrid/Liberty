#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6347df0);
CLANG_FORWARD_PROC_SYMBOL(public_6347e00);
CLANG_FORWARD_PROC_SYMBOL(public_634d970);
CLANG_FORWARD_PROC_SYMBOL(public_634d9d0);
CLANG_FORWARD_PROC_SYMBOL(public_6352a90);
CLANG_FORWARD_PROC_SYMBOL(public_635ae60);
CLANG_FORWARD_PROC_SYMBOL(public_635b030);
CLANG_FORWARD_PROC_SYMBOL(public_635b210);
CLANG_FORWARD_PROC_SYMBOL(public_635b940);
CLANG_FORWARD_PROC_SYMBOL(public_635bdd0);
CLANG_FORWARD_PROC_SYMBOL(public_6363620);
CLANG_FORWARD_PROC_SYMBOL(public_6363ab0);
CLANG_FORWARD_PROC_SYMBOL(public_6363e00);

#define public_6363e46 _public_6363e46
#define public_63640f0 _public_63640f0
#define public_6364187 _public_6364187
#define public_63642fd _public_63642fd
#define public_63643be _public_63643be
#define public_6364420 _public_6364420
#define public_6364432 _public_6364432
#define public_636445e _public_636445e
#define public_63644b6 _public_63644b6
#define public_63644f4 _public_63644f4
#define public_6364532 _public_6364532
#define public_63645a3 _public_63645a3
#define public_63645b6 _public_63645b6

PROC_DECLARE(0x6363e00, internal_6363e00, public_6363e00);
extern "C" NAKED register_t __cdecl internal_6363e00()
{
    __asm
    {
        sub esp, 0x164
        mov eax, dword ptr ds : [ecx+4]
        push ebx
        push ebp
        push esi
        dec eax
        push edi
        mov dword ptr ss : [esp+0x2C], ecx
        mov dword ptr ds : [ecx+4], eax
        jns public_6363e46
        mov eax, dword ptr ss : [esp+0x17C]
        mov edx, dword ptr ss : [esp+0x178]
        push eax
        push 1
        push edx
        push 1
        call public_6352a90
        test eax, eax
        je public_6363e46
        pop edi
        pop esi
        pop ebp
        mov eax, 2
        pop ebx
        add esp, 0x164
        ret 0x18
        public_6363e46 : nop
        mov esi, dword ptr ss : [esp+0x180]
        mov eax, dword ptr ds : [esi]
        fld dword ptr ds : [eax]
        lea ecx, ds:[esi+8]
        fsub dword ptr ds : [ecx]
        mov edi, dword ptr ss : [esp+0x18C]
        fld dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x34], ecx
        fsub dword ptr ds : [ecx+4]
        fld dword ptr ds : [eax+8]
        lea eax, ss:[esp+0x94]
        fsub dword ptr ds : [ecx+8]
        push eax
        fxch 
        lea ecx, ss:[esp+0x78]
        fmul dword ptr ds : [esi+0x5C]
        push ecx
        fxch 
        mov ecx, dword ptr ds : [edi+8]
        fmul dword ptr ds : [esi+0x60]
        faddp 
        fxch 
        fmul dword ptr ds : [esi+0x58]
        faddp 
        fstp dword ptr ss : [esp+0x1C]
        fld dword ptr ds : [esi+0x60]
        mov ebp, dword ptr ss : [esp+0x1C]
        fld dword ptr ds : [esi+0x5C]
        shr ebp, 0x1F
        fld dword ptr ds : [esi+0x58]
        mov dword ptr ss : [esp+0x28], ebp
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
        fdivr dword ptr ds : [public_63a53d0]
        fstp dword ptr ss : [esp+0x18]
        fld dword ptr ds : [esi+0x58]
        fstp dword ptr ss : [esp+0x7C]
        fld dword ptr ds : [esi+0x5C]
        fstp dword ptr ss : [esp+0x80]
        fld dword ptr ds : [esi+0x60]
        fstp dword ptr ss : [esp+0x84]
        call public_634d9d0
        mov ebx, dword ptr ss : [esp+0x188]
        mov ecx, dword ptr ds : [ebx+8]
        lea edx, ss:[esp+0xA4]
        push edx
        lea eax, ss:[esp+0x98]
        push eax
        call public_634d970
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0x2C]
        mov ecx, dword ptr ds : [edx]
        fabs 
        fstp dword ptr ds : [ecx+0x54]
        mov eax, dword ptr ds : [edx]
        fld dword ptr ds : [eax+0x54]
        fsub dword ptr ds : [eax+0x50]
        fstp dword ptr ds : [eax+0x54]
        fild dword ptr ss : [esp+0x20]
        fsub dword ptr ds : [public_63a5460]
        mov eax, dword ptr ds : [edx]
        add eax, 0x60
        fmul dword ptr ss : [esp+0x10]
        fadd st(0), st
        fld dword ptr ss : [esp+0x98]
        fmul st, st(1)
        fld dword ptr ss : [esp+0x9C]
        fmul st, st(2)
        fstp dword ptr ss : [esp+0x20]
        fld dword ptr ss : [esp+0x94]
        mov ecx, dword ptr ss : [esp+0x20]
        fmul st, st(2)
        mov dword ptr ds : [eax+8], ecx
        fstp dword ptr ds : [eax]
        fstp dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ebx+8]
        mov eax, dword ptr ds : [edi+8]
        fstp st(0)
        add eax, 0x5C
        fld dword ptr ds : [ecx+0x5C]
        add ecx, 0x5C
        fsub dword ptr ds : [eax]
        fld dword ptr ds : [ecx+4]
        fsub dword ptr ds : [eax+4]
        fld dword ptr ds : [ecx+8]
        fsub dword ptr ds : [eax+8]
        mov eax, dword ptr ds : [edx]
        fxch 
        lea edx, ss:[esp+0xB4]
        fmul dword ptr ds : [eax+0x64]
        push edx
        fxch 
        push ebx
        fmul dword ptr ds : [eax+0x68]
        push edi
        faddp 
        fxch 
        fmul dword ptr ds : [eax+0x60]
        faddp 
        fstp dword ptr ds : [eax+0x58]
        mov eax, dword ptr ds : [esi]
        push eax
        call public_635b030
        mov edx, dword ptr ds : [esi+4]
        lea ecx, ss:[esp+0xD4]
        push ecx
        push ebx
        push edi
        push edx
        call public_635b030
        mov ecx, dword ptr ss : [esp+0x198]
        mov eax, dword ptr ds : [ecx]
        shl eax, 1
        sar eax, 0x11
        lea edx, ds:[ecx+eax*4]
        mov eax, dword ptr ds : [esi+0x4C]
        mov dword ptr ss : [esp+0xF4], edx
        lea edx, ss:[esp+0xD4]
        mov dword ptr ss : [esp+0xFC], edx
        lea edx, ss:[esp+0xC4]
        mov dword ptr ss : [esp+0x11C], ecx
        mov dword ptr ss : [esp+0xF8], eax
        mov dword ptr ss : [esp+0x108], edx
        mov dword ptr ss : [esp+0x104], ebx
        mov dword ptr ss : [esp+0x100], edi
        mov ecx, dword ptr ds : [eax]
        shl ecx, 1
        add esp, 0x20
        sar ecx, 0x11
        lea edx, ds:[eax+ecx*4]
        lea eax, ss:[esp+0xC4]
        mov dword ptr ss : [esp+0x100], edx
        mov dword ptr ss : [esp+0x104], eax
        mov dword ptr ss : [esp+0x10C], ebx
        lea ecx, ss:[esp+0xA4]
        mov dword ptr ss : [esp+0x110], ecx
        mov ecx, dword ptr ss : [esp+0x17C]
        mov edx, dword ptr ds : [ecx]
        shl edx, 1
        sar edx, 0x11
        lea eax, ds:[ecx+edx*4]
        mov edx, dword ptr ss : [esp+0x34]
        mov dword ptr ss : [esp+0x124], eax
        mov eax, dword ptr ds : [esi+0x48]
        mov dword ptr ss : [esp+0x12C], edx
        lea edx, ss:[esp+0x74]
        mov dword ptr ss : [esp+0x14C], ecx
        mov dword ptr ss : [esp+0x128], eax
        mov dword ptr ss : [esp+0x138], edx
        mov dword ptr ss : [esp+0x108], edi
        mov dword ptr ss : [esp+0x134], edi
        mov dword ptr ss : [esp+0x130], ebx
        mov ecx, dword ptr ds : [eax]
        shl ecx, 1
        sar ecx, 0x11
        lea edx, ds:[eax+ecx*4]
        add esi, 0x18
        lea eax, ss:[esp+0x74]
        lea ecx, ss:[esp+0x64]
        mov dword ptr ss : [esp+0x30], esi
        mov dword ptr ss : [esp+0x154], esi
        mov dword ptr ss : [esp+0x150], edx
        mov dword ptr ss : [esp+0x15C], edi
        mov dword ptr ss : [esp+0x158], ebx
        mov dword ptr ss : [esp+0x160], eax
        mov dword ptr ss : [esp+0x14], 0
        lea esi, ss:[esp+0xEC]
        mov dword ptr ss : [esp+0x10], ecx
        public_63640f0 : nop
        mov ecx, dword ptr ds : [esi-0x18]
        mov eax, ecx
        and eax, 0xFFFFFFF0
        mov edx, dword ptr ds : [eax]
        and edx, 0xFFF
        inc edx
        shl edx, 4
        push esi
        sub eax, edx
        push eax
        push ecx
        call public_635b940
        fld dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [esi-4]
        fmul dword ptr ds : [eax+8]
        add esp, 0xC
        fld dword ptr ds : [eax+4]
        add esi, 0x28
        fmul dword ptr ds : [esi-0x24]
        faddp 
        fld dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x14]
        fmul dword ptr ds : [esi-0x28]
        mov ecx, eax
        sar ecx, 1
        faddp 
        fstp dword ptr ss : [esp+0x20]
        mov edx, dword ptr ss : [esp+0x20]
        shr edx, 0x1F
        xor edx, ecx
        mov ecx, dword ptr ss : [esp+0x10]
        xor edx, ebp
        inc eax
        mov dword ptr ds : [ecx], edx
        add ecx, 4
        cmp eax, 3
        mov dword ptr ss : [esp+0x14], eax
        mov dword ptr ss : [esp+0x10], ecx
        jle public_63640f0
        xor ecx, ecx
        lea edx, ss:[esp+0x64]
        mov dword ptr ss : [esp+0x38], 0xB68637BD
        mov dword ptr ss : [esp+0x10], ecx
        mov dword ptr ss : [esp+0x1C], ecx
        mov dword ptr ss : [esp+0x24], ecx
        mov dword ptr ss : [esp+0x18], ecx
        mov dword ptr ss : [esp+0x20], ecx
        lea esi, ss:[esp+0xF0]
        mov dword ptr ss : [esp+0x14], edx
        public_6364187 : nop
        mov edx, dword ptr ss : [esp+0x14]
        mov eax, ecx
        xor eax, ebp
        xor eax, dword ptr ds : [edx]
        lea eax, ds:[eax+eax*4]
        lea edx, ss:[esp+eax*8+0xD4]
        mov eax, ecx
        xor eax, ebp
        mov ecx, eax
        xor ecx, 1
        mov dword ptr ss : [esp+0x3C], edx
        lea edx, ds:[eax+eax*4]
        mov eax, dword ptr ss : [esp+edx*8+0xDC]
        fld dword ptr ds : [eax]
        lea ecx, ds:[ecx+ecx*4]
        mov ecx, dword ptr ss : [esp+ecx*8+0xDC]
        fsub dword ptr ds : [ecx]
        fstp dword ptr ss : [esp+0x40]
        fld dword ptr ds : [eax+4]
        fsub dword ptr ds : [ecx+4]
        fstp dword ptr ss : [esp+0x44]
        fld dword ptr ds : [eax+8]
        fsub dword ptr ds : [ecx+8]
        fst dword ptr ss : [esp+0x48]
        fmul dword ptr ds : [esi+4]
        fld dword ptr ss : [esp+0x40]
        fmul dword ptr ds : [esi-4]
        faddp 
        fld dword ptr ss : [esp+0x44]
        fmul dword ptr ds : [esi]
        faddp 
        fst dword ptr ss : [esp+0x28]
        fcomp dword ptr ds : [public_63a53d4]
        fnstsw ax
        test ah, 1
        je public_63642fd
        fld dword ptr ds : [esi+4]
        push ecx
        fld dword ptr ds : [esi]
        fld dword ptr ds : [esi-4]
        fld st(0)
        fmul st, st(1)
        fld st(3)
        fmul st, st(4)
        faddp 
        fld st(2)
        fmul st, st(3)
        faddp 
        fstp dword ptr ss : [esp]
        fstp st(0)
        fstp st(0)
        fstp st(0)
        call public_6347df0
        fstp dword ptr ss : [esp+0x64]
        fld dword ptr ss : [esp+0x48]
        fld dword ptr ss : [esp+0x4C]
        fld dword ptr ss : [esp+0x44]
        fmul dword ptr ss : [esp+0x44]
        fld st(1)
        fmul st, st(2)
        faddp 
        fld st(2)
        fmul st, st(3)
        faddp 
        fstp dword ptr ss : [esp]
        fstp st(0)
        fstp st(0)
        call public_6347df0
        fmul dword ptr ss : [esp+0x2C]
        add esp, 4
        fmul dword ptr ss : [esp+0x60]
        fst dword ptr ss : [esp+0x28]
        fcomp dword ptr ss : [esp+0x38]
        fnstsw ax
        test ah, 1
        je public_63642fd
        mov ecx, dword ptr ss : [esp+0x3C]
        mov edx, dword ptr ds : [ecx+8]
        mov ecx, dword ptr ds : [esi-0xC]
        lea eax, ss:[esp+0x84]
        push eax
        mov eax, dword ptr ds : [esi-0x1C]
        push edx
        mov edx, dword ptr ds : [ecx+4]
        push eax
        push edx
        call public_635b210
        fld dword ptr ss : [esp+0x94]
        fcomp dword ptr ds : [public_63a53d4]
        add esp, 0x10
        fnstsw ax
        test ah, 0x41
        jne public_63642fd
        mov eax, dword ptr ss : [esp+0x28]
        mov dword ptr ss : [esp+0x38], eax
        mov eax, dword ptr ss : [esp+0x3C]
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax+0xC]
        mov eax, dword ptr ds : [esi-0x1C]
        mov dword ptr ss : [esp+0x10], ecx
        mov ecx, dword ptr ds : [esi-0xC]
        mov dword ptr ss : [esp+0x24], edx
        mov edx, dword ptr ss : [esp+0x84]
        mov dword ptr ss : [esp+0x1C], eax
        mov eax, dword ptr ss : [esp+0x88]
        mov dword ptr ss : [esp+0x18], ecx
        mov ecx, dword ptr ss : [esp+0x8C]
        mov dword ptr ss : [esp+0x50], edx
        mov edx, dword ptr ss : [esp+0x90]
        mov dword ptr ss : [esp+0x54], eax
        mov dword ptr ss : [esp+0x58], ecx
        mov dword ptr ss : [esp+0x5C], edx
        public_63642fd : nop
        mov ecx, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ss : [esp+0x14]
        inc ecx
        add eax, 4
        add esi, 0x28
        cmp ecx, 3
        mov dword ptr ss : [esp+0x20], ecx
        mov dword ptr ss : [esp+0x14], eax
        jle public_6364187
        mov ebp, dword ptr ss : [esp+0x10]
        test ebp, ebp
        jne public_6364432
        mov eax, dword ptr ds : [ebx+0x10]
        mov ecx, dword ptr ss : [esp+0x178]
        mov esi, dword ptr ss : [esp+0x17C]
        mov dword ptr ds : [eax+0x14], ecx
        mov edx, 1
        mov word ptr ds : [eax+0x1A], dx
        mov eax, dword ptr ds : [edi+0x10]
        mov word ptr ds : [eax+0x1A], dx
        mov edx, dword ptr ss : [esp+0x68]
        mov dword ptr ds : [eax+0x14], esi
        mov eax, dword ptr ss : [esp+0x64]
        add edx, eax
        mov eax, 2
        cmp edx, eax
        jne public_63643be
        mov ebx, dword ptr ds : [ebx+0x10]
        mov dword ptr ds : [ebx+0x14], ecx
        mov word ptr ds : [ebx+0x1A], 5
        mov edi, dword ptr ds : [edi+0x10]
        mov word ptr ds : [edi+0x1A], ax
        mov eax, dword ptr ss : [esp+0x184]
        mov dword ptr ds : [edi+0x14], esi
        fld dword ptr ds : [eax+8]
        fld st(0)
        mov edx, dword ptr ss : [esp+0x2C]
        fadd dword ptr ds : [eax+0xC]
        push ecx
        lea eax, ss:[esp+0xC8]
        lea ecx, ss:[esp+0xB8]
        fdivr st, st(1)
        fstp dword ptr ss : [esp]
        push eax
        push ecx
        fstp st(0)
        lea ecx, ds:[edx+8]
        call public_6347e00
        pop edi
        pop esi
        pop ebp
        mov eax, 3
        pop ebx
        add esp, 0x164
        ret 0x18
        public_63643be : nop
        mov edx, dword ptr ss : [esp+0x6C]
        mov ebp, dword ptr ss : [esp+0x70]
        add ebp, edx
        cmp ebp, eax
        jne public_6364420
        mov ebx, dword ptr ds : [ebx+0x10]
        mov word ptr ds : [ebx+0x1A], ax
        mov eax, dword ptr ss : [esp+0x184]
        mov dword ptr ds : [ebx+0x14], ecx
        fld dword ptr ds : [eax]
        fld st(0)
        mov edx, dword ptr ss : [esp+0x2C]
        fadd dword ptr ds : [eax+4]
        mov eax, dword ptr ss : [esp+0x30]
        push ecx
        mov ecx, dword ptr ss : [esp+0x38]
        fdivr st, st(1)
        fstp dword ptr ss : [esp]
        push eax
        push ecx
        fstp st(0)
        lea ecx, ds:[edx+8]
        call public_6347e00
        mov edi, dword ptr ds : [edi+0x10]
        mov dword ptr ds : [edi+0x14], esi
        mov word ptr ds : [edi+0x1A], 5
        pop edi
        pop esi
        pop ebp
        mov eax, 3
        pop ebx
        add esp, 0x164
        ret 0x18
        public_6364420 : nop
        pop edi
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        add esp, 0x164
        ret 0x18
        public_6364432 : nop
        mov edi, dword ptr ss : [esp+0x2C]
        mov ecx, dword ptr ds : [edi]
        mov eax, dword ptr ds : [ecx+0x14]
        shr eax, 8
        and eax, 3
        lea edx, ds:[eax*8]
        sub edx, eax
        lea eax, ds:[ecx+edx*4+0x18]
        mov edx, dword ptr ss : [esp+0x24]
        cmp dword ptr ds : [edx+0x10], eax
        je public_636445e
        xor dword ptr ds : [ecx+0x14], 0x100
        public_636445e : nop
        mov eax, dword ptr ss : [esp+0x54]
        mov ebx, dword ptr ss : [esp+0x58]
        mov esi, dword ptr ss : [esp+0x50]
        or eax, ebx
        or eax, esi
        test eax, 0x80000000
        jne public_63644b6
        mov eax, dword ptr ss : [esp+0x18]
        lea ecx, ss:[esp+0x64]
        push ecx
        push eax
        push edx
        push ebp
        call public_635ae60
        mov ecx, dword ptr ss : [esp+0x28]
        mov edx, dword ptr ss : [esp+0x34]
        mov eax, dword ptr ss : [esp+0x2C]
        add esp, 0x10
        push ecx
        push edx
        mov edx, dword ptr ss : [esp+0x18]
        push eax
        lea ecx, ss:[esp+0x70]
        push ecx
        push edx
        mov ecx, edi
        call public_6363620
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x164
        ret 0x18
        public_63644b6 : nop
        fld dword ptr ss : [esp+0x58]
        fcomp dword ptr ds : [public_63a53d4]
        fnstsw ax
        test ah, 1
        jne public_63644f4
        mov eax, dword ptr ss : [esp+0x18]
        push eax
        mov eax, dword ptr ss : [esp+0x20]
        push edx
        mov ecx, eax
        and ecx, 0xC
        mov edx, dword ptr ds : [ecx+public_63ee4e0]
        add edx, eax
        push edx
        push ebp
        mov ecx, edi
        call public_6363ab0
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x164
        ret 0x18
        public_63644f4 : nop
        fld dword ptr ss : [esp+0x54]
        fcomp dword ptr ds : [public_63a53d4]
        fnstsw ax
        test ah, 1
        jne public_6364532
        mov eax, dword ptr ss : [esp+0x18]
        push eax
        mov eax, dword ptr ss : [esp+0x20]
        push edx
        mov ecx, eax
        and ecx, 0xC
        mov edx, dword ptr ds : [ecx+public_63ee4f0]
        add edx, eax
        push edx
        push ebp
        mov ecx, edi
        call public_6363ab0
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x164
        ret 0x18
        public_6364532 : nop
        mov eax, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ss : [esp+0x18]
        push ecx
        mov esi, eax
        push edx
        and esi, 0xC
        mov edx, dword ptr ds : [esi+public_63ee4e0]
        add edx, eax
        push edx
        push ebp
        call public_635bdd0
        fstp dword ptr ss : [esp+0x40]
        mov eax, dword ptr ds : [esi+public_63ee4f0]
        mov ebp, dword ptr ss : [esp+0x2C]
        mov ecx, dword ptr ds : [eax+ebp]
        mov edx, dword ptr ss : [esp+0x28]
        mov ebx, dword ptr ss : [esp+0x20]
        add eax, ebp
        mov ebp, dword ptr ss : [esp+0x34]
        shl ecx, 1
        push edx
        sar ecx, 0x11
        push ebp
        lea eax, ds:[eax+ecx*4]
        push eax
        push ebx
        call public_635bdd0
        fcomp dword ptr ss : [esp+0x50]
        add esp, 0x20
        fnstsw ax
        test ah, 1
        je public_63645a3
        mov ecx, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ds : [esi+public_63ee4f0]
        mov esi, dword ptr ss : [esp+0x1C]
        push ecx
        push ebp
        add edx, esi
        push edx
        jmp public_63645b6
        public_63645a3 : nop
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [esi+public_63ee4e0]
        mov esi, dword ptr ss : [esp+0x1C]
        push eax
        push ebp
        add ecx, esi
        push ecx
        public_63645b6 : nop
        push ebx
        mov ecx, edi
        call public_6363ab0
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x164
        ret 0x18
        UNREACHABLE_TRAP(0x6363e00)
    }
}

#undef public_6363e46
#undef public_63640f0
#undef public_6364187
#undef public_63642fd
#undef public_63643be
#undef public_6364420
#undef public_6364432
#undef public_636445e
#undef public_63644b6
#undef public_63644f4
#undef public_6364532
#undef public_63645a3
#undef public_63645b6
