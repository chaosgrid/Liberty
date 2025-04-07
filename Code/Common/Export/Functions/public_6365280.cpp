#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_628bed0);
CLANG_FORWARD_PROC_SYMBOL(public_6347df0);
CLANG_FORWARD_PROC_SYMBOL(public_6347ef0);
CLANG_FORWARD_PROC_SYMBOL(public_63485e0);
CLANG_FORWARD_PROC_SYMBOL(public_634d970);
CLANG_FORWARD_PROC_SYMBOL(public_634d9d0);
CLANG_FORWARD_PROC_SYMBOL(public_6352a90);
CLANG_FORWARD_PROC_SYMBOL(public_635ae60);
CLANG_FORWARD_PROC_SYMBOL(public_635b210);
CLANG_FORWARD_PROC_SYMBOL(public_635b3b0);
CLANG_FORWARD_PROC_SYMBOL(public_635b570);
CLANG_FORWARD_PROC_SYMBOL(public_6363350);
CLANG_FORWARD_PROC_SYMBOL(public_6363ab0);
CLANG_FORWARD_PROC_SYMBOL(public_6365280);

#define public_63652c6 _public_63652c6
#define public_63654dd _public_63654dd
#define public_6365505 _public_6365505
#define public_636550a _public_636550a
#define public_636553c _public_636553c
#define public_63655af _public_63655af
#define public_6365696 _public_6365696
#define public_63656da _public_63656da
#define public_636577c _public_636577c
#define public_6365808 _public_6365808
#define public_6365810 _public_6365810
#define public_6365816 _public_6365816
#define public_6365836 _public_6365836
#define public_6365890 _public_6365890
#define public_63658b5 _public_63658b5

PROC_DECLARE(0x6365280, internal_6365280, public_6365280);
extern "C" NAKED register_t __cdecl internal_6365280()
{
    __asm
    {
        sub esp, 0x128
        mov eax, dword ptr ds : [ecx+4]
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x13C]
        dec eax
        push edi
        mov edi, dword ptr ss : [esp+0x13C]
        mov dword ptr ss : [esp+0x14], ecx
        mov dword ptr ds : [ecx+4], eax
        jns public_63652c6
        push esi
        push 1
        push edi
        push 0
        call public_6352a90
        test eax, eax
        je public_63652c6
        pop edi
        pop esi
        pop ebp
        mov eax, 2
        pop ebx
        add esp, 0x128
        ret 0x10
        public_63652c6 : nop
        mov ebx, dword ptr ss : [esp+0x148]
        mov ecx, dword ptr ss : [esp+0x144]
        lea eax, ss:[esp+0x60]
        push eax
        push ebx
        push ecx
        push edi
        call public_635ae60
        mov ebp, dword ptr ds : [esi]
        mov edi, dword ptr ds : [ebx]
        mov edx, esi
        and edx, 0xC
        mov ecx, dword ptr ds : [edx+public_63ee4e0]
        mov ecx, dword ptr ds : [ecx+esi]
        mov edx, dword ptr ds : [edx+public_63ee4f0]
        mov edx, dword ptr ds : [edx+esi]
        mov eax, ebp
        and ecx, 0xFFFF
        shl ecx, 4
        fld dword ptr ds : [ecx+edi+4]
        add ecx, edi
        and eax, 0xFFFF
        and edx, 0xFFFF
        shl eax, 4
        fsub dword ptr ds : [eax+edi+4]
        add eax, edi
        fld dword ptr ds : [ecx+8]
        shl edx, 4
        fsub dword ptr ds : [eax+8]
        add edx, edi
        lea edi, ss:[ebp+ebp]
        sar edi, 0x11
        fstp dword ptr ss : [esp+0x20]
        lea edi, ds:[esi+edi*4]
        fld dword ptr ds : [ecx]
        mov ecx, dword ptr ss : [esp+0x20]
        fsub dword ptr ds : [eax]
        mov ebp, edi
        and ebp, 0xC
        mov ebp, dword ptr ss : [ebp+public_63ee4f0]
        mov edi, dword ptr ds : [edi+ebp]
        mov dword ptr ss : [esp+0x58], ecx
        fstp dword ptr ss : [esp+0x50]
        mov ebp, dword ptr ds : [ebx]
        fstp dword ptr ss : [esp+0x54]
        and edi, 0xFFFF
        fld dword ptr ss : [esp+0x74]
        shl edi, 4
        fsub dword ptr ds : [eax+4]
        add esp, 0x10
        fld dword ptr ss : [esp+0x68]
        add edi, ebp
        fsub dword ptr ds : [eax+8]
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x60]
        mov ecx, dword ptr ss : [esp+0x10]
        fsub dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x58], ecx
        fstp dword ptr ss : [esp+0x50]
        fstp dword ptr ss : [esp+0x54]
        fld dword ptr ds : [edx+4]
        fsub dword ptr ds : [eax+4]
        fld dword ptr ds : [edx+8]
        fsub dword ptr ds : [eax+8]
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ds : [edx]
        mov edx, dword ptr ss : [esp+0x10]
        fsub dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x98], edx
        fstp dword ptr ss : [esp+0x90]
        fstp dword ptr ss : [esp+0x94]
        fld dword ptr ds : [edi+4]
        fsub dword ptr ds : [eax+4]
        fld dword ptr ds : [edi+8]
        fsub dword ptr ds : [eax+8]
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ds : [edi]
        fsub dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x10]
        lea ecx, ss:[esp+0x90]
        push ecx
        fstp dword ptr ss : [esp+0xA4]
        lea edx, ss:[esp+0x44]
        push edx
        fstp dword ptr ss : [esp+0xAC]
        lea ecx, ss:[esp+0x78]
        mov dword ptr ss : [esp+0xB0], eax
        call public_628bed0
        lea eax, ss:[esp+0x40]
        push eax
        lea ecx, ss:[esp+0xA4]
        push ecx
        lea ecx, ss:[esp+0x88]
        call public_628bed0
        fld dword ptr ss : [esp+0x58]
        fmul dword ptr ss : [esp+0x78]
        mov ecx, dword ptr ds : [ebx+4]
        fld dword ptr ss : [esp+0x54]
        lea edx, ss:[esp+0xC0]
        fmul dword ptr ss : [esp+0x74]
        push edx
        lea eax, ss:[esp+0x64]
        push eax
        faddp 
        push esi
        fld dword ptr ss : [esp+0x5C]
        push ecx
        fmul dword ptr ss : [esp+0x80]
        faddp 
        fstp dword ptr ss : [esp+0x40]
        fld dword ptr ss : [esp+0x68]
        fmul dword ptr ss : [esp+0x98]
        fld dword ptr ss : [esp+0x64]
        fmul dword ptr ss : [esp+0x94]
        faddp 
        fld dword ptr ss : [esp+0x90]
        fmul dword ptr ss : [esp+0x60]
        faddp 
        fstp dword ptr ss : [esp+0x44]
        call public_635b210
        mov ecx, dword ptr ds : [esi]
        lea edx, ss:[esp+0xC0]
        push edx
        shl ecx, 1
        lea eax, ss:[esp+0x74]
        push eax
        mov eax, dword ptr ds : [ebx+4]
        sar ecx, 0x11
        lea edx, ds:[esi+ecx*4]
        push edx
        push eax
        call public_635b210
        fld dword ptr ss : [esp+0xE0]
        fcomp dword ptr ds : [public_63a53d4]
        add esp, 0x20
        fld dword ptr ss : [esp+0xB0]
        fnstsw ax
        fcomp dword ptr ds : [public_63a53d4]
        test ah, 0x41
        fnstsw ax
        jne public_6365505
        test ah, 0x41
        jne public_63654dd
        fld dword ptr ss : [esp+0x34]
        fcomp dword ptr ds : [public_63a53d4]
        fnstsw ax
        test ah, 0x41
        je public_636550a
        public_63654dd : nop
        mov ecx, dword ptr ss : [esp+0x144]
        mov edx, dword ptr ss : [esp+0x13C]
        push ebx
        push ecx
        mov ecx, dword ptr ss : [esp+0x1C]
        push esi
        push edx
        call public_6363350
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x128
        ret 0x10
        public_6365505 : nop
        test ah, 0x41
        jne public_636553c
        public_636550a : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ss : [esp+0x144]
        shl eax, 1
        push ebx
        sar eax, 0x11
        push ecx
        mov ecx, dword ptr ss : [esp+0x1C]
        lea edx, ds:[esi+eax*4]
        mov eax, dword ptr ss : [esp+0x144]
        push edx
        push eax
        call public_6363350
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x128
        ret 0x10
        public_636553c : nop
        fld dword ptr ss : [esp+0x30]
        fcomp dword ptr ds : [public_63a53d4]
        fnstsw ax
        test ah, 1
        je public_63655af
        fld dword ptr ss : [esp+0x34]
        fcomp dword ptr ds : [public_63a53d4]
        fnstsw ax
        test ah, 1
        je public_63655af
        mov ecx, dword ptr ss : [esp+0x144]
        mov eax, dword ptr ds : [ecx+0x10]
        mov edx, dword ptr ss : [esp+0x13C]
        mov dword ptr ds : [eax+0x14], edx
        mov word ptr ds : [eax+0x1A], 0
        mov ebx, dword ptr ds : [ebx+0x10]
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [ebx+0x14], esi
        mov word ptr ds : [ebx+0x1A], 5
        fld dword ptr ss : [esp+0x60]
        fstp dword ptr ds : [eax+8]
        fld dword ptr ss : [esp+0x64]
        pop edi
        fstp dword ptr ds : [eax+0xC]
        fld dword ptr ss : [esp+0x64]
        pop esi
        fstp dword ptr ds : [eax+0x10]
        pop ebp
        mov eax, 3
        pop ebx
        add esp, 0x128
        ret 0x10
        public_63655af : nop
        lea eax, ss:[esp+0x50]
        push eax
        lea ecx, ss:[esp+0x44]
        push ecx
        lea ecx, ss:[esp+0x28]
        call public_628bed0
        fld dword ptr ss : [esp+0x40]
        fmul dword ptr ss : [esp+0x40]
        fld dword ptr ss : [esp+0x48]
        fmul dword ptr ss : [esp+0x48]
        faddp 
        fld dword ptr ss : [esp+0x44]
        fmul dword ptr ss : [esp+0x44]
        faddp 
        fdivr dword ptr ds : [public_63a53d0]
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x28]
        fmul dword ptr ss : [esp+0x28]
        fld dword ptr ss : [esp+0x24]
        fmul dword ptr ss : [esp+0x24]
        faddp 
        fld dword ptr ss : [esp+0x20]
        fmul dword ptr ss : [esp+0x20]
        faddp 
        fmul dword ptr ss : [esp+0x10]
        fst dword ptr ss : [esp+0x18]
        fcomp dword ptr ds : [public_63a53d8]
        fnstsw ax
        test ah, 0x41
        jne public_6365696
        mov edx, dword ptr ss : [esp+0x18]
        push edx
        call public_6347df0
        fstp dword ptr ss : [esp+0x20]
        fld dword ptr ss : [esp+0x20]
        mov edi, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [edi]
        fmul dword ptr ss : [esp+0x1C]
        add esp, 4
        lea ecx, ss:[esp+0x40]
        fsub dword ptr ds : [eax+0x50]
        fstp dword ptr ds : [eax+0x54]
        lea eax, ss:[esp+0x20]
        push eax
        push ecx
        lea ecx, ss:[esp+0x28]
        call public_628bed0
        mov ecx, dword ptr ds : [ebx+8]
        lea edx, ss:[esp+0x20]
        push edx
        lea eax, ss:[esp+0x24]
        push eax
        call public_634d9d0
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [edi]
        add eax, 0x60
        fchs 
        fld dword ptr ss : [esp+0x24]
        fmul st, st(1)
        fld dword ptr ss : [esp+0x28]
        fmul st, st(2)
        fstp dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0x10]
        fxch 
        fmul dword ptr ss : [esp+0x20]
        mov dword ptr ds : [eax+8], ecx
        fstp dword ptr ds : [eax]
        fstp dword ptr ds : [eax+4]
        jmp public_63656da
        public_6365696 : nop
        mov edi, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [edi]
        fld dword ptr ds : [eax+0x50]
        lea edx, ss:[esp+0x40]
        fchs 
        push edx
        lea ecx, ss:[esp+0x34]
        fstp dword ptr ds : [eax+0x54]
        call public_63485e0
        lea ecx, ss:[esp+0x30]
        call public_6347ef0
        fld dword ptr ss : [esp+0x34]
        mov eax, dword ptr ds : [edi]
        fld dword ptr ss : [esp+0x30]
        mov ecx, dword ptr ss : [esp+0x38]
        add eax, 0x60
        fstp dword ptr ds : [eax]
        mov edx, ecx
        fstp dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x10], ecx
        mov dword ptr ds : [eax+8], edx
        public_63656da : nop
        mov ebp, dword ptr ss : [esp+0x144]
        mov ecx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ds : [ebx+8]
        fld dword ptr ds : [ecx+0x5C]
        fsub dword ptr ds : [eax+0x5C]
        add ecx, 0x5C
        fld dword ptr ds : [ecx+4]
        add eax, 0x5C
        fsub dword ptr ds : [eax+4]
        fld dword ptr ds : [ecx+8]
        lea ecx, ss:[esp+0x20]
        fsub dword ptr ds : [eax+8]
        mov eax, dword ptr ds : [edi]
        fxch 
        fmul dword ptr ds : [eax+0x64]
        fxch 
        fmul dword ptr ds : [eax+0x68]
        faddp 
        fxch 
        fmul dword ptr ds : [eax+0x60]
        faddp 
        fstp dword ptr ds : [eax+0x58]
        lea eax, ss:[esp+0x20]
        push eax
        push ecx
        mov ecx, dword ptr ss : [ebp+8]
        call public_634d970
        fld dword ptr ss : [esp+0x18]
        mov eax, dword ptr ss : [esp+0x13C]
        fmul dword ptr ds : [public_63a5610]
        mov edi, dword ptr ds : [eax]
        mov ecx, dword ptr ss : [ebp]
        mov edx, eax
        fstp dword ptr ss : [esp+0x18]
        and edi, 0xFFFF
        shl edi, 4
        and edx, 0xC
        add edi, ecx
        mov ecx, dword ptr ds : [edx+public_63ee4f0]
        add ecx, eax
        mov eax, dword ptr ds : [ecx]
        shl eax, 1
        sar eax, 0x11
        lea eax, ds:[ecx+eax*4]
        mov edx, eax
        and edx, 0xC
        mov ebp, dword ptr ds : [edx+public_63ee4f0]
        mov dword ptr ss : [esp+0x1C], 0
        mov dword ptr ss : [esp+0x10], ecx
        public_636577c : nop
        mov edx, dword ptr ss : [esp+0x144]
        add ebp, eax
        mov eax, dword ptr ss : [ebp]
        and eax, 0xFFFF
        shl eax, 4
        add eax, dword ptr ds : [edx]
        fld dword ptr ds : [eax]
        fsub dword ptr ds : [edi]
        fld dword ptr ds : [eax+4]
        fsub dword ptr ds : [edi+4]
        fld dword ptr ds : [eax+8]
        fsub dword ptr ds : [edi+8]
        fld st(0)
        fmul dword ptr ss : [esp+0x28]
        fld st(2)
        fmul dword ptr ss : [esp+0x24]
        faddp 
        fld st(3)
        fmul dword ptr ss : [esp+0x20]
        faddp 
        fst dword ptr ss : [esp+0x30]
        fcomp dword ptr ds : [public_63a53d4]
        fnstsw ax
        test ah, 0x41
        jne public_6365810
        fld st(1)
        push ecx
        fmul st, st(2)
        fld st(1)
        fmul st, st(2)
        faddp 
        fld st(3)
        fmul st, st(4)
        faddp 
        fstp dword ptr ss : [esp]
        fstp st(0)
        fstp st(0)
        fstp st(0)
        call public_6347df0
        fmul dword ptr ss : [esp+0x34]
        add esp, 4
        fcom dword ptr ss : [esp+0x18]
        fnstsw ax
        test ah, 0x41
        jne public_6365808
        mov ecx, dword ptr ss : [esp+0x10]
        fstp dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x1C], ebp
        jmp public_6365816
        public_6365808 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        fstp st(0)
        jmp public_6365816
        public_6365810 : nop
        fstp st(0)
        fstp st(0)
        fstp st(0)
        public_6365816 : nop
        cmp ebp, ecx
        je public_6365836
        mov eax, dword ptr ss : [ebp]
        shl eax, 1
        sar eax, 0x11
        lea ebp, ss:[ebp+eax*4]
        mov edx, ebp
        and edx, 0xC
        mov eax, dword ptr ds : [edx+public_63ee4f0]
        jmp public_636577c
        public_6365836 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        test ecx, ecx
        je public_63658b5
        fld dword ptr ss : [esp+0x18]
        fcomp dword ptr ds : [public_63a545c]
        fnstsw ax
        test ah, 1
        je public_6365890
        mov edx, dword ptr ss : [esp+0x144]
        push edx
        push ebx
        push ecx
        push esi
        lea ecx, ss:[esp+0xE0]
        call public_635b3b0
        lea eax, ss:[esp+0x30]
        push eax
        lea ecx, ss:[esp+0xD4]
        push ecx
        call public_635b570
        add esp, 8
        test eax, eax
        je public_63658b5
        fld dword ptr ss : [esp+0x38]
        fcomp dword ptr ds : [public_63a53d4]
        fnstsw ax
        test ah, 1
        jne public_63658b5
        public_6365890 : nop
        mov edx, dword ptr ss : [esp+0x144]
        mov eax, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ss : [esp+0x14]
        push ebx
        push edx
        push esi
        push eax
        call public_6363ab0
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x128
        ret 0x10
        public_63658b5 : nop
        mov ecx, dword ptr ss : [esp+0x144]
        mov eax, dword ptr ds : [ecx+0x10]
        mov edx, dword ptr ss : [esp+0x13C]
        mov dword ptr ds : [eax+0x14], edx
        mov word ptr ds : [eax+0x1A], 0
        mov ebx, dword ptr ds : [ebx+0x10]
        pop edi
        mov dword ptr ds : [ebx+0x14], esi
        pop esi
        mov eax, 1
        pop ebp
        mov word ptr ds : [ebx+0x1A], ax
        pop ebx
        add esp, 0x128
        ret 0x10
        UNREACHABLE_TRAP(0x6365280)
    }
}

#undef public_63652c6
#undef public_63654dd
#undef public_6365505
#undef public_636550a
#undef public_636553c
#undef public_63655af
#undef public_6365696
#undef public_63656da
#undef public_636577c
#undef public_6365808
#undef public_6365810
#undef public_6365816
#undef public_6365836
#undef public_6365890
#undef public_63658b5
